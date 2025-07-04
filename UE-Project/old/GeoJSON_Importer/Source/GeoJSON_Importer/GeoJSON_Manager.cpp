// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_Manager.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "Data.h"
#include "GeoJSON_Functions.h"
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


    bool bIsGrid = false;
    TArray<AActor*> SpawnedGridCells;

    UGeoJSON_Functions::SpawnGrid(this, FData, bIsGrid, SpawnedGridCells);
	
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

	UE_LOG(LogTemp, Log, TEXT("Loading GeoJSON files(%s)..."), *FString::FromInt(Filepaths.Num()) );
    for (const FString& FilePath : Filepaths)
    {
        FString f = UGeoJSON_Functions::LoadGeoJSON(FilePath);
        TSharedPtr<FJsonObject> g_obj = UGeoJSON_Functions::FStringToJSONObject(f);
        ETypes Type = UGeoJSON_Functions::GetType(g_obj);
        //UE_LOG(LogTemp, Log, TEXT("GeoJSON Type: %s"), *UEnum::GetValueAsString(Type));

        switch (Type)
        {
            case Point: //this still wouldnt work, need to implement Feature
            {
                break;
            }
            case MultiPoint:
            {
                // Create a new MultiPoint actor and set its properties
                AGeoJSON_MultiPoint* MultiPointActor = GetWorld()->SpawnActor<AGeoJSON_MultiPoint>(
                    AGeoJSON_MultiPoint::StaticClass(),
                    FVector(0, 0, 0),
                    FRotator(0, 0, 0),
                    SpawnParams
                );

                if (MultiPointActor)
                {
                    MultiPointActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
<<<<<<< HEAD
					MultiPointActor->MultiPointGeoJSONData = g_obj; // Set the GeoJSON data
                }
                break;
=======
                    MultiPointActor->Data = g_obj;
                    MultiPointActor->ParseData();
					g_obj->TryGetStringField(TEXT("name"), MultiPointActor->FData.Name);
                    
            
                    if (g_obj->TryGetStringField(TEXT("name"), MultiPointActor->FData.Name))
                    {
                        FString NewLabel = TEXT("MultiPoint_") + MultiPointActor->FData.Name;
                        MultiPointActor->SetActorLabel(NewLabel);
                    }
                    else
                    {
                        FString NewLabel = TEXT("MultiPoint");
                        MultiPointActor->SetActorLabel(NewLabel);

                    }
                }
				break;
>>>>>>> Rob
			}
            case LineString: //this still wouldnt work, need to implement Feature
            {
                break;
            }
            case MultiLineString:
            {
                // Create a new MultiPoint actor and set its properties
                AGeoJSON_MultiLineString* MultiLineStringActor = GetWorld()->SpawnActor<AGeoJSON_MultiLineString>(
                    AGeoJSON_MultiLineString::StaticClass(),
                    FVector(0, 0, 0),
                    FRotator(0, 0, 0),
                    SpawnParams
                );

                if (MultiLineStringActor)
                {
                    MultiLineStringActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
<<<<<<< HEAD
                    MultiLineStringActor->MultiLineStringGeoJSONData = g_obj; // Set the GeoJSON data
=======
                    MultiLineStringActor->Data = g_obj;
                    MultiLineStringActor->ParseData();
                    g_obj->TryGetStringField(TEXT("name"), MultiLineStringActor->FData.Name);
            

                    if (g_obj->TryGetStringField(TEXT("name"), MultiLineStringActor->FData.Name))
                    {
                        FString NewLabel = TEXT("MultiLineString_") + MultiLineStringActor->FData.Name;
                        MultiLineStringActor->SetActorLabel(NewLabel);
                    }
                    else
                    {
                        FString NewLabel = TEXT("MultiLineString");
                        MultiLineStringActor->SetActorLabel(NewLabel);

                    }
>>>>>>> Rob
                }

                break;
            }
            case Polygon:
            {
                break;
            }
            case MultiPolygon:
            {
                break;
            }
            case Geometry:
            {
                break;
            }
            case GeometryCollection:
            {
                break;
            }
            case Feature: //this still wouldnt work, need to implement Feature
            {
                break;
			}
            case FeatureCollection:
            {
                AGeoJSON_FeatureCollection* FeatureCollectionActor = GetWorld()->SpawnActor<AGeoJSON_FeatureCollection>(
                    AGeoJSON_FeatureCollection::StaticClass(),
                    FVector(0, 0, 0),
                    FRotator(0, 0, 0),
                    SpawnParams
                );

                if (FeatureCollectionActor)
                {
<<<<<<< HEAD
                    FeatureCollectionActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
                    FeatureCollectionActor->FeatureCollectionGeoJSONData = g_obj; // Set the GeoJSON data
=======
                    AGeoJSON_FeatureCollection* FeatureCollectionActor = GetWorld()->SpawnActor<AGeoJSON_FeatureCollection>(
                        FeatureCollectionBPClass,
                        FVector(0, 0, 0),
                        FRotator(0, 0, 0),
                        SpawnParams
                    );

                    if (FeatureCollectionActor)
                    {
                        FeatureCollectionActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
                        FeatureCollectionActor->Data = g_obj;
						FeatureCollectionActor->ParseData(); // Parse the GeoJSON data
                        if (g_obj->TryGetStringField(TEXT("name"), FeatureCollectionActor->FData.Name)) 
                        {
                            FString NewLabel = TEXT("FeatureCollection_") + FeatureCollectionActor->FData.Name;
                            FeatureCollectionActor->SetActorLabel(NewLabel);
                        }
                        else
                        {
                            FString NewLabel = TEXT("FeatureCollection");
                            FeatureCollectionActor->SetActorLabel(NewLabel);
                        }
                   


                        
                    }
                    else
                    {
                        UE_LOG(LogTemp, Error, TEXT("Failed to spawn FeatureCollectionActor from Blueprint."));
                    }
>>>>>>> Rob
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




<<<<<<< HEAD
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
=======
>>>>>>> Rob
