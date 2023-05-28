// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryInstanceBlueprintWrapper() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryItemType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) }; // 3316766208
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "EQSQueryDoneSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms), Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UEnvQueryInstanceBlueprintWrapper::FEQSQueryDoneSignature_DelegateWrapper(const FMulticastScriptDelegate& EQSQueryDoneSignature, UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus::Type QueryStatus)
{
	struct EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms
	{
		UEnvQueryInstanceBlueprintWrapper* QueryInstance;
		TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
	};
	EnvQueryInstanceBlueprintWrapper_eventEQSQueryDoneSignature_Parms Parms;
	Parms.QueryInstance=QueryInstance;
	Parms.QueryStatus=QueryStatus;
	EQSQueryDoneSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEnvQueryInstanceBlueprintWrapper::execSetNamedParam)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNamedParam(Z_Param_ParamName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnvQueryInstanceBlueprintWrapper::execGetResultsAsLocations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetResultsAsLocations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnvQueryInstanceBlueprintWrapper::execGetResultsAsActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetResultsAsActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnvQueryInstanceBlueprintWrapper::execGetQueryResultsAsLocations)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ResultLocations);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryResultsAsLocations(Z_Param_Out_ResultLocations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnvQueryInstanceBlueprintWrapper::execGetQueryResultsAsActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ResultActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQueryResultsAsActors(Z_Param_Out_ResultActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnvQueryInstanceBlueprintWrapper::execGetItemScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetItemScore(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	void UEnvQueryInstanceBlueprintWrapper::StaticRegisterNativesUEnvQueryInstanceBlueprintWrapper()
	{
		UClass* Class = UEnvQueryInstanceBlueprintWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemScore", &UEnvQueryInstanceBlueprintWrapper::execGetItemScore },
			{ "GetQueryResultsAsActors", &UEnvQueryInstanceBlueprintWrapper::execGetQueryResultsAsActors },
			{ "GetQueryResultsAsLocations", &UEnvQueryInstanceBlueprintWrapper::execGetQueryResultsAsLocations },
			{ "GetResultsAsActors", &UEnvQueryInstanceBlueprintWrapper::execGetResultsAsActors },
			{ "GetResultsAsLocations", &UEnvQueryInstanceBlueprintWrapper::execGetResultsAsLocations },
			{ "SetNamedParam", &UEnvQueryInstanceBlueprintWrapper::execSetNamedParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms
		{
			int32 ItemIndex;
			float ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "GetItemScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::EnvQueryInstanceBlueprintWrapper_eventGetItemScore_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsActors_Parms
		{
			TArray<AActor*> ResultActors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ResultActors_Inner = { "ResultActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ResultActors = { "ResultActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsActors_Parms, ResultActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsActors_Parms), &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ResultActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ResultActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "Comment", "/** Outputs an array filled with resulting actors.  Note that it makes sense only if ItemType is a EnvQueryItemType_ActorBase-derived type.  Returns false if there is no valid result. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "Outputs an array filled with resulting actors.  Note that it makes sense only if ItemType is a EnvQueryItemType_ActorBase-derived type.  Returns false if there is no valid result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "GetQueryResultsAsActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsActors_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsLocations_Parms
		{
			TArray<FVector> ResultLocations;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultLocations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultLocations;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ResultLocations_Inner = { "ResultLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ResultLocations = { "ResultLocations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsLocations_Parms, ResultLocations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsLocations_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsLocations_Parms), &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ResultLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ResultLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "Comment", "/** Outputs an array of locations generated by the query. If the query generated Actors the the array is filled with their locations.  Returns false if there is no valid result. */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "Outputs an array of locations generated by the query. If the query generated Actors the the array is filled with their locations.  Returns false if there is no valid result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "GetQueryResultsAsLocations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::EnvQueryInstanceBlueprintWrapper_eventGetQueryResultsAsLocations_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "Comment", "/** DEPRECATED!  Use GetQueryResultsAsActors instead.  Returns an array filled with resulting actors. Note that it makes sense only if ItemType is a EnvQueryItemType_ActorBase-derived type. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetQueryResultsAsActors instead, which is more efficient itself and protects against very bad perf issues in some blueprints." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "DEPRECATED!  Use GetQueryResultsAsActors instead.  Returns an array filled with resulting actors. Note that it makes sense only if ItemType is a EnvQueryItemType_ActorBase-derived type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "GetResultsAsActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::EnvQueryInstanceBlueprintWrapper_eventGetResultsAsActors_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "Comment", "/** DEPRECATED!  Use GetQueryResultsAsLocations instead.  Returns an array of locations generated by the query. If the query generated Actors the the array is filled with their locations. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetQueryResultsAsLocations instead, which is more efficient itself and protects against very bad perf issues in some blueprints." },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "DEPRECATED!  Use GetQueryResultsAsLocations instead.  Returns an array of locations generated by the query. If the query generated Actors the the array is filled with their locations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "GetResultsAsLocations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::EnvQueryInstanceBlueprintWrapper_eventGetResultsAsLocations_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics
	{
		struct EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms
		{
			FName ParamName;
			float Value;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, nullptr, "SetNamedParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::EnvQueryInstanceBlueprintWrapper_eventSetNamedParam_Parms), Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryInstanceBlueprintWrapper);
	UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister()
	{
		return UEnvQueryInstanceBlueprintWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QueryID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQueryFinishedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryFinishedEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature, "EQSQueryDoneSignature__DelegateSignature" }, // 457573039
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetItemScore, "GetItemScore" }, // 1151613845
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors, "GetQueryResultsAsActors" }, // 790125182
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations, "GetQueryResultsAsLocations" }, // 4213702880
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors, "GetResultsAsActors" }, // 1897499392
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations, "GetResultsAsLocations" }, // 1217552648
		{ &Z_Construct_UFunction_UEnvQueryInstanceBlueprintWrapper_SetNamedParam, "SetNamedParam" }, // 1685046789
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "EQS Query Instance" },
		{ "IncludePath", "EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID = { "QueryID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, QueryID), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "EQS" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, ItemType), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryItemType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** index of query option, that generated items */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
		{ "ToolTip", "index of query option, that generated items" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, OptionIndex), METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent_MetaData[] = {
		{ "Category", "AI|EQS" },
		{ "DisplayName", "OnQueryFinished" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent = { "OnQueryFinishedEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryInstanceBlueprintWrapper, OnQueryFinishedEvent), Z_Construct_UDelegateFunction_UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent_MetaData)) }; // 457573039
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_QueryID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::NewProp_OnQueryFinishedEvent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEQSQueryResultSourceInterface_NoRegister, (int32)VTABLE_OFFSET(UEnvQueryInstanceBlueprintWrapper, IEQSQueryResultSourceInterface), false },  // 2873600889
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryInstanceBlueprintWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::ClassParams = {
		&UEnvQueryInstanceBlueprintWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.OuterSingleton, Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryInstanceBlueprintWrapper>()
	{
		return UEnvQueryInstanceBlueprintWrapper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryInstanceBlueprintWrapper);
	UEnvQueryInstanceBlueprintWrapper::~UEnvQueryInstanceBlueprintWrapper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper, UEnvQueryInstanceBlueprintWrapper::StaticClass, TEXT("UEnvQueryInstanceBlueprintWrapper"), &Z_Registration_Info_UClass_UEnvQueryInstanceBlueprintWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryInstanceBlueprintWrapper), 3913667272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_2029775323(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQueryInstanceBlueprintWrapper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
