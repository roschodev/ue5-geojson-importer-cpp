// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "Data.h"
#include "GeoJSON_FeatureCollection.generated.h"







USTRUCT(BlueprintType)
struct FFeature 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TMap<FString, FString> Properties;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TArray<FString> Geometry;
};





USTRUCT(BlueprintType)
struct FFeatureCollectionData
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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	TArray<FFeature> Features;
};


UCLASS()
class GEOJSON_IMPORTER_API AGeoJSON_FeatureCollection : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_FeatureCollection();


	TSharedPtr<FJsonObject> FeatureCollectionGeoJSONData;
	ETypes ExtractGeoJSONType(TSharedPtr<FJsonObject> JsonObject);

	UFUNCTION(CallInEditor, Category = "Execute")
	void ParseData();

	void SpawnGrid();

	FCRS ExtractCRS(TSharedPtr<FJsonObject> JsonObject);

	// Data in JSONObject format
	TSharedPtr<FJsonObject> Data;

	UFUNCTION(CallinEditor, Category = "Debug")
	void LogData(FFeatureCollectionData d);	


	void ParseData();

	FString FilePath;


	FFeatureCollectionData ParseJSONToStructure(TSharedPtr<FJsonObject> GeoJSONData);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Filters|Allowed Types")
	bool bAllowPointType = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Filters|Allowed Types")
	bool bAllowPolygonType = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Filters|Allowed Types")
	bool bAllowLineStringType = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Filters|Allowed Types")
	bool bAllowCollectionTypes = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFeatureCollectionData FData;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
