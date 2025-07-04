// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_Functions.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "GeoJSON_FeatureCollection.h"
#include "GeoJSON_MultiPoint.h"
#include "GeoJSON_MultiLineString.h"
#include "GeoJSON_GridCell.h"
#include "GeoJSON_GridManager.h"
#include "Data.h"


FCRS UGeoJSON_Functions::GetCRS(TSharedPtr<FJsonObject> JsonObject)
{
    TSharedPtr<FJsonObject> CRSObject = JsonObject->GetObjectField("crs");
    FCRS crs;

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

ETypes UGeoJSON_Functions::GetType(TSharedPtr<FJsonObject> JsonObject)
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

TMap<FString, FString> UGeoJSON_Functions::GetProperties(TSharedPtr<FJsonObject> JsonObject) 
{
    TMap<FString, FString> Properties;

    if (JsonObject->HasField(TEXT("properties")))
    {
        TSharedPtr<FJsonObject> PropertiesObject = JsonObject->GetObjectField(TEXT("properties"));

        for (const auto& Pair : PropertiesObject->Values)
        {
            const TSharedPtr<FJsonValue>& Value = Pair.Value;
            FString ValueAsString;

            switch (Value->Type)
            {
            case EJson::String:
                ValueAsString = Value->AsString();
                break;
            case EJson::Number:
                ValueAsString = FString::SanitizeFloat(Value->AsNumber());
                break;
            case EJson::Boolean:
                ValueAsString = Value->AsBool() ? TEXT("true") : TEXT("false");
                break;
            case EJson::Null:
                ValueAsString = TEXT("null");
                break;
            default:
                UE_LOG(LogTemp, Warning, TEXT("Property '%s' is a complex type and will be skipped."), *Pair.Key);
                continue;
            }

            Properties.Add(Pair.Key, ValueAsString);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No 'properties' field found in GeoJSON."));
    }

    return Properties;
}

TSharedPtr<FJsonObject> UGeoJSON_Functions::FStringToJSONObject(const FString& JSONString)
{
    TSharedPtr<FJsonObject> OutJsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONString);

    if (FJsonSerializer::Deserialize(Reader, OutJsonObject) && OutJsonObject.IsValid())
    {
        UE_LOG(LogTemp, Log, TEXT("JSON deserialization successful."));
        return OutJsonObject;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON string."));
        return nullptr;
    }
}

FString UGeoJSON_Functions::LoadGeoJSON(FString Path)
{
    FString GeoJSONString;

    // Check if the file exists
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
    {
        UE_LOG(LogTemp, Error, TEXT("File does not exist: %s"), *Path);
        return TEXT("File does not exist"); // Return empty string if file does not exist
    }

    // Read the file contents into a string
    if (!FFileHelper::LoadFileToString(GeoJSONString, *Path))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *Path);
        return TEXT("Failed to load file"); // Return empty string if file loading fails
    }
    // Check if the string is empty
    if (GeoJSONString.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("File is empty: %s"), *Path);
        return TEXT("File is empty"); // Return empty string if file is empty
    }

    UE_LOG(LogTemp, Log, TEXT("Successfully loaded GeoJSON from: %s"), *Path);
    return GeoJSONString; // Return the JSON content as a string
}

bool UGeoJSON_Functions::IsValidGeoJSON(UObject* self, TSharedPtr<FJsonObject> data)
{
    FString ObjectName = self ? self->GetName() : TEXT("Unknown");

    if (!data.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("%s: Data is null or invalid."), *ObjectName);
        return false;
    };

	return true;
    
}

bool UGeoJSON_Functions::isGeoJSONGridBased(const FFeatureCollectionData& Data)
{
    UE_LOG(LogTemp, Warning, TEXT(">>> isGeoJSONGridBased called"));
    FRegexPattern GridCodePattern(TEXT("E\\d{4}N\\d{4}"));

    for (const FFeature& Feature : Data.Features)
    {
        bool bFoundGridCode = false;

        for (const TPair<FString, FString>& Property : Feature.Properties)
        {
            const FString& Value = Property.Value;

            FRegexMatcher Matcher(GridCodePattern, Value);
            if (Matcher.FindNext())
            {
                UE_LOG(LogTemp, Log, TEXT("Grid code match in property '%s': %s"), *Property.Key, *Value);
                bFoundGridCode = true;
                break;
            }
        }

        if (!bFoundGridCode)
        {
            UE_LOG(LogTemp, Warning, TEXT("Feature '%s' does not contain a valid grid code"), *Feature.Name);
            return false;
        }
    }

    return true; // All features had a grid code
}


