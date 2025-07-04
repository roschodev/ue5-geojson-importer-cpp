// Fill out your copyright notice in the Description page of Project Settings.
#include "BPL_GeoJSON.h"
#include "ProceduralMeshComponent.h"
#include "Engine/World.h"

#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"
#include "StaticMeshResources.h"

#include "Json.h"
#include "JsonUtilities.h"
#include "Templates/SharedPointer.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonReader.h"
#include "Dom/JsonObject.h"  

#include "GeoJSONType_MultiPoint.h"
#include "GeoJSONType_MultiPolygon.h"

#include "GeoJsonData.h"
#include "GeoJSONType_Base.h"
#include "Materials/MaterialInterface.h" 


//===================== FUNCTIONS =====================================================================================================================================================================================================================================

TSubclassOf<AActor> UBPL_GeoJSON::DetermineGeoJSONActorClass(ETypes Geotype)
{
    switch (Geotype)
    {
    case ETypes::Point:
    case ETypes::MultiPoint:
        return AGeoJSONType_MultiPoint::StaticClass();
        break;
    case ETypes::LineString:
    case ETypes::MultiLineString:
        return AGeoJSONType_Base::StaticClass();
        break;
    case ETypes::Polygon:
    case ETypes::MultiPolygon:
        return AGeoJSONType_MultiPolygon::StaticClass();
        break;
    case ETypes::GeometryCollection:
        return AGeoJSONType_Base::StaticClass();
        break;
    case ETypes::FeatureCollection:
    case ETypes::Feature:
        return AGeoJSONType_Base::StaticClass();
        break;
    case ETypes::Unsupported:
    default:
        return AActor::StaticClass();  // Default actor type
        break;
    }
}



