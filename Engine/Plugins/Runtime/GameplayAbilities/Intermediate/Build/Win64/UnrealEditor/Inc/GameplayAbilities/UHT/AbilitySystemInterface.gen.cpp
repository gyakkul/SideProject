// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbilitySystemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySystemInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UAbilitySystemInterface::StaticRegisterNativesUAbilitySystemInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySystemInterface);
	UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister()
	{
		return UAbilitySystemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySystemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySystemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySystemInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/AbilitySystemInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySystemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAbilitySystemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySystemInterface_Statics::ClassParams = {
		&UAbilitySystemInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilitySystemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySystemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilitySystemInterface()
	{
		if (!Z_Registration_Info_UClass_UAbilitySystemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySystemInterface.OuterSingleton, Z_Construct_UClass_UAbilitySystemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilitySystemInterface.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilitySystemInterface>()
	{
		return UAbilitySystemInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySystemInterface);
	UAbilitySystemInterface::~UAbilitySystemInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySystemInterface, UAbilitySystemInterface::StaticClass, TEXT("UAbilitySystemInterface"), &Z_Registration_Info_UClass_UAbilitySystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySystemInterface), 220555618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_617649281(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