void UGeoJSON_Functions::SpawnGrid(UObject* WorldContextObject, FFeatureCollectionData data, bool& isGrid, TArray<AActor*>& GridCells)
{
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
    UClass* GridCellClass = LoadClass<AGeoJSON_GridCell>(
        nullptr,
        TEXT("/Game/Project/Blueprints/GeoJSON/Grid/BP_GeoJSON_GridCell.BP_GeoJSON_GridCell_C")
    );

    UClass* GridManagerClass = LoadClass<AGeoJSON_GridManager>(
        nullptr,
        TEXT("/Game/Project/Blueprints/GeoJSON/Grid/BP_GeoJSON_GridManager.BP_GeoJSON_GridManager_C")
    );

    const FRegexPattern GridCodePattern(TEXT("^E(\\d{4})N(\\d{4})$"));
    isGrid = false; // default to false

    if (isGeoJSONGridBased(data))
    {

        AActor* OwnerActor = Cast<AActor>(WorldContextObject);

        AActor* GridManager = World->SpawnActor<AActor>(GridManagerClass, FVector3d(0,0,0), FRotator(0,0,0));
        if(GridManager)
        {
            if (OwnerActor) {
                GridManager->AttachToActor(OwnerActor, FAttachmentTransformRules::KeepRelativeTransform);
            }
            UE_LOG(LogTemp, Log, TEXT("Spawned Gridmanager."));
        } else 
        {
            UE_LOG(LogTemp, Log, TEXT("Failed to Spawn Gridmanager."));
        }

        
     
        

        // Match format like E2539N5310
        UE_LOG(LogTemp, Log, TEXT("GeoJSON file is grid-based. Proceeding to spawn grid cells."));

        int32 MinEasting = MAX_int32;
        int32 MaxEasting = MIN_int32;
        int32 MinNorthing = MAX_int32;
        int32 MaxNorthing = MIN_int32;

        // First pass: find bounds
        for (const FFeature& Feature : data.Features)
        {
            for (const TPair<FString, FString>& Entry : Feature.Properties)
            {
                FRegexMatcher Matcher(GridCodePattern, Entry.Value);
                if (Matcher.FindNext())
                {
                    int32 Easting = FCString::Atoi(*Matcher.GetCaptureGroup(1));
                    int32 Northing = FCString::Atoi(*Matcher.GetCaptureGroup(2));

                    MinEasting = FMath::Min(MinEasting, Easting);
                    MaxEasting = FMath::Max(MaxEasting, Easting);
                    MinNorthing = FMath::Min(MinNorthing, Northing);
                    MaxNorthing = FMath::Max(MaxNorthing, Northing);
                }
            }
        }

        FVector2D GridCenter(
            (MinEasting + MaxEasting) / 2.0f,
            (MinNorthing + MaxNorthing) / 2.0f
        );

        for (auto& Feature : data.Features)
        {
            bool bFoundGridCode = false;
            FVector2D GridCoord;
            FString ValueString;

            for (const TPair<FString, FString>& Entry : Feature.Properties)
            {
                ValueString = Entry.Value;

                FRegexMatcher Matcher(GridCodePattern, ValueString);
                if (Matcher.FindNext())
                {
                    int32 Easting = FCString::Atoi(*Matcher.GetCaptureGroup(1));
                    int32 Northing = FCString::Atoi(*Matcher.GetCaptureGroup(2));

                    GridCoord = FVector2D(Easting, Northing);
                    bFoundGridCode = true;
                    isGrid = true;

                    /*   UE_LOG(LogTemp, Log, TEXT("Found grid code: %s (E: %d, N: %d) in property key: %s"),
                           *ValueString, Easting, Northing, *Entry.Key);*/
                    break;
                }
            }
          
            if (bFoundGridCode)
            {
                FVector SpawnLocation = FVector((GridCoord.X - GridCenter.X) * 100, (GridCoord.Y - GridCenter.Y) * 100, 0.0f); // Assuming Z = 0
                FRotator SpawnRotation = FRotator::ZeroRotator;

                AActor* SpawnedCell = World->SpawnActor<AActor>(GridCellClass, SpawnLocation, SpawnRotation);
				UE_LOG(LogTemp, Log, TEXT("Spawned grid cell at location: %s"), *SpawnLocation.ToString());
                if (SpawnedCell)
                {
                    FString NewLabel = TEXT("GridCell_") + Feature.Name + TEXT("_") + ValueString;
                    SpawnedCell->SetActorLabel(NewLabel);
                    GridCells.Add(SpawnedCell);

                    if (OwnerActor)
                    {
                        SpawnedCell->AttachToActor(GridManager, FAttachmentTransformRules::KeepRelativeTransform);
                    }
                    else
                    {
                        UE_LOG(LogTemp, Warning, TEXT("WorldContextObject is not an actor. Spawned cell will not be attached."));
                    }

                    //UE_LOG(LogTemp, Log, TEXT("Spawned grid cell actor: %s at location: %s"), *NewLabel, *SpawnLocation.ToString());
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Failed to spawn grid cell actor."));
                }
            }
            else 
            {
				UE_LOG(LogTemp, Warning, TEXT("No valid grid code found in feature '%s'."), *Feature.Name);
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("GeoJSON file is not grid-based. No grid cells will be spawned."));
        isGrid = false;
    }
}







