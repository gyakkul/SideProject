// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDExporterBlueprintLibrary.h"
#include "AnalyticsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDExporterBlueprintLibrary() {}
// Cross Module References
	ANALYTICSBLUEPRINTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAnalyticsEventAttr();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDEXPORTER_API UClass* Z_Construct_UClass_UUsdExporterBlueprintLibrary();
	USDEXPORTER_API UClass* Z_Construct_UClass_UUsdExporterBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUsdExporterBlueprintLibrary::execSendAnalytics)
	{
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attrs);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_bAutomated);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ElapsedSeconds);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_NumberOfFrames);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUsdExporterBlueprintLibrary::SendAnalytics(Z_Param_Out_Attrs,Z_Param_EventName,Z_Param_bAutomated,Z_Param_ElapsedSeconds,Z_Param_NumberOfFrames,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdExporterBlueprintLibrary::execGetInstanceTransforms)
	{
		P_GET_OBJECT(AInstancedFoliageActor,Z_Param_Actor);
		P_GET_OBJECT(UFoliageType,Z_Param_FoliageType);
		P_GET_OBJECT(ULevel,Z_Param_InstancesLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTransform>*)Z_Param__Result=UUsdExporterBlueprintLibrary::GetInstanceTransforms(Z_Param_Actor,Z_Param_FoliageType,Z_Param_InstancesLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdExporterBlueprintLibrary::execGetSource)
	{
		P_GET_OBJECT(UFoliageType,Z_Param_FoliageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UUsdExporterBlueprintLibrary::GetSource(Z_Param_FoliageType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdExporterBlueprintLibrary::execGetUsedFoliageTypes)
	{
		P_GET_OBJECT(AInstancedFoliageActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFoliageType*>*)Z_Param__Result=UUsdExporterBlueprintLibrary::GetUsedFoliageTypes(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdExporterBlueprintLibrary::execGetInstancedFoliageActorForLevel)
	{
		P_GET_UBOOL(Z_Param_bCreateIfNone);
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AInstancedFoliageActor**)Z_Param__Result=UUsdExporterBlueprintLibrary::GetInstancedFoliageActorForLevel(Z_Param_bCreateIfNone,Z_Param_Level);
		P_NATIVE_END;
	}
	void UUsdExporterBlueprintLibrary::StaticRegisterNativesUUsdExporterBlueprintLibrary()
	{
		UClass* Class = UUsdExporterBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancedFoliageActorForLevel", &UUsdExporterBlueprintLibrary::execGetInstancedFoliageActorForLevel },
			{ "GetInstanceTransforms", &UUsdExporterBlueprintLibrary::execGetInstanceTransforms },
			{ "GetSource", &UUsdExporterBlueprintLibrary::execGetSource },
			{ "GetUsedFoliageTypes", &UUsdExporterBlueprintLibrary::execGetUsedFoliageTypes },
			{ "SendAnalytics", &UUsdExporterBlueprintLibrary::execSendAnalytics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics
	{
		struct UsdExporterBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms
		{
			bool bCreateIfNone;
			ULevel* Level;
			AInstancedFoliageActor* ReturnValue;
		};
		static void NewProp_bCreateIfNone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNone;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone_SetBit(void* Obj)
	{
		((UsdExporterBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms*)Obj)->bCreateIfNone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone = { "bCreateIfNone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdExporterBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms), &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms, ReturnValue), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_bCreateIfNone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "CPP_Default_bCreateIfNone", "false" },
		{ "CPP_Default_Level", "None" },
		{ "ModuleRelativePath", "Public/USDExporterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdExporterBlueprintLibrary, nullptr, "GetInstancedFoliageActorForLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::UsdExporterBlueprintLibrary_eventGetInstancedFoliageActorForLevel_Parms), Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics
	{
		struct UsdExporterBlueprintLibrary_eventGetInstanceTransforms_Parms
		{
			AInstancedFoliageActor* Actor;
			UFoliageType* FoliageType;
			ULevel* InstancesLevel;
			TArray<FTransform> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesLevel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetInstanceTransforms_Parms, Actor), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetInstanceTransforms_Parms, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_InstancesLevel = { "InstancesLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetInstanceTransforms_Parms, InstancesLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetInstanceTransforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_FoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_InstancesLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "CPP_Default_InstancesLevel", "None" },
		{ "ModuleRelativePath", "Public/USDExporterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdExporterBlueprintLibrary, nullptr, "GetInstanceTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::UsdExporterBlueprintLibrary_eventGetInstanceTransforms_Parms), Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics
	{
		struct UsdExporterBlueprintLibrary_eventGetSource_Parms
		{
			UFoliageType* FoliageType;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetSource_Parms, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetSource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::NewProp_FoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "ModuleRelativePath", "Public/USDExporterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdExporterBlueprintLibrary, nullptr, "GetSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::UsdExporterBlueprintLibrary_eventGetSource_Parms), Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics
	{
		struct UsdExporterBlueprintLibrary_eventGetUsedFoliageTypes_Parms
		{
			AInstancedFoliageActor* Actor;
			TArray<UFoliageType*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetUsedFoliageTypes_Parms, Actor), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventGetUsedFoliageTypes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "USD Foliage Exporter" },
		{ "ModuleRelativePath", "Public/USDExporterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdExporterBlueprintLibrary, nullptr, "GetUsedFoliageTypes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::UsdExporterBlueprintLibrary_eventGetUsedFoliageTypes_Parms), Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics
	{
		struct UsdExporterBlueprintLibrary_eventSendAnalytics_Parms
		{
			TArray<FAnalyticsEventAttr> Attrs;
			FString EventName;
			bool bAutomated;
			double ElapsedSeconds;
			double NumberOfFrames;
			FString Extension;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attrs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attrs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attrs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_bAutomated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomated;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ElapsedSeconds;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_Inner = { "Attrs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs = { "Attrs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventSendAnalytics_Parms, Attrs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_MetaData)) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventSendAnalytics_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName_MetaData)) };
	void Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated_SetBit(void* Obj)
	{
		((UsdExporterBlueprintLibrary_eventSendAnalytics_Parms*)Obj)->bAutomated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated = { "bAutomated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdExporterBlueprintLibrary_eventSendAnalytics_Parms), &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_ElapsedSeconds = { "ElapsedSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventSendAnalytics_Parms, ElapsedSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventSendAnalytics_Parms, NumberOfFrames), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdExporterBlueprintLibrary_eventSendAnalytics_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Attrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_bAutomated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_ElapsedSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_NumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::NewProp_Extension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "ModuleRelativePath", "Public/USDExporterBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdExporterBlueprintLibrary, nullptr, "SendAnalytics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::UsdExporterBlueprintLibrary_eventSendAnalytics_Parms), Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdExporterBlueprintLibrary);
	UClass* Z_Construct_UClass_UUsdExporterBlueprintLibrary_NoRegister()
	{
		return UUsdExporterBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstancedFoliageActorForLevel, "GetInstancedFoliageActorForLevel" }, // 746306432
		{ &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetInstanceTransforms, "GetInstanceTransforms" }, // 3578981011
		{ &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetSource, "GetSource" }, // 2901282099
		{ &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_GetUsedFoliageTypes, "GetUsedFoliageTypes" }, // 3463669047
		{ &Z_Construct_UFunction_UUsdExporterBlueprintLibrary_SendAnalytics, "SendAnalytics" }, // 2296953637
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Library of functions that can be used via Python scripting to help export Unreal scenes and assets to USD\n */" },
		{ "IncludePath", "USDExporterBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/USDExporterBlueprintLibrary.h" },
		{ "ScriptName", "USDExporterLibrary" },
		{ "ToolTip", "Library of functions that can be used via Python scripting to help export Unreal scenes and assets to USD" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdExporterBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::ClassParams = {
		&UUsdExporterBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdExporterBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UUsdExporterBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdExporterBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UUsdExporterBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdExporterBlueprintLibrary.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UUsdExporterBlueprintLibrary>()
	{
		return UUsdExporterBlueprintLibrary::StaticClass();
	}
	UUsdExporterBlueprintLibrary::UUsdExporterBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdExporterBlueprintLibrary);
	UUsdExporterBlueprintLibrary::~UUsdExporterBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDExporterBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDExporterBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdExporterBlueprintLibrary, UUsdExporterBlueprintLibrary::StaticClass, TEXT("UUsdExporterBlueprintLibrary"), &Z_Registration_Info_UClass_UUsdExporterBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdExporterBlueprintLibrary), 1018041206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDExporterBlueprintLibrary_h_3938571396(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDExporterBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDExporterBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
