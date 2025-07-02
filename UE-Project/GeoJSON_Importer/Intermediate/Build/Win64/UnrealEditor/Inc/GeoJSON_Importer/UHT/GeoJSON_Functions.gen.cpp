// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_Functions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_Functions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UGeoJSON_Functions();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UGeoJSON_Functions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	void UGeoJSON_Functions::StaticRegisterNativesUGeoJSON_Functions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeoJSON_Functions);
	UClass* Z_Construct_UClass_UGeoJSON_Functions_NoRegister()
	{
		return UGeoJSON_Functions::StaticClass();
	}
	struct Z_Construct_UClass_UGeoJSON_Functions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeoJSON_Functions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeoJSON_Functions_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeoJSON_Functions_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GeoJSON_Functions.h" },
		{ "ModuleRelativePath", "GeoJSON_Functions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeoJSON_Functions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeoJSON_Functions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeoJSON_Functions_Statics::ClassParams = {
		&UGeoJSON_Functions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGeoJSON_Functions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGeoJSON_Functions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGeoJSON_Functions()
	{
		if (!Z_Registration_Info_UClass_UGeoJSON_Functions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeoJSON_Functions.OuterSingleton, Z_Construct_UClass_UGeoJSON_Functions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeoJSON_Functions.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<UGeoJSON_Functions>()
	{
		return UGeoJSON_Functions::StaticClass();
	}
	UGeoJSON_Functions::UGeoJSON_Functions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeoJSON_Functions);
	UGeoJSON_Functions::~UGeoJSON_Functions() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeoJSON_Functions, UGeoJSON_Functions::StaticClass, TEXT("UGeoJSON_Functions"), &Z_Registration_Info_UClass_UGeoJSON_Functions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeoJSON_Functions), 4106761667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_353758082(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
