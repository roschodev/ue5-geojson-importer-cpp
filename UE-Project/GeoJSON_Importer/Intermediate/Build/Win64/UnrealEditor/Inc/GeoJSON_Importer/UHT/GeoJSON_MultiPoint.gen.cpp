// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_MultiPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_MultiPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_MultiPoint();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_MultiPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	DEFINE_FUNCTION(AGeoJSON_MultiPoint::execLogData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogData();
		P_NATIVE_END;
	}
	void AGeoJSON_MultiPoint::StaticRegisterNativesAGeoJSON_MultiPoint()
	{
		UClass* Class = AGeoJSON_MultiPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogData", &AGeoJSON_MultiPoint::execLogData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoJSON_MultiPoint, nullptr, "LogData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_MultiPoint);
	UClass* Z_Construct_UClass_AGeoJSON_MultiPoint_NoRegister()
	{
		return AGeoJSON_MultiPoint::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_MultiPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeoJSON_MultiPoint_LogData, "LogData" }, // 4048163475
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_MultiPoint.h" },
		{ "ModuleRelativePath", "GeoJSON_MultiPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_MultiPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::ClassParams = {
		&AGeoJSON_MultiPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGeoJSON_MultiPoint()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_MultiPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_MultiPoint.OuterSingleton, Z_Construct_UClass_AGeoJSON_MultiPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_MultiPoint.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<AGeoJSON_MultiPoint>()
	{
		return AGeoJSON_MultiPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_MultiPoint);
	AGeoJSON_MultiPoint::~AGeoJSON_MultiPoint() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_MultiPoint, AGeoJSON_MultiPoint::StaticClass, TEXT("AGeoJSON_MultiPoint"), &Z_Registration_Info_UClass_AGeoJSON_MultiPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_MultiPoint), 1341451452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_2391090971(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
