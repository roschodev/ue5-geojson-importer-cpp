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
			}
            case LineString: //this still wouldnt work, need to implement Feature
            {
                break;
            }
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




