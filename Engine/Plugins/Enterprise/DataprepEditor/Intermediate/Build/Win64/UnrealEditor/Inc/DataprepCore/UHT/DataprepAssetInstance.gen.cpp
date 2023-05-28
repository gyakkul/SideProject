// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepAssetInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepAssetInstance() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInstance();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInstance_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizationInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepAssetInstance::StaticRegisterNativesUDataprepAssetInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAssetInstance);
	UClass* Z_Construct_UClass_UDataprepAssetInstance_NoRegister()
	{
		return UDataprepAssetInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAssetInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameterization_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameterization;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionsFromDataprepAsset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsFromDataprepAsset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionsFromDataprepAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAssetInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepAssetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A DataprepAssetInstance is an implementation of the DataprepAssetInterface sharing\n * its recipe pipeline with an existing Dataprep asset or another DataprepAssetInstance.\n * It has its own inputs and output. It has overrides of the externalized parameters\n * of the pipeline.\n */" },
		{ "IncludePath", "DataprepAssetInstance.h" },
		{ "ModuleRelativePath", "Public/DataprepAssetInstance.h" },
		{ "ToolTip", "A DataprepAssetInstance is an implementation of the DataprepAssetInterface sharing\nits recipe pipeline with an existing Dataprep asset or another DataprepAssetInstance.\nIt has its own inputs and output. It has overrides of the externalized parameters\nof the pipeline." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parent_MetaData[] = {
		{ "Comment", "/** Parent Dataprep asset's interface */" },
		{ "ModuleRelativePath", "Public/DataprepAssetInstance.h" },
		{ "ToolTip", "Parent Dataprep asset's interface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInstance, Parent), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parameterization_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAssetInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parameterization = { "Parameterization", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInstance, Parameterization), Z_Construct_UClass_UDataprepParameterizationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parameterization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parameterization_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset_Inner = { "ActionsFromDataprepAsset", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepAssetInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset = { "ActionsFromDataprepAsset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInstance, ActionsFromDataprepAsset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepAssetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_Parameterization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInstance_Statics::NewProp_ActionsFromDataprepAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAssetInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAssetInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAssetInstance_Statics::ClassParams = {
		&UDataprepAssetInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepAssetInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAssetInstance()
	{
		if (!Z_Registration_Info_UClass_UDataprepAssetInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAssetInstance.OuterSingleton, Z_Construct_UClass_UDataprepAssetInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAssetInstance.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAssetInstance>()
	{
		return UDataprepAssetInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAssetInstance);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepAssetInstance, UDataprepAssetInstance::StaticClass, TEXT("UDataprepAssetInstance"), &Z_Registration_Info_UClass_UDataprepAssetInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAssetInstance), 1490799744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInstance_h_139172725(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
