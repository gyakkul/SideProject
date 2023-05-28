// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilityBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilityBlueprint();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UGameplayAbilityBlueprint::StaticRegisterNativesUGameplayAbilityBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilityBlueprint);
	UClass* Z_Construct_UClass_UGameplayAbilityBlueprint_NoRegister()
	{
		return UGameplayAbilityBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbilityBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Gameplay Ability Blueprint is essentially a specialized Blueprint whose graphs control a gameplay ability\n * The ability factory should pick this for you automatically\n */" },
		{ "IncludePath", "GameplayAbilityBlueprint.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilityBlueprint.h" },
		{ "ToolTip", "A Gameplay Ability Blueprint is essentially a specialized Blueprint whose graphs control a gameplay ability\nThe ability factory should pick this for you automatically" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilityBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::ClassParams = {
		&UGameplayAbilityBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbilityBlueprint()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbilityBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilityBlueprint.OuterSingleton, Z_Construct_UClass_UGameplayAbilityBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbilityBlueprint.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbilityBlueprint>()
	{
		return UGameplayAbilityBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilityBlueprint);
	UGameplayAbilityBlueprint::~UGameplayAbilityBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilityBlueprint, UGameplayAbilityBlueprint::StaticClass, TEXT("UGameplayAbilityBlueprint"), &Z_Registration_Info_UClass_UGameplayAbilityBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilityBlueprint), 4261261548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_2241857481(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilityBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
