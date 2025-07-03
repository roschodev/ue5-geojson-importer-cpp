// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_Functions.h"
#include "GeoJSON_Importer/GeoJSON_FeatureCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_Functions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UGeoJSON_Functions();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_UGeoJSON_Functions_NoRegister();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureCollectionData();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	DEFINE_FUNCTION(UGeoJSON_Functions::execSpawnGrid)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FFeatureCollectionData,Z_Param_Data);
		P_GET_UBOOL_REF(Z_Param_Out_bIsGrid);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_GridCells);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeoJSON_Functions::SpawnGrid(Z_Param_WorldContextObject,Z_Param_Data,Z_Param_Out_bIsGrid,Z_Param_Out_GridCells);
		P_NATIVE_END;
	}
	void UGeoJSON_Functions::StaticRegisterNativesUGeoJSON_Functions()
	{
		UClass* Class = UGeoJSON_Functions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnGrid", &UGeoJSON_Functions::execSpawnGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics
	{
		struct GeoJSON_Functions_eventSpawnGrid_Parms
		{
			UObject* WorldContextObject;
			FFeatureCollectionData Data;
			bool bIsGrid;
			TArray<AActor*> GridCells;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bIsGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridCells_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GridCells;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoJSON_Functions_eventSpawnGrid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoJSON_Functions_eventSpawnGrid_Parms, Data), Z_Construct_UScriptStruct_FFeatureCollectionData, METADATA_PARAMS(0, nullptr) }; // 1516229066
	void Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_bIsGrid_SetBit(void* Obj)
	{
		((GeoJSON_Functions_eventSpawnGrid_Parms*)Obj)->bIsGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_bIsGrid = { "bIsGrid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GeoJSON_Functions_eventSpawnGrid_Parms), &Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_bIsGrid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_GridCells_Inner = { "GridCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_GridCells = { "GridCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoJSON_Functions_eventSpawnGrid_Parms, GridCells), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_bIsGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_GridCells_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::NewProp_GridCells,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GeoJSON_Functions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoJSON_Functions, nullptr, "SpawnGrid", nullptr, nullptr, Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::GeoJSON_Functions_eventSpawnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::GeoJSON_Functions_eventSpawnGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeoJSON_Functions);
	UClass* Z_Construct_UClass_UGeoJSON_Functions_NoRegister()
	{
		return UGeoJSON_Functions::StaticClass();
	}
	struct Z_Construct_UClass_UGeoJSON_Functions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeoJSON_Functions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeoJSON_Functions_SpawnGrid, "SpawnGrid" }, // 1330034138
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGeoJSON_Functions_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UGeoJSON_Functions, UGeoJSON_Functions::StaticClass, TEXT("UGeoJSON_Functions"), &Z_Registration_Info_UClass_UGeoJSON_Functions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeoJSON_Functions), 470636694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_796220451(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_Functions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
