// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOJSON_LOADER_Data_generated_h
#error "Data.generated.h already included, missing '#pragma once' in Data.h"
#endif
#define GEOJSON_LOADER_Data_generated_h

#define FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics; \
	GEOJSON_LOADER_API static class UScriptStruct* StaticStruct();


template<> GEOJSON_LOADER_API UScriptStruct* StaticStruct<struct FGeoJSON_Layer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h


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