//bool UBPL_GeoJSON::ParseMultiPointJson(const TSharedPtr<FJsonObject> JsonObject, FMultiPoint& OutMultiPoint)
//{ 
//    // Get the coordinates array
//    const TArray<TSharedPtr<FJsonValue>>* CoordinatesArray = nullptr;
//    if (JsonObject->TryGetArrayField(TEXT("coordinates"), CoordinatesArray))
//    {
//        // Loop through the coordinates and add them to the Points array
//        for (const TSharedPtr<FJsonValue>& CoordValue : *CoordinatesArray)
//        {
//            const TArray<TSharedPtr<FJsonValue>>* PointArray = nullptr;
//            if (CoordValue->TryGetArray(PointArray) && PointArray->Num() == 2)
//            {
//                // Extract the X and Y values
//                float X = (*PointArray)[0]->AsNumber();
//                float Y = (*PointArray)[1]->AsNumber();
//
//                // Add the point to the Points array
//                OutMultiPoint.Points.Add(FVector2D(X, Y));
//            }
//        }
//        return true; // Successfully parsed the points
//    }
//    return false; // Parsing failed
//}
FString UBPL_GeoJSON::LoadGeoJSONFromPath(FString Path, bool debug)
{
    FString GeoJSONString;

    // Check if the file exists
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
    {
        if (debug) { UE_LOG(LogTemp, Error, TEXT("File does not exist: %s"), *Path) };
        return TEXT("File does not exist"); // Return empty string if file does not exist
    }

    // Read the file contents into a string
    if (!FFileHelper::LoadFileToString(GeoJSONString, *Path))
    {
        if (debug) { UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *Path) };
        return TEXT("Failed to load file"); // Return empty string if file loading fails
    }

    if (debug) { UE_LOG(LogTemp, Log, TEXT("Successfully loaded GeoJSON from: %s"), *Path) };
    return GeoJSONString; // Return the JSON content as a string
};
TSharedPtr<FJsonObject> UBPL_GeoJSON::GeoJSONStringToJSONObject(const FString& GeoJSONString, bool debug)
{
    // If the input string is empty, return nullptr
    if (GeoJSONString.IsEmpty())
    {
        if (debug) { UE_LOG(LogTemp, Log, TEXT("GeoJSONString is empty!")); }
        return nullptr;
    }

    // Create a shared pointer to the JSON object
    TSharedPtr<FJsonObject> ParsedJson = MakeShareable(new FJsonObject());

    // Create a JSON reader from the GeoJSONString
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(GeoJSONString);

    // Deserialize the string into the JSON object
    if (FJsonSerializer::Deserialize(Reader, ParsedJson))
    {
        // Successfully parsed the JSON string into a TSharedPtr<FJsonObject>
        if (debug)
        {
            if (debug) { UE_LOG(LogTemp, Log, TEXT("Successfully parsed JSON string")) };
            if (debug) { UE_LOG(LogTemp, Log, TEXT("Parsed JSON: %s"), *GeoJSONString) };
        }
        return ParsedJson;
    }
    else
    {
        // If parsing fails, log the error and return nullptr
        if (debug) { UE_LOG(LogTemp, Error, TEXT("Failed to parse JSON string: %s"), *GeoJSONString) };
        return nullptr;
    }
}
FString UBPL_GeoJSON::JSONObjectToJSONString(TSharedPtr<FJsonObject> JsonObject, bool debug)
{
    FString JsonString;

    if (!JsonObject.IsValid())
    {
        if (debug) { UE_LOG(LogTemp, Error, TEXT("JsonObject is not valid!")) };
        JsonString = "JsonObject is not valid!";
        return JsonString;
    }

    // Serialize the TSharedPtr<FJsonObject> to an FString
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
    if (FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer))
    {
        if (debug) { UE_LOG(LogTemp, Log, TEXT("Serialized JSON: %s"), *JsonString) };
        return JsonString;
    }
    else
    {
        if (debug) { UE_LOG(LogTemp, Error, TEXT("Failed to serialize the FJsonObject")) };
        JsonString = "Failed to serialize the FJsonObject";
        return JsonString;
    }

};
ETypes UBPL_GeoJSON::ExtractGeoJSONType(TSharedPtr<FJsonObject> JsonObject)
{
    // Get the "type" field
    FString TypeString;
    if (JsonObject->TryGetStringField(TEXT("type"), TypeString))
    {
        if (TypeString == TEXT("Point")) return ETypes::Point;
        else if (TypeString == TEXT("LineString")) return ETypes::LineString;
        else if (TypeString == TEXT("Polygon")) return ETypes::Polygon;
        else if (TypeString == TEXT("MultiPoint")) return ETypes::MultiPoint;
        else if (TypeString == TEXT("MultiLineString")) return ETypes::MultiLineString;
        else if (TypeString == TEXT("MultiPolygon")) return ETypes::MultiPolygon;
        else if (TypeString == TEXT("Feature")) return ETypes::Feature;
        else if (TypeString == TEXT("FeatureCollection")) return ETypes::FeatureCollection;
        else return ETypes::Unsupported;

        UE_LOG(LogTemp, Log, TEXT("Determined GeoJSON type: %s"), *TypeString);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GeoJSON does not contain a 'type' field."));
        return ETypes::Unsupported;
    }
}
FName UBPL_GeoJSON::ExtractGeoJSONName(FName& Name) 
{
    FName temp = "Test";
    return temp;
};


