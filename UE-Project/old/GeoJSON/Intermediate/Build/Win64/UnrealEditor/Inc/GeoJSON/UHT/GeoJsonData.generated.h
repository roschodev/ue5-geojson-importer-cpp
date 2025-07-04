// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoJsonData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOJSON_GeoJsonData_generated_h
#error "GeoJsonData.generated.h already included, missing '#pragma once' in GeoJsonData.h"
#endif
#define GEOJSON_GeoJsonData_generated_h

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRS_Properties_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FCRS_Properties>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRS_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FCRS>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypeBaseStruct_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FTypeBaseStruct>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FType_MultiPoint_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct(); \
	typedef FTypeBaseStruct Super;


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FType_MultiPoint>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolygon_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FPolygon>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolygonGroup_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FPolygonGroup>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FType_MultiPolygon_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct(); \
	typedef FTypeBaseStruct Super;


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FType_MultiPolygon>();

#define FID_GeoJSON_Source_GeoJSON_GeoJsonData_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoJSONVariant_Statics; \
	GEOJSON_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_API UScriptStruct* StaticStruct<struct FGeoJSONVariant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeoJSON_Source_GeoJSON_GeoJsonData_h


#define FOREACH_ENUM_ETYPES(op) \
	op(Point) \
	op(MultiPoint) \
	op(LineString) \
	op(MultiLineString) \
	op(Polygon) \
	op(MultiPolygon) \
	op(GeometryCollection) \
	op(FeatureCollection) \
	op(Feature) \
	op(Unsupported) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
