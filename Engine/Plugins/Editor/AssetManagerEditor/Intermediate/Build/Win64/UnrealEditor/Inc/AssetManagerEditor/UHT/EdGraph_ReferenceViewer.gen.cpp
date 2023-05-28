// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReferenceViewer/EdGraph_ReferenceViewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_ReferenceViewer() {}
// Cross Module References
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer();
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEditor();
// End Cross Module References
	void UEdGraph_ReferenceViewer::StaticRegisterNativesUEdGraph_ReferenceViewer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_ReferenceViewer);
	UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer_NoRegister()
	{
		return UEdGraph_ReferenceViewer::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReferenceViewer/EdGraph_ReferenceViewer.h" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/EdGraph_ReferenceViewer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_ReferenceViewer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::ClassParams = {
		&UEdGraph_ReferenceViewer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraph_ReferenceViewer()
	{
		if (!Z_Registration_Info_UClass_UEdGraph_ReferenceViewer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_ReferenceViewer.OuterSingleton, Z_Construct_UClass_UEdGraph_ReferenceViewer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraph_ReferenceViewer.OuterSingleton;
	}
	template<> ASSETMANAGEREDITOR_API UClass* StaticClass<UEdGraph_ReferenceViewer>()
	{
		return UEdGraph_ReferenceViewer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_ReferenceViewer);
	UEdGraph_ReferenceViewer::~UEdGraph_ReferenceViewer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_ReferenceViewer, UEdGraph_ReferenceViewer::StaticClass, TEXT("UEdGraph_ReferenceViewer"), &Z_Registration_Info_UClass_UEdGraph_ReferenceViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_ReferenceViewer), 536467711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_2794809705(TEXT("/Script/AssetManagerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraph_ReferenceViewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
