// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowAssetFactory() {}
// Cross Module References
	DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowAssetFactory();
	DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DataflowEditor();
// End Cross Module References
	void UDataflowAssetFactory::StaticRegisterNativesUDataflowAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowAssetFactory);
	UClass* Z_Construct_UClass_UDataflowAssetFactory_NoRegister()
	{
		return UDataflowAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDataflowAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflowAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowAssetFactory.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflowAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowAssetFactory_Statics::ClassParams = {
		&UDataflowAssetFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataflowAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflowAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UDataflowAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowAssetFactory.OuterSingleton, Z_Construct_UClass_UDataflowAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflowAssetFactory.OuterSingleton;
	}
	template<> DATAFLOWEDITOR_API UClass* StaticClass<UDataflowAssetFactory>()
	{
		return UDataflowAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowAssetFactory);
	UDataflowAssetFactory::~UDataflowAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowAssetFactory, UDataflowAssetFactory::StaticClass, TEXT("UDataflowAssetFactory"), &Z_Registration_Info_UClass_UDataflowAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowAssetFactory), 2937756702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_2958661120(TEXT("/Script/DataflowEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
