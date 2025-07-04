// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON/BPL_GeoJSON.h"
#include "GeoJSON/GeoJsonData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPL_GeoJSON() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOJSON_API UClass* Z_Construct_UClass_UBPL_GeoJSON();
	GEOJSON_API UClass* Z_Construct_UClass_UBPL_GeoJSON_NoRegister();
	GEOJSON_API UEnum* Z_Construct_UEnum_GeoJSON_ETypes();
	GEOJSON_API UScriptStruct* Z_Construct_UScriptStruct_FCRS();
	UPackage* Z_Construct_UPackage__Script_GeoJSON();
// End Cross Module References
	void UBPL_GeoJSON::StaticRegisterNativesUBPL_GeoJSON()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPL_GeoJSON);
	UClass* Z_Construct_UClass_UBPL_GeoJSON_NoRegister()
	{
		return UBPL_GeoJSON::StaticClass();
	}
	struct Z_Construct_UClass_UBPL_GeoJSON_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPL_GeoJSON_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPL_GeoJSON_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPL_GeoJSON.h" },
		{ "ModuleRelativePath", "BPL_GeoJSON.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "BPL_GeoJSON.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPL_GeoJSON, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "BPL_GeoJSON.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPL_GeoJSON, Type), Z_Construct_UEnum_GeoJSON_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Type_MetaData) }; // 3333960471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "GeoJSON" },
		{ "ModuleRelativePath", "BPL_GeoJSON.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBPL_GeoJSON, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_CRS_MetaData), Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_CRS_MetaData) }; // 4044810415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBPL_GeoJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBPL_GeoJSON_Statics::NewProp_CRS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPL_GeoJSON_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPL_GeoJSON>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPL_GeoJSON_Statics::ClassParams = {
		&UBPL_GeoJSON::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBPL_GeoJSON_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPL_GeoJSON_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPL_GeoJSON_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBPL_GeoJSON()
	{
		if (!Z_Registration_Info_UClass_UBPL_GeoJSON.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPL_GeoJSON.OuterSingleton, Z_Construct_UClass_UBPL_GeoJSON_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPL_GeoJSON.OuterSingleton;
	}
	template<> GEOJSON_API UClass* StaticClass<UBPL_GeoJSON>()
	{
		return UBPL_GeoJSON::StaticClass();
	}
	UBPL_GeoJSON::UBPL_GeoJSON(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPL_GeoJSON);
	UBPL_GeoJSON::~UBPL_GeoJSON() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_BPL_GeoJSON_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_BPL_GeoJSON_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPL_GeoJSON, UBPL_GeoJSON::StaticClass, TEXT("UBPL_GeoJSON"), &Z_Registration_Info_UClass_UBPL_GeoJSON, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPL_GeoJSON), 1500829104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_BPL_GeoJSON_h_4143559803(TEXT("/Script/GeoJSON"),
		Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_BPL_GeoJSON_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Source_GeoJSON_BPL_GeoJSON_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
