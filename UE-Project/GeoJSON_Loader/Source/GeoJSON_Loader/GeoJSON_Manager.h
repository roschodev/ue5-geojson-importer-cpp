// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Data.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "GeoJSON_Manager.generated.h"

UCLASS()
class GEOJSON_LOADER_API AGeoJSON_Manager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSON_Manager();
	
	//Input Variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	TArray<FString> FilePaths;

	//Converted Filepath array to structure
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	TArray<FGeoJSON_Layer> GeoJSON_Layers;

	//Main Functions
	TArray<FGeoJSON_Layer> LoadGeoJSONFiles(TArray<FString> filePaths);


	//Helper Functions
	FGeoJSON_Layer LoadGeoJSONFile(FString filePath, bool& isLoaded);
	TSharedPtr<FJsonObject> FStringToJSONObject(const FString& JSONString);
	bool doesFileExist(FString path);
	bool isGeoJSONGridBased(FString GeoJSONString, TArray<FString>& Codes);
	TMap<FString, FString> GetProperties(TSharedPtr<FJsonObject> JsonObject);
	void CalculateGridBounds(const TArray<FString>& GridCodes, FVector2D& BottomLeft, FVector2D& TopRight);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
