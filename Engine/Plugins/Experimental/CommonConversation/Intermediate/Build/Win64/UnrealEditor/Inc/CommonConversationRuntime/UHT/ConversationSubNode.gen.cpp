// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationSubNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationSubNode() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNode();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSubNode();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSubNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	void UConversationSubNode::StaticRegisterNativesUConversationSubNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationSubNode);
	UClass* Z_Construct_UClass_UConversationSubNode_NoRegister()
	{
		return UConversationSubNode::StaticClass();
	}
	struct Z_Construct_UClass_UConversationSubNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationSubNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationSubNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @TODO: CONVERSATION: Comment me\n */" },
		{ "IncludePath", "ConversationSubNode.h" },
		{ "ModuleRelativePath", "Public/ConversationSubNode.h" },
		{ "ToolTip", "@TODO: CONVERSATION: Comment me" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationSubNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationSubNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationSubNode_Statics::ClassParams = {
		&UConversationSubNode::StaticClass,
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
		0x001100A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationSubNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationSubNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationSubNode()
	{
		if (!Z_Registration_Info_UClass_UConversationSubNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationSubNode.OuterSingleton, Z_Construct_UClass_UConversationSubNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationSubNode.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationSubNode>()
	{
		return UConversationSubNode::StaticClass();
	}
	UConversationSubNode::UConversationSubNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationSubNode);
	UConversationSubNode::~UConversationSubNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationSubNode, UConversationSubNode::StaticClass, TEXT("UConversationSubNode"), &Z_Registration_Info_UClass_UConversationSubNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationSubNode), 1103787767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_815417247(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