UFUNCTION(BlueprintCallable, Category = "GeoJSON")
UObject* GetGeoJSONStruct(ETypes type)
{
    switch (type)
    {
    case ETypes::Point:
    case ETypes::MultiPoint:
    {
        // Create and initialize UGeoJSONMultiPoint
        UGeoJSONMultiPoint* MultiPointStruct = NewObject<UGeoJSONMultiPoint>();
        MultiPointStruct->Points.Add(FVector2D(2.0f, 4.0f));
        MultiPointStruct->Type = ETypes::MultiPoint;

        // Return the UObject wrapper
        return MultiPointStruct;
    }

    case ETypes::LineString:
        break;

    case ETypes::MultiLineString:
        break;

    case ETypes::Polygon:
    case ETypes::MultiPolygon:
    {
        // Create and initialize UGeoJSONMultiPolygon
        UGeoJSONMultiPolygon* MultiPolygonStruct = NewObject<UGeoJSONMultiPolygon>();

        FPolygonGroup TestGroup;
        FPolygon TestPolygon;
        TestPolygon.Points.Add(FVector2D(50.0f, 235.0f));
        TestGroup.Polygons.Add(TestPolygon);
        MultiPolygonStruct->PolygonGroups.Add(TestGroup);

        // Return the UObject wrapper
        return MultiPolygonStruct;
    }

    case ETypes::GeometryCollection:
        break;

    case ETypes::FeatureCollection:
        break;

    case ETypes::Feature:
        break;

    case ETypes::Unsupported:
        return nullptr;

    default:
        return nullptr;
    }

    // Return nullptr if no case is hit
    return nullptr;
}

bool UBPL_GeoJSON::ParseGeoJSONFile(UObject* WorldContextObject, const FString Path, bool EnableLogDebug = false)
 {

     // Loading GeoJSON File from path to a string
     FString GeoJSONContent = LoadGeoJSONFromPath(Path);
     if (GeoJSONContent.IsEmpty())
     {
         if (EnableLogDebug) { UE_LOG(LogTemp, Error, TEXT("GeoJSON file is empty or failed to load.")) };
         GeoJSONContent = "GeoJSON file is empty or failed to load.";
         return false;
     }

     // Convert the string to an JSONObject
     TSharedPtr<FJsonObject> JsonObject = GeoJSONStringToJSONObject(GeoJSONContent, EnableLogDebug);
     if (!JsonObject.IsValid())
     {
         if (EnableLogDebug) { UE_LOG(LogTemp, Error, TEXT("JsonObject at generation is not valid!")) };
         return false;
     }

     //Extract the GeoJSON Type from the JSONObject
     ETypes GeoJSONType = ExtractGeoJSONType(JsonObject);



     //Determine the corresponding actor based on the GeoJSONtype.
     TSubclassOf<AActor> GeoJSONActorClass = DetermineGeoJSONActorClass(GeoJSONType);
     if (!*GeoJSONActorClass)
     {
         if (EnableLogDebug) { UE_LOG(LogTemp, Error, TEXT("Invalid Actor Class for GeoJSON type.")) };
         return false;
     }

     //Spawning the corresponding class
     FVector Location = FVector(0, 0, 0);
     FRotator Rotation = FRotator::ZeroRotator;

     UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
     if (!World)
     {
         if (EnableLogDebug) { UE_LOG(LogTemp, Error, TEXT("World is null!")) };
         return false;
     }

     FActorSpawnParameters SpawnParams;
     SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
     AActor* GeoJSONActor = World->SpawnActor<AActor>(GeoJSONActorClass, Location, Rotation, SpawnParams);
    
     return true;
     

 }

//FJsonObject UBPL_GeoJSON::LoadGeoJSONFileToJSONObject(const TArray<FString>& GeoJSONFilePaths, bool& Loaded)
//{
//    <TSharedPtr<FJsonObject> GeoJSONObjects;
//
//    //Check if the array of paths is not empty
//    if (GeoJSONFilePaths.Num() != 0)
//    {
//        for (FString Path : GeoJSONFilePaths)
//        {
//            FString GeoJSONContent;
//            TSharedPtr<FJsonObject> JsonObject;
//
//            //Find and load file
//            if (!FFileHelper::LoadFileToString(GeoJSONContent, *Path))
//            {
//                UE_LOG(LogTemp, Error, TEXT("Loading file to string failed!"));
//                Loaded = false;
//                break;
//            }
//
//            //Check if the file is not empty
//            if (GeoJSONContent.IsEmpty())
//            {
//                UE_LOG(LogTemp, Error, TEXT("GeoJSON content is empty. Cannot import."));
//                Loaded = false;
//                break;
//            }
//
//            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(GeoJSONContent);
//
//            //Deserialize the String into an JsonObject
//            if (!FJsonSerializer::Deserialize(Reader, JsonObject))
//            {
//                UE_LOG(LogTemp, Error, TEXT("Failed to parse GeoJSON content."));
//                Loaded = false;
//                break;
//            }
//
//            GeoJSONObjects.Add(JsonObject);
//        }
//    }
//    else
//    {
//        UE_LOG(LogTemp, Error, TEXT("No Paths specified in the input pin! Please specify one or more valid paths to a GeoJSON file!"));
//        Loaded = false;
//    }
//
//    Loaded = true;
//    return GeoJSONObjects;
//};






