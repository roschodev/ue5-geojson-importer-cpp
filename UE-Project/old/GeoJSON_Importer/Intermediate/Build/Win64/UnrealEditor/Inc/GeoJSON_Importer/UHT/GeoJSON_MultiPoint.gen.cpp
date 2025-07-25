// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_MultiPoint.h"
#include "GeoJSON_Importer/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_MultiPoint() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_MultiPoint();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_MultiPoint_NoRegister();
	GEOJSON_IMPORTER_API UEnum* Z_Construct_UEnum_GeoJSON_Importer_ETypes();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCRS();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FMultiPointData();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FPoint();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Point;
class UScriptStruct* FPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Point.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Point.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoint, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("Point"));
	}
	return Z_Registration_Info_UScriptStruct_Point.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FPoint>()
{
	return FPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoint_Statics
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
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_ValueProp = { "Properties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_Key_KeyProp = { "Properties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, Properties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_MetaData), Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoint, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Coordinates_MetaData), Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Coordinates_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoint_Statics::NewProp_Coordinates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"Point",
		Z_Construct_UScriptStruct_FPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::PropPointers),
		sizeof(FPoint),
		alignof(FPoint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_Point.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Point.InnerSingleton, Z_Construct_UScriptStruct_FPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Point.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiPointData;
class UScriptStruct* FMultiPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiPointData, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("MultiPointData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiPointData.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FMultiPointData>()
{
	return FMultiPointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiPointData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiPointData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiPointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPointData, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPointData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPointData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPointData, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_CRS_MetaData), Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_CRS_MetaData) }; // 2393838010
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoint, METADATA_PARAMS(0, nullptr) }; // 1479238264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "MultiPointData" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiPointData, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points_MetaData), Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points_MetaData) }; // 1479238264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiPointData_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"MultiPointData",
		Z_Construct_UScriptStruct_FMultiPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::PropPointers),
		sizeof(FMultiPointData),
		alignof(FMultiPointData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiPointData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiPointData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMultiPointData()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiPointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiPointData.InnerSingleton, Z_Construct_UScriptStruct_FMultiPointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiPointData.InnerSingleton;
	}
	void AGeoJSON_MultiPoint::StaticRegisterNativesAGeoJSON_MultiPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_MultiPoint);
	UClass* Z_Construct_UClass_AGeoJSON_MultiPoint_NoRegister()
	{
		return AGeoJSON_MultiPoint::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_MultiPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_MultiPoint.h" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::NewProp_FData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::NewProp_FData = { "FData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_MultiPoint, FData), Z_Construct_UScriptStruct_FMultiPointData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::NewProp_FData_MetaData), Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::NewProp_FData_MetaData) }; // 221342615
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::NewProp_FData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_MultiPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::ClassParams = {
		&AGeoJSON_MultiPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSON_MultiPoint()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_MultiPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_MultiPoint.OuterSingleton, Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_MultiPoint.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<AGeoJSON_MultiPoint>()
	{
		return AGeoJSON_MultiPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_MultiPoint);
	AGeoJSON_MultiPoint::~AGeoJSON_MultiPoint() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ScriptStructInfo[] = {
		{ FPoint::StaticStruct, Z_Construct_UScriptStruct_FPoint_Statics::NewStructOps, TEXT("Point"), &Z_Registration_Info_UScriptStruct_Point, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoint), 1479238264U) },
		{ FMultiPointData::StaticStruct, Z_Construct_UScriptStruct_FMultiPointData_Statics::NewStructOps, TEXT("MultiPointData"), &Z_Registration_Info_UScriptStruct_MultiPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiPointData), 221342615U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_MultiPoint, AGeoJSON_MultiPoint::StaticClass, TEXT("AGeoJSON_MultiPoint"), &Z_Registration_Info_UClass_AGeoJSON_MultiPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_MultiPoint), 81361776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_3571230484(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
