// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditorCompElementContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorCompElementContainer() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	COMPOSURELAYERSEDITOR_API UClass* Z_Construct_UClass_UEditorCompElementContainer();
	COMPOSURELAYERSEDITOR_API UClass* Z_Construct_UClass_UEditorCompElementContainer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ComposureLayersEditor();
// End Cross Module References
	void UEditorCompElementContainer::StaticRegisterNativesUEditorCompElementContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorCompElementContainer);
	UClass* Z_Construct_UClass_UEditorCompElementContainer_NoRegister()
	{
		return UEditorCompElementContainer::StaticClass();
	}
	struct Z_Construct_UClass_UEditorCompElementContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CompElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorCompElementContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComposureLayersEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorCompElementContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UObject for tracking our list of in-level composure actors - wrapped by a\n * UObject to mimic the UWorld::Layers property (hooks into undo/redo easily, etc.)\n */" },
		{ "IncludePath", "EditorCompElementContainer.h" },
		{ "ModuleRelativePath", "Private/EditorCompElementContainer.h" },
		{ "ToolTip", "UObject for tracking our list of in-level composure actors - wrapped by a\nUObject to mimic the UWorld::Layers property (hooks into undo/redo easily, etc.)" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements_Inner = { "CompElements", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorCompElementContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements = { "CompElements", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorCompElementContainer, CompElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorCompElementContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorCompElementContainer_Statics::NewProp_CompElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorCompElementContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorCompElementContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorCompElementContainer_Statics::ClassParams = {
		&UEditorCompElementContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorCompElementContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCompElementContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorCompElementContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorCompElementContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorCompElementContainer()
	{
		if (!Z_Registration_Info_UClass_UEditorCompElementContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorCompElementContainer.OuterSingleton, Z_Construct_UClass_UEditorCompElementContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorCompElementContainer.OuterSingleton;
	}
	template<> COMPOSURELAYERSEDITOR_API UClass* StaticClass<UEditorCompElementContainer>()
	{
		return UEditorCompElementContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorCompElementContainer);
	UEditorCompElementContainer::~UEditorCompElementContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_ComposureLayersEditor_Private_EditorCompElementContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_ComposureLayersEditor_Private_EditorCompElementContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorCompElementContainer, UEditorCompElementContainer::StaticClass, TEXT("UEditorCompElementContainer"), &Z_Registration_Info_UClass_UEditorCompElementContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorCompElementContainer), 318554850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_ComposureLayersEditor_Private_EditorCompElementContainer_h_3074634641(TEXT("/Script/ComposureLayersEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_ComposureLayersEditor_Private_EditorCompElementContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_ComposureLayersEditor_Private_EditorCompElementContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
