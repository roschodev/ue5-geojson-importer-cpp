// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BPL_GeoJSON.h"
#include "Feature.generated.h"


UCLASS()
class GEOJSON_API AFeature : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	/*AFeature();*/
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	UStaticMeshComponent* Tile;

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FGeoJSON_Element FeatureData;*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FVector GridScale;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	float ValueFloat;

//void Init(FGeoJSON_Element Data, FString ValueField);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
