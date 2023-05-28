// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitAttributeChangeRatioThreshold() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms
		{
			bool bMatchesComparison;
			float CurrentRatio;
		};
		static void NewProp_bMatchesComparison_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchesComparison;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison_SetBit(void* Obj)
	{
		((_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms*)Obj)->bMatchesComparison = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison = { "bMatchesComparison", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms), &Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_CurrentRatio = { "CurrentRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms, CurrentRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_bMatchesComparison,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::NewProp_CurrentRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitAttributeChangeRatioThresholdDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitAttributeChangeRatioThresholdDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeRatioThresholdDelegate, bool bMatchesComparison, float CurrentRatio)
{
	struct _Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms
	{
		bool bMatchesComparison;
		float CurrentRatio;
	};
	_Script_GameplayAbilities_eventWaitAttributeChangeRatioThresholdDelegate_Parms Parms;
	Parms.bMatchesComparison=bMatchesComparison ? true : false;
	Parms.CurrentRatio=CurrentRatio;
	WaitAttributeChangeRatioThresholdDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitAttributeChangeRatioThreshold::execWaitForAttributeChangeRatioThreshold)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_AttributeNumerator);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_AttributeDenominator);
		P_GET_PROPERTY(FByteProperty,Z_Param_ComparisonType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ComparisonValue);
		P_GET_UBOOL(Z_Param_bTriggerOnce);
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitAttributeChangeRatioThreshold**)Z_Param__Result=UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(Z_Param_OwningAbility,Z_Param_AttributeNumerator,Z_Param_AttributeDenominator,EWaitAttributeChangeComparison::Type(Z_Param_ComparisonType),Z_Param_ComparisonValue,Z_Param_bTriggerOnce,Z_Param_OptionalExternalOwner);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitAttributeChangeRatioThreshold::StaticRegisterNativesUAbilityTask_WaitAttributeChangeRatioThreshold()
	{
		UClass* Class = UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForAttributeChangeRatioThreshold", &UAbilityTask_WaitAttributeChangeRatioThreshold::execWaitForAttributeChangeRatioThreshold },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics
	{
		struct AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAttribute AttributeNumerator;
			FGameplayAttribute AttributeDenominator;
			TEnumAsByte<EWaitAttributeChangeComparison::Type> ComparisonType;
			float ComparisonValue;
			bool bTriggerOnce;
			AActor* OptionalExternalOwner;
			UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeNumerator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeDenominator;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComparisonValue;
		static void NewProp_bTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeNumerator = { "AttributeNumerator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, AttributeNumerator), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeDenominator = { "AttributeDenominator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, AttributeDenominator), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonType = { "ComparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, ComparisonType), Z_Construct_UEnum_GameplayAbilities_EWaitAttributeChangeComparison, METADATA_PARAMS(nullptr, 0) }; // 2232686965
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonValue = { "ComparisonValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, ComparisonValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms*)Obj)->bTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce = { "bTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeNumerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_AttributeDenominator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ComparisonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_bTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_OptionalExternalOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait on attribute ratio change meeting a comparison threshold. */" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
		{ "ToolTip", "Wait on attribute ratio change meeting a comparison threshold." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold, nullptr, "WaitForAttributeChangeRatioThreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::AbilityTask_WaitAttributeChangeRatioThreshold_eventWaitForAttributeChangeRatioThreshold_Parms), Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitAttributeChangeRatioThreshold);
	UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_NoRegister()
	{
		return UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold, "WaitForAttributeChangeRatioThreshold" }, // 1312376132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits for the ratio between two attributes to match a threshold\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
		{ "ToolTip", "Waits for the ratio between two attributes to match a threshold" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitAttributeChangeRatioThreshold, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAttributeChangeRatioThresholdDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange_MetaData)) }; // 573404909
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAttributeChangeRatioThreshold.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner = { "ExternalOwner", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitAttributeChangeRatioThreshold, ExternalOwner), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_OnChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::NewProp_ExternalOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitAttributeChangeRatioThreshold>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::ClassParams = {
		&UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitAttributeChangeRatioThreshold>()
	{
		return UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitAttributeChangeRatioThreshold);
	UAbilityTask_WaitAttributeChangeRatioThreshold::~UAbilityTask_WaitAttributeChangeRatioThreshold() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold, UAbilityTask_WaitAttributeChangeRatioThreshold::StaticClass, TEXT("UAbilityTask_WaitAttributeChangeRatioThreshold"), &Z_Registration_Info_UClass_UAbilityTask_WaitAttributeChangeRatioThreshold, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitAttributeChangeRatioThreshold), 2414666778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_2035592882(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChangeRatioThreshold_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
