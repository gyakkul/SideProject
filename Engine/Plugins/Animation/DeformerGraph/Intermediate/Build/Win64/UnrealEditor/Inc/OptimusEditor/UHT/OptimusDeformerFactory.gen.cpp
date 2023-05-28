// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusDeformerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDeformerFactory() {}
// Cross Module References
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusDeformerFactory();
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusDeformerFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OptimusEditor();
// End Cross Module References
	void UOptimusDeformerFactory::StaticRegisterNativesUOptimusDeformerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerFactory);
	UClass* Z_Construct_UClass_UOptimusDeformerFactory_NoRegister()
	{
		return UOptimusDeformerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDeformerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDeformerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UOptimusDeformer objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "OptimusDeformerFactory.h" },
		{ "ModuleRelativePath", "Private/OptimusDeformerFactory.h" },
		{ "ToolTip", "Implements a factory for UOptimusDeformer objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDeformerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerFactory_Statics::ClassParams = {
		&UOptimusDeformerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDeformerFactory()
	{
		if (!Z_Registration_Info_UClass_UOptimusDeformerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerFactory.OuterSingleton, Z_Construct_UClass_UOptimusDeformerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDeformerFactory.OuterSingleton;
	}
	template<> OPTIMUSEDITOR_API UClass* StaticClass<UOptimusDeformerFactory>()
	{
		return UOptimusDeformerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerFactory);
	UOptimusDeformerFactory::~UOptimusDeformerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeformerFactory, UOptimusDeformerFactory::StaticClass, TEXT("UOptimusDeformerFactory"), &Z_Registration_Info_UClass_UOptimusDeformerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerFactory), 480943371U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_453020424(TEXT("/Script/OptimusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusDeformerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
