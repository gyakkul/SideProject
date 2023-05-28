// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitVelocityChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitVelocityChange() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitVelocityChangeDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitVelocityChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitVelocityChangeDelegate)
{
	WaitVelocityChangeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_WaitVelocityChange::execCreateWaitVelocityChange)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinimumMagnitude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitVelocityChange**)Z_Param__Result=UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(Z_Param_OwningAbility,Z_Param_Direction,Z_Param_MinimumMagnitude);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitVelocityChange::StaticRegisterNativesUAbilityTask_WaitVelocityChange()
	{
		UClass* Class = UAbilityTask_WaitVelocityChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateWaitVelocityChange", &UAbilityTask_WaitVelocityChange::execCreateWaitVelocityChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics
	{
		struct AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms
		{
			UGameplayAbility* OwningAbility;
			FVector Direction;
			float MinimumMagnitude;
			UAbilityTask_WaitVelocityChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMagnitude;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_MinimumMagnitude = { "MinimumMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, MinimumMagnitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_MinimumMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait for the actor's movement component velocity to be of minimum magnitude when projected along given direction */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "WaitVelocityChange" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
		{ "ToolTip", "Wait for the actor's movement component velocity to be of minimum magnitude when projected along given direction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitVelocityChange, nullptr, "CreateWaitVelocityChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::AbilityTask_WaitVelocityChange_eventCreateWaitVelocityChange_Parms), Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitVelocityChange);
	UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange_NoRegister()
	{
		return UAbilityTask_WaitVelocityChange::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVelocityChage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVelocityChage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange, "CreateWaitVelocityChange" }, // 3811107702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage_MetaData[] = {
		{ "Comment", "/** Delegate called when velocity requirements are met */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
		{ "ToolTip", "Delegate called when velocity requirements are met" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage = { "OnVelocityChage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitVelocityChange, OnVelocityChage), Z_Construct_UDelegateFunction_GameplayAbilities_WaitVelocityChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage_MetaData)) }; // 4120260354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitVelocityChange.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent = { "CachedMovementComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitVelocityChange, CachedMovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_OnVelocityChage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::NewProp_CachedMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitVelocityChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::ClassParams = {
		&UAbilityTask_WaitVelocityChange::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitVelocityChange()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitVelocityChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitVelocityChange>()
	{
		return UAbilityTask_WaitVelocityChange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitVelocityChange);
	UAbilityTask_WaitVelocityChange::~UAbilityTask_WaitVelocityChange() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitVelocityChange, UAbilityTask_WaitVelocityChange::StaticClass, TEXT("UAbilityTask_WaitVelocityChange"), &Z_Registration_Info_UClass_UAbilityTask_WaitVelocityChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitVelocityChange), 288959158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_3951864773(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitVelocityChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
