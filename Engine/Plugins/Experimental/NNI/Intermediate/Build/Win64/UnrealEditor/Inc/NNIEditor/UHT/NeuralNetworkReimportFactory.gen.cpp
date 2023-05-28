// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInferenceEditor/Private/NeuralNetworkReimportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetworkReimportFactory() {}
// Cross Module References
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkFactory();
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkReimportFactory();
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkReimportFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInferenceEditor();
// End Cross Module References
	void UNeuralNetworkReimportFactory::StaticRegisterNativesUNeuralNetworkReimportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralNetworkReimportFactory);
	UClass* Z_Construct_UClass_UNeuralNetworkReimportFactory_NoRegister()
	{
		return UNeuralNetworkReimportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNeuralNetworkFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NeuralNetworkReimportFactory.h" },
		{ "ModuleRelativePath", "Private/NeuralNetworkReimportFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetworkReimportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::ClassParams = {
		&UNeuralNetworkReimportFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetworkReimportFactory()
	{
		if (!Z_Registration_Info_UClass_UNeuralNetworkReimportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralNetworkReimportFactory.OuterSingleton, Z_Construct_UClass_UNeuralNetworkReimportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralNetworkReimportFactory.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCEEDITOR_API UClass* StaticClass<UNeuralNetworkReimportFactory>()
	{
		return UNeuralNetworkReimportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetworkReimportFactory);
	UNeuralNetworkReimportFactory::~UNeuralNetworkReimportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkReimportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkReimportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralNetworkReimportFactory, UNeuralNetworkReimportFactory::StaticClass, TEXT("UNeuralNetworkReimportFactory"), &Z_Registration_Info_UClass_UNeuralNetworkReimportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralNetworkReimportFactory), 2356989841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkReimportFactory_h_3459579369(TEXT("/Script/NeuralNetworkInferenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkReimportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkReimportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