//template <typename T>
//T* UBPL_GeoJSON::ImportGeoJSONFile(
//    const TArray<FString>& GeoJSONFilePaths, 
//    ETypes gtype, 
//    UObject* ObjOuter)
//{
//    // Function to determine class based on enum
//    auto GetClassFromEnum = [](ETypes Type) -> TSubclassOf<UObject>
//        {
//            switch (Type)
//            {
//            case ETypes::Point:
//                return AGeoJSONType_Point::StaticClass();  // Blueprint class for Point
//            case ETypes::MultiPoint:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for MultiPoint
//            case ETypes::LineString:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for LineString
//            case ETypes::MultiLineString:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for MultiLineString
//            case ETypes::Polygon:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for Polygon
//            case ETypes::MultiPolygon:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for MultiPolygon
//            case ETypes::GeometryCollection:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for GeometryCollection
//            case ETypes::FeatureCollection:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for FeatureCollection
//            case ETypes::Feature:
//                return AGeoJSONType_Base::StaticClass();  // Blueprint class for Feature
//            case ETypes::Unsupported:
//            default:
//                return UObject::StaticClass();  // Default class for unsupported types
//            }
//        };
//
//    // Set the outer object if not provided
//    if (!ObjOuter)
//    {
//        ObjOuter = GetTransientPackage();
//    }
//
//  
//    TSubclassOf<T> SelectedClass = GetClassFromEnum(gtype);
//    if (!SelectedClass) return nullptr;
//
//    // Create the object using the selected class type
//    return NewObject<T>(ObjOuter, SelectedClass);
//}




