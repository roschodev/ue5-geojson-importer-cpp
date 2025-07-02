// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_Manager.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "Data.h"
#include "GeoJSON_MultiPoint.h"
#include "GeoJSON_MultiLineString.h"
#include "GeoJSON_FeatureCollection.h"

// Sets default values
AGeoJSON_Manager::AGeoJSON_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set up root component
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

// Called when the game starts or when spawned
void AGeoJSON_Manager::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGeoJSON_Manager::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
   
}

// Called every frame
void AGeoJSON_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Function to load GeoJSON files from specified file paths
void AGeoJSON_Manager::LoadGeoJSONFiles()
{

    if (Filepaths.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("No file paths provided."));
        return;
    }

    TArray<TSharedPtr<FJsonObject>> GeoJSON_Files;


    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;
    SpawnParams.Instigator = GetInstigator();
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


    for (const FString& FilePath : Filepaths)
    {
        FString f = LoadGeoJSONFromPath(FilePath);
        TSharedPtr<FJsonObject> g_obj = StringToJSONObject(f);
        ETypes Type = ExtractGeoJSONType(g_obj);
        UE_LOG(LogTemp, Log, TEXT("GeoJSON Type: %s"), *UEnum::GetValueAsString(Type));

        

        switch (Type)
        {
            case Point:
            case MultiPoint:
            {
                UClass* MultiPointBPClass = LoadClass<AGeoJSON_MultiPoint>(
                    nullptr,
                    TEXT("/Game/Project/Blueprints/GeoJSON/Types/BP_GeoJSON_MultiPoint.BP_GeoJSON_MultiPoint_C")
                );

                // Create a new MultiPoint actor and set its properties
                AGeoJSON_MultiPoint* MultiPointActor = GetWorld()->SpawnActor<AGeoJSON_MultiPoint>(
                    MultiPointBPClass,
                    FVector(0, 0, 0),
                    FRotator(0, 0, 0),
                    SpawnParams
                );

                if (MultiPointActor)
                {
                    MultiPointActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
                    MultiPointActor->MultiPointGeoJSONData = g_obj;
                }
			}
            case LineString:
            case MultiLineString:
            {
                UClass* MultiLineStringBPClass = LoadClass<AGeoJSON_MultiLineString>(
                    nullptr,
                    TEXT("/Game/Project/Blueprints/GeoJSON/Types/BP_GeoJSON_MultiLineString.BP_GeoJSON_MultiLineString_C")
                );

                // Create a new MultiPoint actor and set its properties
                AGeoJSON_MultiLineString* MultiLineStringActor = GetWorld()->SpawnActor<AGeoJSON_MultiLineString>(
                    MultiLineStringBPClass,
                    FVector(0, 0, 0),
                    FRotator(0, 0, 0),
                    SpawnParams
                );

                if (MultiLineStringActor)
                {
                    MultiLineStringActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
                    MultiLineStringActor->MultiLineStringGeoJSONData = g_obj; 
                }

                break;
            }
            case Polygon:
            case MultiPolygon:
            {
                break;
            }
            case Geometry:
            case GeometryCollection:
            {
                break;
            }
            case Feature:
            case FeatureCollection:
            {
                UClass* FeatureCollectionBPClass = LoadClass<AGeoJSON_FeatureCollection>(
                    nullptr,
                    TEXT("/Game/Project/Blueprints/GeoJSON/Types/BP_GeoJSON_FeatureCollection.BP_GeoJSON_FeatureCollection_C")
                );

                if (FeatureCollectionBPClass)
                {
                    AGeoJSON_FeatureCollection* FeatureCollectionActor = GetWorld()->SpawnActor<AGeoJSON_FeatureCollection>(
                        FeatureCollectionBPClass,
                        FVector(0, 0, 0),
                        FRotator(0, 0, 0),
                        SpawnParams
                    );

                    if (FeatureCollectionActor)
                    {
                        FeatureCollectionActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
                        FeatureCollectionActor->FeatureCollectionGeoJSONData = g_obj;
						FeatureCollectionActor->ParseData(); // Parse the GeoJSON data
                    }
                    else
                    {
                        UE_LOG(LogTemp, Error, TEXT("Failed to spawn FeatureCollectionActor from Blueprint."));
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("Failed to load Blueprint class for FeatureCollection."));
                }

                break;
            }
            case Unsupported:
            {
                break;
            }
            default:
            {
                break;
            }
            }
        }
    }


// Function to load GeoJSON from a specified file path
FString AGeoJSON_Manager::LoadGeoJSONFromPath(FString Path)
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
};


// Function to convert a JSON string to a TSharedPtr<FJsonObject>
TSharedPtr<FJsonObject> AGeoJSON_Manager::StringToJSONObject(const FString& JSONString)
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


// Function to extract the GeoJSON type from a JSON object
ETypes AGeoJSON_Manager::ExtractGeoJSONType(TSharedPtr<FJsonObject> JsonObject)
{
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

void AGeoJSON_Manager::LogLine() {
    UClass* FeatureCollectionClass = LoadClass<AActor>(nullptr, TEXT("/Game/Project/Blueprints/GeoJSON/Types/BP_Layer_FeatureCollection.BP_Layer_FeatureCollection_C"));
    UE_LOG(LogTemp, Log, TEXT("FeatureCollectionClass: %s"), *FeatureCollectionClass->GetName());
}