// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayActuationStateProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayActuationStateProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationStateProvider();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	void UGameplayActuationStateProvider::StaticRegisterNativesUGameplayActuationStateProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayActuationStateProvider);
	UClass* Z_Construct_UClass_UGameplayActuationStateProvider_NoRegister()
	{
		return UGameplayActuationStateProvider::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayActuationStateProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayActuationStateProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayActuationStateProvider_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/GameplayActuationStateProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayActuationStateProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameplayActuationStateProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayActuationStateProvider_Statics::ClassParams = {
		&UGameplayActuationStateProvider::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameplayActuationStateProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayActuationStateProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayActuationStateProvider()
	{
		if (!Z_Registration_Info_UClass_UGameplayActuationStateProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayActuationStateProvider.OuterSingleton, Z_Construct_UClass_UGameplayActuationStateProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayActuationStateProvider.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UGameplayActuationStateProvider>()
	{
		return UGameplayActuationStateProvider::StaticClass();
	}
	UGameplayActuationStateProvider::UGameplayActuationStateProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayActuationStateProvider);
	UGameplayActuationStateProvider::~UGameplayActuationStateProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationStateProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationStateProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayActuationStateProvider, UGameplayActuationStateProvider::StaticClass, TEXT("UGameplayActuationStateProvider"), &Z_Registration_Info_UClass_UGameplayActuationStateProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayActuationStateProvider), 4292633833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationStateProvider_h_1548308600(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationStateProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationStateProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
