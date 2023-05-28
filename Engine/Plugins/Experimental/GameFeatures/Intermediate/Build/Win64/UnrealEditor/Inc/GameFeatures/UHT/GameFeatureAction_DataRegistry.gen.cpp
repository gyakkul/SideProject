// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_DataRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_DataRegistry() {}
// Cross Module References
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistry_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistry();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureAction_DataRegistry::StaticRegisterNativesUGameFeatureAction_DataRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_DataRegistry);
	UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistry_NoRegister()
	{
		return UGameFeatureAction_DataRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RegistriesToAdd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistriesToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegistriesToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadInEditor_MetaData[];
#endif
		static void NewProp_bPreloadInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Specifies a list of Data Registries to load and initialize with this feature */" },
		{ "DisplayName", "Add Data Registry" },
		{ "IncludePath", "GameFeatureAction_DataRegistry.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistry.h" },
		{ "ToolTip", "Specifies a list of Data Registries to load and initialize with this feature" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd_Inner = { "RegistriesToAdd", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataRegistry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** List of registry assets to load and initialize */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistry.h" },
		{ "ToolTip", "List of registry assets to load and initialize" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd = { "RegistriesToAdd", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_DataRegistry, RegistriesToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** If true, this will preload the registries when the feature is registered in the editor to support the editor pickers */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistry.h" },
		{ "ToolTip", "If true, this will preload the registries when the feature is registered in the editor to support the editor pickers" },
	};
#endif
	void Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor_SetBit(void* Obj)
	{
		((UGameFeatureAction_DataRegistry*)Obj)->bPreloadInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor = { "bPreloadInEditor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameFeatureAction_DataRegistry), &Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_RegistriesToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::NewProp_bPreloadInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_DataRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::ClassParams = {
		&UGameFeatureAction_DataRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistry()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_DataRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_DataRegistry.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_DataRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_DataRegistry.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction_DataRegistry>()
	{
		return UGameFeatureAction_DataRegistry::StaticClass();
	}
	UGameFeatureAction_DataRegistry::UGameFeatureAction_DataRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_DataRegistry);
	UGameFeatureAction_DataRegistry::~UGameFeatureAction_DataRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_DataRegistry, UGameFeatureAction_DataRegistry::StaticClass, TEXT("UGameFeatureAction_DataRegistry"), &Z_Registration_Info_UClass_UGameFeatureAction_DataRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_DataRegistry), 463912783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_3705943542(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
