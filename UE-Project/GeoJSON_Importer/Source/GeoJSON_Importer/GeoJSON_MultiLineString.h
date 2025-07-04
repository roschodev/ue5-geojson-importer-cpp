// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Json.h"
#include "Data.h"
#include "JsonUtilities.h"
#include "GeoJSON_MultiLineString.generated.h"

USTRUCT(BlueprintType)
struct FLineString
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<ETypes> Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TMap<FString, FString> Properties;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FVector2D> Coordinates;
};

USTRUCT(BlueprintType)
struct FMultiLineStringData
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
	TArray<FLineString> LineStrings;
};



UCLASS()
class GEOJSON_IMPORTER_API AGeoJSON_MultiLineString : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_MultiLineString();
<<<<<<< HEAD
=======
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void ParseData();
	FMultiLineStringData ParseMultiLineStringData();

	TSharedPtr<FJsonObject> Data;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	FMultiLineStringData FData;
>>>>>>> Rob

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

<<<<<<< HEAD
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Log GeoJSON data
	UFUNCTION(CallInEditor)
	void LogData();

	TSharedPtr<FJsonObject> MultiLineStringGeoJSONData;

private:
	// GeoJSON data
	TSharedPtr<FJsonObject> MultiPointGeoJSONData;
=======
>>>>>>> Rob
};
