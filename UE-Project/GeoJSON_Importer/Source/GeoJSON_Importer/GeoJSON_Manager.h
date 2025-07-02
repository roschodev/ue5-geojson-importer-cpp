// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Data.h"
#include "GeoJSON_Manager.generated.h"


UCLASS()
class GEOJSON_IMPORTER_API AGeoJSON_Manager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_Manager();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Data")
	TArray<FString> Filepaths;

	UFUNCTION(CallInEditor, Category = "Execute")
	void LoadGeoJSONFiles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};
