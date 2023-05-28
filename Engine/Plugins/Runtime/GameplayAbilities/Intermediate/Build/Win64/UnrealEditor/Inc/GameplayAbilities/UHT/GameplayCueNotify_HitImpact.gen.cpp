// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueNotify_HitImpact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueNotify_HitImpact() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueNotify_Static();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void UGameplayCueNotify_HitImpact::StaticRegisterNativesUGameplayCueNotify_HitImpact()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueNotify_HitImpact);
	UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact_NoRegister()
	{
		return UGameplayCueNotify_HitImpact::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParticleSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueNotify_Static,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "GameplayCue" },
		{ "Comment", "/**\n *\x09Non instanced GameplayCueNotify for spawning particle and sound FX.\n *\x09Still WIP - needs to be fleshed out more.\n */" },
		{ "DisplayName", "GCN Hit Impact (Deprecated)" },
		{ "HideCategories", "Replication" },
		{ "IncludePath", "GameplayCueNotify_HitImpact.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_HitImpact.h" },
		{ "ShortTooltip", "This class is deprecated. Use UFortGameplayCueNotify_Burst (GCN Burst) instead." },
		{ "ToolTip", "Non instanced GameplayCueNotify for spawning particle and sound FX.\nStill WIP - needs to be fleshed out more." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_HitImpact.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueNotify_HitImpact, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "GameplayCue" },
		{ "Comment", "/** Effects to play for weapon attacks against specific surfaces */" },
		{ "ModuleRelativePath", "Public/GameplayCueNotify_HitImpact.h" },
		{ "ToolTip", "Effects to play for weapon attacks against specific surfaces" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayCueNotify_HitImpact, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::NewProp_ParticleSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueNotify_HitImpact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::ClassParams = {
		&UGameplayCueNotify_HitImpact::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueNotify_HitImpact()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact.OuterSingleton, Z_Construct_UClass_UGameplayCueNotify_HitImpact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueNotify_HitImpact>()
	{
		return UGameplayCueNotify_HitImpact::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueNotify_HitImpact);
	UGameplayCueNotify_HitImpact::~UGameplayCueNotify_HitImpact() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueNotify_HitImpact, UGameplayCueNotify_HitImpact::StaticClass, TEXT("UGameplayCueNotify_HitImpact"), &Z_Registration_Info_UClass_UGameplayCueNotify_HitImpact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueNotify_HitImpact), 1807865053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_1696084351(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueNotify_HitImpact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
