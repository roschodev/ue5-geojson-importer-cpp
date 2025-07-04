// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_MultiPoint.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "Data.h"
#include "GeoJSON_Functions.h"

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


FMultiPointData AGeoJSON_MultiPoint::ParseMultiPointData()
{
    FMultiPointData d;

    d.Type = UGeoJSON_Functions::GetType(Data);
    Data->TryGetStringField(TEXT("name"), d.Name);
    d.CRS = UGeoJSON_Functions::GetCRS(Data);

    const TArray<TSharedPtr<FJsonValue>>* CoordinatesArrayPtr;
    if (Data->TryGetArrayField(TEXT("coordinates"), CoordinatesArrayPtr) && CoordinatesArrayPtr)
    {
        for (const TSharedPtr<FJsonValue>& Value : *CoordinatesArrayPtr)
        {
            if (Value->Type == EJson::Array)
            {
                const TArray<TSharedPtr<FJsonValue>>& PointArray = Value->AsArray();

                if (PointArray.Num() >= 2)
                {
                    FPoint Point;

					Point.Type = ETypes::Point;
                    Point.Coordinates.X = PointArray[0]->AsNumber();
                    Point.Coordinates.Y = PointArray[1]->AsNumber();
                    d.Points.Add(Point);
                }
            }
        }
        return d;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Missing or invalid 'coordinates' field."));
        return d;
    }
}

void AGeoJSON_MultiPoint::ParseData()
{
    if (UGeoJSON_Functions::IsValidGeoJSON(this, Data))
    {
        FData = ParseMultiPointData();
    }
}

// Called every frame
void AGeoJSON_MultiPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

