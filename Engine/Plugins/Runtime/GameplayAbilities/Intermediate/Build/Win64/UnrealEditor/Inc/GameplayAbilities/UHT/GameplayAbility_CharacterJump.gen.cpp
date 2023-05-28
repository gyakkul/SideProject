// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbility_CharacterJump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbility_CharacterJump() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UGameplayAbility_CharacterJump::StaticRegisterNativesUGameplayAbility_CharacterJump()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbility_CharacterJump);
	UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump_NoRegister()
	{
		return UGameplayAbility_CharacterJump::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Ability that jumps with a character.\n */" },
		{ "IncludePath", "Abilities/GameplayAbility_CharacterJump.h" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_CharacterJump.h" },
		{ "ToolTip", "Ability that jumps with a character." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbility_CharacterJump>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::ClassParams = {
		&UGameplayAbility_CharacterJump::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbility_CharacterJump()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbility_CharacterJump.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbility_CharacterJump.OuterSingleton, Z_Construct_UClass_UGameplayAbility_CharacterJump_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbility_CharacterJump.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbility_CharacterJump>()
	{
		return UGameplayAbility_CharacterJump::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbility_CharacterJump);
	UGameplayAbility_CharacterJump::~UGameplayAbility_CharacterJump() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbility_CharacterJump, UGameplayAbility_CharacterJump::StaticClass, TEXT("UGameplayAbility_CharacterJump"), &Z_Registration_Info_UClass_UGameplayAbility_CharacterJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbility_CharacterJump), 1748964262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_1616479657(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_CharacterJump_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
