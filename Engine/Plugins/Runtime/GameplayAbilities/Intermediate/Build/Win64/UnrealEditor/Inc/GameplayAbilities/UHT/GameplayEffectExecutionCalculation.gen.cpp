// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectExecutionCalculation.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectExecutionCalculation() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters;
class UScriptStruct* FGameplayEffectCustomExecutionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectCustomExecutionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectCustomExecutionParameters>()
{
	return FGameplayEffectCustomExecutionParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct representing parameters for a custom gameplay effect execution. Should not be held onto via reference, used just for the scope of the execution */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Struct representing parameters for a custom gameplay effect execution. Should not be held onto via reference, used just for the scope of the execution" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCustomExecutionParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectCustomExecutionParameters",
		sizeof(FGameplayEffectCustomExecutionParameters),
		alignof(FGameplayEffectCustomExecutionParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput;
class UScriptStruct* FGameplayEffectCustomExecutionOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectCustomExecutionOutput"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectCustomExecutionOutput>()
{
	return FGameplayEffectCustomExecutionOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerConditionalGameplayEffects_MetaData[];
#endif
		static void NewProp_bTriggerConditionalGameplayEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerConditionalGameplayEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandledStackCountManually_MetaData[];
#endif
		static void NewProp_bHandledStackCountManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandledStackCountManually;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHandledGameplayCuesManually_MetaData[];
#endif
		static void NewProp_bHandledGameplayCuesManually_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandledGameplayCuesManually;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct representing the output of a custom gameplay effect execution. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Struct representing the output of a custom gameplay effect execution." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCustomExecutionOutput>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_Inner = { "OutputModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayModifierEvaluatedData, METADATA_PARAMS(nullptr, 0) }; // 2685457557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_MetaData[] = {
		{ "Comment", "/** Modifiers emitted by the execution */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Modifiers emitted by the execution" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers = { "OutputModifiers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCustomExecutionOutput, OutputModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_MetaData)) }; // 2685457557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_MetaData[] = {
		{ "Comment", "/** If true, the execution wants to trigger conditional gameplay effects when it completes */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "If true, the execution wants to trigger conditional gameplay effects when it completes" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_SetBit(void* Obj)
	{
		((FGameplayEffectCustomExecutionOutput*)Obj)->bTriggerConditionalGameplayEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects = { "bTriggerConditionalGameplayEffects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectCustomExecutionOutput), &Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_MetaData[] = {
		{ "Comment", "/** If true, the execution itself has manually handled the stack count of the effect and the GE system doesn't have to automatically handle it */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "If true, the execution itself has manually handled the stack count of the effect and the GE system doesn't have to automatically handle it" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_SetBit(void* Obj)
	{
		((FGameplayEffectCustomExecutionOutput*)Obj)->bHandledStackCountManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually = { "bHandledStackCountManually", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectCustomExecutionOutput), &Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_MetaData[] = {
		{ "Comment", "/** If true, the execution itself has manually invoked all gameplay cues and the GE system doesn't have to automatically handle them. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "If true, the execution itself has manually invoked all gameplay cues and the GE system doesn't have to automatically handle them." },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_SetBit(void* Obj)
	{
		((FGameplayEffectCustomExecutionOutput*)Obj)->bHandledGameplayCuesManually = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually = { "bHandledGameplayCuesManually", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayEffectCustomExecutionOutput), &Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_OutputModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bTriggerConditionalGameplayEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledStackCountManually,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewProp_bHandledGameplayCuesManually,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectCustomExecutionOutput",
		sizeof(FGameplayEffectCustomExecutionOutput),
		alignof(FGameplayEffectCustomExecutionOutput),
		Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayEffectExecutionCalculation::execExecute)
	{
		P_GET_STRUCT_REF(FGameplayEffectCustomExecutionParameters,Z_Param_Out_ExecutionParams);
		P_GET_STRUCT_REF(FGameplayEffectCustomExecutionOutput,Z_Param_Out_OutExecutionOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute_Implementation(Z_Param_Out_ExecutionParams,Z_Param_Out_OutExecutionOutput);
		P_NATIVE_END;
	}
	struct GameplayEffectExecutionCalculation_eventExecute_Parms
	{
		FGameplayEffectCustomExecutionParameters ExecutionParams;
		FGameplayEffectCustomExecutionOutput OutExecutionOutput;
	};
	static FName NAME_UGameplayEffectExecutionCalculation_Execute = FName(TEXT("Execute"));
	void UGameplayEffectExecutionCalculation::Execute(FGameplayEffectCustomExecutionParameters const& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
	{
		GameplayEffectExecutionCalculation_eventExecute_Parms Parms;
		Parms.ExecutionParams=ExecutionParams;
		Parms.OutExecutionOutput=OutExecutionOutput;
		const_cast<UGameplayEffectExecutionCalculation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayEffectExecutionCalculation_Execute),&Parms);
		OutExecutionOutput=Parms.OutExecutionOutput;
	}
	void UGameplayEffectExecutionCalculation::StaticRegisterNativesUGameplayEffectExecutionCalculation()
	{
		UClass* Class = UGameplayEffectExecutionCalculation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UGameplayEffectExecutionCalculation::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutExecutionOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams = { "ExecutionParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayEffectExecutionCalculation_eventExecute_Parms, ExecutionParams), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams_MetaData)) }; // 4012560757
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_OutExecutionOutput = { "OutExecutionOutput", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayEffectExecutionCalculation_eventExecute_Parms, OutExecutionOutput), Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput, METADATA_PARAMS(nullptr, 0) }; // 1991253676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_ExecutionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::NewProp_OutExecutionOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "Comment", "/**\n\x09 * Called whenever the owning gameplay effect is executed. Allowed to do essentially whatever is desired, including generating new\n\x09 * modifiers to instantly execute as well.\n\x09 * \n\x09 * @note: Native subclasses should override the auto-generated Execute_Implementation function and NOT this one.\n\x09 * \n\x09 * @param ExecutionParams\x09\x09Parameters for the custom execution calculation\n\x09 * @param OutExecutionOutput\x09[OUT] Output data populated by the execution detailing further behavior or results of the execution\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Called whenever the owning gameplay effect is executed. Allowed to do essentially whatever is desired, including generating new\nmodifiers to instantly execute as well.\n\n@note: Native subclasses should override the auto-generated Execute_Implementation function and NOT this one.\n\n@param ExecutionParams               Parameters for the custom execution calculation\n@param OutExecutionOutput    [OUT] Output data populated by the execution detailing further behavior or results of the execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation, nullptr, "Execute", nullptr, nullptr, sizeof(GameplayEffectExecutionCalculation_eventExecute_Parms), Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectExecutionCalculation);
	UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation_NoRegister()
	{
		return UGameplayEffectExecutionCalculation::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPassedInTags_MetaData[];
#endif
		static void NewProp_bRequiresPassedInTags_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPassedInTags;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidScopedModifierAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidScopedModifierAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InvalidScopedModifierAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidTransientAggregatorIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValidTransientAggregatorIdentifiers;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayEffectExecutionCalculation_Execute, "Execute" }, // 3585701597
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayEffectExecutionCalculation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Used to indicate if this execution uses Passed In Tags */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Used to indicate if this execution uses Passed In Tags" },
	};
#endif
	void Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_SetBit(void* Obj)
	{
		((UGameplayEffectExecutionCalculation*)Obj)->bRequiresPassedInTags = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags = { "bRequiresPassedInTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayEffectExecutionCalculation), &Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_Inner = { "InvalidScopedModifierAttributes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, METADATA_PARAMS(nullptr, 0) }; // 361294328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** Any attribute in this list will not show up as a valid option for scoped modifiers; Used to allow attribute capture for internal calculation while preventing modification */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Any attribute in this list will not show up as a valid option for scoped modifiers; Used to allow attribute capture for internal calculation while preventing modification" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes = { "InvalidScopedModifierAttributes", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffectExecutionCalculation, InvalidScopedModifierAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_MetaData)) }; // 361294328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers_MetaData[] = {
		{ "Category", "NonAttributeCalculation" },
		{ "Comment", "/** Any tag in this container will show up as a valid \"temporary variable\" for scoped modifiers; Used to allow for data-driven variable support that doesn't rely on scoped modifiers */" },
		{ "ModuleRelativePath", "Public/GameplayEffectExecutionCalculation.h" },
		{ "ToolTip", "Any tag in this container will show up as a valid \"temporary variable\" for scoped modifiers; Used to allow for data-driven variable support that doesn't rely on scoped modifiers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers = { "ValidTransientAggregatorIdentifiers", nullptr, (EPropertyFlags)0x0020080800010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffectExecutionCalculation, ValidTransientAggregatorIdentifiers), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers_MetaData)) }; // 3057219007
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_bRequiresPassedInTags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_InvalidScopedModifierAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::NewProp_ValidTransientAggregatorIdentifiers,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectExecutionCalculation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::ClassParams = {
		&UGameplayEffectExecutionCalculation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation()
	{
		if (!Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation.OuterSingleton, Z_Construct_UClass_UGameplayEffectExecutionCalculation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectExecutionCalculation>()
	{
		return UGameplayEffectExecutionCalculation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectExecutionCalculation);
	UGameplayEffectExecutionCalculation::~UGameplayEffectExecutionCalculation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ScriptStructInfo[] = {
		{ FGameplayEffectCustomExecutionParameters::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionParameters_Statics::NewStructOps, TEXT("GameplayEffectCustomExecutionParameters"), &Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCustomExecutionParameters), 4012560757U) },
		{ FGameplayEffectCustomExecutionOutput::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCustomExecutionOutput_Statics::NewStructOps, TEXT("GameplayEffectCustomExecutionOutput"), &Z_Registration_Info_UScriptStruct_GameplayEffectCustomExecutionOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCustomExecutionOutput), 1991253676U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectExecutionCalculation, UGameplayEffectExecutionCalculation::StaticClass, TEXT("UGameplayEffectExecutionCalculation"), &Z_Registration_Info_UClass_UGameplayEffectExecutionCalculation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectExecutionCalculation), 4026823861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_2795771105(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectExecutionCalculation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
