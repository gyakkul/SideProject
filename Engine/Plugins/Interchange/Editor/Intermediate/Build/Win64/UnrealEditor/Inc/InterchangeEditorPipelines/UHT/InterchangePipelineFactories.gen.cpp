// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InterchangePipelineFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineFactories() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_NoRegister();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineBaseFactory();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineBaseFactory_NoRegister();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangePythonPipelineAssetFactory();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InterchangeEditorPipelines();
// End Cross Module References
	void UInterchangeBlueprintPipelineBaseFactory::StaticRegisterNativesUInterchangeBlueprintPipelineBaseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBlueprintPipelineBaseFactory);
	UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_NoRegister()
	{
		return UInterchangeBlueprintPipelineBaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditorPipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InterchangePipelineFactories.h" },
		{ "ModuleRelativePath", "Private/InterchangePipelineFactories.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "InterchangeBlueprintPipelineBaseFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Private/InterchangePipelineFactories.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeBlueprintPipelineBaseFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "InterchangeBlueprintPipelineBaseFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/InterchangePipelineFactories.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeBlueprintPipelineBaseFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBlueprintPipelineBaseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::ClassParams = {
		&UInterchangeBlueprintPipelineBaseFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBaseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBaseFactory.OuterSingleton, Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBaseFactory.OuterSingleton;
	}
	template<> INTERCHANGEEDITORPIPELINES_API UClass* StaticClass<UInterchangeBlueprintPipelineBaseFactory>()
	{
		return UInterchangeBlueprintPipelineBaseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBlueprintPipelineBaseFactory);
	UInterchangeBlueprintPipelineBaseFactory::~UInterchangeBlueprintPipelineBaseFactory() {}
	void UInterchangePipelineBaseFactory::StaticRegisterNativesUInterchangePipelineBaseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineBaseFactory);
	UClass* Z_Construct_UClass_UInterchangePipelineBaseFactory_NoRegister()
	{
		return UInterchangePipelineBaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditorPipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InterchangePipelineFactories.h" },
		{ "ModuleRelativePath", "Private/InterchangePipelineFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineBaseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::ClassParams = {
		&UInterchangePipelineBaseFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePipelineBaseFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineBaseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineBaseFactory.OuterSingleton, Z_Construct_UClass_UInterchangePipelineBaseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineBaseFactory.OuterSingleton;
	}
	template<> INTERCHANGEEDITORPIPELINES_API UClass* StaticClass<UInterchangePipelineBaseFactory>()
	{
		return UInterchangePipelineBaseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineBaseFactory);
	UInterchangePipelineBaseFactory::~UInterchangePipelineBaseFactory() {}
	void UInterchangePythonPipelineAssetFactory::StaticRegisterNativesUInterchangePythonPipelineAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePythonPipelineAssetFactory);
	UClass* Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_NoRegister()
	{
		return UInterchangePythonPipelineAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditorPipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "InterchangePipelineFactories.h" },
		{ "ModuleRelativePath", "Private/InterchangePipelineFactories.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePythonPipelineAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::ClassParams = {
		&UInterchangePythonPipelineAssetFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePythonPipelineAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangePythonPipelineAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePythonPipelineAssetFactory.OuterSingleton, Z_Construct_UClass_UInterchangePythonPipelineAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePythonPipelineAssetFactory.OuterSingleton;
	}
	template<> INTERCHANGEEDITORPIPELINES_API UClass* StaticClass<UInterchangePythonPipelineAssetFactory>()
	{
		return UInterchangePythonPipelineAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePythonPipelineAssetFactory);
	UInterchangePythonPipelineAssetFactory::~UInterchangePythonPipelineAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Private_InterchangePipelineFactories_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Private_InterchangePipelineFactories_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBlueprintPipelineBaseFactory, UInterchangeBlueprintPipelineBaseFactory::StaticClass, TEXT("UInterchangeBlueprintPipelineBaseFactory"), &Z_Registration_Info_UClass_UInterchangeBlueprintPipelineBaseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBlueprintPipelineBaseFactory), 3797872316U) },
		{ Z_Construct_UClass_UInterchangePipelineBaseFactory, UInterchangePipelineBaseFactory::StaticClass, TEXT("UInterchangePipelineBaseFactory"), &Z_Registration_Info_UClass_UInterchangePipelineBaseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineBaseFactory), 859311137U) },
		{ Z_Construct_UClass_UInterchangePythonPipelineAssetFactory, UInterchangePythonPipelineAssetFactory::StaticClass, TEXT("UInterchangePythonPipelineAssetFactory"), &Z_Registration_Info_UClass_UInterchangePythonPipelineAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePythonPipelineAssetFactory), 705676485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Private_InterchangePipelineFactories_h_1558094989(TEXT("/Script/InterchangeEditorPipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Private_InterchangePipelineFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Private_InterchangePipelineFactories_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
