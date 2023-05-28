// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinitionRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinitionRegistry() {}
// Cross Module References
	ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinition_NoRegister();
	ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinitionRegistry();
	ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinitionRegistry_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AssetDefinition();
// End Cross Module References
	void UAssetDefinitionRegistry::StaticRegisterNativesUAssetDefinitionRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinitionRegistry);
	UClass* Z_Construct_UClass_UAssetDefinitionRegistry_NoRegister()
	{
		return UAssetDefinitionRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinitionRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetDefinitions_ValueProp;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AssetDefinitions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssetDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinitionRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDefinition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinitionRegistry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinitionRegistry.h" },
		{ "ModuleRelativePath", "Public/AssetDefinitionRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_ValueProp = { "AssetDefinitions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UAssetDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_Key_KeyProp = { "AssetDefinitions_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetDefinitionRegistry.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions = { "AssetDefinitions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetDefinitionRegistry, AssetDefinitions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetDefinitionRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetDefinitionRegistry_Statics::NewProp_AssetDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinitionRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinitionRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinitionRegistry_Statics::ClassParams = {
		&UAssetDefinitionRegistry::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetDefinitionRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinitionRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinitionRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinitionRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinitionRegistry()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinitionRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinitionRegistry.OuterSingleton, Z_Construct_UClass_UAssetDefinitionRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinitionRegistry.OuterSingleton;
	}
	template<> ASSETDEFINITION_API UClass* StaticClass<UAssetDefinitionRegistry>()
	{
		return UAssetDefinitionRegistry::StaticClass();
	}
	UAssetDefinitionRegistry::UAssetDefinitionRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinitionRegistry);
	UAssetDefinitionRegistry::~UAssetDefinitionRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinitionRegistry, UAssetDefinitionRegistry::StaticClass, TEXT("UAssetDefinitionRegistry"), &Z_Registration_Info_UClass_UAssetDefinitionRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinitionRegistry), 3707187803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_3278815278(TEXT("/Script/AssetDefinition"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinitionRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
