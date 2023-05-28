// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Async/AsyncAction_PerformTargeting.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncAction_PerformTargeting() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAsyncAction_PerformTargeting();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
	TARGETINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics
	{
		struct _Script_TargetingSystem_eventPerformTargetingReady_Parms
		{
			FTargetingRequestHandle TargetingHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TargetingSystem_eventPerformTargetingReady_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::NewProp_TargetingHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem, nullptr, "PerformTargetingReady__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::_Script_TargetingSystem_eventPerformTargetingReady_Parms), Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPerformTargetingReady_DelegateWrapper(const FMulticastScriptDelegate& PerformTargetingReady, FTargetingRequestHandle TargetingHandle)
{
	struct _Script_TargetingSystem_eventPerformTargetingReady_Parms
	{
		FTargetingRequestHandle TargetingHandle;
	};
	_Script_TargetingSystem_eventPerformTargetingReady_Parms Parms;
	Parms.TargetingHandle=TargetingHandle;
	PerformTargetingReady.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncAction_PerformTargeting::execPerformFilteringRequest)
	{
		P_GET_OBJECT(AActor,Z_Param_SourceActor);
		P_GET_OBJECT(UTargetingPreset,Z_Param_TargetingPreset);
		P_GET_UBOOL(Z_Param_bUseAsyncTargeting);
		P_GET_TARRAY(AActor*,Z_Param_InTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_PerformTargeting**)Z_Param__Result=UAsyncAction_PerformTargeting::PerformFilteringRequest(Z_Param_SourceActor,Z_Param_TargetingPreset,Z_Param_bUseAsyncTargeting,Z_Param_InTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncAction_PerformTargeting::execPerformTargetingRequest)
	{
		P_GET_OBJECT(AActor,Z_Param_SourceActor);
		P_GET_OBJECT(UTargetingPreset,Z_Param_TargetingPreset);
		P_GET_UBOOL(Z_Param_bUseAsyncTargeting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncAction_PerformTargeting**)Z_Param__Result=UAsyncAction_PerformTargeting::PerformTargetingRequest(Z_Param_SourceActor,Z_Param_TargetingPreset,Z_Param_bUseAsyncTargeting);
		P_NATIVE_END;
	}
	void UAsyncAction_PerformTargeting::StaticRegisterNativesUAsyncAction_PerformTargeting()
	{
		UClass* Class = UAsyncAction_PerformTargeting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PerformFilteringRequest", &UAsyncAction_PerformTargeting::execPerformFilteringRequest },
			{ "PerformTargetingRequest", &UAsyncAction_PerformTargeting::execPerformTargetingRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics
	{
		struct AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms
		{
			AActor* SourceActor;
			UTargetingPreset* TargetingPreset;
			bool bUseAsyncTargeting;
			TArray<AActor*> InTargets;
			UAsyncAction_PerformTargeting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
		static void NewProp_bUseAsyncTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncTargeting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTargets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bUseAsyncTargeting_SetBit(void* Obj)
	{
		((AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms*)Obj)->bUseAsyncTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bUseAsyncTargeting = { "bUseAsyncTargeting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms), &Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bUseAsyncTargeting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_Inner = { "InTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets = { "InTargets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms, InTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bUseAsyncTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "DefaultToSelf", "SourceActor" },
		{ "DisplayName", "Perform Filtering Async Action" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_PerformTargeting, nullptr, "PerformFilteringRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::AsyncAction_PerformTargeting_eventPerformFilteringRequest_Parms), Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics
	{
		struct AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms
		{
			AActor* SourceActor;
			UTargetingPreset* TargetingPreset;
			bool bUseAsyncTargeting;
			UAsyncAction_PerformTargeting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
		static void NewProp_bUseAsyncTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncTargeting;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bUseAsyncTargeting_SetBit(void* Obj)
	{
		((AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms*)Obj)->bUseAsyncTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bUseAsyncTargeting = { "bUseAsyncTargeting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms), &Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bUseAsyncTargeting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bUseAsyncTargeting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "DefaultToSelf", "SourceActor" },
		{ "DisplayName", "Perform Targeting Async Action" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_PerformTargeting, nullptr, "PerformTargetingRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::AsyncAction_PerformTargeting_eventPerformTargetingRequest_Parms), Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_PerformTargeting);
	UClass* Z_Construct_UClass_UAsyncAction_PerformTargeting_NoRegister()
	{
		return UAsyncAction_PerformTargeting::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targeted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Targeted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetingPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakSourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakSourceActor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncTargeting_MetaData[];
#endif
		static void NewProp_bUseAsyncTargeting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncTargeting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformFilteringRequest, "PerformFilteringRequest" }, // 4252050774
		{ &Z_Construct_UFunction_UAsyncAction_PerformTargeting_PerformTargetingRequest, "PerformTargetingRequest" }, // 973711516
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@class UAsyncAction_PerformTargeting\n*/" },
		{ "IncludePath", "Async/AsyncAction_PerformTargeting.h" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
		{ "ToolTip", "@class UAsyncAction_PerformTargeting" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_Targeted_MetaData[] = {
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_Targeted = { "Targeted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_PerformTargeting, Targeted), Z_Construct_UDelegateFunction_TargetingSystem_PerformTargetingReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_Targeted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_Targeted_MetaData)) }; // 3991208539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_TargetingPreset_MetaData[] = {
		{ "Comment", "/** The targeting preset to use for targeting */" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
		{ "ToolTip", "The targeting preset to use for targeting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_PerformTargeting, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_TargetingPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_TargetingPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_WeakSourceActor_MetaData[] = {
		{ "Comment", "/** The actor this task is running for */" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
		{ "ToolTip", "The actor this task is running for" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_WeakSourceActor = { "WeakSourceActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_PerformTargeting, WeakSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_WeakSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_WeakSourceActor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets_Inner = { "InitialTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets_MetaData[] = {
		{ "Comment", "/** A set of targets to pre-seed the targeting request with (great for filtering targets without the needs for selection) */" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
		{ "ToolTip", "A set of targets to pre-seed the targeting request with (great for filtering targets without the needs for selection)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets = { "InitialTargets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncAction_PerformTargeting, InitialTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting_MetaData[] = {
		{ "Comment", "/** Flag to indicate we should be using async targeting (default is immediate execution) */" },
		{ "ModuleRelativePath", "Async/AsyncAction_PerformTargeting.h" },
		{ "ToolTip", "Flag to indicate we should be using async targeting (default is immediate execution)" },
	};
#endif
	void Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting_SetBit(void* Obj)
	{
		((UAsyncAction_PerformTargeting*)Obj)->bUseAsyncTargeting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting = { "bUseAsyncTargeting", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAsyncAction_PerformTargeting), &Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_Targeted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_WeakSourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_InitialTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::NewProp_bUseAsyncTargeting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_PerformTargeting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::ClassParams = {
		&UAsyncAction_PerformTargeting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncAction_PerformTargeting()
	{
		if (!Z_Registration_Info_UClass_UAsyncAction_PerformTargeting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_PerformTargeting.OuterSingleton, Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncAction_PerformTargeting.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UAsyncAction_PerformTargeting>()
	{
		return UAsyncAction_PerformTargeting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_PerformTargeting);
	UAsyncAction_PerformTargeting::~UAsyncAction_PerformTargeting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_PerformTargeting, UAsyncAction_PerformTargeting::StaticClass, TEXT("UAsyncAction_PerformTargeting"), &Z_Registration_Info_UClass_UAsyncAction_PerformTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_PerformTargeting), 4180133572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_2080707129(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
