// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
//#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPL_GeoJSON.h"
//#include "BPL_GeoJSON_Visualisation.generated.h"


/*

UENUM(BlueprintType)
enum EMethods
{
	BarGraph UMETA(DisplayName = "Bar Graph"),
	PieGraph UMETA(DisplayName = "Pie Graph"),
	Image UMETA(DisplayName = "Image")
};

UENUM(BlueprintType)
enum ELayerTypes
{
	Grid UMETA(DisplayName = "Grid"),
	Polygonal UMETA(DisplayName = "Polygonal"),
	GridAndPolygonal UMETA(DisplayName = "Grid and Polygonal")
};

USTRUCT(BlueprintType)
struct FLayerSettings : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FName LayerName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	TEnumAsByte<ELayerTypes> LayerType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	TEnumAsByte<EMethods> Methods;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FString GeoJSONPath;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FString ValueField;
};


UCLASS()
class GEOJSON_API UBPL_GeoJSON_Visualisation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Category = "GeoJSON")
	static void CreateGridLayer(AActor* Parent, FGeoJSON_Data Data, TSubclassOf<AActor> Class, EMethods LayerMethod, FString ValueField);

	UFUNCTION(BlueprintCallable, Category = "GeoJSON")
	static void AddVisualisationMethod(AActor* TileActor, EMethods LayerMethod);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "GeoJSON")
	static void GetTileID(const TMap<FString, FString> PropertiesMap, FString& TileID, bool& TileIDFound);

	

	// Helper Functions
	static bool IsMatchingFormat(const FString& Input);
	
};

*/
