// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_GridCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_GridCell() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_GridCell();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_GridCell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_GridCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_GridCell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_GridCell.h" },
		{ "ModuleRelativePath", "GeoJSON_GridCell.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_GridCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_GridCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_GridCell_Statics::ClassParams = {
		&AGeoJSON_GridCell::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_GridCell_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_GridCell_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGeoJSON_GridCell()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_GridCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_GridCell.OuterSingleton, Z_Construct_UClass_AGeoJSON_GridCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_GridCell.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<AGeoJSON_GridCell>()
	{
		return AGeoJSON_GridCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_GridCell);
	AGeoJSON_GridCell::~AGeoJSON_GridCell() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_GridCell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_GridCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_GridCell, AGeoJSON_GridCell::StaticClass, TEXT("AGeoJSON_GridCell"), &Z_Registration_Info_UClass_AGeoJSON_GridCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_GridCell), 2138564184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_GridCell_h_1636292810(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_GridCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_GridCell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
