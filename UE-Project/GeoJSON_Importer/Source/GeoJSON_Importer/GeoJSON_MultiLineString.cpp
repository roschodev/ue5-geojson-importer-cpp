// Fill out your copyright notice in the Description page of Project Settings.


#include "GeoJSON_MultiLineString.h"
#include "Data.h"
#include "GeoJSON_Functions.h"


// Sets default values
AGeoJSON_MultiLineString::AGeoJSON_MultiLineString()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

}

// Called when the game starts or when spawned
void AGeoJSON_MultiLineString::BeginPlay()
{
	Super::BeginPlay();
	
}

<<<<<<< HEAD
#if WITH_EDITOR
void AGeoJSON_MultiLineString::LogData()
{
    if (!MultiLineStringGeoJSONData.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("FeatureCollectionGeoJSONData is null or invalid."));
        return;
    }

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(MultiLineStringGeoJSONData.ToSharedRef(), Writer);
    UE_LOG(LogTemp, Log, TEXT("Data: %s"), *OutputString);
}
#endif
=======
FMultiLineStringData AGeoJSON_MultiLineString::ParseMultiLineStringData()
{
	FMultiLineStringData d;
	d.Type = UGeoJSON_Functions::GetType(Data);
	Data->TryGetStringField(TEXT("name"), d.Name);
	d.CRS = UGeoJSON_Functions::GetCRS(Data);
	Data->TryGetStringField(TEXT("description"), d.Description);

	const TArray<TSharedPtr<FJsonValue>>* CoordinatesArrayPtr;
	if (Data->TryGetArrayField(TEXT("coordinates"), CoordinatesArrayPtr) && CoordinatesArrayPtr)
	{
		for (const TSharedPtr<FJsonValue>& Value : *CoordinatesArrayPtr)
		{
			if (Value->Type == EJson::Array)
			{
				const TArray<TSharedPtr<FJsonValue>>& LineStringArray = Value->AsArray();
				FLineString LineString;
				LineString.Type = ETypes::LineString;
				for (const TSharedPtr<FJsonValue>& PointValue : LineStringArray)
				{
					if (PointValue->Type == EJson::Array)
					{
						const TArray<TSharedPtr<FJsonValue>>& PointArray = PointValue->AsArray();
						if (PointArray.Num() >= 2)
						{
							FVector2D Coordinates;
							Coordinates.X = PointArray[0]->AsNumber();
							Coordinates.Y = PointArray[1]->AsNumber();
							LineString.Coordinates.Add(Coordinates);
						}
					}
				}
				d.LineStrings.Add(LineString);
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

void AGeoJSON_MultiLineString::ParseData() 
{
	if (UGeoJSON_Functions::IsValidGeoJSON(this, Data)) 
	{
		FData = ParseMultiLineStringData();
	}
}
>>>>>>> Rob

// Called every frame
void AGeoJSON_MultiLineString::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

