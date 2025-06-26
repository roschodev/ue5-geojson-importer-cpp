// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/Vector2D.h"
#include "Engine/EngineTypes.h"
#include "Data.generated.h"


// Enum for GeoJSON types
UENUM(BlueprintType)
enum ETypes
{
	Point UMETA(DisplayName = "Point"),
	MultiPoint UMETA(DisplayName = "MultiPoint"),
	LineString UMETA(DisplayName = "LineString"),
	MultiLineString UMETA(DisplayName = "MultiLineString"),
	Polygon UMETA(DisplayName = "Polygon"),
	MultiPolygon UMETA(DisplayName = "MultiPolygon"),
	Geometry UMETA(DisplayName = "Geometry"),
	GeometryCollection UMETA(DisplayName = "GeometryCollection"),
	Feature UMETA(DisplayName = "Feature"),
	FeatureCollection UMETA(DisplayName = "FeatureCollection"),
	Unsupported UMETA(DisplayName = "Unsupported")
};


//Structure for CRS (Coordinate Reference System) -------------------------
USTRUCT(BlueprintType)
struct FCRS_Properties
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FName Name;

};

USTRUCT(BlueprintType)
struct FCRS
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FName Type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FCRS_Properties Properties;
};

// (Multi) Point Structure ------------------------------------
USTRUCT(BlueprintType)
struct FType_MultiPoint {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	FCRS CRS;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FVector2D> Points;

};


// Project Structure ------------------------------------
USTRUCT(BlueprintType)
struct FGeoJSONProject
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FString Name;


	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	int32 Number_layers;


};
// (Multi) Polygon Structure ------------------------------------
USTRUCT(BlueprintType)
struct FPolygon {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FVector2D> Points;
};

USTRUCT(BlueprintType)
struct FPolygonGroup {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FPolygon> Polygons;
};

USTRUCT(BlueprintType)
struct FType_MultiPolygon {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	FCRS CRS;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FPolygonGroup> PolygonGroups;

};

// (Multi) LineString Structure ------------------------------------
USTRUCT(BlueprintType)
struct FType_MultiLineString {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	FCRS CRS;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FPolygonGroup> PolygonGroups;

};