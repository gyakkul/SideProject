// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayModMagnitudeCalculation.h"
#include "AttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModMagnitudeCalculation() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetTargetSpecTags)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetSpecTags(Z_Param_Out_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetTargetActorTags)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetActorTags(Z_Param_Out_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetTargetAggregatedTags)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTargetAggregatedTags(Z_Param_Out_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSourceSpecTags)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceSpecTags(Z_Param_Out_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSourceActorTags)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceActorTags(Z_Param_Out_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSourceAggregatedTags)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSourceAggregatedTags(Z_Param_Out_EffectSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByName)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MagnitudeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSetByCallerMagnitudeByName(Z_Param_Out_EffectSpec,Z_Param_Out_MagnitudeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByTag)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSetByCallerMagnitudeByTag(Z_Param_Out_EffectSpec,Z_Param_Out_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execK2_GetCapturedAttributeMagnitude)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_EffectSpec);
		P_GET_STRUCT(FGameplayAttribute,Z_Param_Attribute);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->K2_GetCapturedAttributeMagnitude(Z_Param_Out_EffectSpec,Z_Param_Attribute,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModMagnitudeCalculation::execCalculateBaseMagnitude)
	{
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateBaseMagnitude_Implementation(Z_Param_Out_Spec);
		P_NATIVE_END;
	}
	struct GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms
	{
		FGameplayEffectSpec Spec;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude = FName(TEXT("CalculateBaseMagnitude"));
	float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(FGameplayEffectSpec const& Spec) const
	{
		GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms Parms;
		Parms.Spec=Spec;
		const_cast<UGameplayModMagnitudeCalculation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude),&Parms);
		return Parms.ReturnValue;
	}
	void UGameplayModMagnitudeCalculation::StaticRegisterNativesUGameplayModMagnitudeCalculation()
	{
		UClass* Class = UGameplayModMagnitudeCalculation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateBaseMagnitude", &UGameplayModMagnitudeCalculation::execCalculateBaseMagnitude },
			{ "GetSetByCallerMagnitudeByName", &UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByName },
			{ "GetSetByCallerMagnitudeByTag", &UGameplayModMagnitudeCalculation::execGetSetByCallerMagnitudeByTag },
			{ "GetSourceActorTags", &UGameplayModMagnitudeCalculation::execGetSourceActorTags },
			{ "GetSourceAggregatedTags", &UGameplayModMagnitudeCalculation::execGetSourceAggregatedTags },
			{ "GetSourceSpecTags", &UGameplayModMagnitudeCalculation::execGetSourceSpecTags },
			{ "GetTargetActorTags", &UGameplayModMagnitudeCalculation::execGetTargetActorTags },
			{ "GetTargetAggregatedTags", &UGameplayModMagnitudeCalculation::execGetTargetAggregatedTags },
			{ "GetTargetSpecTags", &UGameplayModMagnitudeCalculation::execGetTargetSpecTags },
			{ "K2_GetCapturedAttributeMagnitude", &UGameplayModMagnitudeCalculation::execK2_GetCapturedAttributeMagnitude },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec_MetaData)) }; // 3735220946
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_Spec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "Comment", "/**\n\x09 * Calculate the base magnitude of the gameplay effect modifier, given the specified spec. Note that the owning spec def can still modify this base value\n\x09 * with a coeffecient and pre/post multiply adds. see FCustomCalculationBasedFloat::CalculateMagnitude for details.\n\x09 * \n\x09 * @param Spec\x09Gameplay effect spec to use to calculate the magnitude with\n\x09 * \n\x09 * @return Computed magnitude of the modifier\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Calculate the base magnitude of the gameplay effect modifier, given the specified spec. Note that the owning spec def can still modify this base value\nwith a coeffecient and pre/post multiply adds. see FCustomCalculationBasedFloat::CalculateMagnitude for details.\n\n@param Spec  Gameplay effect spec to use to calculate the magnitude with\n\n@return Computed magnitude of the modifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "CalculateBaseMagnitude", nullptr, nullptr, sizeof(GameplayModMagnitudeCalculation_eventCalculateBaseMagnitude_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FName MagnitudeName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MagnitudeName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName = { "MagnitudeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms, MagnitudeName), METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_MagnitudeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * @param MagnitudeName The effect name to query\n\x09 * \n\x09 * @return The magnitude value if found, zero otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n@param MagnitudeName The effect name to query\n\n@return The magnitude value if found, zero otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSetByCallerMagnitudeByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByName_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTag Tag;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * @param Tag The effect tag to query\n\x09 * \n\x09 * @return The magnitude value if found, zero otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Extracts the Set by Caller Magnitude from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n@param Tag The effect tag to query\n\n@return The magnitude value if found, zero otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSetByCallerMagnitudeByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::GameplayModMagnitudeCalculation_eventGetSetByCallerMagnitudeByTag_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Returns the source actor tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Returns the source actor tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSourceActorTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceActorTags_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Copies and returns the source aggregated tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Copies and returns the source aggregated tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSourceAggregatedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceAggregatedTags_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Returns the source spec tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Returns the source spec tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetSourceSpecTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::GameplayModMagnitudeCalculation_eventGetSourceSpecTags_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Returns the target actor tags from a Gameplay Effect Spec\n\x09 * Useful for Modifier Magnitude Calculations\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Returns the target actor tags from a Gameplay Effect Spec\nUseful for Modifier Magnitude Calculations\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetTargetActorTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetActorTags_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Copies and returns the target aggregated tags from a Gameplay Effect Spec\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Copies and returns the target aggregated tags from a Gameplay Effect Spec\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetTargetAggregatedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetAggregatedTags_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics
	{
		struct GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Returns the target spec tags from a Gameplay Effect Spec\n\x09 * Useful for Modifier Magnitude Calculations\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * \n\x09 * @return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Returns the target spec tags from a Gameplay Effect Spec\nUseful for Modifier Magnitude Calculations\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n\n@return Gameplay Tag Container with the copied tags. The container will be empty if no captured source tags exist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "GetTargetSpecTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::GameplayModMagnitudeCalculation_eventGetTargetSpecTags_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics
	{
		struct GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms
		{
			FGameplayEffectSpec EffectSpec;
			FGameplayAttribute Attribute;
			FGameplayTagContainer SourceTags;
			FGameplayTagContainer TargetTags;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpec;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec = { "EffectSpec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, EffectSpec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec_MetaData)) }; // 3735220946
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(nullptr, 0) }; // 2095245243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_EffectSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_Attribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_SourceTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_TargetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|GameplayEffect" },
		{ "Comment", "/**\n\x09 * Gets the captured magnitude value for the given Attribute\n\x09 * For this to work correctly, the Attribute needs to be added to the Relevant Attributes to Capture array\n\x09 *\n\x09 * @param EffectSpec The Gameplay Effect Spec to get the info from\n\x09 * @param Attribute The attribute to query\n\x09 *\n\x09 * @return The magnitude value if found, zero otherwise\n\x09 */" },
		{ "DisplayName", "Get Captured Attribute Magnitude" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ScriptName", "GetCapturedAttributeMagnitude" },
		{ "ToolTip", "Gets the captured magnitude value for the given Attribute\nFor this to work correctly, the Attribute needs to be added to the Relevant Attributes to Capture array\n\n@param EffectSpec The Gameplay Effect Spec to get the info from\n@param Attribute The attribute to query\n\n@return The magnitude value if found, zero otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation, nullptr, "K2_GetCapturedAttributeMagnitude", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::GameplayModMagnitudeCalculation_eventK2_GetCapturedAttributeMagnitude_Parms), Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayModMagnitudeCalculation);
	UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation_NoRegister()
	{
		return UGameplayModMagnitudeCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData[];
#endif
		static void NewProp_bAllowNonNetAuthorityDependencyRegistration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNonNetAuthorityDependencyRegistration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_CalculateBaseMagnitude, "CalculateBaseMagnitude" }, // 203993561
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName, "GetSetByCallerMagnitudeByName" }, // 1405556375
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag, "GetSetByCallerMagnitudeByTag" }, // 880958673
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceActorTags, "GetSourceActorTags" }, // 375438234
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceAggregatedTags, "GetSourceAggregatedTags" }, // 651986712
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetSourceSpecTags, "GetSourceSpecTags" }, // 2956294036
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetActorTags, "GetTargetActorTags" }, // 2386028290
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetAggregatedTags, "GetTargetAggregatedTags" }, // 1326226875
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_GetTargetSpecTags, "GetTargetSpecTags" }, // 328135074
		{ &Z_Construct_UFunction_UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude, "K2_GetCapturedAttributeMagnitude" }, // 1529868188
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code */" },
		{ "IncludePath", "GameplayModMagnitudeCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData[] = {
		{ "Category", "ExternalDependencies" },
		{ "Comment", "/** \n\x09 * Whether the calculation allows non-net authorities to register the external dependency multi-cast delegate or not; Effectively\n\x09 * whether clients are allowed to perform the custom calculation themselves or not\n\x09 * \n\x09 * @Note:\x09This is an advanced use case that should only be enabled under very specific circumstances. This is designed for games\n\x09 *\x09\x09\x09that are utilizing network dormancy and may want to trust the client to update non-gameplay critical attributes client-side without\n\x09 *\x09\x09\x09""causing a network dormancy flush. Usage of this flag is *NOT* compatible with attribute capture within the calculation and will trigger\n\x09 *\x09\x09\x09""an ensure if used in tandem. Clients are incapable of performing custom calculations that require attribute captures. In general,\n\x09 *\x09\x09\x09if your game is not using network dormancy, this should always remain disabled.\n\x09 *\n\x09 * @Note:\x09If enabling this for a custom calculation, be sure that the external delegate is sourced from something guaranteed to be on the client to avoid\n\x09 *\x09\x09\x09timing issues. As an example, binding to a delegate on a GameState is potentially unreliable, as the client reference to that actor may not be\n\x09 *\x09\x09\x09""available during registration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayModMagnitudeCalculation.h" },
		{ "ToolTip", "Whether the calculation allows non-net authorities to register the external dependency multi-cast delegate or not; Effectively\nwhether clients are allowed to perform the custom calculation themselves or not\n\n@Note:       This is an advanced use case that should only be enabled under very specific circumstances. This is designed for games\n                     that are utilizing network dormancy and may want to trust the client to update non-gameplay critical attributes client-side without\n                     causing a network dormancy flush. Usage of this flag is *NOT* compatible with attribute capture within the calculation and will trigger\n                     an ensure if used in tandem. Clients are incapable of performing custom calculations that require attribute captures. In general,\n                     if your game is not using network dormancy, this should always remain disabled.\n\n@Note:       If enabling this for a custom calculation, be sure that the external delegate is sourced from something guaranteed to be on the client to avoid\n                     timing issues. As an example, binding to a delegate on a GameState is potentially unreliable, as the client reference to that actor may not be\n                     available during registration." },
	};
#endif
	void Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_SetBit(void* Obj)
	{
		((UGameplayModMagnitudeCalculation*)Obj)->bAllowNonNetAuthorityDependencyRegistration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration = { "bAllowNonNetAuthorityDependencyRegistration", nullptr, (EPropertyFlags)0x00200c0000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayModMagnitudeCalculation), &Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::NewProp_bAllowNonNetAuthorityDependencyRegistration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayModMagnitudeCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::ClassParams = {
		&UGameplayModMagnitudeCalculation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation()
	{
		if (!Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation.OuterSingleton, Z_Construct_UClass_UGameplayModMagnitudeCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayModMagnitudeCalculation>()
	{
		return UGameplayModMagnitudeCalculation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayModMagnitudeCalculation);
	UGameplayModMagnitudeCalculation::~UGameplayModMagnitudeCalculation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayModMagnitudeCalculation, UGameplayModMagnitudeCalculation::StaticClass, TEXT("UGameplayModMagnitudeCalculation"), &Z_Registration_Info_UClass_UGameplayModMagnitudeCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayModMagnitudeCalculation), 3582323944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_1971029696(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayModMagnitudeCalculation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
