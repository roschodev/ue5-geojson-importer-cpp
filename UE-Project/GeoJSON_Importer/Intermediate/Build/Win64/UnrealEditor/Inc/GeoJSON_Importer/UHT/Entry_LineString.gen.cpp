// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/Entry_LineString.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntry_LineString() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UEntry_LineString();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UEntry_LineString_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	void UEntry_LineString::StaticRegisterNativesUEntry_LineString()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntry_LineString);
	UClass* Z_Construct_UClass_UEntry_LineString_NoRegister()
	{
		return UEntry_LineString::StaticClass();
	}
	struct Z_Construct_UClass_UEntry_LineString_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntry_LineString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_LineString_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntry_LineString_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Entry_LineString.h" },
		{ "ModuleRelativePath", "Entry_LineString.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntry_LineString_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Entry_LineString" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Entry_LineString.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntry_LineString_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntry_LineString, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_LineString_Statics::NewProp_CubeMesh_MetaData), Z_Construct_UClass_UEntry_LineString_Statics::NewProp_CubeMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntry_LineString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntry_LineString_Statics::NewProp_CubeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntry_LineString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntry_LineString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntry_LineString_Statics::ClassParams = {
		&UEntry_LineString::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEntry_LineString_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_LineString_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_LineString_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntry_LineString_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_LineString_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEntry_LineString()
	{
		if (!Z_Registration_Info_UClass_UEntry_LineString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntry_LineString.OuterSingleton, Z_Construct_UClass_UEntry_LineString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntry_LineString.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<UEntry_LineString>()
	{
		return UEntry_LineString::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntry_LineString);
	UEntry_LineString::~UEntry_LineString() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_LineString_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_LineString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntry_LineString, UEntry_LineString::StaticClass, TEXT("UEntry_LineString"), &Z_Registration_Info_UClass_UEntry_LineString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntry_LineString), 3831458637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_LineString_h_2163758986(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_LineString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_LineString_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
