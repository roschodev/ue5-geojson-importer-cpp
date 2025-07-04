// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON/GeoJSONType_MultiPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSONType_MultiPoint() {}
// Cross Module References
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_Base();
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_MultiPoint();
	GEOJSON_API UClass* Z_Construct_UClass_AGeoJSONType_MultiPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON();
// End Cross Module References
	void AGeoJSONType_MultiPoint::StaticRegisterNativesAGeoJSONType_MultiPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSONType_MultiPoint);
	UClass* Z_Construct_UClass_AGeoJSONType_MultiPoint_NoRegister()
	{
		return AGeoJSONType_MultiPoint::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testvar_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_testvar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeoJSONType_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GeoJSONType_MultiPoint.h" },
		{ "ModuleRelativePath", "GeoJSONType_MultiPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::NewProp_testvar_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "GeoJSONType_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::NewProp_testvar = { "testvar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSONType_MultiPoint, testvar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::NewProp_testvar_MetaData), Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::NewProp_testvar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::NewProp_testvar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSONType_MultiPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::ClassParams = {
		&AGeoJSONType_MultiPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSONType_MultiPoint()
	{
		if (!Z_Registration_Info_UClass_AGeoJSONType_MultiPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSONType_MultiPoint.OuterSingleton, Z_Construct_UClass_AGeoJSONType_MultiPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSONType_MultiPoint.OuterSingleton;
	}
	template<> GEOJSON_API UClass* StaticClass<AGeoJSONType_MultiPoint>()
	{
		return AGeoJSONType_MultiPoint::StaticClass();
	}
	AGeoJSONType_MultiPoint::AGeoJSONType_MultiPoint() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSONType_MultiPoint);
	AGeoJSONType_MultiPoint::~AGeoJSONType_MultiPoint() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSONType_MultiPoint, AGeoJSONType_MultiPoint::StaticClass, TEXT("AGeoJSONType_MultiPoint"), &Z_Registration_Info_UClass_AGeoJSONType_MultiPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSONType_MultiPoint), 2232470660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPoint_h_678822311(TEXT("/Script/GeoJSON"),
		Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_GeoJSONType_MultiPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
