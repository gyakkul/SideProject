// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralNetworkInferenceEditor/Private/NeuralNetworkFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralNetworkFactory() {}
// Cross Module References
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkFactory();
	NEURALNETWORKINFERENCEEDITOR_API UClass* Z_Construct_UClass_UNeuralNetworkFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NeuralNetworkInferenceEditor();
// End Cross Module References
	void UNeuralNetworkFactory::StaticRegisterNativesUNeuralNetworkFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralNetworkFactory);
	UClass* Z_Construct_UClass_UNeuralNetworkFactory_NoRegister()
	{
		return UNeuralNetworkFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralNetworkFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralNetworkFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralNetworkInferenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralNetworkFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NeuralNetworkFactory.h" },
		{ "ModuleRelativePath", "Private/NeuralNetworkFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralNetworkFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralNetworkFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralNetworkFactory_Statics::ClassParams = {
		&UNeuralNetworkFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuralNetworkFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralNetworkFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralNetworkFactory()
	{
		if (!Z_Registration_Info_UClass_UNeuralNetworkFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralNetworkFactory.OuterSingleton, Z_Construct_UClass_UNeuralNetworkFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralNetworkFactory.OuterSingleton;
	}
	template<> NEURALNETWORKINFERENCEEDITOR_API UClass* StaticClass<UNeuralNetworkFactory>()
	{
		return UNeuralNetworkFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralNetworkFactory);
	UNeuralNetworkFactory::~UNeuralNetworkFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralNetworkFactory, UNeuralNetworkFactory::StaticClass, TEXT("UNeuralNetworkFactory"), &Z_Registration_Info_UClass_UNeuralNetworkFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralNetworkFactory), 721781934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkFactory_h_1789707720(TEXT("/Script/NeuralNetworkInferenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNI_Source_NeuralNetworkInferenceEditor_Private_NeuralNetworkFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
