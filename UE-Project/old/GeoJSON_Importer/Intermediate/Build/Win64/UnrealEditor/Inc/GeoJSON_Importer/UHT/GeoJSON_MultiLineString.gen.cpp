// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoJSON_Importer/GeoJSON_MultiLineString.h"
#include "GeoJSON_Importer/Data.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoJSON_MultiLineString() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_MultiLineString();
	GEOJSON_IMPORTER_API UClass* Z_Construct_UClass_AGeoJSON_MultiLineString_NoRegister();
	GEOJSON_IMPORTER_API UEnum* Z_Construct_UEnum_GeoJSON_Importer_ETypes();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FCRS();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FLineString();
	GEOJSON_IMPORTER_API UScriptStruct* Z_Construct_UScriptStruct_FMultiLineStringData();
	UPackage* Z_Construct_UPackage__Script_GeoJSON_Importer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineString;
class UScriptStruct* FLineString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineString, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("LineString"));
	}
	return Z_Registration_Info_UScriptStruct_LineString.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FLineString>()
{
	return FLineString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLineString_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Coordinates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLineString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "LineString" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineString, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "LineString" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineString, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_ValueProp = { "Properties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_Key_KeyProp = { "Properties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineString, Properties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_MetaData), Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates_Inner = { "Coordinates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates_MetaData[] = {
		{ "Category", "LineString" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineString, Coordinates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates_MetaData), Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineString_Statics::NewProp_Coordinates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"LineString",
		Z_Construct_UScriptStruct_FLineString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::PropPointers),
		sizeof(FLineString),
		alignof(FLineString),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineString_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineString_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLineString()
	{
		if (!Z_Registration_Info_UScriptStruct_LineString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineString.InnerSingleton, Z_Construct_UScriptStruct_FLineString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LineString.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiLineStringData;
class UScriptStruct* FMultiLineStringData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiLineStringData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiLineStringData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiLineStringData, (UObject*)Z_Construct_UPackage__Script_GeoJSON_Importer(), TEXT("MultiLineStringData"));
	}
	return Z_Registration_Info_UScriptStruct_MultiLineStringData.OuterSingleton;
}
template<> GEOJSON_IMPORTER_API UScriptStruct* StaticStruct<FMultiLineStringData>()
{
	return FMultiLineStringData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiLineStringData_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LineStrings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLineStringData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiLineStringData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiLineStringData, Type), Z_Construct_UEnum_GeoJSON_Importer_ETypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Type_MetaData) }; // 3270796795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiLineStringData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiLineStringData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Description_MetaData), Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_CRS_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_CRS = { "CRS", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiLineStringData, CRS), Z_Construct_UScriptStruct_FCRS, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_CRS_MetaData), Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_CRS_MetaData) }; // 2393838010
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings_Inner = { "LineStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLineString, METADATA_PARAMS(0, nullptr) }; // 2379905736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings_MetaData[] = {
		{ "Category", "MultiLineStringData" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings = { "LineStrings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiLineStringData, LineStrings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings_MetaData), Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings_MetaData) }; // 2379905736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiLineStringData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_CRS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewProp_LineStrings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiLineStringData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
		nullptr,
		&NewStructOps,
		"MultiLineStringData",
		Z_Construct_UScriptStruct_FMultiLineStringData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::PropPointers),
		sizeof(FMultiLineStringData),
		alignof(FMultiLineStringData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiLineStringData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiLineStringData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMultiLineStringData()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiLineStringData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiLineStringData.InnerSingleton, Z_Construct_UScriptStruct_FMultiLineStringData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiLineStringData.InnerSingleton;
	}
	DEFINE_FUNCTION(AGeoJSON_MultiLineString::execLogData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogData();
		P_NATIVE_END;
	}
	void AGeoJSON_MultiLineString::StaticRegisterNativesAGeoJSON_MultiLineString()
	{
		UClass* Class = AGeoJSON_MultiLineString::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LogData", &AGeoJSON_MultiLineString::execLogData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Log GeoJSON data\n" },
#endif
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log GeoJSON data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeoJSON_MultiLineString, nullptr, "LogData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeoJSON_MultiLineString);
	UClass* Z_Construct_UClass_AGeoJSON_MultiLineString_NoRegister()
	{
		return AGeoJSON_MultiLineString::StaticClass();
	}
	struct Z_Construct_UClass_AGeoJSON_MultiLineString_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoJSON_Importer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeoJSON_MultiLineString_LogData, "LogData" }, // 1649787545
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoJSON_MultiLineString.h" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::NewProp_FData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "GeoJSON_MultiLineString.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::NewProp_FData = { "FData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGeoJSON_MultiLineString, FData), Z_Construct_UScriptStruct_FMultiLineStringData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::NewProp_FData_MetaData), Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::NewProp_FData_MetaData) }; // 3032897843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::NewProp_FData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeoJSON_MultiLineString>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::ClassParams = {
		&AGeoJSON_MultiLineString::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::Class_MetaDataParams), Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGeoJSON_MultiLineString()
	{
		if (!Z_Registration_Info_UClass_AGeoJSON_MultiLineString.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeoJSON_MultiLineString.OuterSingleton, Z_Construct_UClass_AGeoJSON_MultiLineString_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeoJSON_MultiLineString.OuterSingleton;
	}
	template<> GEOJSON_IMPORTER_API UClass* StaticClass<AGeoJSON_MultiLineString>()
	{
		return AGeoJSON_MultiLineString::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeoJSON_MultiLineString);
	AGeoJSON_MultiLineString::~AGeoJSON_MultiLineString() {}
	struct Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics::ScriptStructInfo[] = {
		{ FLineString::StaticStruct, Z_Construct_UScriptStruct_FLineString_Statics::NewStructOps, TEXT("LineString"), &Z_Registration_Info_UScriptStruct_LineString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineString), 2379905736U) },
		{ FMultiLineStringData::StaticStruct, Z_Construct_UScriptStruct_FMultiLineStringData_Statics::NewStructOps, TEXT("MultiLineStringData"), &Z_Registration_Info_UScriptStruct_MultiLineStringData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiLineStringData), 3032897843U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeoJSON_MultiLineString, AGeoJSON_MultiLineString::StaticClass, TEXT("AGeoJSON_MultiLineString"), &Z_Registration_Info_UClass_AGeoJSON_MultiLineString, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeoJSON_MultiLineString), 1511237444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_2299663024(TEXT("/Script/GeoJSON_Importer"),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GeoJSON_Importer_Source_GeoJSON_Importer_GeoJSON_MultiLineString_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
