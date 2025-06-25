// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON/GeoJSONType_MultiPolygon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSONType_MultiPolygon() {}
// Cross Module References
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_Base();
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_MultiPolygon();
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_MultiPolygon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON();
// End Cross Module References
	void AGeoJSONType_MultiPolygon::StaticRegisterNativesAGeoJSONType_MultiPolygon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSONType_MultiPolygon);
	UClass* Z_Construct_UClass_AGeoJSONType_MultiPolygon_NoRegister()
	{
		return AGeoJSONType_MultiPolygon::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeoJSONType_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GeoJSONType_MultiPolygon.h" },
		{ "ModuleRelativePath", "GeoJSONType_MultiPolygon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSONType_MultiPolygon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::ClassParams = {
		&AGeoJSONType_MultiPolygon::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGeoJSONType_MultiPolygon()
	{
		if (!Z_Registration_Info_UClass_AGeoJSONType_MultiPolygon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSONType_MultiPolygon.OuterSingleton, Z_Construct_UClass_AGeoJSONType_MultiPolygon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSONType_MultiPolygon.OuterSingleton;
	}
	template<> GEOJSON_API UClass* StaticClass<AGeoJSONType_MultiPolygon>()
	{
		return AGeoJSONType_MultiPolygon::StaticClass();
	}
	AGeoJSONType_MultiPolygon::AGeoJSONType_MultiPolygon() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSONType_MultiPolygon);
	AGeoJSONType_MultiPolygon::~AGeoJSONType_MultiPolygon() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPolygon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPolygon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSONType_MultiPolygon, AGeoJSONType_MultiPolygon::StaticClass, TEXT("AGeoJSONType_MultiPolygon"), &Z_Registration_Info_UClass_AGeoJSONType_MultiPolygon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSONType_MultiPolygon), 4273297472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPolygon_h_1935421655(TEXT("/Script/GeoJSON"),
		Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPolygon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPolygon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
