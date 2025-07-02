// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_FeatureCollection.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "Data.h"

// Sets default values
AGeoJSON_FeatureCollection::AGeoJSON_FeatureCollection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

}
FCRS AGeoJSON_FeatureCollection::ExtractCRS(TSharedPtr<FJsonObject> JsonObject)
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
ETypes AGeoJSON_FeatureCollection::ExtractGeoJSONType(TSharedPtr<FJsonObject> JsonObject)
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
FFeatureCollectionData AGeoJSON_FeatureCollection::ParseJSONToStructure(TSharedPtr<FJsonObject> GeoJSONData)
{
    
    FFeatureCollectionData d;

    if (!GeoJSONData.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("GeoJSONData is null or invalid."));
        return d;
    }


    d.Type = ExtractGeoJSONType(GeoJSONData);
    //Get Name of GeoJSON File (Optional)
    GeoJSONData->TryGetStringField(TEXT("name"), d.Name);
    //Get Description of GeoJSON File (Optional)
    GeoJSONData->TryGetStringField(TEXT("description"), d.Description);
    //Get CRS of GeoJSON File (Optional)
    d.CRS = ExtractCRS(GeoJSONData);
	//Get Type of GeoJSON File
	


	//Get Features Array from GeoJSON
    const TArray<TSharedPtr<FJsonValue>>* FeaturesArrayPtr;
    if (GeoJSONData->TryGetArrayField(TEXT("features"), FeaturesArrayPtr) && FeaturesArrayPtr)
    {
        for (const TSharedPtr<FJsonValue>& FeatureValue : *FeaturesArrayPtr)
        {

            FFeature Feature;
			Feature.Type = ExtractGeoJSONType(FeatureValue->AsObject());

            if (Feature.Type == ETypes::Point && !bAllowPointType) {
                continue;
            }
            else if (Feature.Type == ETypes::LineString && !bAllowLineStringType)
            {
                continue;
            }
            else if (Feature.Type == ETypes::Polygon && !bAllowPolygonType)
            {
                continue;
			}
            else if ((Feature.Type == ETypes::FeatureCollection || Feature.Type == ETypes::GeometryCollection) && !bAllowCollectionTypes)
            {
                continue;
            }

            if (!FeatureValue.IsValid()) continue;

            TSharedPtr<FJsonObject> FeatureObject = FeatureValue->AsObject();
            if (!FeatureObject.IsValid()) continue;

            if (FeatureObject->HasField("geometry")) 
            {
                FString geo;
				TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&geo);
                FJsonSerializer::Serialize(FeatureObject->GetObjectField("geometry").ToSharedRef(), Writer);

                Feature.Geometry.Add(geo);
            }
            else
            {
				UE_LOG(LogTemp, Warning, TEXT("No 'geometry' field found in Feature."));
            }

            
            d.Features.Add(Feature);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("No 'features' array found in GeoJSON."));
    }

    return d;
}



// Called when the game starts or when spawned
void AGeoJSON_FeatureCollection::BeginPlay()
{
	Super::BeginPlay();
    

}

// Called every frame
void AGeoJSON_FeatureCollection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGeoJSON_FeatureCollection::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);
    ParseData();
}


#if WITH_EDITOR
void AGeoJSON_FeatureCollection::ParseData()
{
    if (!FeatureCollectionGeoJSONData.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("FeatureCollectionGeoJSONData is null or invalid."));
        return;
    }

    Data = ParseJSONToStructure(FeatureCollectionGeoJSONData);
    

	FString TypeString = StaticEnum<ETypes>()->GetValueAsString(Data.Type);
    UE_LOG(LogTemp, Log, TEXT("FeatureCollection Type: %s"), *TypeString);
	UE_LOG(LogTemp, Log, TEXT("FeatureCollection Description: %s"), *Data.Description);
    UE_LOG(LogTemp, Log, TEXT("FeatureCollection Name: %s"), *Data.Name);
	UE_LOG(LogTemp, Log, TEXT("FeatureCollection CRS Type: %s"), *Data.CRS.Type.ToString());
    for (const FFeature& Feature : Data.Features)
    {
        FString FeatureTypeString = StaticEnum<ETypes>()->GetValueAsString(Feature.Type);
        UE_LOG(LogTemp, Log, TEXT("Feature Type: %s"), *FeatureTypeString);
        for (const FString& Geometry : Feature.Geometry)
        {
            UE_LOG(LogTemp, Log, TEXT("Geometry: %s"), *Geometry);
        }
    }
    
   

   
}
#endif

void AGeoJSON_FeatureCollection::SpawnGrid() 
{

}




