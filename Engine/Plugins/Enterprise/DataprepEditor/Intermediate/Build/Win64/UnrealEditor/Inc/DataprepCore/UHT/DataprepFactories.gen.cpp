// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepFactories() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetFactory();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetFactory_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInstanceFactory();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepAssetFactory::StaticRegisterNativesUDataprepAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAssetFactory);
	UClass* Z_Construct_UClass_UDataprepAssetFactory_NoRegister()
	{
		return UDataprepAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataprepFactories.h" },
		{ "ModuleRelativePath", "Public/DataprepFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAssetFactory_Statics::ClassParams = {
		&UDataprepAssetFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UDataprepAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAssetFactory.OuterSingleton, Z_Construct_UClass_UDataprepAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAssetFactory.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAssetFactory>()
	{
		return UDataprepAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAssetFactory);
	UDataprepAssetFactory::~UDataprepAssetFactory() {}
	void UDataprepAssetInstanceFactory::StaticRegisterNativesUDataprepAssetInstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAssetInstanceFactory);
	UClass* Z_Construct_UClass_UDataprepAssetInstanceFactory_NoRegister()
	{
		return UDataprepAssetInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataprepFactories.h" },
		{ "ModuleRelativePath", "Public/DataprepFactories.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * The parent of the of the instance to create\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepFactories.h" },
		{ "ToolTip", "The parent of the of the instance to create" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetInstanceFactory, Parent), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAssetInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::ClassParams = {
		&UDataprepAssetInstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAssetInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_UDataprepAssetInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAssetInstanceFactory.OuterSingleton, Z_Construct_UClass_UDataprepAssetInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAssetInstanceFactory.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAssetInstanceFactory>()
	{
		return UDataprepAssetInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAssetInstanceFactory);
	UDataprepAssetInstanceFactory::~UDataprepAssetInstanceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepFactories_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepFactories_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepAssetFactory, UDataprepAssetFactory::StaticClass, TEXT("UDataprepAssetFactory"), &Z_Registration_Info_UClass_UDataprepAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAssetFactory), 2340032186U) },
		{ Z_Construct_UClass_UDataprepAssetInstanceFactory, UDataprepAssetInstanceFactory::StaticClass, TEXT("UDataprepAssetInstanceFactory"), &Z_Registration_Info_UClass_UDataprepAssetInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAssetInstanceFactory), 939507537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepFactories_h_509187414(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepFactories_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
