// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataRegistryFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistryFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistry_NoRegister();
	DATAREGISTRYEDITOR_API UClass* Z_Construct_UClass_UDataRegistryFactory();
	DATAREGISTRYEDITOR_API UClass* Z_Construct_UClass_UDataRegistryFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DataRegistryEditor();
// End Cross Module References
	void UDataRegistryFactory::StaticRegisterNativesUDataRegistryFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistryFactory);
	UClass* Z_Construct_UClass_UDataRegistryFactory_NoRegister()
	{
		return UDataRegistryFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistryFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataRegistryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DataRegistryClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataRegistryFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistryFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "DataRegistryFactory.h" },
		{ "ModuleRelativePath", "Private/DataRegistryFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistryFactory_Statics::NewProp_DataRegistryClass_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "ModuleRelativePath", "Private/DataRegistryFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataRegistryFactory_Statics::NewProp_DataRegistryClass = { "DataRegistryClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistryFactory, DataRegistryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistryFactory_Statics::NewProp_DataRegistryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistryFactory_Statics::NewProp_DataRegistryClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataRegistryFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistryFactory_Statics::NewProp_DataRegistryClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistryFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistryFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistryFactory_Statics::ClassParams = {
		&UDataRegistryFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataRegistryFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistryFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistryFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistryFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistryFactory()
	{
		if (!Z_Registration_Info_UClass_UDataRegistryFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistryFactory.OuterSingleton, Z_Construct_UClass_UDataRegistryFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistryFactory.OuterSingleton;
	}
	template<> DATAREGISTRYEDITOR_API UClass* StaticClass<UDataRegistryFactory>()
	{
		return UDataRegistryFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistryFactory);
	UDataRegistryFactory::~UDataRegistryFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistryFactory, UDataRegistryFactory::StaticClass, TEXT("UDataRegistryFactory"), &Z_Registration_Info_UClass_UDataRegistryFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistryFactory), 2446411989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_1957962747(TEXT("/Script/DataRegistryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistryEditor_Private_DataRegistryFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
