// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepAsset.h"
#include "DataprepAssetProducers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepAsset() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAsset();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterization_NoRegister();
	DATAPREPCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepAssetProducer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepAsset::StaticRegisterNativesUDataprepAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAsset);
	UClass* Z_Construct_UClass_UDataprepAsset_NoRegister()
	{
		return UDataprepAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepRecipeBP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataprepRecipeBP;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Producers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Producers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Producers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Consumer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Consumer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameterization_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameterization;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepAssetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A DataprepAsset is an implementation of the DataprepAssetInterface using\n * a Blueprint as the recipe pipeline. The Blueprint is composed of DataprepAction\n * nodes linearly connected.\n */" },
		{ "IncludePath", "DataprepAsset.h" },
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
		{ "ToolTip", "A DataprepAsset is an implementation of the DataprepAssetInterface using\na Blueprint as the recipe pipeline. The Blueprint is composed of DataprepAction\nnodes linearly connected." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::NewProp_DataprepRecipeBP_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Pointer to data preparation pipeline blueprint previously used to process input data */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Using directly ActionAssets property instead of Blueprint to manage actions." },
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
		{ "ToolTip", "DEPRECATED: Pointer to data preparation pipeline blueprint previously used to process input data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_DataprepRecipeBP = { "DataprepRecipeBP", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAsset, DataprepRecipeBP_DEPRECATED), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_DataprepRecipeBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_DataprepRecipeBP_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers_Inner = { "Producers", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataprepAssetProducer, METADATA_PARAMS(nullptr, 0) }; // 4136686437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers_MetaData[] = {
		{ "Comment", "/** DEPRECATED: List of producers referenced by the asset */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Property moved to UDataprepAssetInterface as Inputs." },
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
		{ "ToolTip", "DEPRECATED: List of producers referenced by the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers = { "Producers", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAsset, Producers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers_MetaData)) }; // 4136686437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Consumer_MetaData[] = {
		{ "Comment", "/** DEPRECATED: COnsumer referenced by the asset */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Property moved to UDataprepAssetInterface as Output." },
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
		{ "ToolTip", "DEPRECATED: COnsumer referenced by the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Consumer = { "Consumer", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAsset, Consumer_DEPRECATED), Z_Construct_UClass_UDataprepContentConsumer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Consumer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Consumer_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::NewProp_StartNode_MetaData[] = {
		{ "Comment", "/** DEPRECATED: Pointer to the entry node of the pipeline blueprint previously used to process input data */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Using directly ActionAssets property instead of Blueprint to manage actions." },
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
		{ "ToolTip", "DEPRECATED: Pointer to the entry node of the pipeline blueprint previously used to process input data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAsset, StartNode_DEPRECATED), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_StartNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_StartNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Parameterization_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Parameterization = { "Parameterization", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAsset, Parameterization), Z_Construct_UClass_UDataprepParameterization_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Parameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Parameterization_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets_Inner = { "ActionAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets = { "ActionAssets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAsset, ActionAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_DataprepRecipeBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Producers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Consumer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_StartNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_Parameterization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAsset_Statics::NewProp_ActionAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAsset_Statics::ClassParams = {
		&UDataprepAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAsset()
	{
		if (!Z_Registration_Info_UClass_UDataprepAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAsset.OuterSingleton, Z_Construct_UClass_UDataprepAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAsset.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAsset>()
	{
		return UDataprepAsset::StaticClass();
	}
	UDataprepAsset::UDataprepAsset() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAsset);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepAsset, UDataprepAsset::StaticClass, TEXT("UDataprepAsset"), &Z_Registration_Info_UClass_UDataprepAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAsset), 2007358125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_4086800604(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
