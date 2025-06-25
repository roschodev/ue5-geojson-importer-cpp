#pragma once




#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/Vector2D.h"
#include "Engine/EngineTypes.h"
#include "GeoJsonData.generated.h"

UENUM(BlueprintType)
enum ETypes
{
	Point UMETA(DisplayName = "Point"),
	MultiPoint UMETA(DisplayName = "MultiPoint"),
	LineString UMETA(DisplayName = "LineString"),
	MultiLineString UMETA(DisplayName = "MultiLineString"),
	Polygon UMETA(DisplayName = "Polygon"),
	MultiPolygon UMETA(DisplayName = "MultiPolygon"),
	GeometryCollection UMETA(DisplayName = "GeometryCollection"),
	FeatureCollection UMETA(DisplayName = "FeatureCollection"),
	Feature UMETA(DisplayName = "Feature"),
	Unsupported UMETA(DisplayName = "Unsupported")
};




//CRS Structures -------------------------
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

USTRUCT(BlueprintType)
struct FType_MultiPoint : public UObject {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FCRS CRS;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FVector2D> Points;

};

// MULTI POLYGON HANDLER ------------------------------------

USTRUCT(BlueprintType)
struct FPolygon {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FVector2D> Points;
};

USTRUCT(BlueprintType)
struct FPolygonGroup{
	
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FPolygon> Polygons;
};

USTRUCT(BlueprintType)
struct FType_MultiPolygon : public UObject {

	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FCRS CRS;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "Dynamic Struct")
	TArray<FPolygonGroup> PolygonGroups;

};

USTRUCT(BlueprintType)
struct FGeoJSONVariant
{
	GENERATED_BODY()

public:
	// Use TVariant to store multiple types
	TVariant<FType_MultiPoint, FType_MultiPolygon> GeoJSONVariant;
};