// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Json.h"
#include "Data.h"
#include "JsonUtilities.h"
#include "GeoJSON_MultiPoint.generated.h"

USTRUCT(BlueprintType)
struct FPoint
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ETypes> Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TMap<FString, FString> Properties;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D Coordinates;
};

USTRUCT(BlueprintType)
struct FMultiPointData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	FCRS CRS;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPoint> Points;
};


UCLASS()
class GEOJSON_IMPORTER_API AGeoJSON_MultiPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_MultiPoint();

	TSharedPtr<FJsonObject> Data;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMultiPointData FData;
	FMultiPointData ParseMultiPointData();
	void ParseData();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
