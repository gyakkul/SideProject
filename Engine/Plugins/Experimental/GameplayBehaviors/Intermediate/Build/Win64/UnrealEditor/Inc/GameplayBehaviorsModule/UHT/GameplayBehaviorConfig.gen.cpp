// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayBehaviorConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehaviorConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehavior_NoRegister();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig();
	GAMEPLAYBEHAVIORSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorsModule();
// End Cross Module References
	void UGameplayBehaviorConfig::StaticRegisterNativesUGameplayBehaviorConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehaviorConfig);
	UClass* Z_Construct_UClass_UGameplayBehaviorConfig_NoRegister()
	{
		return UGameplayBehaviorConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehaviorConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BehaviorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehaviorConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameplayBehaviorConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorConfig_Statics::NewProp_BehaviorClass_MetaData[] = {
		{ "Category", "GameplayBehavior" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorConfig.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayBehaviorConfig_Statics::NewProp_BehaviorClass = { "BehaviorClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayBehaviorConfig, BehaviorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Statics::NewProp_BehaviorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Statics::NewProp_BehaviorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayBehaviorConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayBehaviorConfig_Statics::NewProp_BehaviorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehaviorConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehaviorConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehaviorConfig_Statics::ClassParams = {
		&UGameplayBehaviorConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayBehaviorConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayBehaviorConfig()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehaviorConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehaviorConfig.OuterSingleton, Z_Construct_UClass_UGameplayBehaviorConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehaviorConfig.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMODULE_API UClass* StaticClass<UGameplayBehaviorConfig>()
	{
		return UGameplayBehaviorConfig::StaticClass();
	}
	UGameplayBehaviorConfig::UGameplayBehaviorConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehaviorConfig);
	UGameplayBehaviorConfig::~UGameplayBehaviorConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehaviorConfig, UGameplayBehaviorConfig::StaticClass, TEXT("UGameplayBehaviorConfig"), &Z_Registration_Info_UClass_UGameplayBehaviorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehaviorConfig), 2784625030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_3807634482(TEXT("/Script/GameplayBehaviorsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayBehaviors_Source_GameplayBehaviorsModule_Public_GameplayBehaviorConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
