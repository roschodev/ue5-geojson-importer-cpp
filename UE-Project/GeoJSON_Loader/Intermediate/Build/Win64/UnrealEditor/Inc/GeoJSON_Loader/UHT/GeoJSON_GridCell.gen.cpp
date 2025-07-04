// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Loader/GeoJSON_GridCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_GridCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GEOJSON_LOADER_API UClass* Z_Construct_UClass_AGeoJSON_GridCell();
	GEOJSON_LOADER_API UClass* Z_Construct_UClass_AGeoJSON_GridCell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Loader();
// End Cross Module References
	void AGeoJSON_GridCell::StaticRegisterNativesAGeoJSON_GridCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_GridCell);
	UClass* Z_Construct_UClass_AGeoJSON_GridCell_NoRegister()
	{
		return AGeoJSON_GridCell::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_GridCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_GridCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Loader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_GridCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_GridCell.h" },
		{ "ModuleRelativePath", "GeoJSON_GridCell.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GeoJSON_GridCell.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_GridCell, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_SceneRoot_MetaData), Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_SceneRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSON_GridCell.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_GridCell, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_Code_MetaData), Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_Code_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSON_GridCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_GridCell_Statics::NewProp_Code,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_GridCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_GridCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_GridCell_Statics::ClassParams = {
		&AGeoJSON_GridCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeoJSON_GridCell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_GridCell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSON_GridCell()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_GridCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_GridCell.OuterSingleton, Z_Construct_UClass_AGeoJSON_GridCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_GridCell.OuterSingleton;
	}
	template<> GEOJSON_LOADER_API UClass* StaticClass<AGeoJSON_GridCell>()
	{
		return AGeoJSON_GridCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_GridCell);
	AGeoJSON_GridCell::~AGeoJSON_GridCell() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_GridCell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_GridCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_GridCell, AGeoJSON_GridCell::StaticClass, TEXT("AGeoJSON_GridCell"), &Z_Registration_Info_UClass_AGeoJSON_GridCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_GridCell), 2065420376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_GridCell_h_1722002733(TEXT("/Script/GeoJSON_Loader"),
		Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_GridCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_GridCell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
