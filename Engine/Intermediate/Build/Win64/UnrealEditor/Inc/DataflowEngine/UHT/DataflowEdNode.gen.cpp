// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowEdNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowEdNode() {}
// Cross Module References
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowEdNode();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflowEdNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References
	void UDataflowEdNode::StaticRegisterNativesUDataflowEdNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowEdNode);
	UClass* Z_Construct_UClass_UDataflowEdNode_NoRegister()
	{
		return UDataflowEdNode::StaticClass();
	}
	struct Z_Construct_UClass_UDataflowEdNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInAssetEditor_MetaData[];
#endif
		static void NewProp_bRenderInAssetEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInAssetEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflowEdNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowEdNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowEdNode.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEdNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowEdNode.h" },
	};
#endif
	void Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_SetBit(void* Obj)
	{
		((UDataflowEdNode*)Obj)->bRenderInAssetEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor = { "bRenderInAssetEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataflowEdNode), &Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowEdNode_Statics::NewProp_bRenderInAssetEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflowEdNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowEdNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowEdNode_Statics::ClassParams = {
		&UDataflowEdNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataflowEdNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowEdNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflowEdNode()
	{
		if (!Z_Registration_Info_UClass_UDataflowEdNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowEdNode.OuterSingleton, Z_Construct_UClass_UDataflowEdNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflowEdNode.OuterSingleton;
	}
	template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflowEdNode>()
	{
		return UDataflowEdNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowEdNode);
	UDataflowEdNode::~UDataflowEdNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflowEdNode)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowEdNode, UDataflowEdNode::StaticClass, TEXT("UDataflowEdNode"), &Z_Registration_Info_UClass_UDataflowEdNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowEdNode), 2770994462U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_1885198550(TEXT("/Script/DataflowEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowEdNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
