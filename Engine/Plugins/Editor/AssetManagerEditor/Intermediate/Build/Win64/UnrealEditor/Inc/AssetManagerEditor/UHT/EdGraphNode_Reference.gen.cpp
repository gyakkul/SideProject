// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReferenceViewer/EdGraphNode_Reference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Reference() {}
// Cross Module References
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_Reference();
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_Reference_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEditor();
// End Cross Module References
	void UEdGraphNode_Reference::StaticRegisterNativesUEdGraphNode_Reference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_Reference);
	UClass* Z_Construct_UClass_UEdGraphNode_Reference_NoRegister()
	{
		return UEdGraphNode_Reference::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_Reference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_Reference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Reference_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReferenceViewer/EdGraphNode_Reference.h" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/EdGraphNode_Reference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_Reference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_Reference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Reference_Statics::ClassParams = {
		&UEdGraphNode_Reference::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Reference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Reference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_Reference()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_Reference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_Reference.OuterSingleton, Z_Construct_UClass_UEdGraphNode_Reference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_Reference.OuterSingleton;
	}
	template<> ASSETMANAGEREDITOR_API UClass* StaticClass<UEdGraphNode_Reference>()
	{
		return UEdGraphNode_Reference::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Reference);
	UEdGraphNode_Reference::~UEdGraphNode_Reference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_Reference, UEdGraphNode_Reference::StaticClass, TEXT("UEdGraphNode_Reference"), &Z_Registration_Info_UClass_UEdGraphNode_Reference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_Reference), 4286589730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_1057690129(TEXT("/Script/AssetManagerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_EdGraphNode_Reference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
