// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityTargetActor_ActorPlacement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityTargetActor_ActorPlacement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void AGameplayAbilityTargetActor_ActorPlacement::StaticRegisterNativesAGameplayAbilityTargetActor_ActorPlacement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityTargetActor_ActorPlacement);
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_NoRegister()
	{
		return AGameplayAbilityTargetActor_ActorPlacement::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacedActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PlacedActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacedActorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlacedActorMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor_GroundTrace,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass_MetaData[] = {
		{ "Category", "Targeting" },
		{ "Comment", "/** Actor we intend to place. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
		{ "ToolTip", "Actor we intend to place." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass = { "PlacedActorClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Override Material 0 on our placed actor's meshes with this material for visualization. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityTargetActor_ActorPlacement.h" },
		{ "ToolTip", "Override Material 0 on our placed actor's meshes with this material for visualization." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial = { "PlacedActorMaterial", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::NewProp_PlacedActorMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityTargetActor_ActorPlacement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::ClassParams = {
		&AGameplayAbilityTargetActor_ActorPlacement::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement.OuterSingleton, Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityTargetActor_ActorPlacement>()
	{
		return AGameplayAbilityTargetActor_ActorPlacement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityTargetActor_ActorPlacement);
	AGameplayAbilityTargetActor_ActorPlacement::~AGameplayAbilityTargetActor_ActorPlacement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityTargetActor_ActorPlacement, AGameplayAbilityTargetActor_ActorPlacement::StaticClass, TEXT("AGameplayAbilityTargetActor_ActorPlacement"), &Z_Registration_Info_UClass_AGameplayAbilityTargetActor_ActorPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityTargetActor_ActorPlacement), 2021062961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_3883050128(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityTargetActor_ActorPlacement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
