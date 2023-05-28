// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PrimaryAssetLabel.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimaryAssetLabel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetRules();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPrimaryAssetLabel::StaticRegisterNativesUPrimaryAssetLabel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPrimaryAssetLabel);
	UClass* Z_Construct_UClass_UPrimaryAssetLabel_NoRegister()
	{
		return UPrimaryAssetLabel::StaticClass();
	}
	struct Z_Construct_UClass_UPrimaryAssetLabel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLabelAssetsInMyDirectory_MetaData[];
#endif
		static void NewProp_bLabelAssetsInMyDirectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLabelAssetsInMyDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRuntimeLabel_MetaData[];
#endif
		static void NewProp_bIsRuntimeLabel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRuntimeLabel;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExplicitAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplicitAssets;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ExplicitBlueprints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitBlueprints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplicitBlueprints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetCollection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPrimaryAssetLabel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A seed file that is created to mark referenced assets as part of this primary asset */" },
		{ "IncludePath", "Engine/PrimaryAssetLabel.h" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "A seed file that is created to mark referenced assets as part of this primary asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "Comment", "/** Management rules for this specific asset, if set it will override the type rules */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Management rules for this specific asset, if set it will override the type rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, Rules), Z_Construct_UScriptStruct_FPrimaryAssetRules, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules_MetaData)) }; // 3266167430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** True to Label everything in this directory and sub directories */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "True to Label everything in this directory and sub directories" },
	};
#endif
	void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_SetBit(void* Obj)
	{
		((UPrimaryAssetLabel*)Obj)->bLabelAssetsInMyDirectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory = { "bLabelAssetsInMyDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "Set to true if the label asset itself should be cooked and available at runtime. This does not affect the assets that are labeled, they are set with cook rule" },
	};
#endif
	void Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_SetBit(void* Obj)
	{
		((UPrimaryAssetLabel*)Obj)->bIsRuntimeLabel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel = { "bIsRuntimeLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPrimaryAssetLabel), &Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_Inner = { "ExplicitAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_MetaData[] = {
		{ "AssetBundles", "Explicit" },
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** List of manually specified assets to label */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "List of manually specified assets to label" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets = { "ExplicitAssets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_Inner = { "ExplicitBlueprints", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_MetaData[] = {
		{ "AssetBundles", "Explicit" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** List of manually specified blueprint assets to label */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "List of manually specified blueprint assets to label" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints = { "ExplicitBlueprints", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, ExplicitBlueprints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection_MetaData[] = {
		{ "Category", "PrimaryAssetLabel" },
		{ "Comment", "/** Collection to load asset references out of */" },
		{ "ModuleRelativePath", "Classes/Engine/PrimaryAssetLabel.h" },
		{ "ToolTip", "Collection to load asset references out of" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection = { "AssetCollection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPrimaryAssetLabel, AssetCollection), Z_Construct_UScriptStruct_FCollectionReference, METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection_MetaData)) }; // 92904918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_Rules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bLabelAssetsInMyDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_bIsRuntimeLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_ExplicitBlueprints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPrimaryAssetLabel_Statics::NewProp_AssetCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPrimaryAssetLabel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPrimaryAssetLabel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPrimaryAssetLabel_Statics::ClassParams = {
		&UPrimaryAssetLabel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPrimaryAssetLabel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPrimaryAssetLabel()
	{
		if (!Z_Registration_Info_UClass_UPrimaryAssetLabel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPrimaryAssetLabel.OuterSingleton, Z_Construct_UClass_UPrimaryAssetLabel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPrimaryAssetLabel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPrimaryAssetLabel>()
	{
		return UPrimaryAssetLabel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPrimaryAssetLabel);
	UPrimaryAssetLabel::~UPrimaryAssetLabel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPrimaryAssetLabel, UPrimaryAssetLabel::StaticClass, TEXT("UPrimaryAssetLabel"), &Z_Registration_Info_UClass_UPrimaryAssetLabel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPrimaryAssetLabel), 2379845433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_867086519(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PrimaryAssetLabel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
