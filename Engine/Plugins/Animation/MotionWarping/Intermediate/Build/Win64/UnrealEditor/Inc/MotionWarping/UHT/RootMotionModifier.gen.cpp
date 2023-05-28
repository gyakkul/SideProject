// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Scale();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Scale_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp_NoRegister();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_ERootMotionModifierState();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider();
	MOTIONWARPING_API UFunction* Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingUpdateContext();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext;
class UScriptStruct* FMotionWarpingUpdateContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionWarpingUpdateContext"));
	}
	return Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext.OuterSingleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionWarpingUpdateContext>()
{
	return FMotionWarpingUpdateContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Context passed to any active root motion modifier during the update phase. \n * Contains relevant data from the animation that contributed to root motion this frame (or in the past when replaying saved moves)\n */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Context passed to any active root motion modifier during the update phase.\nContains relevant data from the animation that contributed to root motion this frame (or in the past when replaying saved moves)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingUpdateContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Animation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingUpdateContext, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PreviousPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PreviousPosition = { "PreviousPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingUpdateContext, PreviousPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PreviousPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PreviousPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_CurrentPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingUpdateContext, CurrentPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_CurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_CurrentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Weight_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingUpdateContext, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingUpdateContext, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_DeltaSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingUpdateContext, DeltaSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_DeltaSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_DeltaSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PreviousPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_CurrentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewProp_DeltaSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionWarpingUpdateContext",
		sizeof(FMotionWarpingUpdateContext),
		alignof(FMotionWarpingUpdateContext),
		Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingUpdateContext()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext.InnerSingleton, Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionModifierState;
	static UEnum* ERootMotionModifierState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("ERootMotionModifierState"));
		}
		return Z_Registration_Info_UEnum_ERootMotionModifierState.OuterSingleton;
	}
	template<> MOTIONWARPING_API UEnum* StaticEnum<ERootMotionModifierState>()
	{
		return ERootMotionModifierState_StaticEnum();
	}
	struct Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::Enumerators[] = {
		{ "ERootMotionModifierState::Waiting", (int64)ERootMotionModifierState::Waiting },
		{ "ERootMotionModifierState::Active", (int64)ERootMotionModifierState::Active },
		{ "ERootMotionModifierState::MarkedForRemoval", (int64)ERootMotionModifierState::MarkedForRemoval },
		{ "ERootMotionModifierState::Disabled", (int64)ERootMotionModifierState::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/** The modifier is active and currently affecting the final root motion */" },
		{ "Active.Name", "ERootMotionModifierState::Active" },
		{ "Active.ToolTip", "The modifier is active and currently affecting the final root motion" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The possible states of a Root Motion Modifier */" },
		{ "Disabled.Comment", "/** The modifier will remain in the list (as long as the window is active) but will not modify the root motion */" },
		{ "Disabled.Name", "ERootMotionModifierState::Disabled" },
		{ "Disabled.ToolTip", "The modifier will remain in the list (as long as the window is active) but will not modify the root motion" },
		{ "MarkedForRemoval.Comment", "/** The modifier has been marked for removal. Usually because the warping window is done */" },
		{ "MarkedForRemoval.Name", "ERootMotionModifierState::MarkedForRemoval" },
		{ "MarkedForRemoval.ToolTip", "The modifier has been marked for removal. Usually because the warping window is done" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "The possible states of a Root Motion Modifier" },
		{ "Waiting.Comment", "/** The modifier is waiting for the animation to hit the warping window */" },
		{ "Waiting.Name", "ERootMotionModifierState::Waiting" },
		{ "Waiting.ToolTip", "The modifier is waiting for the animation to hit the warping window" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		"ERootMotionModifierState",
		"ERootMotionModifierState",
		Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MotionWarping_ERootMotionModifierState()
	{
		if (!Z_Registration_Info_UEnum_ERootMotionModifierState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionModifierState.InnerSingleton, Z_Construct_UEnum_MotionWarping_ERootMotionModifierState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERootMotionModifierState.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics
	{
		struct _Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* RootMotionModifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_RootMotionModifier = { "RootMotionModifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms, RootMotionModifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::NewProp_RootMotionModifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MotionWarping, nullptr, "OnRootMotionModifierDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRootMotionModifierDelegate_DelegateWrapper(const FScriptDelegate& OnRootMotionModifierDelegate, UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* RootMotionModifier)
{
	struct _Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* RootMotionModifier;
	};
	_Script_MotionWarping_eventOnRootMotionModifierDelegate_Parms Parms;
	Parms.MotionWarpingComp=MotionWarpingComp;
	Parms.RootMotionModifier=RootMotionModifier;
	OnRootMotionModifierDelegate.ProcessDelegate<UObject>(&Parms);
}
	void URootMotionModifier::StaticRegisterNativesURootMotionModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionModifier);
	UClass* Z_Construct_UClass_URootMotionModifier_NoRegister()
	{
		return URootMotionModifier::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnActivateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUpdateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDeactivateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDeactivateDelegate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// URootMotionModifier\n///////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "URootMotionModifier" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Source of the root motion we are warping */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Source of the root motion we are warping" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Start time of the warping window */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Start time of the warping window" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, StartTime), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** End time of the warping window */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "End time of the warping window" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, EndTime), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_PreviousPosition_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Previous playback time of the animation */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Previous playback time of the animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_PreviousPosition = { "PreviousPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, PreviousPosition), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_PreviousPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_PreviousPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_CurrentPosition_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Current playback time of the animation */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Current playback time of the animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_CurrentPosition = { "CurrentPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, CurrentPosition), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_CurrentPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_CurrentPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Current blend weight of the animation */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Current blend weight of the animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, Weight), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTransform_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Character owner transform at the time this modifier becomes active */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Character owner transform at the time this modifier becomes active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTransform = { "StartTransform", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, StartTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_ActualStartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Actual playback time when the modifier becomes active */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Actual playback time when the modifier becomes active" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_ActualStartTime = { "ActualStartTime", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, ActualStartTime), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_ActualStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_ActualStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnActivateDelegate_MetaData[] = {
		{ "Comment", "/** Delegate called when this modifier is activated (starts affecting the root motion) */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Delegate called when this modifier is activated (starts affecting the root motion)" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnActivateDelegate = { "OnActivateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, OnActivateDelegate), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnActivateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnActivateDelegate_MetaData)) }; // 2042749455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnUpdateDelegate_MetaData[] = {
		{ "Comment", "/** Delegate called when this modifier updates while active (affecting the root motion) */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Delegate called when this modifier updates while active (affecting the root motion)" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnUpdateDelegate = { "OnUpdateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, OnUpdateDelegate), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnUpdateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnUpdateDelegate_MetaData)) }; // 2042749455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnDeactivateDelegate_MetaData[] = {
		{ "Comment", "/** Delegate called when this modifier is deactivated (stops affecting the root motion) */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Delegate called when this modifier is deactivated (stops affecting the root motion)" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnDeactivateDelegate = { "OnDeactivateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, OnDeactivateDelegate), Z_Construct_UDelegateFunction_MotionWarping_OnRootMotionModifierDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnDeactivateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnDeactivateDelegate_MetaData)) }; // 2042749455
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** Current state */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Current state" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier, State), Z_Construct_UEnum_MotionWarping_ERootMotionModifierState, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State_MetaData)) }; // 1274101262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_PreviousPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_CurrentPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_StartTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_ActualStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnActivateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnUpdateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_OnDeactivateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Statics::NewProp_State,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_Statics::ClassParams = {
		&URootMotionModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootMotionModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier()
	{
		if (!Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton, Z_Construct_UClass_URootMotionModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionModifier.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier>()
	{
		return URootMotionModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier);
	URootMotionModifier::~URootMotionModifier() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionWarpingTarget;
class UScriptStruct* FMotionWarpingTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionWarpingTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionWarpingTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingTarget, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionWarpingTarget"));
	}
	return Z_Registration_Info_UScriptStruct_MotionWarpingTarget.OuterSingleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionWarpingTarget>()
{
	return FMotionWarpingTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowComponent_MetaData[];
#endif
		static void NewProp_bFollowComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Represents a point of alignment in the world */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Represents a point of alignment in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Unique name for this warp target */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Unique name for this warp target" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingTarget, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** When the warp target is created from a component this stores the location of the component at the time of creation, otherwise its the location supplied by the user */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "When the warp target is created from a component this stores the location of the component at the time of creation, otherwise its the location supplied by the user" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingTarget, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** When the warp target is created from a component this stores the rotation of the component at the time of creation, otherwise its the rotation supplied by the user */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "When the warp target is created from a component this stores the rotation of the component at the time of creation, otherwise its the rotation supplied by the user" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingTarget, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Optional component used to calculate the final target transform */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Optional component used to calculate the final target transform" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingTarget, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Optional bone name in the component used to calculate the final target transform */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Optional bone name in the component used to calculate the final target transform" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingTarget, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Whether the target transform calculated from a component and an optional bone should be updated during the warp */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Whether the target transform calculated from a component and an optional bone should be updated during the warp" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent_SetBit(void* Obj)
	{
		((FMotionWarpingTarget*)Obj)->bFollowComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent = { "bFollowComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotionWarpingTarget), &Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewProp_bFollowComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionWarpingTarget",
		sizeof(FMotionWarpingTarget),
		alignof(FMotionWarpingTarget),
		Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionWarpingTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionWarpingTarget.InnerSingleton, Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionWarpingTarget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionWarpRotationType;
	static UEnum* EMotionWarpRotationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("EMotionWarpRotationType"));
		}
		return Z_Registration_Info_UEnum_EMotionWarpRotationType.OuterSingleton;
	}
	template<> MOTIONWARPING_API UEnum* StaticEnum<EMotionWarpRotationType>()
	{
		return EMotionWarpRotationType_StaticEnum();
	}
	struct Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::Enumerators[] = {
		{ "EMotionWarpRotationType::Default", (int64)EMotionWarpRotationType::Default },
		{ "EMotionWarpRotationType::Facing", (int64)EMotionWarpRotationType::Facing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/** Character rotates to match the rotation of the sync point */" },
		{ "Default.Name", "EMotionWarpRotationType::Default" },
		{ "Default.ToolTip", "Character rotates to match the rotation of the sync point" },
		{ "Facing.Comment", "/** Character rotates to face the sync point */" },
		{ "Facing.Name", "EMotionWarpRotationType::Facing" },
		{ "Facing.ToolTip", "Character rotates to face the sync point" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		"EMotionWarpRotationType",
		"EMotionWarpRotationType",
		Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType()
	{
		if (!Z_Registration_Info_UEnum_EMotionWarpRotationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionWarpRotationType.InnerSingleton, Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionWarpRotationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpPointAnimProvider;
	static UEnum* EWarpPointAnimProvider_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("EWarpPointAnimProvider"));
		}
		return Z_Registration_Info_UEnum_EWarpPointAnimProvider.OuterSingleton;
	}
	template<> MOTIONWARPING_API UEnum* StaticEnum<EWarpPointAnimProvider>()
	{
		return EWarpPointAnimProvider_StaticEnum();
	}
	struct Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::Enumerators[] = {
		{ "EWarpPointAnimProvider::None", (int64)EWarpPointAnimProvider::None },
		{ "EWarpPointAnimProvider::Static", (int64)EWarpPointAnimProvider::Static },
		{ "EWarpPointAnimProvider::Bone", (int64)EWarpPointAnimProvider::Bone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bone.Comment", "/** Warp point defined by a bone */" },
		{ "Bone.Name", "EWarpPointAnimProvider::Bone" },
		{ "Bone.ToolTip", "Warp point defined by a bone" },
		{ "Comment", "/** Method used to extract the warp point from the animation */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "None.Comment", "/** No warp point is provided */" },
		{ "None.Name", "EWarpPointAnimProvider::None" },
		{ "None.ToolTip", "No warp point is provided" },
		{ "Static.Comment", "/** Warp point defined by a 'hard-coded' transform  user can enter through the warping notify */" },
		{ "Static.Name", "EWarpPointAnimProvider::Static" },
		{ "Static.ToolTip", "Warp point defined by a 'hard-coded' transform  user can enter through the warping notify" },
		{ "ToolTip", "Method used to extract the warp point from the animation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		"EWarpPointAnimProvider",
		"EWarpPointAnimProvider",
		Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider()
	{
		if (!Z_Registration_Info_UEnum_EWarpPointAnimProvider.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpPointAnimProvider.InnerSingleton, Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWarpPointAnimProvider.InnerSingleton;
	}
	void URootMotionModifier_Warp::StaticRegisterNativesURootMotionModifier_Warp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionModifier_Warp);
	UClass* Z_Construct_UClass_URootMotionModifier_Warp_NoRegister()
	{
		return URootMotionModifier_Warp::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_Warp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WarpPointAnimProvider_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointAnimProvider_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WarpPointAnimProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointAnimTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpPointAnimTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpPointAnimBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpPointAnimBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarpTranslation_MetaData[];
#endif
		static void NewProp_bWarpTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreZAxis_MetaData[];
#endif
		static void NewProp_bIgnoreZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreZAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddTranslationEasingFunc_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddTranslationEasingFunc_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AddTranslationEasingFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddTranslationEasingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AddTranslationEasingCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarpRotation_MetaData[];
#endif
		static void NewProp_bWarpRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpRotationTimeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpRotationTimeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTargetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedTargetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_Warp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpTargetName_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Name used to find the warp target for this modifier */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Name used to find the warp target for this modifier" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, WarpTargetName), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpTargetName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider = { "WarpPointAnimProvider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, WarpPointAnimProvider), Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider_MetaData)) }; // 2956236487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimTransform_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "//@TODO: Hide from the UI when Target != Static\n" },
		{ "EditCondition", "WarpPointAnimProvider == EWarpPointAnimProvider::Static" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "@TODO: Hide from the UI when Target != Static" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimTransform = { "WarpPointAnimTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, WarpPointAnimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimBoneName_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "//@TODO: Hide from the UI when Target != Bone\n" },
		{ "EditCondition", "WarpPointAnimProvider == EWarpPointAnimProvider::Bone" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "@TODO: Hide from the UI when Target != Bone" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimBoneName = { "WarpPointAnimBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, WarpPointAnimBoneName), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to warp the translation component of the root motion */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Whether to warp the translation component of the root motion" },
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bWarpTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation = { "bWarpTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URootMotionModifier_Warp), &Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to ignore the Z component of the translation. Z motion will remain untouched */" },
		{ "EditCondition", "bWarpTranslation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Whether to ignore the Z component of the translation. Z motion will remain untouched" },
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bIgnoreZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis = { "bIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URootMotionModifier_Warp), &Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Easing function used when adding translation. Only relevant when there is no translation in the animation */" },
		{ "EditCondition", "bWarpTranslation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Easing function used when adding translation. Only relevant when there is no translation in the animation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc = { "AddTranslationEasingFunc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, AddTranslationEasingFunc), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc_MetaData)) }; // 3066902676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingCurve_MetaData[] = {
		{ "Category", "Blend" },
		{ "Comment", "/** Custom curve used to add translation when there is none to warp. Only relevant when AddTranslationEasingFunc is set to Custom */" },
		{ "EditCondition", "AddTranslationEasingFunc==EAlphaBlendOption::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Custom curve used to add translation when there is none to warp. Only relevant when AddTranslationEasingFunc is set to Custom" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingCurve = { "AddTranslationEasingCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, AddTranslationEasingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to warp the rotation component of the root motion */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Whether to warp the rotation component of the root motion" },
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation_SetBit(void* Obj)
	{
		((URootMotionModifier_Warp*)Obj)->bWarpRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation = { "bWarpRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URootMotionModifier_Warp), &Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether rotation should be warp to match the rotation of the sync point or to face the sync point */" },
		{ "EditCondition", "bWarpRotation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Whether rotation should be warp to match the rotation of the sync point or to face the sync point" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType = { "RotationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, RotationType), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType_MetaData)) }; // 2756714592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpRotationTimeMultiplier_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/**\n\x09 * Allow to modify how fast the rotation is warped.\n\x09 * e.g if the window duration is 2sec and this is 0.5, the target rotation will be reached in 1sec instead of 2sec\n\x09 */" },
		{ "EditCondition", "bWarpRotation" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Allow to modify how fast the rotation is warped.\ne.g if the window duration is 2sec and this is 0.5, the target rotation will be reached in 1sec instead of 2sec" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpRotationTimeMultiplier = { "WarpRotationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, WarpRotationTimeMultiplier), METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpRotationTimeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpRotationTimeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_CachedTargetTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_CachedTargetTransform = { "CachedTargetTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Warp, CachedTargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_CachedTargetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_CachedTargetTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionModifier_Warp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpPointAnimBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bIgnoreZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_AddTranslationEasingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_bWarpRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_RotationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_WarpRotationTimeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Warp_Statics::NewProp_CachedTargetTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_Warp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_Warp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_Warp_Statics::ClassParams = {
		&URootMotionModifier_Warp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootMotionModifier_Warp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Warp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Warp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier_Warp()
	{
		if (!Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton, Z_Construct_UClass_URootMotionModifier_Warp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionModifier_Warp.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier_Warp>()
	{
		return URootMotionModifier_Warp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_Warp);
	URootMotionModifier_Warp::~URootMotionModifier_Warp() {}
	void UDEPRECATED_RootMotionModifier_SimpleWarp::StaticRegisterNativesUDEPRECATED_RootMotionModifier_SimpleWarp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_RootMotionModifier_SimpleWarp);
	UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_NoRegister()
	{
		return UDEPRECATED_RootMotionModifier_SimpleWarp::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier_Warp,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// URootMotionModifier_SimpleWarp. \n// DEPRECATED in favor of URootMotionModifier_SkewWarp (kept for reference)\n///////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Simple Warp" },
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "URootMotionModifier_SimpleWarp.\nDEPRECATED in favor of URootMotionModifier_SkewWarp (kept for reference)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RootMotionModifier_SimpleWarp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::ClassParams = {
		&UDEPRECATED_RootMotionModifier_SimpleWarp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x029012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton, Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<UDEPRECATED_RootMotionModifier_SimpleWarp>()
	{
		return UDEPRECATED_RootMotionModifier_SimpleWarp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_RootMotionModifier_SimpleWarp);
	UDEPRECATED_RootMotionModifier_SimpleWarp::~UDEPRECATED_RootMotionModifier_SimpleWarp() {}
	DEFINE_FUNCTION(URootMotionModifier_Scale::execAddRootMotionModifierScale)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_InMotionWarpingComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndTime);
		P_GET_STRUCT(FVector,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URootMotionModifier_Scale**)Z_Param__Result=URootMotionModifier_Scale::AddRootMotionModifierScale(Z_Param_InMotionWarpingComp,Z_Param_InAnimation,Z_Param_InStartTime,Z_Param_InEndTime,Z_Param_InScale);
		P_NATIVE_END;
	}
	void URootMotionModifier_Scale::StaticRegisterNativesURootMotionModifier_Scale()
	{
		UClass* Class = URootMotionModifier_Scale::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRootMotionModifierScale", &URootMotionModifier_Scale::execAddRootMotionModifierScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics
	{
		struct RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms
		{
			UMotionWarpingComponent* InMotionWarpingComp;
			const UAnimSequenceBase* InAnimation;
			float InStartTime;
			float InEndTime;
			FVector InScale;
			URootMotionModifier_Scale* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMotionWarpingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InMotionWarpingComp_MetaData[] = {
		{ "DisplayName", "Motion Warping Comp" },
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InMotionWarpingComp = { "InMotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InMotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InMotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InMotionWarpingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InAnimation_MetaData[] = {
		{ "DisplayName", "Animation" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InStartTime_MetaData[] = {
		{ "DisplayName", "Start Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InStartTime), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InEndTime_MetaData[] = {
		{ "DisplayName", "End Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InEndTime = { "InEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InEndTime), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InEndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InScale_MetaData[] = {
		{ "DisplayName", "Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, InScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InScale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_Scale_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InMotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_InScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "CPP_Default_InScale", "1.000000,1.000000,1.000000" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionModifier_Scale, nullptr, "AddRootMotionModifierScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::RootMotionModifier_Scale_eventAddRootMotionModifierScale_Parms), Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionModifier_Scale);
	UClass* Z_Construct_UClass_URootMotionModifier_Scale_NoRegister()
	{
		return URootMotionModifier_Scale::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_Scale_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_Scale_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMotionModifier_Scale_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_Scale_AddRootMotionModifierScale, "AddRootMotionModifierScale" }, // 1987514502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Scale_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// URootMotionModifier_Scale\n///////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Scale" },
		{ "IncludePath", "RootMotionModifier.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "URootMotionModifier_Scale" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_Scale_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Vector used to scale each component of the translation */" },
		{ "ModuleRelativePath", "Public/RootMotionModifier.h" },
		{ "ToolTip", "Vector used to scale each component of the translation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_Scale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_Scale, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Scale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Scale_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionModifier_Scale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_Scale_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_Scale_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_Scale>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_Scale_Statics::ClassParams = {
		&URootMotionModifier_Scale::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URootMotionModifier_Scale_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Scale_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_Scale_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_Scale_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier_Scale()
	{
		if (!Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton, Z_Construct_UClass_URootMotionModifier_Scale_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionModifier_Scale.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier_Scale>()
	{
		return URootMotionModifier_Scale::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_Scale);
	URootMotionModifier_Scale::~URootMotionModifier_Scale() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::EnumInfo[] = {
		{ ERootMotionModifierState_StaticEnum, TEXT("ERootMotionModifierState"), &Z_Registration_Info_UEnum_ERootMotionModifierState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1274101262U) },
		{ EMotionWarpRotationType_StaticEnum, TEXT("EMotionWarpRotationType"), &Z_Registration_Info_UEnum_EMotionWarpRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2756714592U) },
		{ EWarpPointAnimProvider_StaticEnum, TEXT("EWarpPointAnimProvider"), &Z_Registration_Info_UEnum_EWarpPointAnimProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2956236487U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::ScriptStructInfo[] = {
		{ FMotionWarpingUpdateContext::StaticStruct, Z_Construct_UScriptStruct_FMotionWarpingUpdateContext_Statics::NewStructOps, TEXT("MotionWarpingUpdateContext"), &Z_Registration_Info_UScriptStruct_MotionWarpingUpdateContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingUpdateContext), 252590653U) },
		{ FMotionWarpingTarget::StaticStruct, Z_Construct_UScriptStruct_FMotionWarpingTarget_Statics::NewStructOps, TEXT("MotionWarpingTarget"), &Z_Registration_Info_UScriptStruct_MotionWarpingTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingTarget), 493938223U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier, URootMotionModifier::StaticClass, TEXT("URootMotionModifier"), &Z_Registration_Info_UClass_URootMotionModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier), 268824134U) },
		{ Z_Construct_UClass_URootMotionModifier_Warp, URootMotionModifier_Warp::StaticClass, TEXT("URootMotionModifier_Warp"), &Z_Registration_Info_UClass_URootMotionModifier_Warp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_Warp), 1742950535U) },
		{ Z_Construct_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp, UDEPRECATED_RootMotionModifier_SimpleWarp::StaticClass, TEXT("UDEPRECATED_RootMotionModifier_SimpleWarp"), &Z_Registration_Info_UClass_UDEPRECATED_RootMotionModifier_SimpleWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RootMotionModifier_SimpleWarp), 4123745164U) },
		{ Z_Construct_UClass_URootMotionModifier_Scale, URootMotionModifier_Scale::StaticClass, TEXT("URootMotionModifier_Scale"), &Z_Registration_Info_UClass_URootMotionModifier_Scale, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_Scale), 1664827540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_242892067(TEXT("/Script/MotionWarping"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
