// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Selection/GeometrySelectionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometrySelectionManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UGeometrySelectionManager::StaticRegisterNativesUGeometrySelectionManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometrySelectionManager);
	UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister()
	{
		return UGeometrySelectionManager::StaticClass();
	}
	struct Z_Construct_UClass_UGeometrySelectionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionArguments_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionArguments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolsContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometrySelectionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGeometrySelectionManager provides the infrastructure for \"Element Selection\", ie \n * geometric sub-elements of some geometry object like a Triangle Mesh. The Manager is\n * designed to work with a relatively vague concept of \"element\", so it doesn't explicitly\n * reference triangles/etc, and the selectable-elements and how-elements-are-selected\n * concepts are provided by abstract-interfaces that allow various implememtations.\n * \n * The \"Geometry Objects\", eg like a DynamicMeshComponent, Gameplay Volume, etc, are\n * referred to as \"Active Targets\" in the Manager. External code provides and updates\n * the set of Active Targets, eg for example tracking the active Actor Selection in the Editor.\n * \n * For a given Target, a tuple (Selector, Selection, SelectionEditor) is created and maintained.\n * The FGeometrySelection is ultimately a basic list of integers and does not have any knowledge\n * of what it is a selection *of*, and is not intended to be directly edited. Instead the\n * SelectionEditor provides that functionality. This separation allows \"selection editing\" to\n * be customized, eg to enforce invariants or constraints that might apply to certain kinds of selections.\n * \n * The IGeometrySelector provides the core implementation of what \"selection\" means for a given\n * Target, eg like a mesh Component, or mesh object like a UDynamicMesh. The Selector is\n * created by a registered Factory, allowing client code to provide custom implementations for\n * different Target Types. Updates to the Selection are done via the Selector, as well as queries\n * about (eg) renderable selection geometry. 3D Transforms are also applied via the Selector,\n * as only it has the knowledge about what can be transformed and how it can be applied.\n * \n * The GeometrySelectionManager provides high-level interfaces for this system, for example\n * external code (eg such as something that creates a Gizmo for the active selection) only\n * needs to interact with SelectionManager, calling functions like \n * ::BeginTransformation() / ::UpdateTransformation() / ::EndTransformation().\n * The SelectionManager also handles Transactions/FChanges for the active Targets and Selections. \n * \n */" },
		{ "IncludePath", "Selection/GeometrySelectionManager.h" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "UGeometrySelectionManager provides the infrastructure for \"Element Selection\", ie\ngeometric sub-elements of some geometry object like a Triangle Mesh. The Manager is\ndesigned to work with a relatively vague concept of \"element\", so it doesn't explicitly\nreference triangles/etc, and the selectable-elements and how-elements-are-selected\nconcepts are provided by abstract-interfaces that allow various implememtations.\n\nThe \"Geometry Objects\", eg like a DynamicMeshComponent, Gameplay Volume, etc, are\nreferred to as \"Active Targets\" in the Manager. External code provides and updates\nthe set of Active Targets, eg for example tracking the active Actor Selection in the Editor.\n\nFor a given Target, a tuple (Selector, Selection, SelectionEditor) is created and maintained.\nThe FGeometrySelection is ultimately a basic list of integers and does not have any knowledge\nof what it is a selection *of*, and is not intended to be directly edited. Instead the\nSelectionEditor provides that functionality. This separation allows \"selection editing\" to\nbe customized, eg to enforce invariants or constraints that might apply to certain kinds of selections.\n\nThe IGeometrySelector provides the core implementation of what \"selection\" means for a given\nTarget, eg like a mesh Component, or mesh object like a UDynamicMesh. The Selector is\ncreated by a registered Factory, allowing client code to provide custom implementations for\ndifferent Target Types. Updates to the Selection are done via the Selector, as well as queries\nabout (eg) renderable selection geometry. 3D Transforms are also applied via the Selector,\nas only it has the knowledge about what can be transformed and how it can be applied.\n\nThe GeometrySelectionManager provides high-level interfaces for this system, for example\nexternal code (eg such as something that creates a Gizmo for the active selection) only\nneeds to interact with SelectionManager, calling functions like\n::BeginTransformation() / ::UpdateTransformation() / ::EndTransformation().\nThe SelectionManager also handles Transactions/FChanges for the active Targets and Selections." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments_MetaData[] = {
		{ "Comment", "// This is set to current selection during CanExecuteSelectionCommand/ExecuteSelectionCommand, to keep the UObject alive\n// Not expected to be used outside that context\n" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "This is set to current selection during CanExecuteSelectionCommand/ExecuteSelectionCommand, to keep the UObject alive\nNot expected to be used outside that context" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments = { "SelectionArguments", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometrySelectionManager, SelectionArguments), Z_Construct_UClass_UGeometrySelectionEditCommandArguments_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext_MetaData[] = {
		{ "Comment", "// ITF references\n" },
		{ "ModuleRelativePath", "Public/Selection/GeometrySelectionManager.h" },
		{ "ToolTip", "ITF references" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext = { "ToolsContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometrySelectionManager, ToolsContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_SelectionArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometrySelectionManager_Statics::NewProp_ToolsContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometrySelectionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometrySelectionManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometrySelectionManager_Statics::ClassParams = {
		&UGeometrySelectionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometrySelectionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometrySelectionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometrySelectionManager()
	{
		if (!Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton, Z_Construct_UClass_UGeometrySelectionManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometrySelectionManager.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UGeometrySelectionManager>()
	{
		return UGeometrySelectionManager::StaticClass();
	}
	UGeometrySelectionManager::UGeometrySelectionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometrySelectionManager);
	UGeometrySelectionManager::~UGeometrySelectionManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometrySelectionManager, UGeometrySelectionManager::StaticClass, TEXT("UGeometrySelectionManager"), &Z_Registration_Info_UClass_UGeometrySelectionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometrySelectionManager), 3708531828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_3190762254(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_GeometrySelectionManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
