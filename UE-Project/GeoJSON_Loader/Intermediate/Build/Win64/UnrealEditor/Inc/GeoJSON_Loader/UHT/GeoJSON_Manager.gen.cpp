// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Loader/GeoJSON_Manager.h"
#include "GeoJSON_Loader/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_Manager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GEOJSON_LOADER_API UClass* Z_Construct_UClass_AGeoJSON_Manager();
	GEOJSON_LOADER_API UClass* Z_Construct_UClass_AGeoJSON_Manager_NoRegister();
	GEOJSON_LOADER_API UScriptStruct* Z_Construct_UScriptStruct_FGeoJSON_Layer();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Loader();
// End Cross Module References
	void AGeoJSON_Manager::StaticRegisterNativesAGeoJSON_Manager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_Manager);
	UClass* Z_Construct_UClass_AGeoJSON_Manager_NoRegister()
	{
		return AGeoJSON_Manager::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeoJSON_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeoJSON_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeoJSON_Layers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Loader,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_Manager.h" },
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_Manager, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_SceneRoot_MetaData), Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_SceneRoot_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths_MetaData[] = {
		{ "Category", "GeoJSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Input Variables\n" },
#endif
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Variables" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_Manager, FilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths_MetaData), Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers_Inner = { "GeoJSON_Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGeoJSON_Layer, METADATA_PARAMS(0, nullptr) }; // 3836627061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers_MetaData[] = {
		{ "Category", "GeoJSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Converted Filepath array to structure\n" },
#endif
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converted Filepath array to structure" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers = { "GeoJSON_Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_Manager, GeoJSON_Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers_MetaData), Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers_MetaData) }; // 3836627061
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSON_Manager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_FilePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_GeoJSON_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_Manager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_Manager_Statics::ClassParams = {
		&AGeoJSON_Manager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeoJSON_Manager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_Manager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSON_Manager()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_Manager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_Manager.OuterSingleton, Z_Construct_UClass_AGeoJSON_Manager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_Manager.OuterSingleton;
	}
	template<> GEOJSON_LOADER_API UClass* StaticClass<AGeoJSON_Manager>()
	{
		return AGeoJSON_Manager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_Manager);
	AGeoJSON_Manager::~AGeoJSON_Manager() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_Manager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_Manager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_Manager, AGeoJSON_Manager::StaticClass, TEXT("AGeoJSON_Manager"), &Z_Registration_Info_UClass_AGeoJSON_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_Manager), 1294619479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_Manager_h_2306307172(TEXT("/Script/GeoJSON_Loader"),
		Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Loader_Source_GeoJSON_Loader_GeoJSON_Manager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
