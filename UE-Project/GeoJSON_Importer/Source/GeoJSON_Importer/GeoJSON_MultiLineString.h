// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeoJSON_MultiLineString.generated.h"

UCLASS()
class GEOJSON_IMPORTER_API AGeoJSON_MultiLineString : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_MultiLineString();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TSharedPtr<FJsonObject> MultiLineStringGeoJSONData;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	

private:
	// GeoJSON data
	TSharedPtr<FJsonObject> MultiPointGeoJSONData;
};
