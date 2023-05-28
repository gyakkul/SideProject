// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Async/AbilityAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityAsync::execEndAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAction();
		P_NATIVE_END;
	}
	void UAbilityAsync::StaticRegisterNativesUAbilityAsync()
	{
		UClass* Class = UAbilityAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndAction", &UAbilityAsync::execEndAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_EndAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Async" },
		{ "Comment", "/** Explicitly end the action, will disable any callbacks and allow action to be destroyed */" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync.h" },
		{ "ToolTip", "Explicitly end the action, will disable any callbacks and allow action to be destroyed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync, nullptr, "EndAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_EndAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_EndAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync);
	UClass* Z_Construct_UClass_UAbilityAsync_NoRegister()
	{
		return UAbilityAsync::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_EndAction, "EndAction" }, // 3455767722
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AbilityAsync is a base class for ability-specific BlueprintAsyncActions.\n * These are similar to ability tasks, but they can be executed from any blueprint like an actor and are not tied to a specific ability lifespan.\n * By default these actions are only kept alive by the blueprint graph that spawns them and will eventually be destroyed if the graph instance is deleted or spawns a replacement.\n * EndAction should be called when a one-time action has succeeded or failed, but for longer-lived actions with multiple triggers it can be called from blueprints.\n */" },
		{ "ExposedAsyncProxy", "AsyncAction" },
		{ "IncludePath", "Abilities/Async/AbilityAsync.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync.h" },
		{ "ToolTip", "AbilityAsync is a base class for ability-specific BlueprintAsyncActions.\nThese are similar to ability tasks, but they can be executed from any blueprint like an actor and are not tied to a specific ability lifespan.\nBy default these actions are only kept alive by the blueprint graph that spawns them and will eventually be destroyed if the graph instance is deleted or spawns a replacement.\nEndAction should be called when a one-time action has succeeded or failed, but for longer-lived actions with multiple triggers it can be called from blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_Statics::ClassParams = {
		&UAbilityAsync::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync.OuterSingleton, Z_Construct_UClass_UAbilityAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync>()
	{
		return UAbilityAsync::StaticClass();
	}
	UAbilityAsync::UAbilityAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync);
	UAbilityAsync::~UAbilityAsync() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync, UAbilityAsync::StaticClass, TEXT("UAbilityAsync"), &Z_Registration_Info_UClass_UAbilityAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync), 3742384614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_2449374029(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
