// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateMachineTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes();
	ENGINE_API UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETransitionRequestQueueMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedStateExitTransition();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionRequestQueueMode;
	static UEnum* ETransitionRequestQueueMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionRequestQueueMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionRequestQueueMode"));
		}
		return Z_Registration_Info_UEnum_ETransitionRequestQueueMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETransitionRequestQueueMode>()
	{
		return ETransitionRequestQueueMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::Enumerators[] = {
		{ "ETransitionRequestQueueMode::Shared", (int64)ETransitionRequestQueueMode::Shared },
		{ "ETransitionRequestQueueMode::Unique", (int64)ETransitionRequestQueueMode::Unique },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "Shared.Name", "ETransitionRequestQueueMode::Shared" },
		{ "Shared.ToolTip", "Only one transition can handle this request" },
		{ "Unique.Name", "ETransitionRequestQueueMode::Unique" },
		{ "Unique.ToolTip", "Allows multiple transitions to handle the same request" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETransitionRequestQueueMode",
		"ETransitionRequestQueueMode",
		Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETransitionRequestQueueMode()
	{
		if (!Z_Registration_Info_UEnum_ETransitionRequestQueueMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionRequestQueueMode.InnerSingleton, Z_Construct_UEnum_Engine_ETransitionRequestQueueMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransitionRequestQueueMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode;
	static UEnum* ETransitionRequestOverwriteMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionRequestOverwriteMode"));
		}
		return Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETransitionRequestOverwriteMode>()
	{
		return ETransitionRequestOverwriteMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::Enumerators[] = {
		{ "ETransitionRequestOverwriteMode::Append", (int64)ETransitionRequestOverwriteMode::Append },
		{ "ETransitionRequestOverwriteMode::Ignore", (int64)ETransitionRequestOverwriteMode::Ignore },
		{ "ETransitionRequestOverwriteMode::Overwrite", (int64)ETransitionRequestOverwriteMode::Overwrite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::Enum_MetaDataParams[] = {
		{ "Append.Name", "ETransitionRequestOverwriteMode::Append" },
		{ "Append.ToolTip", "This request is added whether or not another with the same name is already queued" },
		{ "BlueprintType", "true" },
		{ "Ignore.Name", "ETransitionRequestOverwriteMode::Ignore" },
		{ "Ignore.ToolTip", "This request is ignored if another request with the same name is already queued" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "Overwrite.Name", "ETransitionRequestOverwriteMode::Overwrite" },
		{ "Overwrite.ToolTip", "This request overwrites another request with the same name if one exists" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETransitionRequestOverwriteMode",
		"ETransitionRequestOverwriteMode",
		Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode()
	{
		if (!Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.InnerSingleton, Z_Construct_UEnum_Engine_ETransitionRequestOverwriteMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionBlendMode;
	static UEnum* ETransitionBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionBlendMode"));
		}
		return Z_Registration_Info_UEnum_ETransitionBlendMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETransitionBlendMode::Type>()
	{
		return ETransitionBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::Enumerators[] = {
		{ "ETransitionBlendMode::TBM_Linear", (int64)ETransitionBlendMode::TBM_Linear },
		{ "ETransitionBlendMode::TBM_Cubic", (int64)ETransitionBlendMode::TBM_Cubic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//@TODO: Document\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "TBM_Cubic.DisplayName", "Cubic" },
		{ "TBM_Cubic.Name", "ETransitionBlendMode::TBM_Cubic" },
		{ "TBM_Linear.DisplayName", "Linear" },
		{ "TBM_Linear.Name", "ETransitionBlendMode::TBM_Linear" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETransitionBlendMode",
		"ETransitionBlendMode::Type",
		Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETransitionBlendMode()
	{
		if (!Z_Registration_Info_UEnum_ETransitionBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_ETransitionBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransitionBlendMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransitionLogicType;
	static UEnum* ETransitionLogicType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETransitionLogicType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETransitionLogicType"));
		}
		return Z_Registration_Info_UEnum_ETransitionLogicType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETransitionLogicType::Type>()
	{
		return ETransitionLogicType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETransitionLogicType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::Enumerators[] = {
		{ "ETransitionLogicType::TLT_StandardBlend", (int64)ETransitionLogicType::TLT_StandardBlend },
		{ "ETransitionLogicType::TLT_Inertialization", (int64)ETransitionLogicType::TLT_Inertialization },
		{ "ETransitionLogicType::TLT_Custom", (int64)ETransitionLogicType::TLT_Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//@TODO: Document\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "TLT_Custom.DisplayName", "Custom" },
		{ "TLT_Custom.Name", "ETransitionLogicType::TLT_Custom" },
		{ "TLT_Inertialization.DisplayName", "Inertialization" },
		{ "TLT_Inertialization.Name", "ETransitionLogicType::TLT_Inertialization" },
		{ "TLT_StandardBlend.DisplayName", "Standard Blend" },
		{ "TLT_StandardBlend.Name", "ETransitionLogicType::TLT_StandardBlend" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETransitionLogicType",
		"ETransitionLogicType::Type",
		Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETransitionLogicType()
	{
		if (!Z_Registration_Info_UEnum_ETransitionLogicType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransitionLogicType.InnerSingleton, Z_Construct_UEnum_Engine_ETransitionLogicType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransitionLogicType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationTransitionRule;
class UScriptStruct* FAnimationTransitionRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationTransitionRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationTransitionRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitionRule, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTransitionRule"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationTransitionRule.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationTransitionRule>()
{
	return FAnimationTransitionRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuleToExecute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RuleToExecute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionReturnVal_MetaData[];
#endif
		static void NewProp_TransitionReturnVal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TransitionReturnVal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This structure represents a baked transition rule inside a state\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "This structure represents a baked transition rule inside a state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitionRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute = { "RuleToExecute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionRule, RuleToExecute), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_MetaData[] = {
		{ "Comment", "/** What RuleToExecute must return to take transition (for bidirectional transitions) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "What RuleToExecute must return to take transition (for bidirectional transitions)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_SetBit(void* Obj)
	{
		((FAnimationTransitionRule*)Obj)->TransitionReturnVal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal = { "TransitionReturnVal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimationTransitionRule), &Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionRule, TransitionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_RuleToExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionReturnVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewProp_TransitionIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationTransitionRule",
		sizeof(FAnimationTransitionRule),
		alignof(FAnimationTransitionRule),
		Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionRule()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationTransitionRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationTransitionRule.InnerSingleton, Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationTransitionRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationStateBase;
class UScriptStruct* FAnimationStateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationStateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationStateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationStateBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationStateBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationStateBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationStateBase>()
{
	return FAnimationStateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationStateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This is the base class that both baked states and transitions use\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "This is the base class that both baked states and transitions use" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationStateBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName_MetaData[] = {
		{ "Comment", "// The name of this state\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The name of this state" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationStateBase, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewProp_StateName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationStateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationStateBase",
		sizeof(FAnimationStateBase),
		alignof(FAnimationStateBase),
		Z_Construct_UScriptStruct_FAnimationStateBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationStateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationStateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationStateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationStateBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimationStateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationStateBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimationState>() == std::is_polymorphic<FAnimationStateBase>(), "USTRUCT FAnimationState cannot be polymorphic unless super FAnimationStateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationState;
class UScriptStruct* FAnimationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationState"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationState>()
{
	return FAnimationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateRootNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateRootNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullyBlendedNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FullyBlendedNotify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationState>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimationTransitionRule, METADATA_PARAMS(nullptr, 0) }; // 337919825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_MetaData[] = {
		{ "Comment", "// Set of legal transitions out of this state; already in priority order\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Set of legal transitions out of this state; already in priority order" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationState, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_MetaData)) }; // 337919825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData[] = {
		{ "Comment", "// The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex = { "StateRootNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationState, StateRootNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify_MetaData[] = {
		{ "Comment", "// The index of the notify to fire when this state is first entered (weight within the machine becomes non-zero)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index of the notify to fire when this state is first entered (weight within the machine becomes non-zero)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify = { "StartNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationState, StartNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify_MetaData[] = {
		{ "Comment", "// The index of the notify to fire when this state is finished exiting (weight within the machine becomes zero)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index of the notify to fire when this state is finished exiting (weight within the machine becomes zero)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify = { "EndNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationState, EndNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData[] = {
		{ "Comment", "// The index of the notify to fire when this state is fully entered (weight within the machine becomes one)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index of the notify to fire when this state is fully entered (weight within the machine becomes one)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify = { "FullyBlendedNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationState, FullyBlendedNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StateRootNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_StartNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_EndNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationState_Statics::NewProp_FullyBlendedNotify,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimationStateBase,
		&NewStructOps,
		"AnimationState",
		sizeof(FAnimationState),
		alignof(FAnimationState),
		Z_Construct_UScriptStruct_FAnimationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationState()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationState.InnerSingleton, Z_Construct_UScriptStruct_FAnimationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimationTransitionBetweenStates>() == std::is_polymorphic<FAnimationStateBase>(), "USTRUCT FAnimationTransitionBetweenStates cannot be polymorphic unless super FAnimationStateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates;
class UScriptStruct* FAnimationTransitionBetweenStates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTransitionBetweenStates"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationTransitionBetweenStates>()
{
	return FAnimationTransitionBetweenStates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossfadeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossfadeDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterruptNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterruptNotify;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogicType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogicType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This represents a baked transition\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "This represents a baked transition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitionBetweenStates>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState_MetaData[] = {
		{ "Comment", "// Transition-only: State being transitioned from\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Transition-only: State being transitioned from" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, PreviousState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState_MetaData[] = {
		{ "Comment", "// Transition-only: State being transitioned to\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Transition-only: State being transitioned to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, NextState), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration = { "CrossfadeDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, CrossfadeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify = { "StartNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, StartNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify = { "EndNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, EndNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify = { "InterruptNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, InterruptNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, BlendMode), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_MetaData)) }; // 3066902676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType = { "LogicType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTransitionBetweenStates, LogicType), Z_Construct_UEnum_Engine_ETransitionLogicType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType_MetaData)) }; // 712308243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_PreviousState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_NextState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CrossfadeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_StartNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_EndNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_InterruptNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewProp_LogicType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimationStateBase,
		&NewStructOps,
		"AnimationTransitionBetweenStates",
		sizeof(FAnimationTransitionBetweenStates),
		alignof(FAnimationTransitionBetweenStates),
		Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates.InnerSingleton, Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedStateExitTransition;
class UScriptStruct* FBakedStateExitTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedStateExitTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedStateExitTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedStateExitTransition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedStateExitTransition"));
	}
	return Z_Registration_Info_UScriptStruct_BakedStateExitTransition.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedStateExitTransition>()
{
	return FBakedStateExitTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanTakeDelegateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CanTakeDelegateIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomResultNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomResultNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransitionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDesiredTransitionReturnValue_MetaData[];
#endif
		static void NewProp_bDesiredTransitionReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesiredTransitionReturnValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticRemainingTimeRule_MetaData[];
#endif
		static void NewProp_bAutomaticRemainingTimeRule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticRemainingTimeRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SyncGroupNameToRequireValidMarkersRule;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseEvaluatorLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseEvaluatorLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseEvaluatorLinks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedStateExitTransition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex_MetaData[] = {
		{ "Comment", "// The node property index for this rule\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The node property index for this rule" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex = { "CanTakeDelegateIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, CanTakeDelegateIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex_MetaData[] = {
		{ "Comment", "// The blend graph result node index\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The blend graph result node index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex = { "CustomResultNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, CustomResultNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex_MetaData[] = {
		{ "Comment", "// The index into the machine table of transitions\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The index into the machine table of transitions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex = { "TransitionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, TransitionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_MetaData[] = {
		{ "Comment", "// What the transition rule node needs to return to take this transition (for bidirectional transitions)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "What the transition rule node needs to return to take this transition (for bidirectional transitions)" },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_SetBit(void* Obj)
	{
		((FBakedStateExitTransition*)Obj)->bDesiredTransitionReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue = { "bDesiredTransitionReturnValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBakedStateExitTransition), &Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_MetaData[] = {
		{ "Comment", "// Automatic Transition Rule based on animation remaining time.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Automatic Transition Rule based on animation remaining time." },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_SetBit(void* Obj)
	{
		((FBakedStateExitTransition*)Obj)->bAutomaticRemainingTimeRule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule = { "bAutomaticRemainingTimeRule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBakedStateExitTransition), &Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData[] = {
		{ "Comment", "// Additional rule around SyncGroup requiring Valid Markers\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Additional rule around SyncGroup requiring Valid Markers" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule = { "SyncGroupNameToRequireValidMarkersRule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, SyncGroupNameToRequireValidMarkersRule), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_Inner = { "PoseEvaluatorLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks = { "PoseEvaluatorLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStateExitTransition, PoseEvaluatorLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CanTakeDelegateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_CustomResultNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_TransitionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bDesiredTransitionReturnValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_bAutomaticRemainingTimeRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_SyncGroupNameToRequireValidMarkersRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewProp_PoseEvaluatorLinks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedStateExitTransition",
		sizeof(FBakedStateExitTransition),
		alignof(FBakedStateExitTransition),
		Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedStateExitTransition()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedStateExitTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedStateExitTransition.InnerSingleton, Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedStateExitTransition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedAnimationState;
class UScriptStruct* FBakedAnimationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedAnimationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedAnimationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedAnimationState"));
	}
	return Z_Registration_Info_UScriptStruct_BakedAnimationState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedAnimationState>()
{
	return FBakedAnimationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedAnimationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StateName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateRootNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateRootNodeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullyBlendedNotify_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FullyBlendedNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAConduit_MetaData[];
#endif
		static void NewProp_bIsAConduit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAConduit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryRuleNodeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntryRuleNodeIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerNodeIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerNodeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNodeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerNodeIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysResetOnEntry_MetaData[];
#endif
		static void NewProp_bAlwaysResetOnEntry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysResetOnEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedAnimationState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName_MetaData[] = {
		{ "Comment", "// The name of this state\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The name of this state" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, StateName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBakedStateExitTransition, METADATA_PARAMS(nullptr, 0) }; // 117948970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_MetaData[] = {
		{ "Comment", "// Set of legal transitions out of this state; already in priority order\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Set of legal transitions out of this state; already in priority order" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_MetaData)) }; // 117948970
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData[] = {
		{ "Comment", "// The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "The root node index (into the AnimNodeProperties array of the UAnimBlueprintGeneratedClass)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex = { "StateRootNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, StateRootNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify = { "StartNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, StartNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify = { "EndNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, EndNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify = { "FullyBlendedNotify", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, FullyBlendedNotify), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_SetBit(void* Obj)
	{
		((FBakedAnimationState*)Obj)->bIsAConduit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit = { "bIsAConduit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBakedAnimationState), &Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex = { "EntryRuleNodeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, EntryRuleNodeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_Inner = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_MetaData[] = {
		{ "Comment", "// Indices into the property array for player nodes in the state\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Indices into the property array for player nodes in the state" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices = { "PlayerNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, PlayerNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices_Inner = { "LayerNodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices_MetaData[] = {
		{ "Comment", "// Indices into the property array for layer nodes in the state\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Indices into the property array for layer nodes in the state" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices = { "LayerNodeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationState, LayerNodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_MetaData[] = {
		{ "Comment", "// Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight" },
	};
#endif
	void Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_SetBit(void* Obj)
	{
		((FBakedAnimationState*)Obj)->bAlwaysResetOnEntry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry = { "bAlwaysResetOnEntry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBakedAnimationState), &Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedAnimationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_Transitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StateRootNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_StartNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EndNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_FullyBlendedNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bIsAConduit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_EntryRuleNodeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_PlayerNodeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_LayerNodeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewProp_bAlwaysResetOnEntry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedAnimationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedAnimationState",
		sizeof(FBakedAnimationState),
		alignof(FBakedAnimationState),
		Z_Construct_UScriptStruct_FBakedAnimationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationState()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedAnimationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedAnimationState.InnerSingleton, Z_Construct_UScriptStruct_FBakedAnimationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedAnimationState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine;
class UScriptStruct* FBakedAnimationStateMachine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedAnimationStateMachine, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedAnimationStateMachine"));
	}
	return Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedAnimationStateMachine>()
{
	return FBakedAnimationStateMachine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialState;
		static const UECodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_States;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedAnimationStateMachine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName_MetaData[] = {
		{ "Comment", "// Name of this machine (primarily for debugging purposes)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Name of this machine (primarily for debugging purposes)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState_MetaData[] = {
		{ "Comment", "// Index of the initial state that the machine will start in\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "Index of the initial state that the machine will start in" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, InitialState), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBakedAnimationState, METADATA_PARAMS(nullptr, 0) }; // 4005874026
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_MetaData[] = {
		{ "Comment", "// List of all states this machine can be in\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "List of all states this machine can be in" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_MetaData)) }; // 4005874026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates, METADATA_PARAMS(nullptr, 0) }; // 1231655712
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_MetaData[] = {
		{ "Comment", "// List of all transitions between states\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
		{ "ToolTip", "List of all transitions between states" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedAnimationStateMachine, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_MetaData)) }; // 1231655712
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_MachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_InitialState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewProp_Transitions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedAnimationStateMachine",
		sizeof(FBakedAnimationStateMachine),
		alignof(FBakedAnimationStateMachine),
		Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedAnimationStateMachine()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine.InnerSingleton, Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine.InnerSingleton;
	}
	void UAnimStateMachineTypes::StaticRegisterNativesUAnimStateMachineTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStateMachineTypes);
	UClass* Z_Construct_UClass_UAnimStateMachineTypes_NoRegister()
	{
		return UAnimStateMachineTypes::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateMachineTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateMachineTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateMachineTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimStateMachineTypes.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimStateMachineTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateMachineTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateMachineTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateMachineTypes_Statics::ClassParams = {
		&UAnimStateMachineTypes::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateMachineTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateMachineTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateMachineTypes()
	{
		if (!Z_Registration_Info_UClass_UAnimStateMachineTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStateMachineTypes.OuterSingleton, Z_Construct_UClass_UAnimStateMachineTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStateMachineTypes.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimStateMachineTypes>()
	{
		return UAnimStateMachineTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateMachineTypes);
	UAnimStateMachineTypes::~UAnimStateMachineTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::EnumInfo[] = {
		{ ETransitionRequestQueueMode_StaticEnum, TEXT("ETransitionRequestQueueMode"), &Z_Registration_Info_UEnum_ETransitionRequestQueueMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4035696818U) },
		{ ETransitionRequestOverwriteMode_StaticEnum, TEXT("ETransitionRequestOverwriteMode"), &Z_Registration_Info_UEnum_ETransitionRequestOverwriteMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2897143268U) },
		{ ETransitionBlendMode_StaticEnum, TEXT("ETransitionBlendMode"), &Z_Registration_Info_UEnum_ETransitionBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3464726625U) },
		{ ETransitionLogicType_StaticEnum, TEXT("ETransitionLogicType"), &Z_Registration_Info_UEnum_ETransitionLogicType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 712308243U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::ScriptStructInfo[] = {
		{ FAnimationTransitionRule::StaticStruct, Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics::NewStructOps, TEXT("AnimationTransitionRule"), &Z_Registration_Info_UScriptStruct_AnimationTransitionRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationTransitionRule), 337919825U) },
		{ FAnimationStateBase::StaticStruct, Z_Construct_UScriptStruct_FAnimationStateBase_Statics::NewStructOps, TEXT("AnimationStateBase"), &Z_Registration_Info_UScriptStruct_AnimationStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationStateBase), 235384961U) },
		{ FAnimationState::StaticStruct, Z_Construct_UScriptStruct_FAnimationState_Statics::NewStructOps, TEXT("AnimationState"), &Z_Registration_Info_UScriptStruct_AnimationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationState), 4133898633U) },
		{ FAnimationTransitionBetweenStates::StaticStruct, Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics::NewStructOps, TEXT("AnimationTransitionBetweenStates"), &Z_Registration_Info_UScriptStruct_AnimationTransitionBetweenStates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationTransitionBetweenStates), 1231655712U) },
		{ FBakedStateExitTransition::StaticStruct, Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics::NewStructOps, TEXT("BakedStateExitTransition"), &Z_Registration_Info_UScriptStruct_BakedStateExitTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedStateExitTransition), 117948970U) },
		{ FBakedAnimationState::StaticStruct, Z_Construct_UScriptStruct_FBakedAnimationState_Statics::NewStructOps, TEXT("BakedAnimationState"), &Z_Registration_Info_UScriptStruct_BakedAnimationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedAnimationState), 4005874026U) },
		{ FBakedAnimationStateMachine::StaticStruct, Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics::NewStructOps, TEXT("BakedAnimationStateMachine"), &Z_Registration_Info_UScriptStruct_BakedAnimationStateMachine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedAnimationStateMachine), 2083701985U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStateMachineTypes, UAnimStateMachineTypes::StaticClass, TEXT("UAnimStateMachineTypes"), &Z_Registration_Info_UClass_UAnimStateMachineTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStateMachineTypes), 2865169324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_11195693(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
