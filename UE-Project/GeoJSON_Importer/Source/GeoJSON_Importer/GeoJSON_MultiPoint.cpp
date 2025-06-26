// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_MultiPoint.h"
#include "Json.h"
#include "JsonUtilities.h"

// Sets default values
AGeoJSON_MultiPoint::AGeoJSON_MultiPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

}

// Called when the game starts or when spawned
void AGeoJSON_MultiPoint::BeginPlay()
{
	Super::BeginPlay();


	
}

#if WITH_EDITOR
void AGeoJSON_MultiPoint::LogData()
{
    if (!MultiPointGeoJSONData.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("FeatureCollectionGeoJSONData is null or invalid."));
        return;
    }

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(MultiPointGeoJSONData.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Log, TEXT("Data: %s"), *OutputString);
}
#endif


// Called every frame
void AGeoJSON_MultiPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

