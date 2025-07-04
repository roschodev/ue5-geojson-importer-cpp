// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GeoJSON_GridCell.generated.h"

UCLASS()
class GEOJSON_LOADER_API AGeoJSON_GridCell : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_GridCell();

	UPROPERTY()
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GeoJSON")
	FString Code; // Easting and Northing code for the grid cell, e.g., "E1234N5678"

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
