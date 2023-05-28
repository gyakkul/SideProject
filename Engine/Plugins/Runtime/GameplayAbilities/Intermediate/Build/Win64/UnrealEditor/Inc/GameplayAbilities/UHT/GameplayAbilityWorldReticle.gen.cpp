// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityWorldReticle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityWorldReticle() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FWorldReticleParameters();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldReticleParameters;
class UScriptStruct* FWorldReticleParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldReticleParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldReticleParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldReticleParameters, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("WorldReticleParameters"));
	}
	return Z_Registration_Info_UScriptStruct_WorldReticleParameters.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FWorldReticleParameters>()
{
	return FWorldReticleParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldReticleParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AOEScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AOEScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldReticleParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewProp_AOEScale_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewProp_AOEScale = { "AOEScale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldReticleParameters, AOEScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewProp_AOEScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewProp_AOEScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewProp_AOEScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"WorldReticleParameters",
		sizeof(FWorldReticleParameters),
		alignof(FWorldReticleParameters),
		Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldReticleParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldReticleParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldReticleParameters.InnerSingleton, Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldReticleParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(AGameplayAbilityWorldReticle::execFaceTowardSource)
	{
		P_GET_UBOOL(Z_Param_bFaceIn2D);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FaceTowardSource(Z_Param_bFaceIn2D);
		P_NATIVE_END;
	}
	struct GameplayAbilityWorldReticle_eventOnTargetingAnActor_Parms
	{
		bool bNewValue;
	};
	struct GameplayAbilityWorldReticle_eventOnValidTargetChanged_Parms
	{
		bool bNewValue;
	};
	struct GameplayAbilityWorldReticle_eventSetReticleMaterialParamFloat_Parms
	{
		FName ParamName;
		float value;
	};
	struct GameplayAbilityWorldReticle_eventSetReticleMaterialParamVector_Parms
	{
		FName ParamName;
		FVector value;
	};
	static FName NAME_AGameplayAbilityWorldReticle_OnParametersInitialized = FName(TEXT("OnParametersInitialized"));
	void AGameplayAbilityWorldReticle::OnParametersInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGameplayAbilityWorldReticle_OnParametersInitialized),NULL);
	}
	static FName NAME_AGameplayAbilityWorldReticle_OnTargetingAnActor = FName(TEXT("OnTargetingAnActor"));
	void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
	{
		GameplayAbilityWorldReticle_eventOnTargetingAnActor_Parms Parms;
		Parms.bNewValue=bNewValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayAbilityWorldReticle_OnTargetingAnActor),&Parms);
	}
	static FName NAME_AGameplayAbilityWorldReticle_OnValidTargetChanged = FName(TEXT("OnValidTargetChanged"));
	void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
	{
		GameplayAbilityWorldReticle_eventOnValidTargetChanged_Parms Parms;
		Parms.bNewValue=bNewValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayAbilityWorldReticle_OnValidTargetChanged),&Parms);
	}
	static FName NAME_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat = FName(TEXT("SetReticleMaterialParamFloat"));
	void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(FName ParamName, float value)
	{
		GameplayAbilityWorldReticle_eventSetReticleMaterialParamFloat_Parms Parms;
		Parms.ParamName=ParamName;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat),&Parms);
	}
	static FName NAME_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector = FName(TEXT("SetReticleMaterialParamVector"));
	void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(FName ParamName, FVector value)
	{
		GameplayAbilityWorldReticle_eventSetReticleMaterialParamVector_Parms Parms;
		Parms.ParamName=ParamName;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector),&Parms);
	}
	void AGameplayAbilityWorldReticle::StaticRegisterNativesAGameplayAbilityWorldReticle()
	{
		UClass* Class = AGameplayAbilityWorldReticle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FaceTowardSource", &AGameplayAbilityWorldReticle::execFaceTowardSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics
	{
		struct GameplayAbilityWorldReticle_eventFaceTowardSource_Parms
		{
			bool bFaceIn2D;
		};
		static void NewProp_bFaceIn2D_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceIn2D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::NewProp_bFaceIn2D_SetBit(void* Obj)
	{
		((GameplayAbilityWorldReticle_eventFaceTowardSource_Parms*)Obj)->bFaceIn2D = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::NewProp_bFaceIn2D = { "bFaceIn2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbilityWorldReticle_eventFaceTowardSource_Parms), &Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::NewProp_bFaceIn2D_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::NewProp_bFaceIn2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityWorldReticle, nullptr, "FaceTowardSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::GameplayAbilityWorldReticle_eventFaceTowardSource_Parms), Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityWorldReticle, nullptr, "OnParametersInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics
	{
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((GameplayAbilityWorldReticle_eventOnTargetingAnActor_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbilityWorldReticle_eventOnTargetingAnActor_Parms), &Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Called whenever bIsTargetAnActor changes value. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "Called whenever bIsTargetAnActor changes value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityWorldReticle, nullptr, "OnTargetingAnActor", nullptr, nullptr, sizeof(GameplayAbilityWorldReticle_eventOnTargetingAnActor_Parms), Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics
	{
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((GameplayAbilityWorldReticle_eventOnValidTargetChanged_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbilityWorldReticle_eventOnValidTargetChanged_Parms), &Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Called whenever bIsTargetValid changes value. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "Called whenever bIsTargetValid changes value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityWorldReticle, nullptr, "OnValidTargetChanged", nullptr, nullptr, sizeof(GameplayAbilityWorldReticle_eventOnValidTargetChanged_Parms), Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbilityWorldReticle_eventSetReticleMaterialParamFloat_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbilityWorldReticle_eventSetReticleMaterialParamFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityWorldReticle, nullptr, "SetReticleMaterialParamFloat", nullptr, nullptr, sizeof(GameplayAbilityWorldReticle_eventSetReticleMaterialParamFloat_Parms), Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbilityWorldReticle_eventSetReticleMaterialParamVector_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbilityWorldReticle_eventSetReticleMaterialParamVector_Parms, value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Reticle" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameplayAbilityWorldReticle, nullptr, "SetReticleMaterialParamVector", nullptr, nullptr, sizeof(GameplayAbilityWorldReticle_eventSetReticleMaterialParamVector_Parms), Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityWorldReticle);
	UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_NoRegister()
	{
		return AGameplayAbilityWorldReticle::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceOwnerFlat_MetaData[];
#endif
		static void NewProp_bFaceOwnerFlat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceOwnerFlat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToTargetedActor_MetaData[];
#endif
		static void NewProp_bSnapToTargetedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToTargetedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargetValid_MetaData[];
#endif
		static void NewProp_bIsTargetValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargetValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTargetAnActor_MetaData[];
#endif
		static void NewProp_bIsTargetAnActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargetAnActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimaryPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameplayAbilityWorldReticle_FaceTowardSource, "FaceTowardSource" }, // 2567519400
		{ &Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnParametersInitialized, "OnParametersInitialized" }, // 947879812
		{ &Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnTargetingAnActor, "OnTargetingAnActor" }, // 709829588
		{ &Z_Construct_UFunction_AGameplayAbilityWorldReticle_OnValidTargetChanged, "OnValidTargetChanged" }, // 3825160551
		{ &Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat, "SetReticleMaterialParamFloat" }, // 1346004978
		{ &Z_Construct_UFunction_AGameplayAbilityWorldReticle_SetReticleMaterialParamVector, "SetReticleMaterialParamVector" }, // 3731998861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Reticles allow targeting to be visualized. Tasks can spawn these. Artists/designers can create BPs for these. */" },
		{ "IncludePath", "Abilities/GameplayAbilityWorldReticle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "Reticles allow targeting to be visualized. Tasks can spawn these. Artists/designers can create BPs for these." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Reticle" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0011000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityWorldReticle, Parameters), Z_Construct_UScriptStruct_FWorldReticleParameters, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_Parameters_MetaData)) }; // 4227539575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "/** Makes the reticle's default owner-facing behavior operate in 2D (flat) instead of 3D (pitched). Defaults to true. */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "Makes the reticle's default owner-facing behavior operate in 2D (flat) instead of 3D (pitched). Defaults to true." },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat_SetBit(void* Obj)
	{
		((AGameplayAbilityWorldReticle*)Obj)->bFaceOwnerFlat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat = { "bFaceOwnerFlat", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityWorldReticle), &Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor_MetaData[] = {
		{ "Category", "Reticle" },
		{ "Comment", "// If the target is an actor snap to it's location \n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "If the target is an actor snap to it's location" },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor_SetBit(void* Obj)
	{
		((AGameplayAbilityWorldReticle*)Obj)->bSnapToTargetedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor = { "bSnapToTargetedActor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityWorldReticle), &Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** This indicates whether or not the targeting actor considers the current target to be valid. Defaults to true. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "This indicates whether or not the targeting actor considers the current target to be valid. Defaults to true." },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid_SetBit(void* Obj)
	{
		((AGameplayAbilityWorldReticle*)Obj)->bIsTargetValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid = { "bIsTargetValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityWorldReticle), &Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** This indicates whether or not the targeting reticle is pointed at an actor. Defaults to false. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "This indicates whether or not the targeting reticle is pointed at an actor. Defaults to false." },
	};
#endif
	void Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor_SetBit(void* Obj)
	{
		((AGameplayAbilityWorldReticle*)Obj)->bIsTargetAnActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor = { "bIsTargetAnActor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGameplayAbilityWorldReticle), &Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_PrimaryPC_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** This is used in the process of determining whether we should replicate to a specific client. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "This is used in the process of determining whether we should replicate to a specific client." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_PrimaryPC = { "PrimaryPC", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityWorldReticle, PrimaryPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_PrimaryPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_PrimaryPC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_TargetingActor_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** In the future, we may want to grab things like sockets off of this. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle.h" },
		{ "ToolTip", "In the future, we may want to grab things like sockets off of this." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_TargetingActor = { "TargetingActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityWorldReticle, TargetingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_TargetingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_TargetingActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bFaceOwnerFlat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bSnapToTargetedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_bIsTargetAnActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_PrimaryPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::NewProp_TargetingActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityWorldReticle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::ClassParams = {
		&AGameplayAbilityWorldReticle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityWorldReticle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityWorldReticle.OuterSingleton, Z_Construct_UClass_AGameplayAbilityWorldReticle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityWorldReticle.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityWorldReticle>()
	{
		return AGameplayAbilityWorldReticle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityWorldReticle);
	AGameplayAbilityWorldReticle::~AGameplayAbilityWorldReticle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics::ScriptStructInfo[] = {
		{ FWorldReticleParameters::StaticStruct, Z_Construct_UScriptStruct_FWorldReticleParameters_Statics::NewStructOps, TEXT("WorldReticleParameters"), &Z_Registration_Info_UScriptStruct_WorldReticleParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldReticleParameters), 4227539575U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityWorldReticle, AGameplayAbilityWorldReticle::StaticClass, TEXT("AGameplayAbilityWorldReticle"), &Z_Registration_Info_UClass_AGameplayAbilityWorldReticle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityWorldReticle), 87376288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_2199428925(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
