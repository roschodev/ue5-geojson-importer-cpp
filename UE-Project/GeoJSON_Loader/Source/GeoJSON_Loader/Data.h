#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Json.h"
#include "JsonUtilities.h"
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

USTRUCT(BlueprintType)
struct FGeoJSON_Layer
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString FilePath;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString Name;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FGuid ID;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString JSONString;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool isGridBased;


	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<FString> Codes;
};