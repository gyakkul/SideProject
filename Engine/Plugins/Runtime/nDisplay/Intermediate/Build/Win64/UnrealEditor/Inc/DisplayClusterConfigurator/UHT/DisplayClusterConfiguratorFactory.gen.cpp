// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DisplayClusterConfiguratorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfiguratorFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprint_NoRegister();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorFactory();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorFactory_NoRegister();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	void UDisplayClusterConfiguratorFactory::StaticRegisterNativesUDisplayClusterConfiguratorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorFactory);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorFactory_NoRegister()
	{
		return UDisplayClusterConfiguratorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayClusterConfiguratorFactory.h" },
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfiguratorFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_BlueprintToCopy_MetaData[] = {
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_BlueprintToCopy = { "BlueprintToCopy", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfiguratorFactory, BlueprintToCopy), Z_Construct_UClass_UDisplayClusterBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_BlueprintToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_BlueprintToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::NewProp_BlueprintToCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::ClassParams = {
		&UDisplayClusterConfiguratorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorFactory()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorFactory.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorFactory.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorFactory>()
	{
		return UDisplayClusterConfiguratorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorFactory);
	void UDisplayClusterConfiguratorReimportFactory::StaticRegisterNativesUDisplayClusterConfiguratorReimportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorReimportFactory);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_NoRegister()
	{
		return UDisplayClusterConfiguratorReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterConfiguratorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisplayClusterConfiguratorFactory.h" },
		{ "ModuleRelativePath", "Private/DisplayClusterConfiguratorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorReimportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::ClassParams = {
		&UDisplayClusterConfiguratorReimportFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorReimportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorReimportFactory.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorReimportFactory.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorReimportFactory>()
	{
		return UDisplayClusterConfiguratorReimportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorReimportFactory);
	UDisplayClusterConfiguratorReimportFactory::~UDisplayClusterConfiguratorReimportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfiguratorFactory, UDisplayClusterConfiguratorFactory::StaticClass, TEXT("UDisplayClusterConfiguratorFactory"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorFactory), 859290998U) },
		{ Z_Construct_UClass_UDisplayClusterConfiguratorReimportFactory, UDisplayClusterConfiguratorReimportFactory::StaticClass, TEXT("UDisplayClusterConfiguratorReimportFactory"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorReimportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorReimportFactory), 242613567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorFactory_h_1829857831(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_DisplayClusterConfiguratorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
