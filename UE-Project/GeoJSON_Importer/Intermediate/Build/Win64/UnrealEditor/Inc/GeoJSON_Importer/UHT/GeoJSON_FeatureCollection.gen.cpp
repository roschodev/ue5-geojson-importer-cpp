// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_FeatureCollection.h"
#include "GeoJSON_Importer/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_FeatureCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_FeatureCollection();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_FeatureCollection_NoRegister();
	GEOJSON_IMPORTER_API UEnum* Z_Construct_UEnum_GeoJSON_Importer_ETypes();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCRS();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FFeature();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureCollectionData();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Feature;
class UScriptStruct* FFeature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Feature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Feature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeature, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("Feature"));
	}
	return Z_Registration_Info_UScriptStruct_Feature.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FFeature>()
{
	return FFeature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFeature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Geometry_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeature>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeature, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeature, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_ValueProp = { "Properties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_Key_KeyProp = { "Properties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeature, Properties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_MetaData), Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry_Inner = { "Geometry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeature, Geometry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry_MetaData), Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeature_Statics::NewProp_Geometry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"Feature",
		Z_Construct_UScriptStruct_FFeature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::PropPointers),
		sizeof(FFeature),
		alignof(FFeature),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFeature_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeature_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFeature()
	{
		if (!Z_Registration_Info_UScriptStruct_Feature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Feature.InnerSingleton, Z_Construct_UScriptStruct_FFeature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Feature.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FeatureCollectionData;
class UScriptStruct* FFeatureCollectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FeatureCollectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FeatureCollectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeatureCollectionData, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("FeatureCollectionData"));
	}
	return Z_Registration_Info_UScriptStruct_FeatureCollectionData.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FFeatureCollectionData>()
{
	return FFeatureCollectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFeatureCollectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CRS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Features_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeatureCollectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeatureCollectionData, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeatureCollectionData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeatureCollectionData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeatureCollectionData, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_CRS_MetaData), Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_CRS_MetaData) }; // 2393838010
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFeature, METADATA_PARAMS(0, nullptr) }; // 3971357167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFeatureCollectionData, Features), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features_MetaData), Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features_MetaData) }; // 3971357167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewProp_Features,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"FeatureCollectionData",
		Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::PropPointers),
		sizeof(FFeatureCollectionData),
		alignof(FFeatureCollectionData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFeatureCollectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_FeatureCollectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FeatureCollectionData.InnerSingleton, Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FeatureCollectionData.InnerSingleton;
	}
	DEFINE_FUNCTION(AGeoJSON_FeatureCollection::execLogData)
	{
		P_GET_STRUCT(FFeatureCollectionData,Z_Param_d);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogData(Z_Param_d);
		P_NATIVE_END;
	}
	void AGeoJSON_FeatureCollection::StaticRegisterNativesAGeoJSON_FeatureCollection()
	{
		UClass* Class = AGeoJSON_FeatureCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogData", &AGeoJSON_FeatureCollection::execLogData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics
	{
		struct GeoJSON_FeatureCollection_eventLogData_Parms
		{
			FFeatureCollectionData d;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_d;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::NewProp_d = { "d", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GeoJSON_FeatureCollection_eventLogData_Parms, d), Z_Construct_UScriptStruct_FFeatureCollectionData, METADATA_PARAMS(0, nullptr) }; // 1516229066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::NewProp_d,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoJSON_FeatureCollection, nullptr, "LogData", nullptr, nullptr, Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::GeoJSON_FeatureCollection_eventLogData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::GeoJSON_FeatureCollection_eventLogData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_FeatureCollection);
	UClass* Z_Construct_UClass_AGeoJSON_FeatureCollection_NoRegister()
	{
		return AGeoJSON_FeatureCollection::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPointType_MetaData[];
#endif
		static void NewProp_bAllowPointType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPointType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPolygonType_MetaData[];
#endif
		static void NewProp_bAllowPolygonType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPolygonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLineStringType_MetaData[];
#endif
		static void NewProp_bAllowLineStringType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLineStringType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCollectionTypes_MetaData[];
#endif
		static void NewProp_bAllowCollectionTypes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCollectionTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeoJSON_FeatureCollection_LogData, "LogData" }, // 2435088084
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_FeatureCollection.h" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType_MetaData[] = {
		{ "Category", "Filters|Allowed Types" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	void Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType_SetBit(void* Obj)
	{
		((AGeoJSON_FeatureCollection*)Obj)->bAllowPointType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType = { "bAllowPointType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoJSON_FeatureCollection), &Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType_MetaData), Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType_MetaData[] = {
		{ "Category", "Filters|Allowed Types" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	void Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType_SetBit(void* Obj)
	{
		((AGeoJSON_FeatureCollection*)Obj)->bAllowPolygonType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType = { "bAllowPolygonType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoJSON_FeatureCollection), &Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType_MetaData), Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType_MetaData[] = {
		{ "Category", "Filters|Allowed Types" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	void Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType_SetBit(void* Obj)
	{
		((AGeoJSON_FeatureCollection*)Obj)->bAllowLineStringType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType = { "bAllowLineStringType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoJSON_FeatureCollection), &Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType_MetaData), Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes_MetaData[] = {
		{ "Category", "Filters|Allowed Types" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	void Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes_SetBit(void* Obj)
	{
		((AGeoJSON_FeatureCollection*)Obj)->bAllowCollectionTypes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes = { "bAllowCollectionTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGeoJSON_FeatureCollection), &Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes_MetaData), Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_FData_MetaData[] = {
		{ "Category", "GeoJSON_FeatureCollection" },
		{ "ModuleRelativePath", "GeoJSON_FeatureCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_FData = { "FData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_FeatureCollection, FData), Z_Construct_UScriptStruct_FFeatureCollectionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_FData_MetaData), Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_FData_MetaData) }; // 1516229066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPointType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowPolygonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowLineStringType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_bAllowCollectionTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::NewProp_FData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_FeatureCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::ClassParams = {
		&AGeoJSON_FeatureCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSON_FeatureCollection()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_FeatureCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_FeatureCollection.OuterSingleton, Z_Construct_UClass_AGeoJSON_FeatureCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_FeatureCollection.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<AGeoJSON_FeatureCollection>()
	{
		return AGeoJSON_FeatureCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_FeatureCollection);
	AGeoJSON_FeatureCollection::~AGeoJSON_FeatureCollection() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics::ScriptStructInfo[] = {
		{ FFeature::StaticStruct, Z_Construct_UScriptStruct_FFeature_Statics::NewStructOps, TEXT("Feature"), &Z_Registration_Info_UScriptStruct_Feature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeature), 3971357167U) },
		{ FFeatureCollectionData::StaticStruct, Z_Construct_UScriptStruct_FFeatureCollectionData_Statics::NewStructOps, TEXT("FeatureCollectionData"), &Z_Registration_Info_UScriptStruct_FeatureCollectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeatureCollectionData), 1516229066U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_FeatureCollection, AGeoJSON_FeatureCollection::StaticClass, TEXT("AGeoJSON_FeatureCollection"), &Z_Registration_Info_UClass_AGeoJSON_FeatureCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_FeatureCollection), 1687713531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_1832665410(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_FeatureCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
