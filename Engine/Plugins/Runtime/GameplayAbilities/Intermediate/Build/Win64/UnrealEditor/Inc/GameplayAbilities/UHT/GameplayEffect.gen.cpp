// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffect.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CurveTable.h"
#include "AttributeSet.h"
#include "GameplayAbilitySpec.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectTypes.h"
#include "GameplayPrediction.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffect() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModOp();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffect();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectQuery();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedFloat();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalGameplayEffect();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomCalculationBasedFloat();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecDef();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCue();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FModifierSpec();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKey();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSetByCallerFloat();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagContainerAggregator();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation;
	static UEnum* EGameplayEffectMagnitudeCalculation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectMagnitudeCalculation"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectMagnitudeCalculation>()
	{
		return EGameplayEffectMagnitudeCalculation_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enumerators[] = {
		{ "EGameplayEffectMagnitudeCalculation::ScalableFloat", (int64)EGameplayEffectMagnitudeCalculation::ScalableFloat },
		{ "EGameplayEffectMagnitudeCalculation::AttributeBased", (int64)EGameplayEffectMagnitudeCalculation::AttributeBased },
		{ "EGameplayEffectMagnitudeCalculation::CustomCalculationClass", (int64)EGameplayEffectMagnitudeCalculation::CustomCalculationClass },
		{ "EGameplayEffectMagnitudeCalculation::SetByCaller", (int64)EGameplayEffectMagnitudeCalculation::SetByCaller },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enum_MetaDataParams[] = {
		{ "AttributeBased.Comment", "/** Perform a calculation based upon an attribute. */" },
		{ "AttributeBased.Name", "EGameplayEffectMagnitudeCalculation::AttributeBased" },
		{ "AttributeBased.ToolTip", "Perform a calculation based upon an attribute." },
		{ "Comment", "/** Enumeration outlining the possible gameplay effect magnitude calculation policies. */" },
		{ "CustomCalculationClass.Comment", "/** Perform a custom calculation, capable of capturing and acting on multiple attributes, in either BP or native. */" },
		{ "CustomCalculationClass.Name", "EGameplayEffectMagnitudeCalculation::CustomCalculationClass" },
		{ "CustomCalculationClass.ToolTip", "Perform a custom calculation, capable of capturing and acting on multiple attributes, in either BP or native." },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ScalableFloat.Comment", "/** Use a simple, scalable float for the calculation. */" },
		{ "ScalableFloat.Name", "EGameplayEffectMagnitudeCalculation::ScalableFloat" },
		{ "ScalableFloat.ToolTip", "Use a simple, scalable float for the calculation." },
		{ "SetByCaller.Comment", "/** This magnitude will be set explicitly by the code/blueprint that creates the spec. */" },
		{ "SetByCaller.Name", "EGameplayEffectMagnitudeCalculation::SetByCaller" },
		{ "SetByCaller.ToolTip", "This magnitude will be set explicitly by the code/blueprint that creates the spec." },
		{ "ToolTip", "Enumeration outlining the possible gameplay effect magnitude calculation policies." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectMagnitudeCalculation",
		"EGameplayEffectMagnitudeCalculation",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType;
	static UEnum* EAttributeBasedFloatCalculationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EAttributeBasedFloatCalculationType"));
		}
		return Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EAttributeBasedFloatCalculationType>()
	{
		return EAttributeBasedFloatCalculationType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enumerators[] = {
		{ "EAttributeBasedFloatCalculationType::AttributeMagnitude", (int64)EAttributeBasedFloatCalculationType::AttributeMagnitude },
		{ "EAttributeBasedFloatCalculationType::AttributeBaseValue", (int64)EAttributeBasedFloatCalculationType::AttributeBaseValue },
		{ "EAttributeBasedFloatCalculationType::AttributeBonusMagnitude", (int64)EAttributeBasedFloatCalculationType::AttributeBonusMagnitude },
		{ "EAttributeBasedFloatCalculationType::AttributeMagnitudeEvaluatedUpToChannel", (int64)EAttributeBasedFloatCalculationType::AttributeMagnitudeEvaluatedUpToChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enum_MetaDataParams[] = {
		{ "AttributeBaseValue.Comment", "/** Use the base value of the attribute. */" },
		{ "AttributeBaseValue.Name", "EAttributeBasedFloatCalculationType::AttributeBaseValue" },
		{ "AttributeBaseValue.ToolTip", "Use the base value of the attribute." },
		{ "AttributeBonusMagnitude.Comment", "/** Use the \"bonus\" evaluated magnitude of the attribute: Equivalent to (FinalMag - BaseValue). */" },
		{ "AttributeBonusMagnitude.Name", "EAttributeBasedFloatCalculationType::AttributeBonusMagnitude" },
		{ "AttributeBonusMagnitude.ToolTip", "Use the \"bonus\" evaluated magnitude of the attribute: Equivalent to (FinalMag - BaseValue)." },
		{ "AttributeMagnitude.Comment", "/** Use the final evaluated magnitude of the attribute. */" },
		{ "AttributeMagnitude.Name", "EAttributeBasedFloatCalculationType::AttributeMagnitude" },
		{ "AttributeMagnitude.ToolTip", "Use the final evaluated magnitude of the attribute." },
		{ "AttributeMagnitudeEvaluatedUpToChannel.Comment", "/** Use a calculated magnitude stopping with the evaluation of the specified \"Final Channel\" */" },
		{ "AttributeMagnitudeEvaluatedUpToChannel.Name", "EAttributeBasedFloatCalculationType::AttributeMagnitudeEvaluatedUpToChannel" },
		{ "AttributeMagnitudeEvaluatedUpToChannel.ToolTip", "Use a calculated magnitude stopping with the evaluation of the specified \"Final Channel\"" },
		{ "Comment", "/** Enumeration outlining the possible attribute based float calculation policies. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Enumeration outlining the possible attribute based float calculation policies." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EAttributeBasedFloatCalculationType",
		"EAttributeBasedFloatCalculationType",
		Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType()
	{
		if (!Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributeBasedFloat;
class UScriptStruct* FAttributeBasedFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributeBasedFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributeBasedFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeBasedFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AttributeBasedFloat"));
	}
	return Z_Registration_Info_UScriptStruct_AttributeBasedFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAttributeBasedFloat>()
{
	return FAttributeBasedFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreMultiplyAdditiveValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreMultiplyAdditiveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostMultiplyAdditiveValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostMultiplyAdditiveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackingAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackingAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeCurve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeCalculationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCalculationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeCalculationType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinalChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Struct representing a float whose magnitude is dictated by a backing attribute and a calculation policy, follows basic form of:\n * (Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct representing a float whose magnitude is dictated by a backing attribute and a calculation policy, follows basic form of:\n(Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeBasedFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Coefficient to the attribute calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Coefficient to the attribute calculation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, Coefficient), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Additive value to the attribute calculation, added in before the coefficient applies */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Additive value to the attribute calculation, added in before the coefficient applies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue = { "PreMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, PreMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Additive value to the attribute calculation, added in after the coefficient applies */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Additive value to the attribute calculation, added in after the coefficient applies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue = { "PostMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, PostMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Attribute backing the calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Attribute backing the calculation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute = { "BackingAttribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, BackingAttribute), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute_MetaData)) }; // 361294328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** If a curve table entry is specified, the attribute will be used as a lookup into the curve instead of using the attribute directly. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If a curve table entry is specified, the attribute will be used as a lookup into the curve instead of using the attribute directly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve = { "AttributeCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, AttributeCurve), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve_MetaData)) }; // 2401088054
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Calculation policy in regards to the attribute */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Calculation policy in regards to the attribute" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType = { "AttributeCalculationType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, AttributeCalculationType), Z_Construct_UEnum_GameplayAbilities_EAttributeBasedFloatCalculationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_MetaData)) }; // 2880859215
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Channel to terminate evaluation on when using AttributeEvaluatedUpToChannel calculation type */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Channel to terminate evaluation on when using AttributeEvaluatedUpToChannel calculation type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel = { "FinalChannel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, FinalChannel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_MetaData)) }; // 3983419795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Filter to use on source tags; If specified, only modifiers applied with all of these tags will factor into the calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Filter to use on source tags; If specified, only modifiers applied with all of these tags will factor into the calculation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter = { "SourceTagFilter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, SourceTagFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter_MetaData[] = {
		{ "Category", "AttributeFloat" },
		{ "Comment", "/** Filter to use on target tags; If specified, only modifiers applied with all of these tags will factor into the calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Filter to use on target tags; If specified, only modifiers applied with all of these tags will factor into the calculation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter = { "TargetTagFilter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributeBasedFloat, TargetTagFilter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_Coefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_BackingAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_AttributeCalculationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_FinalChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_SourceTagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewProp_TargetTagFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AttributeBasedFloat",
		sizeof(FAttributeBasedFloat),
		alignof(FAttributeBasedFloat),
		Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeBasedFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributeBasedFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributeBasedFloat.InnerSingleton, Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributeBasedFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat;
class UScriptStruct* FCustomCalculationBasedFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("CustomCalculationBasedFloat"));
	}
	return Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FCustomCalculationBasedFloat>()
{
	return FCustomCalculationBasedFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculationClassMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CalculationClassMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreMultiplyAdditiveValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreMultiplyAdditiveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostMultiplyAdditiveValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostMultiplyAdditiveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalLookupCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalLookupCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure to encapsulate magnitudes that are calculated via custom calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Structure to encapsulate magnitudes that are calculated via custom calculation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomCalculationBasedFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude_MetaData[] = {
		{ "Category", "CustomCalculation" },
		{ "DisplayName", "Calculation Class" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude = { "CalculationClassMagnitude", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomCalculationBasedFloat, CalculationClassMagnitude), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient_MetaData[] = {
		{ "Category", "CustomCalculation" },
		{ "Comment", "/** Coefficient to the custom calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Coefficient to the custom calculation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomCalculationBasedFloat, Coefficient), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "CustomCalculation" },
		{ "Comment", "/** Additive value to the attribute calculation, added in before the coefficient applies */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Additive value to the attribute calculation, added in before the coefficient applies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue = { "PreMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue_MetaData[] = {
		{ "Category", "CustomCalculation" },
		{ "Comment", "/** Additive value to the attribute calculation, added in after the coefficient applies */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Additive value to the attribute calculation, added in after the coefficient applies" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue = { "PostMultiplyAdditiveValue", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve_MetaData[] = {
		{ "Category", "CustomCalculation" },
		{ "Comment", "/** If a curve table entry is specified, the OUTPUT of this custom class magnitude (including the pre and post additive values) lookup into the curve instead of using the attribute directly. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If a curve table entry is specified, the OUTPUT of this custom class magnitude (including the pre and post additive values) lookup into the curve instead of using the attribute directly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve = { "FinalLookupCurve", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomCalculationBasedFloat, FinalLookupCurve), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve_MetaData)) }; // 2401088054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_CalculationClassMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_Coefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PreMultiplyAdditiveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_PostMultiplyAdditiveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewProp_FinalLookupCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"CustomCalculationBasedFloat",
		sizeof(FCustomCalculationBasedFloat),
		alignof(FCustomCalculationBasedFloat),
		Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomCalculationBasedFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.InnerSingleton, Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetByCallerFloat;
class UScriptStruct* FSetByCallerFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetByCallerFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetByCallerFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetByCallerFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("SetByCallerFloat"));
	}
	return Z_Registration_Info_UScriptStruct_SetByCallerFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FSetByCallerFloat>()
{
	return FSetByCallerFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetByCallerFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct for holding SetBytCaller data */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct for holding SetBytCaller data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetByCallerFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName_MetaData[] = {
		{ "Category", "SetByCaller" },
		{ "Comment", "/** The Name the caller (code or blueprint) will use to set this magnitude by. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The Name the caller (code or blueprint) will use to set this magnitude by." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetByCallerFloat, DataName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag_MetaData[] = {
		{ "Categories", "SetByCaller" },
		{ "Category", "SetByCaller" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag = { "DataTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetByCallerFloat, DataTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewProp_DataTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"SetByCallerFloat",
		sizeof(FSetByCallerFloat),
		alignof(FSetByCallerFloat),
		Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetByCallerFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_SetByCallerFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetByCallerFloat.InnerSingleton, Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetByCallerFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude;
class UScriptStruct* FGameplayEffectModifierMagnitude::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectModifierMagnitude"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectModifierMagnitude>()
{
	return FGameplayEffectModifierMagnitude::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MagnitudeCalculationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeCalculationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MagnitudeCalculationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalableFloatMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalableFloatMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBasedMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeBasedMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerMagnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct representing the magnitude of a gameplay effect modifier, potentially calculated in numerous different ways */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct representing the magnitude of a gameplay effect modifier, potentially calculated in numerous different ways" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectModifierMagnitude>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_MetaData[] = {
		{ "Category", "Magnitude" },
		{ "Comment", "/** Type of calculation to perform to derive the magnitude */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Type of calculation to perform to derive the magnitude" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType = { "MagnitudeCalculationType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, MagnitudeCalculationType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectMagnitudeCalculation, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_MetaData)) }; // 3666996690
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
		{ "Comment", "/** Magnitude value represented by a scalable float */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Magnitude value represented by a scalable float" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude = { "ScalableFloatMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
		{ "Comment", "/** Magnitude value represented by an attribute-based float\n\x09(Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Magnitude value represented by an attribute-based float\n      (Coefficient * (PreMultiplyAdditiveValue + [Eval'd Attribute Value According to Policy])) + PostMultiplyAdditiveValue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude = { "AttributeBasedMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude), Z_Construct_UScriptStruct_FAttributeBasedFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude_MetaData)) }; // 3459238577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
		{ "Comment", "/** Magnitude value represented by a custom calculation class */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Magnitude value represented by a custom calculation class" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude = { "CustomMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, CustomMagnitude), Z_Construct_UScriptStruct_FCustomCalculationBasedFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude_MetaData)) }; // 1347521616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude_MetaData[] = {
		{ "Category", "Magnitude" },
		{ "Comment", "/** Magnitude value represented by a SetByCaller magnitude */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Magnitude value represented by a SetByCaller magnitude" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude = { "SetByCallerMagnitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifierMagnitude, SetByCallerMagnitude), Z_Construct_UScriptStruct_FSetByCallerFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude_MetaData)) }; // 3277855006
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_MagnitudeCalculationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_ScalableFloatMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_AttributeBasedMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_CustomMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewProp_SetByCallerMagnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectModifierMagnitude",
		sizeof(FGameplayEffectModifierMagnitude),
		alignof(FGameplayEffectModifierMagnitude),
		Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType;
	static UEnum* EGameplayEffectScopedModifierAggregatorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectScopedModifierAggregatorType"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectScopedModifierAggregatorType>()
	{
		return EGameplayEffectScopedModifierAggregatorType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enumerators[] = {
		{ "EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked", (int64)EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked },
		{ "EGameplayEffectScopedModifierAggregatorType::Transient", (int64)EGameplayEffectScopedModifierAggregatorType::Transient },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enum_MetaDataParams[] = {
		{ "CapturedAttributeBacked.Comment", "/** Aggregator is backed by an attribute capture */" },
		{ "CapturedAttributeBacked.Name", "EGameplayEffectScopedModifierAggregatorType::CapturedAttributeBacked" },
		{ "CapturedAttributeBacked.ToolTip", "Aggregator is backed by an attribute capture" },
		{ "Comment", "/** Enumeration representing the types of scoped modifier aggregator usages available */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Enumeration representing the types of scoped modifier aggregator usages available" },
		{ "Transient.Comment", "/** Aggregator is entirely transient (acting as a \"temporary variable\") and must be identified via gameplay tag */" },
		{ "Transient.Name", "EGameplayEffectScopedModifierAggregatorType::Transient" },
		{ "Transient.ToolTip", "Aggregator is entirely transient (acting as a \"temporary variable\") and must be identified via gameplay tag" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectScopedModifierAggregatorType",
		"EGameplayEffectScopedModifierAggregatorType",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo;
class UScriptStruct* FGameplayEffectExecutionScopedModifierInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectExecutionScopedModifierInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectExecutionScopedModifierInfo>()
{
	return FGameplayEffectExecutionScopedModifierInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientAggregatorIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransientAggregatorIdentifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AggregatorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregatorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AggregatorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationChannelSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationChannelSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Struct representing modifier info used exclusively for \"scoped\" executions that happen instantaneously. These are\n * folded into a calculation only for the extent of the calculation and never permanently added to an aggregator.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct representing modifier info used exclusively for \"scoped\" executions that happen instantaneously. These are\nfolded into a calculation only for the extent of the calculation and never permanently added to an aggregator." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectExecutionScopedModifierInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Backing attribute that the scoped modifier is for */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Backing attribute that the scoped modifier is for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute = { "CapturedAttribute", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute_MetaData)) }; // 361294328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Identifier for aggregator if acting as a transient \"temporary variable\" aggregator */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Identifier for aggregator if acting as a transient \"temporary variable\" aggregator" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier = { "TransientAggregatorIdentifier", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier_MetaData)) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Type of aggregator backing the scoped mod */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Type of aggregator backing the scoped mod" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType = { "AggregatorType", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, AggregatorType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectScopedModifierAggregatorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_MetaData)) }; // 411416119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Modifier operation to perform */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Modifier operation to perform" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp_MetaData)) }; // 1741596775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Magnitude of the scoped modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Magnitude of the scoped modifier" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude = { "ModifierMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude_MetaData)) }; // 3349763052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Evaluation channel settings of the scoped modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Evaluation channel settings of the scoped modifier" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings = { "EvaluationChannelSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings), Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings_MetaData)) }; // 1723749364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Source tag requirements for the modifier to apply */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Source tag requirements for the modifier to apply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, SourceTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags_MetaData)) }; // 1682790808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Target tag requirements for the modifier to apply */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Target tag requirements for the modifier to apply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionScopedModifierInfo, TargetTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags_MetaData)) }; // 1682790808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_CapturedAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TransientAggregatorIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_AggregatorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_ModifierMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_EvaluationChannelSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_SourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewProp_TargetTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectExecutionScopedModifierInfo",
		sizeof(FGameplayEffectExecutionScopedModifierInfo),
		alignof(FGameplayEffectExecutionScopedModifierInfo),
		Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect;
class UScriptStruct* FConditionalGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalGameplayEffect, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ConditionalGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FConditionalGameplayEffect>()
{
	return FConditionalGameplayEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredSourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredSourceTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct for gameplay effects that apply only if another gameplay effect (or execution) was successfully applied.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct for gameplay effects that apply only if another gameplay effect (or execution) was successfully applied." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalGameplayEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** gameplay effect that will be applied to the target */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "gameplay effect that will be applied to the target" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalGameplayEffect, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Tags that the source must have for this GE to apply */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags that the source must have for this GE to apply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags = { "RequiredSourceTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalGameplayEffect, RequiredSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_EffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewProp_RequiredSourceTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ConditionalGameplayEffect",
		sizeof(FConditionalGameplayEffect),
		alignof(FConditionalGameplayEffect),
		Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalGameplayEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition;
class UScriptStruct* FGameplayEffectExecutionDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectExecutionDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectExecutionDefinition>()
{
	return FGameplayEffectExecutionDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculationClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CalculationClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassedInTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PassedInTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalculationModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculationModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CalculationModifiers;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConditionalGameplayEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalGameplayEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalGameplayEffectClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalGameplayEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Struct representing the definition of a custom execution for a gameplay effect.\n * Custom executions run special logic from an outside class each time the gameplay effect executes.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct representing the definition of a custom execution for a gameplay effect.\nCustom executions run special logic from an outside class each time the gameplay effect executes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectExecutionDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Custom execution calculation class to run when the gameplay effect executes */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Custom execution calculation class to run when the gameplay effect executes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass = { "CalculationClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, CalculationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** These tags are passed into the execution as is, and may be used to do conditional logic */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "These tags are passed into the execution as is, and may be used to do conditional logic" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags = { "PassedInTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, PassedInTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_Inner = { "CalculationModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo, METADATA_PARAMS(nullptr, 0) }; // 1105525345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Modifiers that are applied \"in place\" during the execution calculation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Modifiers that are applied \"in place\" during the execution calculation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers = { "CalculationModifiers", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, CalculationModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_MetaData)) }; // 1105525345
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses_Inner = { "ConditionalGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses_MetaData[] = {
		{ "Comment", "/** Deprecated. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Deprecated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses = { "ConditionalGameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, ConditionalGameplayEffectClasses_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_Inner = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConditionalGameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 1360218460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_MetaData[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Other Gameplay Effects that will be applied to the target of this execution if the execution is successful. Note if no execution class is selected, these will always apply. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Other Gameplay Effects that will be applied to the target of this execution if the execution is successful. Note if no execution class is selected, these will always apply." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_MetaData)) }; // 1360218460
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_PassedInTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_CalculationModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewProp_ConditionalGameplayEffects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectExecutionDefinition",
		sizeof(FGameplayEffectExecutionDefinition),
		alignof(FGameplayEffectExecutionDefinition),
		Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayModifierInfo;
class UScriptStruct* FGameplayModifierInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayModifierInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayModifierInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierInfo, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayModifierInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayModifierInfo.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayModifierInfo>()
{
	return FGameplayModifierInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierOp_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierOp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationChannelSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationChannelSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FGameplayModifierInfo\n *\x09Tells us \"Who/What we\" modify\n *\x09""Does not tell us how exactly\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "FGameplayModifierInfo\n    Tells us \"Who/What we\" modify\n    Does not tell us how exactly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** The Attribute we modify or the GE we modify modifies. */" },
		{ "FilterMetaTag", "HideFromModifiers" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The Attribute we modify or the GE we modify modifies." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierInfo, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute_MetaData)) }; // 2095245243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** The numeric operation of this modifier: Override, Add, Multiply, etc  */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The numeric operation of this modifier: Override, Add, Multiply, etc" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp = { "ModifierOp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierInfo, ModifierOp), Z_Construct_UEnum_GameplayAbilities_EGameplayModOp, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp_MetaData)) }; // 1741596775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** Magnitude of the modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Magnitude of the modifier" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude = { "ModifierMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierInfo, ModifierMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude_MetaData)) }; // 3349763052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "Comment", "/** Evaluation channel settings of the modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Evaluation channel settings of the modifier" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings = { "EvaluationChannelSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierInfo, EvaluationChannelSettings), Z_Construct_UScriptStruct_FGameplayModEvaluationChannelSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings_MetaData)) }; // 1723749364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierInfo, SourceTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags_MetaData)) }; // 1682790808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags_MetaData[] = {
		{ "Category", "GameplayModifier" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayModifierInfo, TargetTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags_MetaData)) }; // 1682790808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierOp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_ModifierMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_EvaluationChannelSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_SourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewProp_TargetTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayModifierInfo",
		sizeof(FGameplayModifierInfo),
		alignof(FGameplayModifierInfo),
		Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayModifierInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayModifierInfo.InnerSingleton, Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayModifierInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCue;
class UScriptStruct* FGameplayEffectCue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCue, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectCue"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCue.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectCue>()
{
	return FGameplayEffectCue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectCue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagnitudeAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FGameplayEffectCue\n *\x09This is a cosmetic cue that can be tied to a UGameplayEffect. \n *  This is essentially a GameplayTag + a Min/Max level range that is used to map the level of a GameplayEffect to a normalized value used by the GameplayCue system.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "FGameplayEffectCue\n    This is a cosmetic cue that can be tied to a UGameplayEffect.\n This is essentially a GameplayTag + a Min/Max level range that is used to map the level of a GameplayEffect to a normalized value used by the GameplayCue system." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The attribute to use as the source for cue magnitude. If none use level */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The attribute to use as the source for cue magnitude. If none use level" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute = { "MagnitudeAttribute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCue, MagnitudeAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute_MetaData)) }; // 2095245243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The minimum level that this Cue supports */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The minimum level that this Cue supports" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel = { "MinLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCue, MinLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** The maximum level that this Cue supports */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The maximum level that this Cue supports" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCue, MaxLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Tags passed to the gameplay cue handler when this cue is activated */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags passed to the gameplay cue handler when this cue is activated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags = { "GameplayCueTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCue, GameplayCueTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MagnitudeAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MinLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_MaxLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewProp_GameplayCueTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectCue",
		sizeof(FGameplayEffectCue),
		alignof(FGameplayEffectCue),
		Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCue()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectCue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCue.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectCue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InheritedTagContainer;
class UScriptStruct* FInheritedTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InheritedTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InheritedTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInheritedTagContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("InheritedTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InheritedTagContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FInheritedTagContainer>()
{
	return FInheritedTagContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInheritedTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CombinedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Added_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Added;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Removed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure that is used to combine tags from parent and child blueprints in a safe way */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Structure that is used to combine tags from parent and child blueprints in a safe way" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInheritedTagContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Tags that I inherited and tags that I added minus tags that I removed*/" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags that I inherited and tags that I added minus tags that I removed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags = { "CombinedTags", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInheritedTagContainer, CombinedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Tags that I have in addition to my parent's tags */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags that I have in addition to my parent's tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added = { "Added", nullptr, (EPropertyFlags)0x0010000000012015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInheritedTagContainer, Added), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Tags that should be removed if my parent had them */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags that should be removed if my parent had them" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000000012015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInheritedTagContainer, Removed), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_CombinedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Added,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewProp_Removed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"InheritedTagContainer",
		sizeof(FInheritedTagContainer),
		alignof(FInheritedTagContainer),
		Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInheritedTagContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_InheritedTagContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InheritedTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InheritedTagContainer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectDurationType;
	static UEnum* EGameplayEffectDurationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectDurationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectDurationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectDurationType"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectDurationType.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectDurationType>()
	{
		return EGameplayEffectDurationType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enumerators[] = {
		{ "EGameplayEffectDurationType::Instant", (int64)EGameplayEffectDurationType::Instant },
		{ "EGameplayEffectDurationType::Infinite", (int64)EGameplayEffectDurationType::Infinite },
		{ "EGameplayEffectDurationType::HasDuration", (int64)EGameplayEffectDurationType::HasDuration },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Gameplay effect duration policies */" },
		{ "HasDuration.Comment", "/** The duration of this effect will be specified by a magnitude */" },
		{ "HasDuration.Name", "EGameplayEffectDurationType::HasDuration" },
		{ "HasDuration.ToolTip", "The duration of this effect will be specified by a magnitude" },
		{ "Infinite.Comment", "/** This effect lasts forever */" },
		{ "Infinite.Name", "EGameplayEffectDurationType::Infinite" },
		{ "Infinite.ToolTip", "This effect lasts forever" },
		{ "Instant.Comment", "/** This effect applies instantly */" },
		{ "Instant.Name", "EGameplayEffectDurationType::Instant" },
		{ "Instant.ToolTip", "This effect applies instantly" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Gameplay effect duration policies" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectDurationType",
		"EGameplayEffectDurationType",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectDurationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectDurationType.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectDurationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy;
	static UEnum* EGameplayEffectStackingDurationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingDurationPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingDurationPolicy>()
	{
		return EGameplayEffectStackingDurationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enumerators[] = {
		{ "EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication", (int64)EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication },
		{ "EGameplayEffectStackingDurationPolicy::NeverRefresh", (int64)EGameplayEffectStackingDurationPolicy::NeverRefresh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration of policies for dealing with duration of a gameplay effect while stacking */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NeverRefresh.Comment", "/** The duration of the effect will never be refreshed */" },
		{ "NeverRefresh.Name", "EGameplayEffectStackingDurationPolicy::NeverRefresh" },
		{ "NeverRefresh.ToolTip", "The duration of the effect will never be refreshed" },
		{ "RefreshOnSuccessfulApplication.Comment", "/** The duration of the effect will be refreshed from any successful stack application */" },
		{ "RefreshOnSuccessfulApplication.Name", "EGameplayEffectStackingDurationPolicy::RefreshOnSuccessfulApplication" },
		{ "RefreshOnSuccessfulApplication.ToolTip", "The duration of the effect will be refreshed from any successful stack application" },
		{ "ToolTip", "Enumeration of policies for dealing with duration of a gameplay effect while stacking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectStackingDurationPolicy",
		"EGameplayEffectStackingDurationPolicy",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy;
	static UEnum* EGameplayEffectStackingPeriodPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingPeriodPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingPeriodPolicy>()
	{
		return EGameplayEffectStackingPeriodPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enumerators[] = {
		{ "EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication", (int64)EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication },
		{ "EGameplayEffectStackingPeriodPolicy::NeverReset", (int64)EGameplayEffectStackingPeriodPolicy::NeverReset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration of policies for dealing with the period of a gameplay effect while stacking */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NeverReset.Comment", "/** The progress toward the next tick of a periodic effect will never be reset, regardless of stack applications */" },
		{ "NeverReset.Name", "EGameplayEffectStackingPeriodPolicy::NeverReset" },
		{ "NeverReset.ToolTip", "The progress toward the next tick of a periodic effect will never be reset, regardless of stack applications" },
		{ "ResetOnSuccessfulApplication.Comment", "/** Any progress toward the next tick of a periodic effect is discarded upon any successful stack application */" },
		{ "ResetOnSuccessfulApplication.Name", "EGameplayEffectStackingPeriodPolicy::ResetOnSuccessfulApplication" },
		{ "ResetOnSuccessfulApplication.ToolTip", "Any progress toward the next tick of a periodic effect is discarded upon any successful stack application" },
		{ "ToolTip", "Enumeration of policies for dealing with the period of a gameplay effect while stacking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectStackingPeriodPolicy",
		"EGameplayEffectStackingPeriodPolicy",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy;
	static UEnum* EGameplayEffectStackingExpirationPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectStackingExpirationPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectStackingExpirationPolicy>()
	{
		return EGameplayEffectStackingExpirationPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enumerators[] = {
		{ "EGameplayEffectStackingExpirationPolicy::ClearEntireStack", (int64)EGameplayEffectStackingExpirationPolicy::ClearEntireStack },
		{ "EGameplayEffectStackingExpirationPolicy::RemoveSingleStackAndRefreshDuration", (int64)EGameplayEffectStackingExpirationPolicy::RemoveSingleStackAndRefreshDuration },
		{ "EGameplayEffectStackingExpirationPolicy::RefreshDuration", (int64)EGameplayEffectStackingExpirationPolicy::RefreshDuration },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enum_MetaDataParams[] = {
		{ "ClearEntireStack.Comment", "/** The entire stack is cleared when the active gameplay effect expires  */" },
		{ "ClearEntireStack.Name", "EGameplayEffectStackingExpirationPolicy::ClearEntireStack" },
		{ "ClearEntireStack.ToolTip", "The entire stack is cleared when the active gameplay effect expires" },
		{ "Comment", "/** Enumeration of policies for dealing gameplay effect stacks that expire (in duration based effects). */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "RefreshDuration.Comment", "/** The duration of the gameplay effect is refreshed. This essentially makes the effect infinite in duration. This can be used to manually handle stack decrements via OnStackCountChange callback */" },
		{ "RefreshDuration.Name", "EGameplayEffectStackingExpirationPolicy::RefreshDuration" },
		{ "RefreshDuration.ToolTip", "The duration of the gameplay effect is refreshed. This essentially makes the effect infinite in duration. This can be used to manually handle stack decrements via OnStackCountChange callback" },
		{ "RemoveSingleStackAndRefreshDuration.Comment", "/** The current stack count will be decremented by 1 and the duration refreshed. The GE is not \"reapplied\", just continues to exist with one less stacks. */" },
		{ "RemoveSingleStackAndRefreshDuration.Name", "EGameplayEffectStackingExpirationPolicy::RemoveSingleStackAndRefreshDuration" },
		{ "RemoveSingleStackAndRefreshDuration.ToolTip", "The current stack count will be decremented by 1 and the duration refreshed. The GE is not \"reapplied\", just continues to exist with one less stacks." },
		{ "ToolTip", "Enumeration of policies for dealing gameplay effect stacks that expire (in duration based effects)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectStackingExpirationPolicy",
		"EGameplayEffectStackingExpirationPolicy",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy;
	static UEnum* EGameplayEffectPeriodInhibitionRemovedPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectPeriodInhibitionRemovedPolicy"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectPeriodInhibitionRemovedPolicy>()
	{
		return EGameplayEffectPeriodInhibitionRemovedPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enumerators[] = {
		{ "EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset", (int64)EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset },
		{ "EGameplayEffectPeriodInhibitionRemovedPolicy::ResetPeriod", (int64)EGameplayEffectPeriodInhibitionRemovedPolicy::ResetPeriod },
		{ "EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod", (int64)EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration of policies for dealing with the period of a gameplay effect when inhibition is removed */" },
		{ "ExecuteAndResetPeriod.Comment", "/** Executes immediately and resets the period. */" },
		{ "ExecuteAndResetPeriod.Name", "EGameplayEffectPeriodInhibitionRemovedPolicy::ExecuteAndResetPeriod" },
		{ "ExecuteAndResetPeriod.ToolTip", "Executes immediately and resets the period." },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NeverReset.Comment", "/** Does not reset. The period timing will continue as if the inhibition hadn't occurred. */" },
		{ "NeverReset.Name", "EGameplayEffectPeriodInhibitionRemovedPolicy::NeverReset" },
		{ "NeverReset.ToolTip", "Does not reset. The period timing will continue as if the inhibition hadn't occurred." },
		{ "ResetPeriod.Comment", "/** Resets the period. The next execution will occur one full period from when inhibition is removed. */" },
		{ "ResetPeriod.Name", "EGameplayEffectPeriodInhibitionRemovedPolicy::ResetPeriod" },
		{ "ResetPeriod.ToolTip", "Resets the period. The next execution will occur one full period from when inhibition is removed." },
		{ "ToolTip", "Enumeration of policies for dealing with the period of a gameplay effect when inhibition is removed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectPeriodInhibitionRemovedPolicy",
		"EGameplayEffectPeriodInhibitionRemovedPolicy",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifierSpec;
class UScriptStruct* FModifierSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifierSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifierSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifierSpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ModifierSpec"));
	}
	return Z_Registration_Info_UScriptStruct_ModifierSpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FModifierSpec>()
{
	return FModifierSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModifierSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatedMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvaluatedMagnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierSpec_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds evaluated magnitude from a GameplayEffect modifier */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Holds evaluated magnitude from a GameplayEffect modifier" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModifierSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifierSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude_MetaData[] = {
		{ "Comment", "/** In the event that the modifier spec requires custom magnitude calculations, this is the authoritative, last evaluated value of the magnitude */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "In the event that the modifier spec requires custom magnitude calculations, this is the authoritative, last evaluated value of the magnitude" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude = { "EvaluatedMagnitude", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModifierSpec, EvaluatedMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifierSpec_Statics::NewProp_EvaluatedMagnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifierSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ModifierSpec",
		sizeof(FModifierSpec),
		alignof(FModifierSpec),
		Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModifierSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifierSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModifierSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_ModifierSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifierSpec.InnerSingleton, Z_Construct_UScriptStruct_FModifierSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModifierSpec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute;
class UScriptStruct* FGameplayEffectModifiedAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectModifiedAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectModifiedAttribute>()
{
	return FGameplayEffectModifiedAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMagnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Saves list of modified attributes, to use for gameplay cues or later processing */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Saves list of modified attributes, to use for gameplay cues or later processing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectModifiedAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute_MetaData[] = {
		{ "Comment", "/** The attribute that has been modified */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The attribute that has been modified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifiedAttribute, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute_MetaData)) }; // 2095245243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude_MetaData[] = {
		{ "Comment", "/** Total magnitude applied to that attribute */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Total magnitude applied to that attribute" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude = { "TotalMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectModifiedAttribute, TotalMagnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewProp_TotalMagnitude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectModifiedAttribute",
		sizeof(FGameplayEffectModifiedAttribute),
		alignof(FGameplayEffectModifiedAttribute),
		Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec;
class UScriptStruct* FGameplayEffectAttributeCaptureSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureSpec"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureSpec>()
{
	return FGameplayEffectAttributeCaptureSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackingDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackingDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct used to hold the result of a gameplay attribute capture; Initially seeded by definition data, but then populated by ability system component when appropriate */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct used to hold the result of a gameplay attribute capture; Initially seeded by definition data, but then populated by ability system component when appropriate" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition_MetaData[] = {
		{ "Comment", "/** Copy of the definition the spec should adhere to for capturing */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Copy of the definition the spec should adhere to for capturing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition = { "BackingDefinition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectAttributeCaptureSpec, BackingDefinition), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition_MetaData)) }; // 361294328
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewProp_BackingDefinition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectAttributeCaptureSpec",
		sizeof(FGameplayEffectAttributeCaptureSpec),
		alignof(FGameplayEffectAttributeCaptureSpec),
		Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer;
class UScriptStruct* FGameplayEffectAttributeCaptureSpecContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureSpecContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureSpecContainer>()
{
	return FGameplayEffectAttributeCaptureSpecContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasNonSnapshottedAttributes_MetaData[];
#endif
		static void NewProp_bHasNonSnapshottedAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasNonSnapshottedAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct used to handle a collection of captured source and target attributes */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Struct used to handle a collection of captured source and target attributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureSpecContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_Inner = { "SourceAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec, METADATA_PARAMS(nullptr, 0) }; // 4020012031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_MetaData[] = {
		{ "Comment", "/** Captured attributes from the source of a gameplay effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Captured attributes from the source of a gameplay effect" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes = { "SourceAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_MetaData)) }; // 4020012031
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_Inner = { "TargetAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec, METADATA_PARAMS(nullptr, 0) }; // 4020012031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_MetaData[] = {
		{ "Comment", "/** Captured attributes from the target of a gameplay effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Captured attributes from the target of a gameplay effect" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes = { "TargetAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_MetaData)) }; // 4020012031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_MetaData[] = {
		{ "Comment", "/** If true, has at least one capture spec that did not request a snapshot */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If true, has at least one capture spec that did not request a snapshot" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_SetBit(void* Obj)
	{
		((FGameplayEffectAttributeCaptureSpecContainer*)Obj)->bHasNonSnapshottedAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes = { "bHasNonSnapshottedAttributes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayEffectAttributeCaptureSpecContainer), &Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_SourceAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_TargetAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewProp_bHasNonSnapshottedAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectAttributeCaptureSpecContainer",
		sizeof(FGameplayEffectAttributeCaptureSpecContainer),
		alignof(FGameplayEffectAttributeCaptureSpecContainer),
		Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectSpec;
class UScriptStruct* FGameplayEffectSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpec, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpec"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpec.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpec>()
{
	return FGameplayEffectSpec::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Def_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Def;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedRelevantAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedRelevantAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToApplyToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToApplyToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedSourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedSourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedTargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedTargetTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGrantedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicGrantedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAssetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAssetTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompletedSourceAttributeCapture_MetaData[];
#endif
		static void NewProp_bCompletedSourceAttributeCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletedSourceAttributeCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompletedTargetAttributeCapture_MetaData[];
#endif
		static void NewProp_bCompletedTargetAttributeCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletedTargetAttributeCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDurationLocked_MetaData[];
#endif
		static void NewProp_bDurationLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDurationLocked;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilitySpecs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilitySpecs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilitySpecs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GameplayEffect Specification. Tells us:\n *\x09-What UGameplayEffect (const data)\n *\x09-What Level\n *  -Who instigated\n *  \n * FGameplayEffectSpec is modifiable. We start with initial conditions and modifications be applied to it. In this sense, it is stateful/mutable but it\n * is still distinct from an FActiveGameplayEffect which in an applied instance of an FGameplayEffectSpec.\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "GameplayEffect Specification. Tells us:\n    -What UGameplayEffect (const data)\n    -What Level\n -Who instigated\n\nFGameplayEffectSpec is modifiable. We start with initial conditions and modifications be applied to it. In this sense, it is stateful/mutable but it\nis still distinct from an FActiveGameplayEffect which in an applied instance of an FGameplayEffectSpec." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpec>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def_MetaData[] = {
		{ "Comment", "/** GameplayEfect definition. The static data that this spec points to. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "GameplayEfect definition. The static data that this spec points to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, Def), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_Inner = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute, METADATA_PARAMS(nullptr, 0) }; // 2319764496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_MetaData[] = {
		{ "Comment", "/** A list of attributes that were modified during the application of this spec */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "A list of attributes that were modified during the application of this spec" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, ModifiedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_MetaData)) }; // 2319764496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes_MetaData[] = {
		{ "Comment", "/** Attributes captured by the spec that are relevant to custom calculations, potentially in owned modifiers, etc.; NOT replicated to clients */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Attributes captured by the spec that are relevant to custom calculations, potentially in owned modifiers, etc.; NOT replicated to clients" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes = { "CapturedRelevantAttributes", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, CapturedRelevantAttributes), Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes_MetaData)) }; // 1947702479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/**\n\x09 * The duration in seconds of this effect\n\x09 * instantaneous effects should have a duration of FGameplayEffectConstants::INSTANT_APPLICATION\n\x09 * effects that last forever should have a duration of FGameplayEffectConstants::INFINITE_DURATION\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The duration in seconds of this effect\ninstantaneous effects should have a duration of FGameplayEffectConstants::INSTANT_APPLICATION\neffects that last forever should have a duration of FGameplayEffectConstants::INFINITE_DURATION" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period_MetaData[] = {
		{ "Comment", "/** The period in seconds of this effect, nonperiodic effects should have a period of FGameplayEffectConstants::NO_PERIOD */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The period in seconds of this effect, nonperiodic effects should have a period of FGameplayEffectConstants::NO_PERIOD" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, Period), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget_MetaData[] = {
		{ "Comment", "/** The chance, in a 0.0-1.0 range, that this GameplayEffect will be applied to the target Attribute or GameplayEffect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The chance, in a 0.0-1.0 range, that this GameplayEffect will be applied to the target Attribute or GameplayEffect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget = { "ChanceToApplyToTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, ChanceToApplyToTarget), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags_MetaData[] = {
		{ "Comment", "/** Captured Source Tags on GameplayEffectSpec creation */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Captured Source Tags on GameplayEffectSpec creation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags = { "CapturedSourceTags", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, CapturedSourceTags), Z_Construct_UScriptStruct_FTagContainerAggregator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags_MetaData)) }; // 3298126561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags_MetaData[] = {
		{ "Comment", "/** Tags from the target, captured during execute */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags from the target, captured during execute" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags = { "CapturedTargetTags", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, CapturedTargetTags), Z_Construct_UScriptStruct_FTagContainerAggregator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags_MetaData)) }; // 3298126561
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags_MetaData[] = {
		{ "Comment", "/** Tags that are granted and that did not come from the UGameplayEffect def. These are replicated. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tags that are granted and that did not come from the UGameplayEffect def. These are replicated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags = { "DynamicGrantedTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, DynamicGrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags = { "DynamicAssetTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, DynamicAssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModifierSpec, METADATA_PARAMS(nullptr, 0) }; // 2389858847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Comment", "/** The calcuated modifiers for this effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The calcuated modifiers for this effect" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_MetaData)) }; // 2389858847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount_MetaData[] = {
		{ "Comment", "/** Total number of stacks of this effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Total number of stacks of this effect" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_MetaData[] = {
		{ "Comment", "/** Whether the spec has had its source attribute capture completed or not yet */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Whether the spec has had its source attribute capture completed or not yet" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_SetBit(void* Obj)
	{
		((FGameplayEffectSpec*)Obj)->bCompletedSourceAttributeCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture = { "bCompletedSourceAttributeCapture", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectSpec), &Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_MetaData[] = {
		{ "Comment", "/** Whether the spec has had its target attribute capture completed or not yet */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Whether the spec has had its target attribute capture completed or not yet" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_SetBit(void* Obj)
	{
		((FGameplayEffectSpec*)Obj)->bCompletedTargetAttributeCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture = { "bCompletedTargetAttributeCapture", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectSpec), &Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_MetaData[] = {
		{ "Comment", "/** Whether the duration of the spec is locked or not; If it is, attempts to set it will fail */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Whether the duration of the spec is locked or not; If it is, attempts to set it will fail" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_SetBit(void* Obj)
	{
		((FGameplayEffectSpec*)Obj)->bDurationLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked = { "bDurationLocked", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectSpec), &Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_Inner = { "GrantedAbilitySpecs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, METADATA_PARAMS(nullptr, 0) }; // 2386331415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_MetaData[] = {
		{ "Comment", "/** List of abilities granted by this effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "List of abilities granted by this effect" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs = { "GrantedAbilitySpecs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, GrantedAbilitySpecs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_MetaData)) }; // 2386331415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext_MetaData[] = {
		{ "Comment", "/** This tells us how we got here (who / what applied us) */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "This tells us how we got here (who / what applied us)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext_MetaData)) }; // 668201340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level_MetaData[] = {
		{ "Comment", "/** The level this effect was applied at */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The level this effect was applied at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpec, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Def,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ModifiedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedRelevantAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_ChanceToApplyToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedSourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_CapturedTargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicGrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_DynamicAssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_StackCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedSourceAttributeCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bCompletedTargetAttributeCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_bDurationLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_GrantedAbilitySpecs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewProp_Level,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectSpec",
		sizeof(FGameplayEffectSpec),
		alignof(FGameplayEffectSpec),
		Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectSpec.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectSpec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC;
class UScriptStruct* FGameplayEffectSpecForRPC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectSpecForRPC"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectSpecForRPC>()
{
	return FGameplayEffectSpecForRPC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Def_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Def;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedSourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedSourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AggregatedTargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AggregatedTargetTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is a cut down version of the gameplay effect spec used for RPCs. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "This is a cut down version of the gameplay effect spec used for RPCs." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectSpecForRPC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def_MetaData[] = {
		{ "Comment", "/** GameplayEfect definition. The static data that this spec points to. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "GameplayEfect definition. The static data that this spec points to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def = { "Def", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, Def), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_Inner = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute, METADATA_PARAMS(nullptr, 0) }; // 2319764496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes = { "ModifiedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, ModifiedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_MetaData)) }; // 2319764496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext = { "EffectContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, EffectContext), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext_MetaData)) }; // 668201340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags = { "AggregatedSourceTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, AggregatedSourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags = { "AggregatedTargetTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, AggregatedTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel = { "AbilityLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectSpecForRPC, AbilityLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Def,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_ModifiedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_EffectContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedSourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AggregatedTargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewProp_AbilityLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectSpecForRPC",
		sizeof(FGameplayEffectSpecForRPC),
		alignof(FGameplayEffectSpecForRPC),
		Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActiveGameplayEffect>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FActiveGameplayEffect cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffect;
class UScriptStruct* FActiveGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffect, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffect>()
{
	return FActiveGameplayEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartServerWorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartServerWorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedStartServerWorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedStartServerWorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartWorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartWorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInhibited_MetaData[];
#endif
		static void NewProp_bIsInhibited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInhibited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Active GameplayEffect instance\n *\x09-What GameplayEffect Spec\n *\x09-Start time\n *  -When to execute next\n *  -Replication callbacks\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Active GameplayEffect instance\n    -What GameplayEffect Spec\n    -Start time\n -When to execute next\n -Replication callbacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffect, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey = { "PredictionKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffect, PredictionKey), Z_Construct_UScriptStruct_FPredictionKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey_MetaData)) }; // 2453680625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime_MetaData[] = {
		{ "Comment", "/** Server time this started */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Server time this started" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime = { "StartServerWorldTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffect, StartServerWorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime_MetaData[] = {
		{ "Comment", "/** Used for handling duration modifications being replicated */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Used for handling duration modifications being replicated" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime = { "CachedStartServerWorldTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffect, CachedStartServerWorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime = { "StartWorldTime", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffect, StartWorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_MetaData[] = {
		{ "Comment", "// Not sure if this should replicate or not. If replicated, we may have trouble where IsInhibited doesn't appear to change when we do tag checks (because it was previously inhibited, but replication made it inhibited).\n" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Not sure if this should replicate or not. If replicated, we may have trouble where IsInhibited doesn't appear to change when we do tag checks (because it was previously inhibited, but replication made it inhibited)." },
	};
#endif
	void Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_SetBit(void* Obj)
	{
		((FActiveGameplayEffect*)Obj)->bIsInhibited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited = { "bIsInhibited", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActiveGameplayEffect), &Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_Spec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_PredictionKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartServerWorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_CachedStartServerWorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_StartWorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewProp_bIsInhibited,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"ActiveGameplayEffect",
		sizeof(FActiveGameplayEffect),
		alignof(FActiveGameplayEffect),
		Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveGameplayEffect.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms
		{
			FActiveGameplayEffect Effect;
			bool bMatches;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effect;
		static void NewProp_bMatches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms, Effect), Z_Construct_UScriptStruct_FActiveGameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 2826443297
	void Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches_SetBit(void* Obj)
	{
		((_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms*)Obj)->bMatches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches = { "bMatches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms), &Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::NewProp_bMatches,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FActiveGameplayEffectQueryCustomMatch_Dynamic_DelegateWrapper(const FScriptDelegate& ActiveGameplayEffectQueryCustomMatch_Dynamic, FActiveGameplayEffect Effect, bool& bMatches)
{
	struct _Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms
	{
		FActiveGameplayEffect Effect;
		bool bMatches;
	};
	_Script_GameplayAbilities_eventActiveGameplayEffectQueryCustomMatch_Dynamic_Parms Parms;
	Parms.Effect=Effect;
	Parms.bMatches=bMatches ? true : false;
	ActiveGameplayEffectQueryCustomMatch_Dynamic.ProcessDelegate<UObject>(&Parms);
	bMatches=Parms.bMatches;
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectQuery;
class UScriptStruct* FGameplayEffectQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectQuery, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectQuery"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectQuery.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectQuery>()
{
	return FGameplayEffectQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMatchDelegate_BP_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CustomMatchDelegate_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwningTagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectTagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyingAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyingAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EffectDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Every set condition within this query must match in order for the query to match. i.e. individual query elements are ANDed together. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Every set condition within this query must match in order for the query to match. i.e. individual query elements are ANDed together." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** BP-exposed delegate for providing custom matching conditions. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "BP-exposed delegate for providing custom matching conditions." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP = { "CustomMatchDelegate_BP", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, CustomMatchDelegate_BP), Z_Construct_UDelegateFunction_GameplayAbilities_ActiveGameplayEffectQueryCustomMatch_Dynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP_MetaData)) }; // 1556096500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** Query that is matched against tags this GE gives */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Query that is matched against tags this GE gives" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery = { "OwningTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, OwningTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** Query that is matched against tags this GE has */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Query that is matched against tags this GE has" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery = { "EffectTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, EffectTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** Query that is matched against tags the source of this GE has */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Query that is matched against tags the source of this GE has" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery = { "SourceTagQuery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, SourceTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery_MetaData)) }; // 689482789
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** Matches on GameplayEffects which modify given attribute. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Matches on GameplayEffects which modify given attribute." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute = { "ModifyingAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, ModifyingAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute_MetaData)) }; // 2095245243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** Matches on GameplayEffects which come from this source */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Matches on GameplayEffects which come from this source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource = { "EffectSource", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, EffectSource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** Matches on GameplayEffects with this definition */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Matches on GameplayEffects with this definition" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition = { "EffectDefinition", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectQuery, EffectDefinition), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_CustomMatchDelegate_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_OwningTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_SourceTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_ModifyingAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewProp_EffectDefinition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectQuery",
		sizeof(FGameplayEffectQuery),
		alignof(FGameplayEffectQuery),
		Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectQuery.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectQuery.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery;
class UScriptStruct* FActiveGameplayEffectQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffectQuery, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffectQuery"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffectQuery>()
{
	return FActiveGameplayEffectQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Generic querying data structure for active GameplayEffects. Lets us ask things like:\n *\x09\x09Give me duration/magnitude of active gameplay effects with these tags\n *\x09\x09Give me handles to all activate gameplay effects modifying this attribute.\n *\x09\x09\n *\x09""Any requirements specified in the query are required: must meet \"all\" not \"one\".\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Generic querying data structure for active GameplayEffects. Lets us ask things like:\n        Give me duration/magnitude of active gameplay effects with these tags\n        Give me handles to all activate gameplay effects modifying this attribute.\n\nAny requirements specified in the query are required: must meet \"all\" not \"one\"." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffectQuery>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ActiveGameplayEffectQuery",
		sizeof(FActiveGameplayEffectQuery),
		alignof(FActiveGameplayEffectQuery),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery.InnerSingleton;
	}

static_assert(std::is_polymorphic<FActiveGameplayEffectsContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FActiveGameplayEffectsContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer;
class UScriptStruct* FActiveGameplayEffectsContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ActiveGameplayEffectsContainer"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FActiveGameplayEffectsContainer>()
{
	return FActiveGameplayEffectsContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FActiveGameplayEffectsContainer);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FActiveGameplayEffectsContainer);
#endif
	struct Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffects_Internal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffects_Internal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffects_Internal;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ApplicationImmunityQueryEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationImmunityQueryEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationImmunityQueryEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Active GameplayEffects Container\n *\x09-Bucket of ActiveGameplayEffects\n *\x09-Needed for FFastArraySerialization\n *  \n * This should only be used by UAbilitySystemComponent. All of this could just live in UAbilitySystemComponent except that we need a distinct USTRUCT to implement FFastArraySerializer.\n *\n * The preferred way to iterate through the ActiveGameplayEffectContainer is with CreateConstIterator/CreateIterator or stl style range iteration:\n * \n *\x09""for (const FActiveGameplayEffect& Effect : this) {}\n *\x09""for (auto It = CreateConstIterator(); It; ++It) {}\n *\n */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Active GameplayEffects Container\n    -Bucket of ActiveGameplayEffects\n    -Needed for FFastArraySerialization\n\nThis should only be used by UAbilitySystemComponent. All of this could just live in UAbilitySystemComponent except that we need a distinct USTRUCT to implement FFastArraySerializer.\n\nThe preferred way to iterate through the ActiveGameplayEffectContainer is with CreateConstIterator/CreateIterator or stl style range iteration:\n\n    for (const FActiveGameplayEffect& Effect : this) {}\n    for (auto It = CreateConstIterator(); It; ++It) {}" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveGameplayEffectsContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_Inner = { "GameplayEffects_Internal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 2826443297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_MetaData[] = {
		{ "Comment", "/** Our active list of Effects. Do not access this directly (Even from internal functions!) Use GetNumGameplayEffect() / GetGameplayEffect() ! */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Our active list of Effects. Do not access this directly (Even from internal functions!) Use GetNumGameplayEffect() / GetGameplayEffect() !" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal = { "GameplayEffects_Internal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffectsContainer, GameplayEffects_Internal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_MetaData)) }; // 2826443297
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects_Inner = { "ApplicationImmunityQueryEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects_MetaData[] = {
		{ "Comment", "/** Active GEs that have immunity queries. This is an acceleration list to avoid searching through the Active GameplayEffect list frequetly. (We only search for the active GE if immunity procs) */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Active GEs that have immunity queries. This is an acceleration list to avoid searching through the Active GameplayEffect list frequetly. (We only search for the active GE if immunity procs)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects = { "ApplicationImmunityQueryEffects", nullptr, (EPropertyFlags)0x0044000080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActiveGameplayEffectsContainer, ApplicationImmunityQueryEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_GameplayEffects_Internal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewProp_ApplicationImmunityQueryEffects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"ActiveGameplayEffectsContainer",
		sizeof(FActiveGameplayEffectsContainer),
		alignof(FActiveGameplayEffectsContainer),
		Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.InnerSingleton, Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer.InnerSingleton;
	}
	void UGameplayEffect::StaticRegisterNativesUGameplayEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffect);
	UClass* Z_Construct_UClass_UGameplayEffect_NoRegister()
	{
		return UGameplayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DurationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DurationMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Period_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Period;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecutePeriodicEffectOnApplication_MetaData[];
#endif
		static void NewProp_bExecutePeriodicEffectOnApplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecutePeriodicEffectOnApplication;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PeriodicInhibitionPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeriodicInhibitionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PeriodicInhibitionPolicy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Executions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Executions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Executions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToApplyToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChanceToApplyToTarget;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ApplicationRequirements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplicationRequirements;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TargetEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetEffectClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalGameplayEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalGameplayEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConditionalGameplayEffects;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverflowEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverflowEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverflowEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDenyOverflowApplication_MetaData[];
#endif
		static void NewProp_bDenyOverflowApplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDenyOverflowApplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearStackOnOverflow_MetaData[];
#endif
		static void NewProp_bClearStackOnOverflow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearStackOnOverflow;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PrematureExpirationEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrematureExpirationEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrematureExpirationEffectClasses;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RoutineExpirationEffectClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoutineExpirationEffectClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoutineExpirationEffectClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireModifierSuccessToTriggerCues_MetaData[];
#endif
		static void NewProp_bRequireModifierSuccessToTriggerCues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireModifierSuccessToTriggerCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressStackingCues_MetaData[];
#endif
		static void NewProp_bSuppressStackingCues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressStackingCues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UIData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableGameplayEffectTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableGameplayEffectTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableOwnedTagsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableOwnedTagsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritableBlockedAbilityTagsContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritableBlockedAbilityTagsContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OngoingTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OngoingTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalTagRequirements_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalTagRequirements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectsWithTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectsWithTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedApplicationImmunityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedApplicationImmunityTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedApplicationImmunityQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedApplicationImmunityQuery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveGameplayEffectQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveGameplayEffectQuery;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackLimitCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimitCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackDurationRefreshPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackDurationRefreshPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackDurationRefreshPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackPeriodResetPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackPeriodResetPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackPeriodResetPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StackExpirationPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackExpirationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StackExpirationPolicy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UGameplayEffect\n *\x09The GameplayEffect definition. This is the data asset defined in the editor that drives everything.\n *  This is only blueprintable to allow for templating gameplay effects. Gameplay effects should NOT contain blueprint graphs.\n */" },
		{ "IncludePath", "GameplayEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ShortTooltip", "A GameplayEffect modifies attributes and tags." },
		{ "ToolTip", "UGameplayEffect\n    The GameplayEffect definition. This is the data asset defined in the editor that drives everything.\n This is only blueprintable to allow for templating gameplay effects. Gameplay effects should NOT contain blueprint graphs." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Policy for the duration of this effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Policy for the duration of this effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy = { "DurationPolicy", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, DurationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectDurationType, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_MetaData)) }; // 256606421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Duration in seconds. 0.0 for instantaneous effects; -1.0 for infinite duration. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Duration in seconds. 0.0 for instantaneous effects; -1.0 for infinite duration." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude = { "DurationMagnitude", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, DurationMagnitude), Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude_MetaData)) }; // 3349763052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period_MetaData[] = {
		{ "Category", "Period" },
		{ "Comment", "/** Period in seconds. 0.0 for non-periodic effects */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Period in seconds. 0.0 for non-periodic effects" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, Period), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_MetaData[] = {
		{ "Category", "Period" },
		{ "Comment", "/** If true, the effect executes on application and then at every period interval. If false, no execution occurs until the first period elapses. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If true, the effect executes on application and then at every period interval. If false, no execution occurs until the first period elapses." },
	};
#endif
	void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_SetBit(void* Obj)
	{
		((UGameplayEffect*)Obj)->bExecutePeriodicEffectOnApplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication = { "bExecutePeriodicEffectOnApplication", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_MetaData[] = {
		{ "Category", "Period" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy = { "PeriodicInhibitionPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, PeriodicInhibitionPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectPeriodInhibitionRemovedPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_MetaData)) }; // 1539665559
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayModifierInfo, METADATA_PARAMS(nullptr, 0) }; // 4223244298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** Array of modifiers that will affect the target of this effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "TitleProperty", "Attribute" },
		{ "ToolTip", "Array of modifiers that will affect the target of this effect" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_MetaData)) }; // 4223244298
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_Inner = { "Executions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition, METADATA_PARAMS(nullptr, 0) }; // 2300396047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions = { "Executions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, Executions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_MetaData)) }; // 2300396047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget_MetaData[] = {
		{ "Category", "Application" },
		{ "Comment", "/** Probability that this gameplay effect will be applied to the target actor (0.0 for never, 1.0 for always) */" },
		{ "GameplayAttribute", "True" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Probability that this gameplay effect will be applied to the target actor (0.0 for never, 1.0 for always)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget = { "ChanceToApplyToTarget", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, ChanceToApplyToTarget), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget_MetaData)) }; // 1811381276
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_Inner = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_MetaData[] = {
		{ "Category", "Application" },
		{ "DisplayName", "Application Requirement" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements = { "ApplicationRequirements", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, ApplicationRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses_Inner = { "TargetEffectClasses", nullptr, (EPropertyFlags)0x0004000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses_MetaData[] = {
		{ "Comment", "/** Deprecated. Use ConditionalGameplayEffects instead */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Deprecated. Use ConditionalGameplayEffects instead" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses = { "TargetEffectClasses", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, TargetEffectClasses_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_Inner = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConditionalGameplayEffect, METADATA_PARAMS(nullptr, 0) }; // 1360218460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_MetaData[] = {
		{ "Category", "GameplayEffect" },
		{ "Comment", "/** other gameplay effects that will be applied to the target of this effect if this effect applies */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "other gameplay effects that will be applied to the target of this effect if this effect applies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects = { "ConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, ConditionalGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_MetaData)) }; // 1360218460
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_Inner = { "OverflowEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_MetaData[] = {
		{ "Category", "Overflow" },
		{ "Comment", "/** Effects to apply when a stacking effect \"overflows\" its stack count through another attempted application. Added whether the overflow application succeeds or not. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Effects to apply when a stacking effect \"overflows\" its stack count through another attempted application. Added whether the overflow application succeeds or not." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects = { "OverflowEffects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, OverflowEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_MetaData[] = {
		{ "Category", "Overflow" },
		{ "Comment", "/** If true, stacking attempts made while at the stack count will fail, resulting in the duration and context not being refreshed */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If true, stacking attempts made while at the stack count will fail, resulting in the duration and context not being refreshed" },
	};
#endif
	void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_SetBit(void* Obj)
	{
		((UGameplayEffect*)Obj)->bDenyOverflowApplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication = { "bDenyOverflowApplication", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_MetaData[] = {
		{ "Category", "Overflow" },
		{ "Comment", "/** If true, the entire stack of the effect will be cleared once it overflows */" },
		{ "EditCondition", "bDenyOverflowApplication" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If true, the entire stack of the effect will be cleared once it overflows" },
	};
#endif
	void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_SetBit(void* Obj)
	{
		((UGameplayEffect*)Obj)->bClearStackOnOverflow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow = { "bClearStackOnOverflow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_Inner = { "PrematureExpirationEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_MetaData[] = {
		{ "Category", "Expiration" },
		{ "Comment", "/** Effects to apply when this effect is made to expire prematurely (like via a forced removal, clear tags, etc.); Only works for effects with a duration */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Effects to apply when this effect is made to expire prematurely (like via a forced removal, clear tags, etc.); Only works for effects with a duration" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses = { "PrematureExpirationEffectClasses", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, PrematureExpirationEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_Inner = { "RoutineExpirationEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_MetaData[] = {
		{ "Category", "Expiration" },
		{ "Comment", "/** Effects to apply when this effect expires naturally via its duration; Only works for effects with a duration */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Effects to apply when this effect expires naturally via its duration; Only works for effects with a duration" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses = { "RoutineExpirationEffectClasses", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, RoutineExpirationEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, cues will only trigger when GE modifiers succeed being applied (whether through modifiers or executions) */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If true, cues will only trigger when GE modifiers succeed being applied (whether through modifiers or executions)" },
	};
#endif
	void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_SetBit(void* Obj)
	{
		((UGameplayEffect*)Obj)->bRequireModifierSuccessToTriggerCues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues = { "bRequireModifierSuccessToTriggerCues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, GameplayCues will only be triggered for the first instance in a stacking GameplayEffect. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "If true, GameplayCues will only be triggered for the first instance in a stacking GameplayEffect." },
	};
#endif
	void Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_SetBit(void* Obj)
	{
		((UGameplayEffect*)Obj)->bSuppressStackingCues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues = { "bSuppressStackingCues", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayEffect), &Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_Inner = { "GameplayCues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectCue, METADATA_PARAMS(nullptr, 0) }; // 1872994114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Cues to trigger non-simulated reactions in response to this GameplayEffect such as sounds, particle effects, etc */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Cues to trigger non-simulated reactions in response to this GameplayEffect such as sounds, particle effects, etc" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues = { "GameplayCues", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, GameplayCues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_MetaData)) }; // 1872994114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Data for the UI representation of this effect. This should include things like text, icons, etc. Not available in server-only builds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Data for the UI representation of this effect. This should include things like text, icons, etc. Not available in server-only builds." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x001600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, UIData), Z_Construct_UClass_UGameplayEffectUIData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags_MetaData[] = {
		{ "Categories", "GameplayEffectTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor. */" },
		{ "DisplayName", "GameplayEffectAssetTag" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "The GameplayEffect's Tags: tags the the GE *has* and DOES NOT give to the actor." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags = { "InheritableGameplayEffectTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, InheritableGameplayEffectTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags_MetaData)) }; // 1502602928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** These tags are applied to the actor I am applied to */" },
		{ "DisplayName", "GrantedTags" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "These tags are applied to the actor I am applied to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer = { "InheritableOwnedTagsContainer", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, InheritableOwnedTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer_MetaData)) }; // 1502602928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer_MetaData[] = {
		{ "Categories", "BlockedAbilityTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** These blocked ability tags are applied to the actor I am applied to */" },
		{ "DisplayName", "GrantedBlockedAbilityTags" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "These blocked ability tags are applied to the actor I am applied to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer = { "InheritableBlockedAbilityTagsContainer", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, InheritableBlockedAbilityTagsContainer), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer_MetaData)) }; // 1502602928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements_MetaData[] = {
		{ "Categories", "OngoingTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Once Applied, these tags requirements are used to determined if the GameplayEffect is \"on\" or \"off\". A GameplayEffect can be off and do nothing, but still applied. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Once Applied, these tags requirements are used to determined if the GameplayEffect is \"on\" or \"off\". A GameplayEffect can be off and do nothing, but still applied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements = { "OngoingTagRequirements", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, OngoingTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements_MetaData)) }; // 1682790808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements_MetaData[] = {
		{ "Categories", "ApplicationTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Tag requirements for this GameplayEffect to be applied to a target. This is pass/fail at the time of application. If fail, this GE fails to apply. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tag requirements for this GameplayEffect to be applied to a target. This is pass/fail at the time of application. If fail, this GE fails to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements = { "ApplicationTagRequirements", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, ApplicationTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements_MetaData)) }; // 1682790808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements_MetaData[] = {
		{ "Categories", "ApplicationTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Tag requirements that if met will remove this effect. Also prevents effect application. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Tag requirements that if met will remove this effect. Also prevents effect application." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements = { "RemovalTagRequirements", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, RemovalTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements_MetaData)) }; // 1682790808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags_MetaData[] = {
		{ "Categories", "RemoveTagRequirementsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** GameplayEffects that *have* tags in this container will be cleared upon effect application. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "GameplayEffects that *have* tags in this container will be cleared upon effect application." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags = { "RemoveGameplayEffectsWithTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, RemoveGameplayEffectsWithTags), Z_Construct_UScriptStruct_FInheritedTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags_MetaData)) }; // 1502602928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags_MetaData[] = {
		{ "Categories", "GrantedApplicationImmunityTagsCategory" },
		{ "Category", "Immunity" },
		{ "Comment", "/** Grants the owner immunity from these source tags.  */" },
		{ "DisplayName", "GrantedApplicationImmunityTags" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Grants the owner immunity from these source tags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags = { "GrantedApplicationImmunityTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, GrantedApplicationImmunityTags), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags_MetaData)) }; // 1682790808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery_MetaData[] = {
		{ "Category", "Immunity" },
		{ "Comment", "/** Grants immunity to GameplayEffects that match this query. Queries are more powerful but slightly slower than GrantedApplicationImmunityTags. */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Grants immunity to GameplayEffects that match this query. Queries are more powerful but slightly slower than GrantedApplicationImmunityTags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery = { "GrantedApplicationImmunityQuery", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, GrantedApplicationImmunityQuery), Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery_MetaData)) }; // 573727720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery_MetaData[] = {
		{ "Category", "Tags" },
		{ "Comment", "/** On Application of an effect, any active effects with this this query that matches against the added effect will be removed. Queries are more powerful but slightly slower than RemoveGameplayEffectsWithTags. */" },
		{ "DisplayAfter", "RemovalTagRequirements" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "On Application of an effect, any active effects with this this query that matches against the added effect will be removed. Queries are more powerful but slightly slower than RemoveGameplayEffectsWithTags." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery = { "RemoveGameplayEffectQuery", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, RemoveGameplayEffectQuery), Z_Construct_UScriptStruct_FGameplayEffectQuery, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery_MetaData)) }; // 573727720
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** How this GameplayEffect stacks with other instances of this same GameplayEffect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "How this GameplayEffect stacks with other instances of this same GameplayEffect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType = { "StackingType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, StackingType), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingType, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_MetaData)) }; // 1892287901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Stack limit for StackingType */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Stack limit for StackingType" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount = { "StackLimitCount", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, StackLimitCount), METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Policy for how the effect duration should be refreshed while stacking */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Policy for how the effect duration should be refreshed while stacking" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy = { "StackDurationRefreshPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, StackDurationRefreshPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingDurationPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_MetaData)) }; // 2713501712
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Policy for how the effect period should be reset (or not) while stacking */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Policy for how the effect period should be reset (or not) while stacking" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy = { "StackPeriodResetPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, StackPeriodResetPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingPeriodPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_MetaData)) }; // 2762153373
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_MetaData[] = {
		{ "Category", "Stacking" },
		{ "Comment", "/** Policy for how to handle duration expiring on this gameplay effect */" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Policy for how to handle duration expiring on this gameplay effect" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy = { "StackExpirationPolicy", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, StackExpirationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectStackingExpirationPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_MetaData)) }; // 2368263006
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecDef, METADATA_PARAMS(nullptr, 0) }; // 2386331415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "Granted Abilities" },
		{ "Comment", "// ----------------------------------------------------------------------\n//\x09Granted abilities\n// ----------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/GameplayEffect.h" },
		{ "ToolTip", "Granted abilities" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffect, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_MetaData)) }; // 2386331415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_DurationMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Period,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bExecutePeriodicEffectOnApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PeriodicInhibitionPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_Executions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ChanceToApplyToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_TargetEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ConditionalGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OverflowEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bDenyOverflowApplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bClearStackOnOverflow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_PrematureExpirationEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RoutineExpirationEffectClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bRequireModifierSuccessToTriggerCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_bSuppressStackingCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GameplayCues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_UIData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableGameplayEffectTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableOwnedTagsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_InheritableBlockedAbilityTagsContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_OngoingTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_ApplicationTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemovalTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectsWithTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedApplicationImmunityQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_RemoveGameplayEffectQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackLimitCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackDurationRefreshPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackPeriodResetPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_StackExpirationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffect_Statics::NewProp_GrantedAbilities,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayEffect_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayEffect, IGameplayTagAssetInterface), false },  // 3654419898
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffect_Statics::ClassParams = {
		&UGameplayEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayEffect_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffect()
	{
		if (!Z_Registration_Info_UClass_UGameplayEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffect.OuterSingleton, Z_Construct_UClass_UGameplayEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayEffect.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffect>()
	{
		return UGameplayEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffect);
	UGameplayEffect::~UGameplayEffect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::EnumInfo[] = {
		{ EGameplayEffectMagnitudeCalculation_StaticEnum, TEXT("EGameplayEffectMagnitudeCalculation"), &Z_Registration_Info_UEnum_EGameplayEffectMagnitudeCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3666996690U) },
		{ EAttributeBasedFloatCalculationType_StaticEnum, TEXT("EAttributeBasedFloatCalculationType"), &Z_Registration_Info_UEnum_EAttributeBasedFloatCalculationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2880859215U) },
		{ EGameplayEffectScopedModifierAggregatorType_StaticEnum, TEXT("EGameplayEffectScopedModifierAggregatorType"), &Z_Registration_Info_UEnum_EGameplayEffectScopedModifierAggregatorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 411416119U) },
		{ EGameplayEffectDurationType_StaticEnum, TEXT("EGameplayEffectDurationType"), &Z_Registration_Info_UEnum_EGameplayEffectDurationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 256606421U) },
		{ EGameplayEffectStackingDurationPolicy_StaticEnum, TEXT("EGameplayEffectStackingDurationPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectStackingDurationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2713501712U) },
		{ EGameplayEffectStackingPeriodPolicy_StaticEnum, TEXT("EGameplayEffectStackingPeriodPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectStackingPeriodPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2762153373U) },
		{ EGameplayEffectStackingExpirationPolicy_StaticEnum, TEXT("EGameplayEffectStackingExpirationPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectStackingExpirationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2368263006U) },
		{ EGameplayEffectPeriodInhibitionRemovedPolicy_StaticEnum, TEXT("EGameplayEffectPeriodInhibitionRemovedPolicy"), &Z_Registration_Info_UEnum_EGameplayEffectPeriodInhibitionRemovedPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1539665559U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ScriptStructInfo[] = {
		{ FAttributeBasedFloat::StaticStruct, Z_Construct_UScriptStruct_FAttributeBasedFloat_Statics::NewStructOps, TEXT("AttributeBasedFloat"), &Z_Registration_Info_UScriptStruct_AttributeBasedFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributeBasedFloat), 3459238577U) },
		{ FCustomCalculationBasedFloat::StaticStruct, Z_Construct_UScriptStruct_FCustomCalculationBasedFloat_Statics::NewStructOps, TEXT("CustomCalculationBasedFloat"), &Z_Registration_Info_UScriptStruct_CustomCalculationBasedFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomCalculationBasedFloat), 1347521616U) },
		{ FSetByCallerFloat::StaticStruct, Z_Construct_UScriptStruct_FSetByCallerFloat_Statics::NewStructOps, TEXT("SetByCallerFloat"), &Z_Registration_Info_UScriptStruct_SetByCallerFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetByCallerFloat), 3277855006U) },
		{ FGameplayEffectModifierMagnitude::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectModifierMagnitude_Statics::NewStructOps, TEXT("GameplayEffectModifierMagnitude"), &Z_Registration_Info_UScriptStruct_GameplayEffectModifierMagnitude, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectModifierMagnitude), 3349763052U) },
		{ FGameplayEffectExecutionScopedModifierInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectExecutionScopedModifierInfo_Statics::NewStructOps, TEXT("GameplayEffectExecutionScopedModifierInfo"), &Z_Registration_Info_UScriptStruct_GameplayEffectExecutionScopedModifierInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectExecutionScopedModifierInfo), 1105525345U) },
		{ FConditionalGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FConditionalGameplayEffect_Statics::NewStructOps, TEXT("ConditionalGameplayEffect"), &Z_Registration_Info_UScriptStruct_ConditionalGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalGameplayEffect), 1360218460U) },
		{ FGameplayEffectExecutionDefinition::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectExecutionDefinition_Statics::NewStructOps, TEXT("GameplayEffectExecutionDefinition"), &Z_Registration_Info_UScriptStruct_GameplayEffectExecutionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectExecutionDefinition), 2300396047U) },
		{ FGameplayModifierInfo::StaticStruct, Z_Construct_UScriptStruct_FGameplayModifierInfo_Statics::NewStructOps, TEXT("GameplayModifierInfo"), &Z_Registration_Info_UScriptStruct_GameplayModifierInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayModifierInfo), 4223244298U) },
		{ FGameplayEffectCue::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCue_Statics::NewStructOps, TEXT("GameplayEffectCue"), &Z_Registration_Info_UScriptStruct_GameplayEffectCue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCue), 1872994114U) },
		{ FInheritedTagContainer::StaticStruct, Z_Construct_UScriptStruct_FInheritedTagContainer_Statics::NewStructOps, TEXT("InheritedTagContainer"), &Z_Registration_Info_UScriptStruct_InheritedTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInheritedTagContainer), 1502602928U) },
		{ FModifierSpec::StaticStruct, Z_Construct_UScriptStruct_FModifierSpec_Statics::NewStructOps, TEXT("ModifierSpec"), &Z_Registration_Info_UScriptStruct_ModifierSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifierSpec), 2389858847U) },
		{ FGameplayEffectModifiedAttribute::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectModifiedAttribute_Statics::NewStructOps, TEXT("GameplayEffectModifiedAttribute"), &Z_Registration_Info_UScriptStruct_GameplayEffectModifiedAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectModifiedAttribute), 2319764496U) },
		{ FGameplayEffectAttributeCaptureSpec::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpec_Statics::NewStructOps, TEXT("GameplayEffectAttributeCaptureSpec"), &Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectAttributeCaptureSpec), 4020012031U) },
		{ FGameplayEffectAttributeCaptureSpecContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureSpecContainer_Statics::NewStructOps, TEXT("GameplayEffectAttributeCaptureSpecContainer"), &Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureSpecContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectAttributeCaptureSpecContainer), 1947702479U) },
		{ FGameplayEffectSpec::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectSpec_Statics::NewStructOps, TEXT("GameplayEffectSpec"), &Z_Registration_Info_UScriptStruct_GameplayEffectSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectSpec), 3735220946U) },
		{ FGameplayEffectSpecForRPC::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectSpecForRPC_Statics::NewStructOps, TEXT("GameplayEffectSpecForRPC"), &Z_Registration_Info_UScriptStruct_GameplayEffectSpecForRPC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectSpecForRPC), 492904513U) },
		{ FActiveGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffect_Statics::NewStructOps, TEXT("ActiveGameplayEffect"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffect), 2826443297U) },
		{ FGameplayEffectQuery::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectQuery_Statics::NewStructOps, TEXT("GameplayEffectQuery"), &Z_Registration_Info_UScriptStruct_GameplayEffectQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectQuery), 573727720U) },
		{ FActiveGameplayEffectQuery::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffectQuery_Statics::NewStructOps, TEXT("ActiveGameplayEffectQuery"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffectQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffectQuery), 2581118206U) },
		{ FActiveGameplayEffectsContainer::StaticStruct, Z_Construct_UScriptStruct_FActiveGameplayEffectsContainer_Statics::NewStructOps, TEXT("ActiveGameplayEffectsContainer"), &Z_Registration_Info_UScriptStruct_ActiveGameplayEffectsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveGameplayEffectsContainer), 2349981196U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffect, UGameplayEffect::StaticClass, TEXT("UGameplayEffect"), &Z_Registration_Info_UClass_UGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffect), 2371319339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_4030427900(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffect_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
