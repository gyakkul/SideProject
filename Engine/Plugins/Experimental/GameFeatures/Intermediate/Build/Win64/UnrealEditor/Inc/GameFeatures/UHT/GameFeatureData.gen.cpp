// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureData.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureData::StaticRegisterNativesUGameFeatureData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureData);
	UClass* Z_Construct_UClass_UGameFeatureData_NoRegister()
	{
		return UGameFeatureData::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetTypesToScan_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetTypesToScan_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimaryAssetTypesToScan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Data related to a game feature, a collection of code and content that adds a separable discrete feature to the game */" },
		{ "IncludePath", "GameFeatureData.h" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "ToolTip", "Data related to a game feature, a collection of code and content that adds a separable discrete feature to the game" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** List of actions to perform as this game feature is loaded/activated/deactivated/unloaded */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "ToolTip", "List of actions to perform as this game feature is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** List of actions to perform as this game feature is loaded/activated/deactivated/unloaded */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "ToolTip", "List of actions to perform as this game feature is loaded/activated/deactivated/unloaded" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0024088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureData, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_Inner = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo, METADATA_PARAMS(nullptr, 0) }; // 4230382326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_MetaData[] = {
		{ "Category", "Game Feature | Asset Manager" },
		{ "Comment", "/** List of asset types to scan at startup */" },
		{ "ModuleRelativePath", "Public/GameFeatureData.h" },
		{ "TitleProperty", "PrimaryAssetType" },
		{ "ToolTip", "List of asset types to scan at startup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan = { "PrimaryAssetTypesToScan", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureData, PrimaryAssetTypesToScan), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_MetaData)) }; // 4230382326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_Actions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureData_Statics::NewProp_PrimaryAssetTypesToScan,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureData_Statics::ClassParams = {
		&UGameFeatureData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureData()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureData.OuterSingleton, Z_Construct_UClass_UGameFeatureData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureData.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureData>()
	{
		return UGameFeatureData::StaticClass();
	}
	UGameFeatureData::UGameFeatureData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureData);
	UGameFeatureData::~UGameFeatureData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureData, UGameFeatureData::StaticClass, TEXT("UGameFeatureData"), &Z_Registration_Info_UClass_UGameFeatureData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureData), 755962619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_697239025(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
