// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectCustomApplicationRequirement.h"
#include "GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectCustomApplicationRequirement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpec();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayEffectCustomApplicationRequirement::execCanApplyGameplayEffect)
	{
		P_GET_OBJECT(UGameplayEffect,Z_Param_GameplayEffect);
		P_GET_STRUCT_REF(FGameplayEffectSpec,Z_Param_Out_Spec);
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_ASC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanApplyGameplayEffect_Implementation(Z_Param_GameplayEffect,Z_Param_Out_Spec,Z_Param_ASC);
		P_NATIVE_END;
	}
	struct GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms
	{
		const UGameplayEffect* GameplayEffect;
		FGameplayEffectSpec Spec;
		UAbilitySystemComponent* ASC;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect = FName(TEXT("CanApplyGameplayEffect"));
	bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(const UGameplayEffect* GameplayEffect, FGameplayEffectSpec const& Spec, UAbilitySystemComponent* ASC) const
	{
		GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms Parms;
		Parms.GameplayEffect=GameplayEffect;
		Parms.Spec=Spec;
		Parms.ASC=ASC;
		const_cast<UGameplayEffectCustomApplicationRequirement*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGameplayEffectCustomApplicationRequirement::StaticRegisterNativesUGameplayEffectCustomApplicationRequirement()
	{
		UClass* Class = UGameplayEffectCustomApplicationRequirement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanApplyGameplayEffect", &UGameplayEffectCustomApplicationRequirement::execCanApplyGameplayEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ASC;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect = { "GameplayEffect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms, GameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms, Spec), Z_Construct_UScriptStruct_FGameplayEffectSpec, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec_MetaData)) }; // 3735220946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC = { "ASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms, ASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC_MetaData)) };
	void Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms), &Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_GameplayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_Spec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ASC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calculation" },
		{ "Comment", "/** Return whether the gameplay effect should be applied or not */" },
		{ "ModuleRelativePath", "Public/GameplayEffectCustomApplicationRequirement.h" },
		{ "ToolTip", "Return whether the gameplay effect should be applied or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement, nullptr, "CanApplyGameplayEffect", nullptr, nullptr, sizeof(GameplayEffectCustomApplicationRequirement_eventCanApplyGameplayEffect_Parms), Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectCustomApplicationRequirement);
	UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_NoRegister()
	{
		return UGameplayEffectCustomApplicationRequirement::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect, "CanApplyGameplayEffect" }, // 2392330764
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code */" },
		{ "IncludePath", "GameplayEffectCustomApplicationRequirement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectCustomApplicationRequirement.h" },
		{ "ToolTip", "Class used to perform custom gameplay effect modifier calculations, either via blueprint or native code" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectCustomApplicationRequirement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::ClassParams = {
		&UGameplayEffectCustomApplicationRequirement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement()
	{
		if (!Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement.OuterSingleton, Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectCustomApplicationRequirement>()
	{
		return UGameplayEffectCustomApplicationRequirement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectCustomApplicationRequirement);
	UGameplayEffectCustomApplicationRequirement::~UGameplayEffectCustomApplicationRequirement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectCustomApplicationRequirement, UGameplayEffectCustomApplicationRequirement::StaticClass, TEXT("UGameplayEffectCustomApplicationRequirement"), &Z_Registration_Info_UClass_UGameplayEffectCustomApplicationRequirement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectCustomApplicationRequirement), 2723203588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_1237482022(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectCustomApplicationRequirement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
