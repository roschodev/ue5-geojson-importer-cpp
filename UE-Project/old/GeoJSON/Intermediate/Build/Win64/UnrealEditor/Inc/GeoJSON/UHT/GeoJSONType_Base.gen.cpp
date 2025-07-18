// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON/GeoJSONType_Base.h"
#include "GeoJSON/GeoJsonData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSONType_Base() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_Base();
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_Base_NoRegister();
	GEOJSON_API UEnum* Z_Construct_UEnum_GeoJSON_ETypes();
	GEOJSON_API UScriptStruct* Z_Construct_UScriptStruct_FCRS();
	UPackage* Z_Construct_UPackage__Script_GeoJSON();
// End Cross Module References
	void AGeoJSONType_Base::StaticRegisterNativesAGeoJSONType_Base()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSONType_Base);
	UClass* Z_Construct_UClass_AGeoJSONType_Base_NoRegister()
	{
		return AGeoJSONType_Base::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSONType_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CRS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeoJSONString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeoJSONString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSONType_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_Base_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSONType_Base.h" },
		{ "ModuleRelativePath", "GeoJSONType_Base.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSONType_Base.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSONType_Base, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Name_MetaData), Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSONType_Base.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSONType_Base, Type), Z_Construct_UEnum_GeoJSON_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Type_MetaData), Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Type_MetaData) }; // 3333960471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSONType_Base.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSONType_Base, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_CRS_MetaData), Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_CRS_MetaData) }; // 4044810415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_GeoJSONString_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSONType_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_GeoJSONString = { "GeoJSONString", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSONType_Base, GeoJSONString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_GeoJSONString_MetaData), Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_GeoJSONString_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSONType_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSONType_Base, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Path_MetaData), Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Path_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSONType_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_GeoJSONString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSONType_Base_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSONType_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSONType_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSONType_Base_Statics::ClassParams = {
		&AGeoJSONType_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeoJSONType_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSONType_Base_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_Base_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSONType_Base()
	{
		if (!Z_Registration_Info_UClass_AGeoJSONType_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSONType_Base.OuterSingleton, Z_Construct_UClass_AGeoJSONType_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSONType_Base.OuterSingleton;
	}
	template<> GEOJSON_API UClass* StaticClass<AGeoJSONType_Base>()
	{
		return AGeoJSONType_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSONType_Base);
	AGeoJSONType_Base::~AGeoJSONType_Base() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_Base_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSONType_Base, AGeoJSONType_Base::StaticClass, TEXT("AGeoJSONType_Base"), &Z_Registration_Info_UClass_AGeoJSONType_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSONType_Base), 138819221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_Base_h_1947727920(TEXT("/Script/GeoJSON"),
		Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_Base_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
