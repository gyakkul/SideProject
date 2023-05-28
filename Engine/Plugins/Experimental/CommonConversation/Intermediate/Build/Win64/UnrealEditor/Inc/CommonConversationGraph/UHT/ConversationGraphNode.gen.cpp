// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphNode() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraphNode::StaticRegisterNativesUConversationGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphNode);
	UClass* Z_Construct_UClass_UConversationGraphNode_NoRegister()
	{
		return UConversationGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationGraphNode.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphNode_Statics::ClassParams = {
		&UConversationGraphNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphNode()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphNode.OuterSingleton, Z_Construct_UClass_UConversationGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphNode.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphNode>()
	{
		return UConversationGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphNode);
	UConversationGraphNode::~UConversationGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphNode, UConversationGraphNode::StaticClass, TEXT("UConversationGraphNode"), &Z_Registration_Info_UClass_UConversationGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphNode), 3787637656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_3611176758(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
