// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Loader/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GEOJSON_LOADER_API UEnum* Z_Construct_UEnum_GeoJSON_Loader_ETypes();
	GEOJSON_LOADER_API UScriptStruct* Z_Construct_UScriptStruct_FGeoJSON_Layer();
	GEOJSON_LOADER_API UScriptStruct* Z_Construct_UScriptStruct_FLayerSettings();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Loader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypes;
	static UEnum* ETypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeoJSON_Loader_ETypes, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Loader(), TEXT("ETypes"));
		}
		return Z_Registration_Info_UEnum_ETypes.OuterSingleton;
	}
	template<> GEOJSON_LOADER_API UEnum* StaticEnum<ETypes>()
	{
		return ETypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::Enumerators[] = {
		{ "Point", (int64)Point },
		{ "MultiPoint", (int64)MultiPoint },
		{ "LineString", (int64)LineString },
		{ "MultiLineString", (int64)MultiLineString },
		{ "Polygon", (int64)Polygon },
		{ "MultiPolygon", (int64)MultiPolygon },
		{ "Geometry", (int64)Geometry },
		{ "GeometryCollection", (int64)GeometryCollection },
		{ "Feature", (int64)Feature },
		{ "FeatureCollection", (int64)FeatureCollection },
		{ "Unsupported", (int64)Unsupported },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enum for GeoJSON types\n" },
#endif
		{ "Feature.DisplayName", "Feature" },
		{ "Feature.Name", "Feature" },
		{ "FeatureCollection.DisplayName", "FeatureCollection" },
		{ "FeatureCollection.Name", "FeatureCollection" },
		{ "Geometry.DisplayName", "Geometry" },
		{ "Geometry.Name", "Geometry" },
		{ "GeometryCollection.DisplayName", "GeometryCollection" },
		{ "GeometryCollection.Name", "GeometryCollection" },
		{ "LineString.DisplayName", "LineString" },
		{ "LineString.Name", "LineString" },
		{ "ModuleRelativePath", "Data.h" },
		{ "MultiLineString.DisplayName", "MultiLineString" },
		{ "MultiLineString.Name", "MultiLineString" },
		{ "MultiPoint.DisplayName", "MultiPoint" },
		{ "MultiPoint.Name", "MultiPoint" },
		{ "MultiPolygon.DisplayName", "MultiPolygon" },
		{ "MultiPolygon.Name", "MultiPolygon" },
		{ "Point.DisplayName", "Point" },
		{ "Point.Name", "Point" },
		{ "Polygon.DisplayName", "Polygon" },
		{ "Polygon.Name", "Polygon" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enum for GeoJSON types" },
#endif
		{ "Unsupported.DisplayName", "Unsupported" },
		{ "Unsupported.Name", "Unsupported" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeoJSON_Loader,
		nullptr,
		"ETypes",
		"ETypes",
		Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeoJSON_Loader_ETypes()
	{
		if (!Z_Registration_Info_UEnum_ETypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypes.InnerSingleton, Z_Construct_UEnum_GeoJSON_Loader_ETypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeoJSON_Layer;
class UScriptStruct* FGeoJSON_Layer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeoJSON_Layer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeoJSON_Layer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoJSON_Layer, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Loader(), TEXT("GeoJSON_Layer"));
	}
	return Z_Registration_Info_UScriptStruct_GeoJSON_Layer.OuterSingleton;
}
template<> GEOJSON_LOADER_API UScriptStruct* StaticStruct<FGeoJSON_Layer>()
{
	return FGeoJSON_Layer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isGridBased_MetaData[];
#endif
		static void NewProp_isGridBased_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGridBased;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Codes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Codes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoJSON_Layer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "GeoJSON_Layer" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSON_Layer, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_FilePath_MetaData), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_FilePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GeoJSON_Layer" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSON_Layer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "GeoJSON_Layer" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSON_Layer, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_ID_MetaData), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_ID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_JSONString_MetaData[] = {
		{ "Category", "GeoJSON_Layer" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSON_Layer, JSONString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_JSONString_MetaData), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_JSONString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased_MetaData[] = {
		{ "Category", "GeoJSON_Layer" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased_SetBit(void* Obj)
	{
		((FGeoJSON_Layer*)Obj)->isGridBased = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased = { "isGridBased", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGeoJSON_Layer), &Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased_MetaData), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes_Inner = { "Codes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes_MetaData[] = {
		{ "Category", "GeoJSON_Layer" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes = { "Codes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSON_Layer, Codes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes_MetaData), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_JSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_isGridBased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewProp_Codes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Loader,
		nullptr,
		&NewStructOps,
		"GeoJSON_Layer",
		Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::PropPointers),
		sizeof(FGeoJSON_Layer),
		alignof(FGeoJSON_Layer),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeoJSON_Layer()
	{
		if (!Z_Registration_Info_UScriptStruct_GeoJSON_Layer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeoJSON_Layer.InnerSingleton, Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeoJSON_Layer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLayerSettings>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLayerSettings cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerSettings;
class UScriptStruct* FLayerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerSettings, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Loader(), TEXT("LayerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LayerSettings.OuterSingleton;
}
template<> GEOJSON_LOADER_API UScriptStruct* StaticStruct<FLayerSettings>()
{
	return FLayerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLayerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filepath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filepath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnGridIfGridBased_MetaData[];
#endif
		static void NewProp_spawnGridIfGridBased_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_spawnGridIfGridBased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnGeometries_MetaData[];
#endif
		static void NewProp_spawnGeometries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_spawnGeometries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Filepath_MetaData[] = {
		{ "Category", "LayerSettings" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Filepath = { "Filepath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerSettings, Filepath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Filepath_MetaData), Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Filepath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LayerSettings" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerSettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased_MetaData[] = {
		{ "Category", "LayerSettings" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased_SetBit(void* Obj)
	{
		((FLayerSettings*)Obj)->spawnGridIfGridBased = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased = { "spawnGridIfGridBased", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayerSettings), &Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased_MetaData), Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries_MetaData[] = {
		{ "Category", "LayerSettings" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries_SetBit(void* Obj)
	{
		((FLayerSettings*)Obj)->spawnGeometries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries = { "spawnGeometries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLayerSettings), &Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries_MetaData), Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGridIfGridBased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerSettings_Statics::NewProp_spawnGeometries,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Loader,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LayerSettings",
		Z_Construct_UScriptStruct_FLayerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::PropPointers),
		sizeof(FLayerSettings),
		alignof(FLayerSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayerSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLayerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LayerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerSettings.InnerSingleton, Z_Construct_UScriptStruct_FLayerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LayerSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics::EnumInfo[] = {
		{ ETypes_StaticEnum, TEXT("ETypes"), &Z_Registration_Info_UEnum_ETypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 957080046U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics::ScriptStructInfo[] = {
		{ FGeoJSON_Layer::StaticStruct, Z_Construct_UScriptStruct_FGeoJSON_Layer_Statics::NewStructOps, TEXT("GeoJSON_Layer"), &Z_Registration_Info_UScriptStruct_GeoJSON_Layer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeoJSON_Layer), 3836627061U) },
		{ FLayerSettings::StaticStruct, Z_Construct_UScriptStruct_FLayerSettings_Statics::NewStructOps, TEXT("LayerSettings"), &Z_Registration_Info_UScriptStruct_LayerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerSettings), 1908354214U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_1599153160(TEXT("/Script/GeoJSON_Loader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_Data_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
