// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyState::execGetDefaultTriggerWeightThreshold)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultTriggerWeightThreshold_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState::execGetNotifyName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation();
		P_NATIVE_END;
	}
	struct AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct AnimNotifyState_eventGetNotifyName_Parms
	{
		FString ReturnValue;
	};
	struct AnimNotifyState_eventReceived_NotifyBegin_Parms
	{
		USkeletalMeshComponent* MeshComp;
		UAnimSequenceBase* Animation;
		float TotalDuration;
		FAnimNotifyEventReference EventReference;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotifyState_eventReceived_NotifyBegin_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AnimNotifyState_eventReceived_NotifyEnd_Parms
	{
		USkeletalMeshComponent* MeshComp;
		UAnimSequenceBase* Animation;
		FAnimNotifyEventReference EventReference;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotifyState_eventReceived_NotifyEnd_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AnimNotifyState_eventReceived_NotifyTick_Parms
	{
		USkeletalMeshComponent* MeshComp;
		UAnimSequenceBase* Animation;
		float FrameDeltaTime;
		FAnimNotifyEventReference EventReference;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotifyState_eventReceived_NotifyTick_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold = FName(TEXT("GetDefaultTriggerWeightThreshold"));
	float UAnimNotifyState::GetDefaultTriggerWeightThreshold() const
	{
		AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms Parms;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_GetNotifyName = FName(TEXT("GetNotifyName"));
	FString UAnimNotifyState::GetNotifyName() const
	{
		AnimNotifyState_eventGetNotifyName_Parms Parms;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_GetNotifyName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyBegin = FName(TEXT("Received_NotifyBegin"));
	bool UAnimNotifyState::Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference const& EventReference) const
	{
		AnimNotifyState_eventReceived_NotifyBegin_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.TotalDuration=TotalDuration;
		Parms.EventReference=EventReference;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyBegin),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyEnd = FName(TEXT("Received_NotifyEnd"));
	bool UAnimNotifyState::Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference const& EventReference) const
	{
		AnimNotifyState_eventReceived_NotifyEnd_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.EventReference=EventReference;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyEnd),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_Received_NotifyTick = FName(TEXT("Received_NotifyTick"));
	bool UAnimNotifyState::Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference const& EventReference) const
	{
		AnimNotifyState_eventReceived_NotifyTick_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		Parms.FrameDeltaTime=FrameDeltaTime;
		Parms.EventReference=EventReference;
		const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyTick),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAnimNotifyState::StaticRegisterNativesUAnimNotifyState()
	{
		UClass* Class = UAnimNotifyState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultTriggerWeightThreshold", &UAnimNotifyState::execGetDefaultTriggerWeightThreshold },
			{ "GetNotifyName", &UAnimNotifyState::execGetNotifyName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** TriggerWeightThreshold to use when creating notifies of this type */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "TriggerWeightThreshold to use when creating notifies of this type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "GetDefaultTriggerWeightThreshold", nullptr, nullptr, sizeof(AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms), Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Implementable event to get a custom name for the notify\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Implementable event to get a custom name for the notify" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "GetNotifyName", nullptr, nullptr, sizeof(AnimNotifyState_eventGetNotifyName_Parms), Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_GetNotifyName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, TotalDuration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyState_eventReceived_NotifyBegin_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_TotalDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyBegin", nullptr, nullptr, sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyState_eventReceived_NotifyEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyEnd", nullptr, nullptr, sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, FrameDeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyState_eventReceived_NotifyTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_FrameDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyTick", nullptr, nullptr, sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState);
	UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister()
	{
		return UAnimNotifyState::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFireInEditor_MetaData[];
#endif
		static void NewProp_bShouldFireInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFireInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold, "GetDefaultTriggerWeightThreshold" }, // 1744369284
		{ &Z_Construct_UFunction_UAnimNotifyState_GetNotifyName, "GetNotifyName" }, // 2830313439
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin, "Received_NotifyBegin" }, // 3261334709
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd, "Received_NotifyEnd" }, // 4112165872
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick, "Received_NotifyTick" }, // 4176738794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Color of Notify in editor */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this notify state instance should fire in animation editors */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Whether this notify state instance should fire in animation editors" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_SetBit(void* Obj)
	{
		((UAnimNotifyState*)Obj)->bShouldFireInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor = { "bShouldFireInEditor", nullptr, (EPropertyFlags)0x0010040800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNotifyState), &Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams = {
		&UAnimNotifyState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers), 0),
		0,
		0x001130A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyState>()
	{
		return UAnimNotifyState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState);
	UAnimNotifyState::~UAnimNotifyState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState, UAnimNotifyState::StaticClass, TEXT("UAnimNotifyState"), &Z_Registration_Info_UClass_UAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState), 3411537245U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_3724700611(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
