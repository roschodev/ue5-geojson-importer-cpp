#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Json.h"  // Required for JSON handling (FJsonObject)
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"

#include "Json.h"
#include "JsonUtilities.h"
#include "Templates/SharedPointer.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonReader.h"
#include "Dom/JsonObject.h" 

#include "GeoJsonData.h"
#include "BPL_GeoJSON.generated.h"


UCLASS()
class GEOJSON_API UBPL_GeoJSON : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FName Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	TEnumAsByte<ETypes> Type;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
	FCRS CRS;

	
	
	static FString LoadGeoJSONFromPath(const FString Path, bool debug = false);
	static TSharedPtr<FJsonObject> GeoJSONStringToJSONObject(const FString& GeoJSONString, bool debug = false);
	static FString JSONObjectToJSONString(TSharedPtr<FJsonObject> JsonObject, bool debug = false);
	static FName ExtractGeoJSONName(FName& Name);
	static ETypes ExtractGeoJSONType(TSharedPtr<FJsonObject> JsonObject);
	static TSubclassOf<AActor> DetermineGeoJSONActorClass(ETypes GeoType);
	/*static bool ParseMultiPointJson(const TSharedPtr<FJsonObject> JsonObject);*/

	static FTypeBaseStruct* GetGeoJSONStruct(ETypes type);


	static bool ParseGeoJSONFile(UObject* WorldContextObject, const FString Path, bool EnableLogDebug);
	
};

/*UFUNCTION(BlueprintCallable, meta = (DisplayName = "Load GeoJSON File To JSONObject"), Category = "Spawning")
FJsonObject LoadGeoJSONFileToJSONObject(const TArray<FString>& GeoJSONFilePaths, bool& Loaded);*/
////===================== STRUCTURES =====================================================================================================================================================================================================================================
//// TYPES STRUCTURES ======================================================
//USTRUCT(BlueprintType)
//struct FType_MultiPoint {
//
//	GENERATED_BODY()
//};
//
//USTRUCT(BlueprintType)
//struct FType_MultiLineString {
//
//	GENERATED_BODY()
//};
//
//USTRUCT(BlueprintType)
//struct FType_MultiPolygon {
//
//	GENERATED_BODY()
//};
//
//USTRUCT(BlueprintType)
//struct FType_GeometryCollection {
//
//	GENERATED_BODY()
//};
//
//USTRUCT(BlueprintType)
//struct FType_FeatureCollection {
//
//	GENERATED_BODY()};
//};
//

//
//
//
//
//USTRUCT(BlueprintType)
//struct FSection
//{
//	GENERATED_BODY()
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TArray<FVector2D> Vertices;
//
//};
//
//USTRUCT(BlueprintType)
//struct FGroup
//{
//	GENERATED_BODY()
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TArray<FSection> Sections;
//};
//
//USTRUCT(BlueprintType)
//struct FGeoJSON_Geometry
//{
//	GENERATED_BODY()
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TEnumAsByte<ETypes> Type;
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TArray<FGroup> Groups;
//};
//
//
//USTRUCT(BlueprintType)
//struct FGeoJSON_ContentItem
//{
//	GENERATED_BODY()
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TEnumAsByte<ETypes> Type;
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TMap<FString, FString> Properties;
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TArray<FGeoJSON_Geometry> Geometries;
//};
//
//USTRUCT(BlueprintType)
//struct FGeoJSON_Data
//{
//	GENERATED_BODY()
//
//	//Mandatory field
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TEnumAsByte<ETypes> Type;
//
//	//Optional field
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	FName Name;
//
//	//Optional field
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	FGeoJSON_CRS CRS;
//
//	//Mandatory field, can represent Features or Geometries.
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TArray<FGeoJSON_ContentItem> Contents;
//
//};
//
//USTRUCT(BlueprintType)
//struct FGeoJSON_Feature
//{
//	GENERATED_BODY()
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	TEnumAsByte<ETypes> Type;
//
//	//Optional field
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	FName Name;
//
//	//Optional field
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	FGeoJSON_CRS CRS;
//
//
//	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GeoJSON")
//	FGeoJSON_ContentItem Feature;
//
//
//};





//
//		//Utilities -- Extracting
//	static FGeoJSON_Geometry ExtractGeometry(TSharedPtr<FJsonObject> FeatureObject);
//	static ETypes ExtractType(TSharedPtr<FJsonObject> JsonObject);
//	static FGeoJSON_CRS ExtractCRS(TSharedPtr<FJsonObject> JsonObject);
//	/*static TArray<FGeoJSON_Element> ExtractElements(TSharedPtr<FJsonObject> JsonObject);*/
//
//	static TMap<FString, FString> ExtractProperties(TSharedPtr<FJsonObject> FeatureObject);
//
//	//Utilities -- Processing
//	static TSharedPtr<FJsonObject> GenerateJSONObjectFromString(FString string);
//
//	//Utilities -- Validation
//	static bool IsJSONValid(const FString& GeoJSONContent);
//
//	//Blueprint Nodes
//	UFUNCTION(BlueprintCallable, Category = "GeoJSON|Parsing")
//	static void ParseGeoJSONFile(const FString& GeoJSONFilePath, bool& Loaded, FGeoJSON_Data& Data);

	////Utilities
	//static TSharedPtr<FJsonObject> GenerateJSONObjectFromString(FString string);
	//
	////Blueprint Nodes
	//UFUNCTION(BlueprintCallable, Category = "GeoJSON|Parsing")
	//FType_MultiPoint ParseMultiPoint(ETypes Type, TSharedPtr<FJsonObject> GeoJSONObject);
	//	
	//UFUNCTION(BlueprintCallable, Category = "GeoJSON|Parsing")
	//FType_MultiLineString ParseMultiLineString(ETypes Type, TSharedPtr<FJsonObject> GeoJSONObject);
	//	
	//UFUNCTION(BlueprintCallable, Category = "GeoJSON|Parsing")
	//FType_MultiPolygon ParseMultiPolygon(ETypes Type, TSharedPtr<FJsonObject> GeoJSONObject);
	//	
	//UFUNCTION(BlueprintCallable, Category = "GeoJSON|Parsing")
	//FType_GeometryCollection ParseGeometryCollection(ETypes Type, TSharedPtr<FJsonObject> GeoJSONObject);
	//	
	//UFUNCTION(BlueprintCallable, Category = "GeoJSON|Parsing")
	//FType_FeatureCollection& ParseFeatureCollection(ETypes Type, TSharedPtr<FJsonObject> GeoJSONObject);

	//UFUNCTION(BlueprintCallable, Category = "GeoJSON|Type")
	//ETypes GetType(TSharedPtr<FJsonObject> GeoJSONObject);
	



