// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbility_Montage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbility_Montage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_Montage();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_Montage_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UGameplayAbility_Montage::StaticRegisterNativesUGameplayAbility_Montage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbility_Montage);
	UClass* Z_Construct_UClass_UGameplayAbility_Montage_NoRegister()
	{
		return UGameplayAbility_Montage::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbility_Montage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MontageToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClassesWhileAnimating_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClassesWhileAnimating_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectClassesWhileAnimating;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameplayEffectsWhileAnimating_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectsWhileAnimating_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectsWhileAnimating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbility_Montage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Montage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""A gameplay ability that plays a single montage and applies a GameplayEffect\n */" },
		{ "IncludePath", "Abilities/GameplayAbility_Montage.h" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Montage.h" },
		{ "ToolTip", "A gameplay ability that plays a single montage and applies a GameplayEffect" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_MontageToPlay_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Montage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility_Montage, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_MontageToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_MontageToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Montage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility_Montage, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Montage.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility_Montage, SectionName), METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_SectionName_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating_Inner = { "GameplayEffectClassesWhileAnimating", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating_MetaData[] = {
		{ "Category", "MontageAbility" },
		{ "Comment", "/** GameplayEffects to apply and then remove while the animation is playing */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Montage.h" },
		{ "ToolTip", "GameplayEffects to apply and then remove while the animation is playing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating = { "GameplayEffectClassesWhileAnimating", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility_Montage, GameplayEffectClassesWhileAnimating), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating_Inner = { "GameplayEffectsWhileAnimating", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating_MetaData[] = {
		{ "Category", "Deprecated" },
		{ "Comment", "/** Deprecated. Use GameplayEffectClassesWhileAnimating instead. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility_Montage.h" },
		{ "ToolTip", "Deprecated. Use GameplayEffectClassesWhileAnimating instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating = { "GameplayEffectsWhileAnimating", nullptr, (EPropertyFlags)0x0014000000030001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility_Montage, GameplayEffectsWhileAnimating), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbility_Montage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_MontageToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectClassesWhileAnimating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Montage_Statics::NewProp_GameplayEffectsWhileAnimating,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbility_Montage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbility_Montage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbility_Montage_Statics::ClassParams = {
		&UGameplayAbility_Montage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayAbility_Montage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Montage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Montage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbility_Montage()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbility_Montage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbility_Montage.OuterSingleton, Z_Construct_UClass_UGameplayAbility_Montage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbility_Montage.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbility_Montage>()
	{
		return UGameplayAbility_Montage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbility_Montage);
	UGameplayAbility_Montage::~UGameplayAbility_Montage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbility_Montage, UGameplayAbility_Montage::StaticClass, TEXT("UGameplayAbility_Montage"), &Z_Registration_Info_UClass_UGameplayAbility_Montage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbility_Montage), 276226277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_2491461930(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_Montage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
