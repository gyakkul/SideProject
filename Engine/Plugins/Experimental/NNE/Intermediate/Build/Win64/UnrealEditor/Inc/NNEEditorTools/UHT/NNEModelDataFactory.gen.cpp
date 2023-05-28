// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NNEModelDataFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNEModelDataFactory() {}
// Cross Module References
	NNEEDITORTOOLS_API UClass* Z_Construct_UClass_UNNEModelDataFactory();
	NNEEDITORTOOLS_API UClass* Z_Construct_UClass_UNNEModelDataFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NNEEditorTools();
// End Cross Module References
	void UNNEModelDataFactory::StaticRegisterNativesUNNEModelDataFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNNEModelDataFactory);
	UClass* Z_Construct_UClass_UNNEModelDataFactory_NoRegister()
	{
		return UNNEModelDataFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNNEModelDataFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNNEModelDataFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NNEEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNNEModelDataFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class for importing and creating new UNNEModelData assets.\n *\n * The currently supported format is .onnx. The factory is invoked when a file of this format is dragged to the editor's content browser.\n */" },
		{ "IncludePath", "NNEModelDataFactory.h" },
		{ "ModuleRelativePath", "Public/NNEModelDataFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class for importing and creating new UNNEModelData assets.\n\nThe currently supported format is .onnx. The factory is invoked when a file of this format is dragged to the editor's content browser." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNNEModelDataFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNNEModelDataFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNNEModelDataFactory_Statics::ClassParams = {
		&UNNEModelDataFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNNEModelDataFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNNEModelDataFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNNEModelDataFactory()
	{
		if (!Z_Registration_Info_UClass_UNNEModelDataFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNNEModelDataFactory.OuterSingleton, Z_Construct_UClass_UNNEModelDataFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNNEModelDataFactory.OuterSingleton;
	}
	template<> NNEEDITORTOOLS_API UClass* StaticClass<UNNEModelDataFactory>()
	{
		return UNNEModelDataFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNNEModelDataFactory);
	UNNEModelDataFactory::~UNNEModelDataFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNEEditorTools_Public_NNEModelDataFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNEEditorTools_Public_NNEModelDataFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNNEModelDataFactory, UNNEModelDataFactory::StaticClass, TEXT("UNNEModelDataFactory"), &Z_Registration_Info_UClass_UNNEModelDataFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNNEModelDataFactory), 1260829300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNEEditorTools_Public_NNEModelDataFactory_h_1063130001(TEXT("/Script/NNEEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNEEditorTools_Public_NNEModelDataFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNEEditorTools_Public_NNEModelDataFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
