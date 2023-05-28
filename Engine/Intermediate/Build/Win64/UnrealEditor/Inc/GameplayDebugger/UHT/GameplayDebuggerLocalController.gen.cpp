// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebuggerLocalController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerLocalController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References
	void UGameplayDebuggerLocalController::StaticRegisterNativesUGameplayDebuggerLocalController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayDebuggerLocalController);
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController_NoRegister()
	{
		return UGameplayDebuggerLocalController::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayDebuggerLocalController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedReplicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedReplicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPlayerManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugActorCandidate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugActorCandidate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HUDFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerLocalController.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator = { "CachedReplicator", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedReplicator), Z_Construct_UClass_AGameplayDebuggerCategoryReplicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager = { "CachedPlayerManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, CachedPlayerManager), Z_Construct_UClass_AGameplayDebuggerPlayerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate = { "DebugActorCandidate", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, DebugActorCandidate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerLocalController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerLocalController, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedReplicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_CachedPlayerManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_DebugActorCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerLocalController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams = {
		&UGameplayDebuggerLocalController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::PropPointers),
		0,
		0x040000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayDebuggerLocalController()
	{
		if (!Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton, Z_Construct_UClass_UGameplayDebuggerLocalController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayDebuggerLocalController.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<UGameplayDebuggerLocalController>()
	{
		return UGameplayDebuggerLocalController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerLocalController);
	UGameplayDebuggerLocalController::~UGameplayDebuggerLocalController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayDebuggerLocalController, UGameplayDebuggerLocalController::StaticClass, TEXT("UGameplayDebuggerLocalController"), &Z_Registration_Info_UClass_UGameplayDebuggerLocalController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayDebuggerLocalController), 57973820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_1455018940(TEXT("/Script/GameplayDebugger"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerLocalController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
