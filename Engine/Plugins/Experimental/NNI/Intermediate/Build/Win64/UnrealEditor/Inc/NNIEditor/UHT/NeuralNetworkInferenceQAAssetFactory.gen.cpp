// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInferenceEditor/Private/QA/NeuralNetworkInferenceQAAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetworkInferenceQAAssetFactory() {}
// Cross Module References
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory();
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInferenceEditor();
// End Cross Module References
	void UNeuralNetworkInferenceQAAssetFactory::StaticRegisterNativesUNeuralNetworkInferenceQAAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralNetworkInferenceQAAssetFactory);
	UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_NoRegister()
	{
		return UNeuralNetworkInferenceQAAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "QA/NeuralNetworkInferenceQAAssetFactory.h" },
		{ "ModuleRelativePath", "Private/QA/NeuralNetworkInferenceQAAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetworkInferenceQAAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::ClassParams = {
		&UNeuralNetworkInferenceQAAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAssetFactory.OuterSingleton, Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAssetFactory.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCEEDITOR_API UClass* StaticClass<UNeuralNetworkInferenceQAAssetFactory>()
	{
		return UNeuralNetworkInferenceQAAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetworkInferenceQAAssetFactory);
	UNeuralNetworkInferenceQAAssetFactory::~UNeuralNetworkInferenceQAAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_QA_NeuralNetworkInferenceQAAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_QA_NeuralNetworkInferenceQAAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralNetworkInferenceQAAssetFactory, UNeuralNetworkInferenceQAAssetFactory::StaticClass, TEXT("UNeuralNetworkInferenceQAAssetFactory"), &Z_Registration_Info_UClass_UNeuralNetworkInferenceQAAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralNetworkInferenceQAAssetFactory), 2304917574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_QA_NeuralNetworkInferenceQAAssetFactory_h_4209530310(TEXT("/Script/NeuralNetworkInferenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_QA_NeuralNetworkInferenceQAAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_QA_NeuralNetworkInferenceQAAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
