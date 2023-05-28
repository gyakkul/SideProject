// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraph() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraph();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraph::StaticRegisterNativesUConversationGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraph);
	UClass* Z_Construct_UClass_UConversationGraph_NoRegister()
	{
		return UConversationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationGraph.h" },
		{ "ModuleRelativePath", "Public/ConversationGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraph_Statics::ClassParams = {
		&UConversationGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraph()
	{
		if (!Z_Registration_Info_UClass_UConversationGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraph.OuterSingleton, Z_Construct_UClass_UConversationGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraph.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraph>()
	{
		return UConversationGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraph);
	UConversationGraph::~UConversationGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraph, UConversationGraph::StaticClass, TEXT("UConversationGraph"), &Z_Registration_Info_UClass_UConversationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraph), 899476768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_2097172144(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
