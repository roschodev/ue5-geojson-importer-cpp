// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Json.h"
#include "Data.h"
#include "JsonUtilities.h"
#include "GeoJSON_MultiPoint.generated.h"

UCLASS()
class GEOJSON_IMPORTER_API AGeoJSON_MultiPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_MultiPoint();

	TSharedPtr<FJsonObject> MultiPointGeoJSONData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(CallInEditor)
	void LogData();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
