// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectUIData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UGameplayEffectUIData::StaticRegisterNativesUGameplayEffectUIData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectUIData);
	UClass* Z_Construct_UClass_UGameplayEffectUIData_NoRegister()
	{
		return UGameplayEffectUIData::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffectUIData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffectUIData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectUIData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UGameplayEffectUIData\n * Base class to provide game-specific data about how to describe a Gameplay Effect in the UI. Subclass with data to use in your game.\n */" },
		{ "IncludePath", "GameplayEffectUIData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayEffectUIData.h" },
		{ "ToolTip", "UGameplayEffectUIData\nBase class to provide game-specific data about how to describe a Gameplay Effect in the UI. Subclass with data to use in your game." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffectUIData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectUIData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectUIData_Statics::ClassParams = {
		&UGameplayEffectUIData::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectUIData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffectUIData()
	{
		if (!Z_Registration_Info_UClass_UGameplayEffectUIData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectUIData.OuterSingleton, Z_Construct_UClass_UGameplayEffectUIData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayEffectUIData.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayEffectUIData>()
	{
		return UGameplayEffectUIData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectUIData);
	UGameplayEffectUIData::~UGameplayEffectUIData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectUIData, UGameplayEffectUIData::StaticClass, TEXT("UGameplayEffectUIData"), &Z_Registration_Info_UClass_UGameplayEffectUIData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectUIData), 3051784551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_1614497475(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectUIData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
