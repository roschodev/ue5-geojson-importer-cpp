// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GEOJSON_IMPORTER_API UEnum* Z_Construct_UEnum_GeoJSON_Importer_ETypes();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCRS();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCRS_Properties();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FGeoJSONProject();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FPolygon();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroup();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FType_MultiLineString();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FType_MultiPoint();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FType_MultiPolygon();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETypes;
	static UEnum* ETypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeoJSON_Importer_ETypes, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("ETypes"));
		}
		return Z_Registration_Info_UEnum_ETypes.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UEnum* StaticEnum<ETypes>()
	{
		return ETypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::Enumerators[] = {
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		"ETypes",
		"ETypes",
		Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GeoJSON_Importer_ETypes()
	{
		if (!Z_Registration_Info_UEnum_ETypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETypes.InnerSingleton, Z_Construct_UEnum_GeoJSON_Importer_ETypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETypes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRS_Properties;
class UScriptStruct* FCRS_Properties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRS_Properties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRS_Properties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRS_Properties, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("CRS_Properties"));
	}
	return Z_Registration_Info_UScriptStruct_CRS_Properties.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FCRS_Properties>()
{
	return FCRS_Properties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRS_Properties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRS_Properties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Structure for CRS (Coordinate Reference System) -------------------------\n" },
#endif
		{ "ModuleRelativePath", "Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Structure for CRS (Coordinate Reference System) -------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRS_Properties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRS_Properties, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRS_Properties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRS_Properties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"CRS_Properties",
		Z_Construct_UScriptStruct_FCRS_Properties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Properties_Statics::PropPointers),
		sizeof(FCRS_Properties),
		alignof(FCRS_Properties),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Properties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRS_Properties_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Properties_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCRS_Properties()
	{
		if (!Z_Registration_Info_UScriptStruct_CRS_Properties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRS_Properties.InnerSingleton, Z_Construct_UScriptStruct_FCRS_Properties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRS_Properties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRS;
class UScriptStruct* FCRS::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRS.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRS.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRS, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("CRS"));
	}
	return Z_Registration_Info_UScriptStruct_CRS.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FCRS>()
{
	return FCRS::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRS_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRS_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRS>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRS, Type), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Type_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCRS, Properties), Z_Construct_UScriptStruct_FCRS_Properties, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Properties_MetaData), Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Properties_MetaData) }; // 3827275101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRS_Statics::NewProp_Properties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"CRS",
		Z_Construct_UScriptStruct_FCRS_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Statics::PropPointers),
		sizeof(FCRS),
		alignof(FCRS),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCRS_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRS_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCRS()
	{
		if (!Z_Registration_Info_UScriptStruct_CRS.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRS.InnerSingleton, Z_Construct_UScriptStruct_FCRS_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRS.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Type_MultiPoint;
class UScriptStruct* FType_MultiPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Type_MultiPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Type_MultiPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FType_MultiPoint, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("Type_MultiPoint"));
	}
	return Z_Registration_Info_UScriptStruct_Type_MultiPoint.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FType_MultiPoint>()
{
	return FType_MultiPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FType_MultiPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CRS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (Multi) Point Structure ------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Multi) Point Structure ------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FType_MultiPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPoint, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPoint, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPoint, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_CRS_MetaData), Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_CRS_MetaData) }; // 2393838010
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPoint, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FType_MultiPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FType_MultiPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"Type_MultiPoint",
		Z_Construct_UScriptStruct_FType_MultiPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::PropPointers),
		sizeof(FType_MultiPoint),
		alignof(FType_MultiPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FType_MultiPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FType_MultiPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_Type_MultiPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Type_MultiPoint.InnerSingleton, Z_Construct_UScriptStruct_FType_MultiPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Type_MultiPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeoJSONProject;
class UScriptStruct* FGeoJSONProject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeoJSONProject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeoJSONProject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeoJSONProject, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("GeoJSONProject"));
	}
	return Z_Registration_Info_UScriptStruct_GeoJSONProject.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FGeoJSONProject>()
{
	return FGeoJSONProject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeoJSONProject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_layers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number_layers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSONProject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Project Structure ------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project Structure ------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeoJSONProject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSONProject, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Number_layers_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Number_layers = { "Number_layers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeoJSONProject, Number_layers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Number_layers_MetaData), Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Number_layers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeoJSONProject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewProp_Number_layers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeoJSONProject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"GeoJSONProject",
		Z_Construct_UScriptStruct_FGeoJSONProject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSONProject_Statics::PropPointers),
		sizeof(FGeoJSONProject),
		alignof(FGeoJSONProject),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSONProject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeoJSONProject_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeoJSONProject_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGeoJSONProject()
	{
		if (!Z_Registration_Info_UScriptStruct_GeoJSONProject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeoJSONProject.InnerSingleton, Z_Construct_UScriptStruct_FGeoJSONProject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeoJSONProject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Polygon;
class UScriptStruct* FPolygon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Polygon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Polygon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygon, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("Polygon"));
	}
	return Z_Registration_Info_UScriptStruct_Polygon.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FPolygon>()
{
	return FPolygon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolygon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (Multi) Polygon Structure ------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Multi) Polygon Structure ------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygon>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPolygon, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygon_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"Polygon",
		Z_Construct_UScriptStruct_FPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygon_Statics::PropPointers),
		sizeof(FPolygon),
		alignof(FPolygon),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolygon_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygon_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPolygon()
	{
		if (!Z_Registration_Info_UScriptStruct_Polygon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Polygon.InnerSingleton, Z_Construct_UScriptStruct_FPolygon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Polygon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolygonGroup;
class UScriptStruct* FPolygonGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolygonGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonGroup, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("PolygonGroup"));
	}
	return Z_Registration_Info_UScriptStruct_PolygonGroup.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FPolygonGroup>()
{
	return FPolygonGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolygonGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonGroup>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons_Inner = { "Polygons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygon, METADATA_PARAMS(0, nullptr) }; // 3963621450
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons = { "Polygons", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPolygonGroup, Polygons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons_MetaData), Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons_MetaData) }; // 3963621450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolygonGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewProp_Polygons,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"PolygonGroup",
		Z_Construct_UScriptStruct_FPolygonGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroup_Statics::PropPointers),
		sizeof(FPolygonGroup),
		alignof(FPolygonGroup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPolygonGroup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_PolygonGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolygonGroup.InnerSingleton, Z_Construct_UScriptStruct_FPolygonGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolygonGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Type_MultiPolygon;
class UScriptStruct* FType_MultiPolygon::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Type_MultiPolygon.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Type_MultiPolygon.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FType_MultiPolygon, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("Type_MultiPolygon"));
	}
	return Z_Registration_Info_UScriptStruct_Type_MultiPolygon.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FType_MultiPolygon>()
{
	return FType_MultiPolygon::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FType_MultiPolygon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CRS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FType_MultiPolygon>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPolygon, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPolygon, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPolygon, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_CRS_MetaData), Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_CRS_MetaData) }; // 2393838010
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups_Inner = { "PolygonGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonGroup, METADATA_PARAMS(0, nullptr) }; // 910430101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups = { "PolygonGroups", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiPolygon, PolygonGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups_MetaData), Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups_MetaData) }; // 910430101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewProp_PolygonGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"Type_MultiPolygon",
		Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::PropPointers),
		sizeof(FType_MultiPolygon),
		alignof(FType_MultiPolygon),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FType_MultiPolygon()
	{
		if (!Z_Registration_Info_UScriptStruct_Type_MultiPolygon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Type_MultiPolygon.InnerSingleton, Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Type_MultiPolygon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Type_MultiLineString;
class UScriptStruct* FType_MultiLineString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Type_MultiLineString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Type_MultiLineString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FType_MultiLineString, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("Type_MultiLineString"));
	}
	return Z_Registration_Info_UScriptStruct_Type_MultiLineString.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FType_MultiLineString>()
{
	return FType_MultiLineString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FType_MultiLineString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CRS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiLineString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (Multi) LineString Structure ------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Data.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Multi) LineString Structure ------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FType_MultiLineString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiLineString, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiLineString, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_CRS_MetaData), Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_CRS_MetaData) }; // 2393838010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiLineString, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups_Inner = { "PolygonGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolygonGroup, METADATA_PARAMS(0, nullptr) }; // 910430101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups_MetaData[] = {
		{ "Category", "Dynamic Struct" },
		{ "ModuleRelativePath", "Data.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups = { "PolygonGroups", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FType_MultiLineString, PolygonGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups_MetaData), Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups_MetaData) }; // 910430101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FType_MultiLineString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewProp_PolygonGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FType_MultiLineString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"Type_MultiLineString",
		Z_Construct_UScriptStruct_FType_MultiLineString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::PropPointers),
		sizeof(FType_MultiLineString),
		alignof(FType_MultiLineString),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FType_MultiLineString_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FType_MultiLineString_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FType_MultiLineString()
	{
		if (!Z_Registration_Info_UScriptStruct_Type_MultiLineString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Type_MultiLineString.InnerSingleton, Z_Construct_UScriptStruct_FType_MultiLineString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Type_MultiLineString.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics::EnumInfo[] = {
		{ ETypes_StaticEnum, TEXT("ETypes"), &Z_Registration_Info_UEnum_ETypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3270796795U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics::ScriptStructInfo[] = {
		{ FCRS_Properties::StaticStruct, Z_Construct_UScriptStruct_FCRS_Properties_Statics::NewStructOps, TEXT("CRS_Properties"), &Z_Registration_Info_UScriptStruct_CRS_Properties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRS_Properties), 3827275101U) },
		{ FCRS::StaticStruct, Z_Construct_UScriptStruct_FCRS_Statics::NewStructOps, TEXT("CRS"), &Z_Registration_Info_UScriptStruct_CRS, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRS), 2393838010U) },
		{ FType_MultiPoint::StaticStruct, Z_Construct_UScriptStruct_FType_MultiPoint_Statics::NewStructOps, TEXT("Type_MultiPoint"), &Z_Registration_Info_UScriptStruct_Type_MultiPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FType_MultiPoint), 728668285U) },
		{ FGeoJSONProject::StaticStruct, Z_Construct_UScriptStruct_FGeoJSONProject_Statics::NewStructOps, TEXT("GeoJSONProject"), &Z_Registration_Info_UScriptStruct_GeoJSONProject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeoJSONProject), 1258614815U) },
		{ FPolygon::StaticStruct, Z_Construct_UScriptStruct_FPolygon_Statics::NewStructOps, TEXT("Polygon"), &Z_Registration_Info_UScriptStruct_Polygon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygon), 3963621450U) },
		{ FPolygonGroup::StaticStruct, Z_Construct_UScriptStruct_FPolygonGroup_Statics::NewStructOps, TEXT("PolygonGroup"), &Z_Registration_Info_UScriptStruct_PolygonGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygonGroup), 910430101U) },
		{ FType_MultiPolygon::StaticStruct, Z_Construct_UScriptStruct_FType_MultiPolygon_Statics::NewStructOps, TEXT("Type_MultiPolygon"), &Z_Registration_Info_UScriptStruct_Type_MultiPolygon, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FType_MultiPolygon), 2368420662U) },
		{ FType_MultiLineString::StaticStruct, Z_Construct_UScriptStruct_FType_MultiLineString_Statics::NewStructOps, TEXT("Type_MultiLineString"), &Z_Registration_Info_UScriptStruct_Type_MultiLineString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FType_MultiLineString), 3815793709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_1000223073(TEXT("/Script/GeoJSON_Importer"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Data_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
