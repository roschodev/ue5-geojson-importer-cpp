// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/Entry_Point.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntry_Point() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UEntry_Point();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UEntry_Point_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	void UEntry_Point::StaticRegisterNativesUEntry_Point()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntry_Point);
	UClass* Z_Construct_UClass_UEntry_Point_NoRegister()
	{
		return UEntry_Point::StaticClass();
	}
	struct Z_Construct_UClass_UEntry_Point_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEntry_Point_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_Point_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEntry_Point_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Entry_Point.h" },
		{ "ModuleRelativePath", "Entry_Point.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEntry_Point_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntry_Point>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntry_Point_Statics::ClassParams = {
		&UEntry_Point::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntry_Point_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntry_Point_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEntry_Point()
	{
		if (!Z_Registration_Info_UClass_UEntry_Point.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntry_Point.OuterSingleton, Z_Construct_UClass_UEntry_Point_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEntry_Point.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<UEntry_Point>()
	{
		return UEntry_Point::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEntry_Point);
	UEntry_Point::~UEntry_Point() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_Point_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_Point_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEntry_Point, UEntry_Point::StaticClass, TEXT("UEntry_Point"), &Z_Registration_Info_UClass_UEntry_Point, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntry_Point), 1485092228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_Point_h_3953821723(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_Point_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_Entry_Point_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
