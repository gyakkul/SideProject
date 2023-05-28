// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceFeedbackComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnForceFeedbackFinished_Parms
		{
			UForceFeedbackComponent* ForceFeedbackComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent = { "ForceFeedbackComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnForceFeedbackFinished_Parms, ForceFeedbackComponent), Z_Construct_UClass_UForceFeedbackComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::NewProp_ForceFeedbackComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when we finish playing forcefeedback effect, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "called when we finish playing forcefeedback effect, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnForceFeedbackFinished__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::_Script_Engine_eventOnForceFeedbackFinished_Parms), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnForceFeedbackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnForceFeedbackFinished, UForceFeedbackComponent* ForceFeedbackComponent)
{
	struct _Script_Engine_eventOnForceFeedbackFinished_Parms
	{
		UForceFeedbackComponent* ForceFeedbackComponent;
	};
	_Script_Engine_eventOnForceFeedbackFinished_Parms Parms;
	Parms.ForceFeedbackComponent=ForceFeedbackComponent;
	OnForceFeedbackFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply)
	{
		P_GET_STRUCT_REF(FForceFeedbackAttenuationSettings,Z_Param_Out_OutAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_GetAttenuationSettingsToApply(Z_Param_Out_OutAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UForceFeedbackComponent::execAdjustAttenuation)
	{
		P_GET_STRUCT_REF(FForceFeedbackAttenuationSettings,Z_Param_Out_InAttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustAttenuation(Z_Param_Out_InAttenuationSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UForceFeedbackComponent::execSetIntensityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntensityMultiplier(Z_Param_NewIntensityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UForceFeedbackComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UForceFeedbackComponent::execPlay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play(Z_Param_StartTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UForceFeedbackComponent::execSetForceFeedbackEffect)
	{
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_NewForceFeedbackEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceFeedbackEffect(Z_Param_NewForceFeedbackEffect);
		P_NATIVE_END;
	}
	void UForceFeedbackComponent::StaticRegisterNativesUForceFeedbackComponent()
	{
		UClass* Class = UForceFeedbackComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustAttenuation", &UForceFeedbackComponent::execAdjustAttenuation },
			{ "BP_GetAttenuationSettingsToApply", &UForceFeedbackComponent::execBP_GetAttenuationSettingsToApply },
			{ "Play", &UForceFeedbackComponent::execPlay },
			{ "SetForceFeedbackEffect", &UForceFeedbackComponent::execSetForceFeedbackEffect },
			{ "SetIntensityMultiplier", &UForceFeedbackComponent::execSetIntensityMultiplier },
			{ "Stop", &UForceFeedbackComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics
	{
		struct ForceFeedbackComponent_eventAdjustAttenuation_Parms
		{
			FForceFeedbackAttenuationSettings InAttenuationSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttenuationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings = { "InAttenuationSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventAdjustAttenuation_Parms, InAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings_MetaData)) }; // 1188219074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::NewProp_InAttenuationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Modify the attenuation settings of the component */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Modify the attenuation settings of the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "AdjustAttenuation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::ForceFeedbackComponent_eventAdjustAttenuation_Parms), Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics
	{
		struct ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms
		{
			FForceFeedbackAttenuationSettings OutAttenuationSettings;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAttenuationSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings = { "OutAttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms, OutAttenuationSettings), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(nullptr, 0) }; // 1188219074
	void Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_OutAttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "DisplayName", "Get Attenuation Settings To Apply" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ScriptName", "GetAttenuationSettingsToApply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "BP_GetAttenuationSettingsToApply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::ForceFeedbackComponent_eventBP_GetAttenuationSettingsToApply_Parms), Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics
	{
		struct ForceFeedbackComponent_eventPlay_Parms
		{
			float StartTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventPlay_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::NewProp_StartTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Start a feedback effect playing */" },
		{ "CPP_Default_StartTime", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Start a feedback effect playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "Play", nullptr, nullptr, sizeof(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::ForceFeedbackComponent_eventPlay_Parms), Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics
	{
		struct ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms
		{
			UForceFeedbackEffect* NewForceFeedbackEffect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewForceFeedbackEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::NewProp_NewForceFeedbackEffect = { "NewForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms, NewForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::NewProp_NewForceFeedbackEffect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Set what force feedback effect is played by this component */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Set what force feedback effect is played by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "SetForceFeedbackEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::ForceFeedbackComponent_eventSetForceFeedbackEffect_Parms), Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics
	{
		struct ForceFeedbackComponent_eventSetIntensityMultiplier_Parms
		{
			float NewIntensityMultiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensityMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::NewProp_NewIntensityMultiplier = { "NewIntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ForceFeedbackComponent_eventSetIntensityMultiplier_Parms, NewIntensityMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::NewProp_NewIntensityMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Set a new intensity multiplier */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Set a new intensity multiplier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "SetIntensityMultiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::ForceFeedbackComponent_eventSetIntensityMultiplier_Parms), Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Stop playing the feedback effect */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Stop playing the feedback effect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceFeedbackComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceFeedbackComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UForceFeedbackComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceFeedbackComponent);
	UClass* Z_Construct_UClass_UForceFeedbackComponent_NoRegister()
	{
		return UForceFeedbackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UForceFeedbackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForceFeedbackEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDestroy_MetaData[];
#endif
		static void NewProp_bAutoDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntensityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntensityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnForceFeedbackFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnForceFeedbackFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceFeedbackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForceFeedbackComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForceFeedbackComponent_AdjustAttenuation, "AdjustAttenuation" }, // 316397597
		{ &Z_Construct_UFunction_UForceFeedbackComponent_BP_GetAttenuationSettingsToApply, "BP_GetAttenuationSettingsToApply" }, // 3161106072
		{ &Z_Construct_UFunction_UForceFeedbackComponent_Play, "Play" }, // 2996661797
		{ &Z_Construct_UFunction_UForceFeedbackComponent_SetForceFeedbackEffect, "SetForceFeedbackEffect" }, // 3543854876
		{ &Z_Construct_UFunction_UForceFeedbackComponent_SetIntensityMultiplier, "SetIntensityMultiplier" }, // 2097240339
		{ &Z_Construct_UFunction_UForceFeedbackComponent_Stop, "Stop" }, // 3022144103
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * ForceFeedbackComponent allows placing a rumble effect in to the world and having it apply to player characters who come near it\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "Components/ForceFeedbackComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ForceFeedbackComponent allows placing a rumble effect in to the world and having it apply to player characters who come near it" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** The feedback effect to be played */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "The feedback effect to be played" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_MetaData[] = {
		{ "Comment", "/** Auto destroy this component on completion */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Auto destroy this component on completion" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bAutoDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy = { "bAutoDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop effect when owner is destroyed */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Stop effect when owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** Should the playback of the forcefeedback pattern ignore time dilation and use the app's delta time */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Should the playback of the forcefeedback pattern ignore time dilation and use the app's delta time" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "Should the Attenuation Settings asset be used (false) or should the properties set directly on the component be used for attenuation properties" },
	};
#endif
	void Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UForceFeedbackComponent*)Obj)->bOverrideAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UForceFeedbackComponent), &Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier_MetaData[] = {
		{ "Category", "ForceFeedback" },
		{ "Comment", "/** The intensity multiplier to apply to effects generated by this component */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "The intensity multiplier to apply to effects generated by this component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier = { "IntensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, IntensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is false, the asset to use to determine attenuation properties for effects generated by this component */" },
		{ "EditCondition", "!bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "If bOverrideSettings is false, the asset to use to determine attenuation properties for effects generated by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationSettings), Z_Construct_UClass_UForceFeedbackAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides_MetaData[] = {
		{ "Category", "Attenuation" },
		{ "Comment", "/** If bOverrideSettings is true, the attenuation properties to use for effects generated by this component */" },
		{ "EditCondition", "bOverrideAttenuation" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "If bOverrideSettings is true, the attenuation properties to use for effects generated by this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides = { "AttenuationOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, AttenuationOverrides), Z_Construct_UScriptStruct_FForceFeedbackAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides_MetaData)) }; // 1188219074
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished_MetaData[] = {
		{ "Comment", "/** called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early */" },
		{ "ModuleRelativePath", "Classes/Components/ForceFeedbackComponent.h" },
		{ "ToolTip", "called when we finish playing audio, either because it played to completion or because a Stop() call turned it off early" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished = { "OnForceFeedbackFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UForceFeedbackComponent, OnForceFeedbackFinished), Z_Construct_UDelegateFunction_Engine_OnForceFeedbackFinished__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished_MetaData)) }; // 1754632284
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_ForceFeedbackEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bAutoDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bStopWhenOwnerDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bIgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_bOverrideAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_IntensityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_AttenuationOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UForceFeedbackComponent_Statics::NewProp_OnForceFeedbackFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceFeedbackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceFeedbackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceFeedbackComponent_Statics::ClassParams = {
		&UForceFeedbackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceFeedbackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceFeedbackComponent()
	{
		if (!Z_Registration_Info_UClass_UForceFeedbackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceFeedbackComponent.OuterSingleton, Z_Construct_UClass_UForceFeedbackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UForceFeedbackComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UForceFeedbackComponent>()
	{
		return UForceFeedbackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceFeedbackComponent);
	UForceFeedbackComponent::~UForceFeedbackComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UForceFeedbackComponent, UForceFeedbackComponent::StaticClass, TEXT("UForceFeedbackComponent"), &Z_Registration_Info_UClass_UForceFeedbackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceFeedbackComponent), 1429558528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_4223022499(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
