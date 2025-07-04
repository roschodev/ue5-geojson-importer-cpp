// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "Dom/JsonObject.h"
#include "CoreMinimal.h"
#include "GeoJsonData.h"
#include "GameFramework/Actor.h"

#include "Json.h"
#include "JsonUtilities.h"
#include "Templates/SharedPointer.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonReader.h"
#include "Dom/JsonObject.h"  

#include "GeoJSONType_Base.generated.h"

UCLASS()
class GEOJSON_API AGeoJSONType_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeoJSONType_Base();

	
	TSharedPtr<FJsonObject> JsonObject;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FName Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FCRS CRS;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FString GeoJSONString;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FString Path = "E:/Github/UE_Tool_GeoJSONImporter/Data/GeoJSON test/geojson_multipoint.geojson";

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
