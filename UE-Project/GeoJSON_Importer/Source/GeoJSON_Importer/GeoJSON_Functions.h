// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Data.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "GeoJSON_Functions.generated.h"


/**
 * 
 */
UCLASS()
class GEOJSON_IMPORTER_API UGeoJSON_Functions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static FCRS GetCRS(TSharedPtr<FJsonObject> JsonObject);
	static ETypes GetType(TSharedPtr<FJsonObject> JsonObject);
	static TMap<FString, FString> GetProperties(TSharedPtr<FJsonObject> JsonObject);
	static TSharedPtr<FJsonObject> FStringToJSONObject(const FString& JSONString);
	static FString LoadGeoJSON(FString Path);
	static bool IsValidGeoJSON(UObject* self, TSharedPtr<FJsonObject> Data);

	static bool isGeoJSONGridBased(const FFeatureCollectionData& Data);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
	static void SpawnGrid(UObject* WorldContextObject, FFeatureCollectionData Data, bool& bIsGrid, TArray<AActor*>& GridCells);



};
