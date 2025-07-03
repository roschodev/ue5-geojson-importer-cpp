// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOJSON_IMPORTER_Data_generated_h
#error "Data.generated.h already included, missing '#pragma once' in Data.h"
#endif
#define GEOJSON_IMPORTER_Data_generated_h

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRS_Properties_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FCRS_Properties>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCRS_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FCRS>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FType_MultiPoint_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FType_MultiPoint>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoJSONProject_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FGeoJSONProject>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolygon_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FPolygon>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolygonGroup_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FPolygonGroup>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FType_MultiPolygon_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FType_MultiPolygon>();

#define FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FType_MultiLineString_Statics; \
	GEOJSON_IMPORTER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<struct FType_MultiLineString>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h


#define FOREACH_ENUM_DATAVISUALISATIONTYPE(op) \
	op(Bar) \
	op(Pie) \
	op(Blocks) 
#define FOREACH_ENUM_ETYPES(op) \
	op(Point) \
	op(MultiPoint) \
	op(LineString) \
	op(MultiLineString) \
	op(Polygon) \
	op(MultiPolygon) \
	op(Geometry) \
	op(GeometryCollection) \
	op(Feature) \
	op(FeatureCollection) \
	op(Unsupported) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
