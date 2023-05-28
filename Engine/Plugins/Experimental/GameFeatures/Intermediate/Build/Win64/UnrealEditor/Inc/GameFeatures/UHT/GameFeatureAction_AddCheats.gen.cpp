// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_AddCheats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddCheats() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCheatManagerExtension_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddCheats();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddCheats_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureAction_AddCheats::StaticRegisterNativesUGameFeatureAction_AddCheats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddCheats);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddCheats_NoRegister()
	{
		return UGameFeatureAction_AddCheats::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CheatManagers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheatManagers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CheatManagers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadCheatManagersAsync_MetaData[];
#endif
		static void NewProp_bLoadCheatManagersAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadCheatManagersAsync;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpawnedCheatManagers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCheatManagers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedCheatManagers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds cheat manager extensions to the cheat manager for each player\n */" },
		{ "DisplayName", "Add Cheats" },
		{ "IncludePath", "GameFeatureAction_AddCheats.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddCheats.h" },
		{ "ToolTip", "Adds cheat manager extensions to the cheat manager for each player" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers_Inner = { "CheatManagers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCheatManagerExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers_MetaData[] = {
		{ "Category", "Cheats" },
		{ "Comment", "/** Cheat managers to setup for the game feature plugin */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddCheats.h" },
		{ "ToolTip", "Cheat managers to setup for the game feature plugin" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers = { "CheatManagers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddCheats, CheatManagers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync_MetaData[] = {
		{ "Category", "Cheats" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddCheats.h" },
	};
#endif
	void Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync_SetBit(void* Obj)
	{
		((UGameFeatureAction_AddCheats*)Obj)->bLoadCheatManagersAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync = { "bLoadCheatManagersAsync", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameFeatureAction_AddCheats), &Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers_Inner = { "SpawnedCheatManagers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCheatManagerExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddCheats.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers = { "SpawnedCheatManagers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddCheats, SpawnedCheatManagers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_CheatManagers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_bLoadCheatManagersAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::NewProp_SpawnedCheatManagers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddCheats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::ClassParams = {
		&UGameFeatureAction_AddCheats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddCheats()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddCheats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddCheats.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddCheats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddCheats.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction_AddCheats>()
	{
		return UGameFeatureAction_AddCheats::StaticClass();
	}
	UGameFeatureAction_AddCheats::UGameFeatureAction_AddCheats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddCheats);
	UGameFeatureAction_AddCheats::~UGameFeatureAction_AddCheats() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddCheats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddCheats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddCheats, UGameFeatureAction_AddCheats::StaticClass, TEXT("UGameFeatureAction_AddCheats"), &Z_Registration_Info_UClass_UGameFeatureAction_AddCheats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddCheats), 1721728123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddCheats_h_3183630269(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddCheats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddCheats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
