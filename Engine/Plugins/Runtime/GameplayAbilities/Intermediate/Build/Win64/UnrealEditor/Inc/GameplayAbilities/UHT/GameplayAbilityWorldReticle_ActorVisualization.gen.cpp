// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbilityWorldReticle_ActorVisualization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilityWorldReticle_ActorVisualization() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	void AGameplayAbilityWorldReticle_ActorVisualization::StaticRegisterNativesAGameplayAbilityWorldReticle_ActorVisualization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameplayAbilityWorldReticle_ActorVisualization);
	UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_NoRegister()
	{
		return AGameplayAbilityWorldReticle_ActorVisualization::StaticClass();
	}
	struct Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisualizationComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VisualizationComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityWorldReticle,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This is a dummy reticle for internal use by visualization placement tasks. It builds a custom visual model of the visualization being placed. */" },
		{ "IncludePath", "Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
		{ "ToolTip", "This is a dummy reticle for internal use by visualization placement tasks. It builds a custom visual model of the visualization being placed." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Comment", "/** Hardcoded collision component, so other objects don't think they can collide with the visualization actor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
		{ "ToolTip", "Hardcoded collision component, so other objects don't think they can collide with the visualization actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityWorldReticle_ActorVisualization, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_Inner = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbilityWorldReticle_ActorVisualization.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents = { "VisualizationComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGameplayAbilityWorldReticle_ActorVisualization, VisualizationComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::NewProp_VisualizationComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameplayAbilityWorldReticle_ActorVisualization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::ClassParams = {
		&AGameplayAbilityWorldReticle_ActorVisualization::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization()
	{
		if (!Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization.OuterSingleton, Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<AGameplayAbilityWorldReticle_ActorVisualization>()
	{
		return AGameplayAbilityWorldReticle_ActorVisualization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayAbilityWorldReticle_ActorVisualization);
	AGameplayAbilityWorldReticle_ActorVisualization::~AGameplayAbilityWorldReticle_ActorVisualization() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameplayAbilityWorldReticle_ActorVisualization, AGameplayAbilityWorldReticle_ActorVisualization::StaticClass, TEXT("AGameplayAbilityWorldReticle_ActorVisualization"), &Z_Registration_Info_UClass_AGameplayAbilityWorldReticle_ActorVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameplayAbilityWorldReticle_ActorVisualization), 140937116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_3579276517(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbilityWorldReticle_ActorVisualization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
