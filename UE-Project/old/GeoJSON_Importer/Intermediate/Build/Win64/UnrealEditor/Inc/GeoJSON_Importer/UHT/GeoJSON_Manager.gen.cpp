// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_Manager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_Manager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_Manager();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_Manager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	DEFINE_FUNCTION(AGeoJSON_Manager::execLoadGeoJSONFiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGeoJSONFiles();
		P_NATIVE_END;
	}
	void AGeoJSON_Manager::StaticRegisterNativesAGeoJSON_Manager()
	{
		UClass* Class = AGeoJSON_Manager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGeoJSONFiles", &AGeoJSON_Manager::execLoadGeoJSONFiles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Execute" },
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoJSON_Manager, nullptr, "LoadGeoJSONFiles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_Manager);
	UClass* Z_Construct_UClass_AGeoJSON_Manager_NoRegister()
	{
		return AGeoJSON_Manager::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filepaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filepaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filepaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeoJSON_Manager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeoJSON_Manager_LoadGeoJSONFiles, "LoadGeoJSONFiles" }, // 2404454822
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_Manager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_Manager.h" },
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths_Inner = { "Filepaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_Manager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths = { "Filepaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_Manager, Filepaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths_MetaData), Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSON_Manager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_Manager_Statics::NewProp_Filepaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_Manager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_Manager_Statics::ClassParams = {
		&AGeoJSON_Manager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeoJSON_Manager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<AGeoJSON_Manager>()
	{
		return AGeoJSON_Manager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_Manager);
	AGeoJSON_Manager::~AGeoJSON_Manager() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Manager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Manager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_Manager, AGeoJSON_Manager::StaticClass, TEXT("AGeoJSON_Manager"), &Z_Registration_Info_UClass_AGeoJSON_Manager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_Manager), 229463677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Manager_h_1302528359(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Manager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Manager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
