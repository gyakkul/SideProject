// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTargetActor_SingleLineTrace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_SingleLineTrace() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_Trace();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void AGameplayAbilityTargetActor_SingleLineTrace::StaticRegisterNativesAGameplayAbilityTargetActor_SingleLineTrace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_SingleLineTrace);
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_NoRegister()
	{
		return AGameplayAbilityTargetActor_SingleLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_Trace,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_SingleLineTrace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_SingleLineTrace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_SingleLineTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::ClassParams = {
		&AGameplayAbilityTargetActor_SingleLineTrace::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_SingleLineTrace>()
	{
		return AGameplayAbilityTargetActor_SingleLineTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_SingleLineTrace);
	AGameplayAbilityTargetActor_SingleLineTrace::~AGameplayAbilityTargetActor_SingleLineTrace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_SingleLineTrace, AGameplayAbilityTargetActor_SingleLineTrace::StaticClass, TEXT("AGameplayAbilityTargetActor_SingleLineTrace"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_SingleLineTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_SingleLineTrace), 4063010445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_3866403387(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_SingleLineTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
