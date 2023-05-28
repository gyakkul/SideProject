// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DisplayClusterEditorEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterEditorEngine() {}
// Cross Module References
	DISPLAYCLUSTEREDITOR_API UClass* Z_Construct_UClass_UDisplayClusterEditorEngine();
	DISPLAYCLUSTEREDITOR_API UClass* Z_Construct_UClass_UDisplayClusterEditorEngine_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdEngine();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterEditor();
// End Cross Module References
	void UDisplayClusterEditorEngine::StaticRegisterNativesUDisplayClusterEditorEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterEditorEngine);
	UClass* Z_Construct_UClass_UDisplayClusterEditorEngine_NoRegister()
	{
		return UDisplayClusterEditorEngine::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterEditorEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnrealEdEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extended editor engine\n */" },
		{ "IncludePath", "DisplayClusterEditorEngine.h" },
		{ "ModuleRelativePath", "Private/DisplayClusterEditorEngine.h" },
		{ "ToolTip", "Extended editor engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterEditorEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::ClassParams = {
		&UDisplayClusterEditorEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterEditorEngine()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterEditorEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterEditorEngine.OuterSingleton, Z_Construct_UClass_UDisplayClusterEditorEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterEditorEngine.OuterSingleton;
	}
	template<> DISPLAYCLUSTEREDITOR_API UClass* StaticClass<UDisplayClusterEditorEngine>()
	{
		return UDisplayClusterEditorEngine::StaticClass();
	}
	UDisplayClusterEditorEngine::UDisplayClusterEditorEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterEditorEngine);
	UDisplayClusterEditorEngine::~UDisplayClusterEditorEngine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_DisplayClusterEditorEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_DisplayClusterEditorEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterEditorEngine, UDisplayClusterEditorEngine::StaticClass, TEXT("UDisplayClusterEditorEngine"), &Z_Registration_Info_UClass_UDisplayClusterEditorEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterEditorEngine), 1479530070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_DisplayClusterEditorEngine_h_2934075291(TEXT("/Script/DisplayClusterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_DisplayClusterEditorEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterEditor_Private_DisplayClusterEditorEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