////UTILITIES ================================================================================
//TSharedPtr<FJsonObject> UBPL_GeoJSON::GenerateJSONObjectFromString(FString string)
//{
//
//};
//
//
////BLUEPRINT NODES ================================================================================
//FType_MultiPoint UBPL_GeoJSON::ParseMultiPoint(ETypes Type, FJsonObject GeoJSONObject)
//{
//
//};
//
//
//FType_MultiLineString UBPL_GeoJSON::ParseMultiLineString(ETypes Type, FJsonObject GeoJSONObject)
//{
//
//};
//
//
//FType_MultiPolygon UBPL_GeoJSON::ParseMultiPolygon(ETypes Type, FJsonObject GeoJSONObject)
//{
//
//};
//
//FType_GeometryCollection UBPL_GeoJSON::ParseGeometryCollection(ETypes Type, FJsonObject GeoJSONObject)
//{
//
//};
//
//FType_FeatureCollection& UBPL_GeoJSON::ParseFeatureCollection(ETypes Type, FJsonObject GeoJSONObject)
//{
//
//};
//
//ETypes UBPL_GeoJSON::GetType(FJsonObject GeoJSONObject)
//{
//
//};
/*
//Utilities ----------- Extracting 
ETypes UBPL_GeoJSON::ExtractType(TSharedPtr<FJsonObject> JsonObject)
{
    FName Type = *JsonObject->GetStringField("type");
    UE_LOG(LogTemp, Log, TEXT("%s"), Type);


    if (Type == TEXT("Feature")) {
        return ETypes::Feature;
    }
    else if (Type == TEXT("GeometryCollection")) {
        return ETypes::GeometryCollection;
    }
    else if (Type == TEXT("FeatureCollection")) {
        return ETypes::FeatureCollection;
    }
    else if (Type == TEXT("Point")) {
        return ETypes::Point;
    }
    else if (Type == TEXT("MultiPoint")) {
        return ETypes::MultiPoint;
    }
    else if (Type == TEXT("LineString")) {
        return ETypes::LineString;
    }
    else if (Type == TEXT("MultiLineString")) {
        return ETypes::MultiLineString;
    }
    else if (Type == TEXT("Polygon")) {
        return ETypes::Polygon;
    }
    else if (Type == TEXT("MultiPolygon")) {
        return ETypes::MultiPolygon;
    }
    else {
        UE_LOG(LogTemp, Error, TEXT("Debug"));
        return ETypes::Unsupported;
    }
}
FGeoJSON_CRS UBPL_GeoJSON::ExtractCRS(TSharedPtr<FJsonObject> JsonObject)
{
    TSharedPtr<FJsonObject> CRSObject = JsonObject->GetObjectField("crs");
    FGeoJSON_CRS crs;

    if (CRSObject->HasField("type"))
    {
        FName crs_type = FName(CRSObject->GetStringField("type"));

        if (crs_type == "name")
        {
            crs.Type = crs_type;
        }
        else if (crs_type == "link")
        {
            UE_LOG(LogTemp, Error, TEXT("This CRS type (link) is currently not supported!"));
            crs.Type = "Unsupported";
            return crs;
       }
        else
        {
           UE_LOG(LogTemp, Error, TEXT("Unknown CRS type Found!"));
            crs.Type = "Unsupported";
            return crs;
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Type field in CRS field not found!"));
        crs.Type = "None";
        return crs;

    }

    if (CRSObject->HasField("properties"))
   {
       TSharedPtr<FJsonObject> CRSProperties = CRSObject->GetObjectField("properties");

       if (CRSProperties->HasField("name"))
       {
           FName name = FName(CRSProperties->GetStringField("name"));
           crs.Properties.Name = name;
       }
       else
      {
           UE_LOG(LogTemp, Warning, TEXT("Name field in CRS Properties field not found!"));
           crs.Properties.Name = "None";
           return crs;
       }
   }
   else
   {
       UE_LOG(LogTemp, Warning, TEXT("Properties field in CRS field not found!"));
       crs.Properties.Name = "None";
       return crs;
   }

    return crs;
}
FGeoJSON_Geometry UBPL_GeoJSON::ExtractGeometry(TSharedPtr<FJsonObject> JsonObject)
{
    FGeoJSON_Geometry geometry;

    if (JsonObject->HasField("geometry"))
    {
        TSharedPtr<FJsonObject> GeometryObject = JsonObject->GetObjectField("geometry");

        //Set Type
        if (GeometryObject->HasField("type"))
        {
            geometry.Type = ExtractType(GeometryObject);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("No 'type' field found in this features 'geometry' Field!"));
            geometry.Type = ETypes::Unsupported;
            return geometry;
        }

        switch (geometry.Type)
        {
        case Point:
        { 
            
            
            
            break; }
        case MultiPoint: 
        {
            
            FGroup tempGroup;

            if (GeometryObject->HasField("coordinates")) 
            {   
                FSection tempSection;

                const TArray<TSharedPtr<FJsonValue>>* Sections;
                if (GeometryObject->TryGetArrayField("coordinates", Sections)) 
                {
                    for (const TSharedPtr<FJsonValue>& Vertex : *Sections) 
                    {
                        const TArray<TSharedPtr<FJsonValue>>* PointArray;
                        if (Vertex->TryGetArray(PointArray) && PointArray->Num() >= 2) 
                        {
                            float Longitude = (*PointArray)[0]->AsNumber();
                            float Latitude = (*PointArray)[1]->AsNumber();

                            tempSection.Vertices.Add(FVector2D(Longitude, Latitude));
                        }
                       
                    }
                }
                tempGroup.Sections.Add(tempSection);
            }
            geometry.Groups.Add(tempGroup);
            break;
        }
        case LineString:
        case Polygon:
        {
            break;
        }
        case MultiPolygon:
        case MultiLineString:
        {
            if (GeometryObject->HasField("coordinates"))
            {
                const TArray<TSharedPtr<FJsonValue>>* Groups;
                if (GeometryObject->TryGetArrayField("coordinates", Groups))
                {
                    for (const TSharedPtr<FJsonValue>& Group : *Groups)
                    {
                        FGroup tempGroup;
                        
                        FSection tempSection;
                        const TArray<TSharedPtr<FJsonValue>>* PointArray;
                        if (Group->TryGetArray(PointArray) && PointArray->Num() >= 2)
                        {
                            float Longitude = (*PointArray)[0]->AsNumber();
                            float Latitude = (*PointArray)[1]->AsNumber();

                            tempSection.Vertices.Add(FVector2D(Longitude, Latitude));
                        }
                        tempGroup.Sections.Add(tempSection);

                        geometry.Groups.Add(tempGroup);
                    }
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("No 'coordinates' field found in this features Geometry Field!"));
                geometry.Groups.Empty();
                return geometry;
            }
            break;
        }
        case GeometryCollection:
            break;
        case FeatureCollection:
            break;
        case Feature:
            break;
        case Unsupported:
            break;
        default:
            break;
        } 
    } 
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("This Feature has no geometry values, skipping.."));
        geometry.Groups.Empty();
        return geometry;
    }
    return geometry;

}
TMap<FString, FString> UBPL_GeoJSON::ExtractProperties(TSharedPtr<FJsonObject> FeatureObject)
{
    TMap<FString, FString> properties;


    TSharedPtr<FJsonObject> PropertiesObject = FeatureObject->GetObjectField("properties");

    for (const auto& Pair : PropertiesObject->Values)
    {
        FString PropertyName = Pair.Key;
        TSharedPtr<FJsonValue> PropertyValue = Pair.Value;

        FString PropertyValueString;

        if (PropertyValue->Type == EJson::String)
        {
            PropertyValueString = PropertyValue->AsString();
        }
        else if (PropertyValue->Type == EJson::Number)
        {
            PropertyValueString = FString::SanitizeFloat(PropertyValue->AsNumber());
        }
        else if (PropertyValue->Type == EJson::Boolean)
        {
            PropertyValueString = PropertyValue->AsBool() ? TEXT("true") : TEXT("false");
        }
        else if (PropertyValue->Type == EJson::Object)
        {
            UE_LOG(LogTemp, Warning, TEXT("Objects in the GeoJSON Feature Properties are cuurently not supported!"));
            PropertyValueString = "Unsupported type";
        }
        else if (PropertyValue->Type == EJson::Array)
        {
            UE_LOG(LogTemp, Warning, TEXT("Arrays in the GeoJSON Feature Properties are cuurently not supported!"));
            PropertyValueString = "Unsupported type";
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Unknown variable type found!"));
            PropertyValueString = "Unsupported type";
        }

        properties.Add(PropertyName, PropertyValueString);
        
    }
    return properties;
}

//Utilities ------------- Processing
TSharedPtr<FJsonObject> UBPL_GeoJSON::GenerateJSONObjectFromString(FString string)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(string);

    if (!FJsonSerializer::Deserialize(Reader, JsonObject) || !JsonObject.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Deserializing failed!"));
        return JsonObject;
    }
    return JsonObject;
}

//Utilities ----------- Validation
bool UBPL_GeoJSON::IsJSONValid(const FString& GeoJSONContent)
{
    // Ensure the GeoJSON content is not empty
    if (GeoJSONContent.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("GeoJSON content is empty. Cannot import."));
        return false;
    }
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(GeoJSONContent);

    if (!FJsonSerializer::Deserialize(Reader, JsonObject))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to parse GeoJSON content."));
        return false;
    }

    return true;

}

void UBPL_GeoJSON::ParseGeoJSONFile(const FString& GeoJSONFilePath, bool& Loaded, FGeoJSON_Data& Data)
{
    FString GeoJSONContent;

    if (!FFileHelper::LoadFileToString(GeoJSONContent, *GeoJSONFilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Loading file to string failed!"));
    }

    if (!IsJSONValid(GeoJSONContent))
    {
        UE_LOG(LogTemp, Error, TEXT("Checking for valid JSON structure failed!"));
        return;
    }

    TSharedPtr<FJsonObject> JsonObject = GenerateJSONObjectFromString(GeoJSONContent);


    //Set GeoJSON File Type
    if (JsonObject->HasField("type"))
    {
        Data.Type = ExtractType(JsonObject);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No 'type' found in the GeoJSON File. A Type is necessat for proper parsing. Exiting process.."));
        return;
    }


    //Set Name
    if (JsonObject->HasField("name"))
    {
        Data.Name = FName(JsonObject->GetStringField("name"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No 'name' found in the GeoJSON File. Skipping..."));
        Data.Name = "None";
    }

    //Set CRS
    if (JsonObject->HasField("crs"))
    {
        Data.CRS = ExtractCRS(JsonObject);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No 'crs' found in the GeoJSON File. Skipping..."));
        Data.CRS.Properties.Name = "None";
        Data.CRS.Type = "None";
    }
    //Set Elements
    switch (Data.Type)
    {
    case GeometryCollection:
    {
        TArray<TSharedPtr<FJsonValue>> ElementsArray;
        FGeoJSON_ContentItem Item;

        if (JsonObject->HasField("geometry")) 
        {
            ElementsArray = JsonObject->GetArrayField("geometry");

            if (!ElementsArray.IsEmpty()) 
            {
                for (TSharedPtr<FJsonValue> ElementValue : ElementsArray)
                {
                    TSharedPtr<FJsonObject> GeometryObject = ElementValue->AsObject();
                    FGeoJSON_Geometry geometry = ExtractGeometry(GeometryObject);
                    Item.Geometries.Add(geometry);
                }
            }
        }
        Data.Contents.Add(Item);
        Loaded = true;
        break;
    }   
    case Feature: 
    {
        FGeoJSON_ContentItem Item;
        //Setting Feature Type
        Item.Type = ETypes::Feature;

        //Setting Properties
        Item.Properties = ExtractProperties(JsonObject);

        //Setting Geometries
        FGeoJSON_Geometry geom = ExtractGeometry(JsonObject);

        Item.Geometries.Add(geom);

        Data.Contents.Add(Item);
        Loaded = true;
        break;
    }   
    case FeatureCollection:
    {
        if (JsonObject->HasField("features"))
        {
            TArray<TSharedPtr<FJsonValue>> ElementsArray;
            ElementsArray = JsonObject->GetArrayField("features");
            if (!ElementsArray.IsEmpty())
            {
                for (TSharedPtr<FJsonValue> ElementValue : ElementsArray)
                {
                    FGeoJSON_ContentItem Item;
                    TSharedPtr<FJsonObject> ElementObject = ElementValue->AsObject();

                    //Setting Feature Type
                    Item.Type = ExtractType(ElementObject);

                    //Setting Properties
                    Item.Properties = ExtractProperties(JsonObject);

                    //Setting Geometries
                    FGeoJSON_Geometry geom = ExtractGeometry(JsonObject);
                    Item.Geometries.Add(geom);

                    Data.Contents.Add(Item);
                }
            }
        }
        else if (JsonObject->HasField("geometries")) 
        {

        } else if (JsonObject->HasField(""))
        Loaded = true;
        break;
    }
    case Point:      
    case Polygon:
    case LineString:
    case MultiLineString:
    case MultiPolygon:
    case MultiPoint:
    {
        FGeoJSON_ContentItem Item;
        FGeoJSON_Geometry geom = ExtractGeometry(JsonObject);
        Item.Geometries.Add(geom);
        Data.Contents.Add(Item);

        Loaded = true;
        break;
    }
    case Unsupported:
        Loaded = false;
        break;
    default:
        Loaded = false;
        break;
    }
    return;
}
*/