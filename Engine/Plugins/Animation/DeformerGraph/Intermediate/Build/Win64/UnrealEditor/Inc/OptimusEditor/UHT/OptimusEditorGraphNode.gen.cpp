// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusEditorGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusEditorGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusEditorGraphNode();
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusEditorGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusEditor();
// End Cross Module References
	void UOptimusEditorGraphNode::StaticRegisterNativesUOptimusEditorGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusEditorGraphNode);
	UClass* Z_Construct_UClass_UOptimusEditorGraphNode_NoRegister()
	{
		return UOptimusEditorGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusEditorGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModelNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusEditorGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusEditorGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusEditorGraphNode.h" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusEditorGraphNode_Statics::NewProp_ModelNode_MetaData[] = {
		{ "Comment", "// FIXME: Move to private and add accessor function.\n" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphNode.h" },
		{ "ToolTip", "FIXME: Move to private and add accessor function." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusEditorGraphNode_Statics::NewProp_ModelNode = { "ModelNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusEditorGraphNode, ModelNode), Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusEditorGraphNode_Statics::NewProp_ModelNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusEditorGraphNode_Statics::NewProp_ModelNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusEditorGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusEditorGraphNode_Statics::NewProp_ModelNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusEditorGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusEditorGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusEditorGraphNode_Statics::ClassParams = {
		&UOptimusEditorGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusEditorGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusEditorGraphNode_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusEditorGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusEditorGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusEditorGraphNode()
	{
		if (!Z_Registration_Info_UClass_UOptimusEditorGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusEditorGraphNode.OuterSingleton, Z_Construct_UClass_UOptimusEditorGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusEditorGraphNode.OuterSingleton;
	}
	template<> OPTIMUSEDITOR_API UClass* StaticClass<UOptimusEditorGraphNode>()
	{
		return UOptimusEditorGraphNode::StaticClass();
	}
	UOptimusEditorGraphNode::UOptimusEditorGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusEditorGraphNode);
	UOptimusEditorGraphNode::~UOptimusEditorGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusEditorGraphNode, UOptimusEditorGraphNode::StaticClass, TEXT("UOptimusEditorGraphNode"), &Z_Registration_Info_UClass_UOptimusEditorGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusEditorGraphNode), 2664397903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphNode_h_2177381193(TEXT("/Script/OptimusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
