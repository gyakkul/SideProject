// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Toolkit/RenderGridEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridJobSelection();
	RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridJobSelection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RenderGridEditor();
// End Cross Module References
	void URenderGridJobSelection::StaticRegisterNativesURenderGridJobSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridJobSelection);
	UClass* Z_Construct_UClass_URenderGridJobSelection_NoRegister()
	{
		return URenderGridJobSelection::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridJobSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedRenderGridJobIds_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRenderGridJobIds_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedRenderGridJobIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridJobSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGridEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJobSelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The selected render grid jobs.\n * This is placed in a separate class, so it can be an UObject, so it can be placed in the undo/redo buffer.\n */" },
		{ "IncludePath", "Toolkit/RenderGridEditor.h" },
		{ "ModuleRelativePath", "Private/Toolkit/RenderGridEditor.h" },
		{ "ToolTip", "The selected render grid jobs.\nThis is placed in a separate class, so it can be an UObject, so it can be placed in the undo/redo buffer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds_ElementProp = { "SelectedRenderGridJobIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds_MetaData[] = {
		{ "Comment", "/** The GUIDs of the currently selected render grid jobs. */" },
		{ "ModuleRelativePath", "Private/Toolkit/RenderGridEditor.h" },
		{ "ToolTip", "The GUIDs of the currently selected render grid jobs." },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds = { "SelectedRenderGridJobIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJobSelection, SelectedRenderGridJobIds), METADATA_PARAMS(Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridJobSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJobSelection_Statics::NewProp_SelectedRenderGridJobIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridJobSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridJobSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridJobSelection_Statics::ClassParams = {
		&URenderGridJobSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridJobSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJobSelection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridJobSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJobSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridJobSelection()
	{
		if (!Z_Registration_Info_UClass_URenderGridJobSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridJobSelection.OuterSingleton, Z_Construct_UClass_URenderGridJobSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridJobSelection.OuterSingleton;
	}
	template<> RENDERGRIDEDITOR_API UClass* StaticClass<URenderGridJobSelection>()
	{
		return URenderGridJobSelection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridJobSelection);
	URenderGridJobSelection::~URenderGridJobSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Toolkit_RenderGridEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Toolkit_RenderGridEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridJobSelection, URenderGridJobSelection::StaticClass, TEXT("URenderGridJobSelection"), &Z_Registration_Info_UClass_URenderGridJobSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridJobSelection), 2954549617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Toolkit_RenderGridEditor_h_1405210145(TEXT("/Script/RenderGridEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Toolkit_RenderGridEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Toolkit_RenderGridEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
