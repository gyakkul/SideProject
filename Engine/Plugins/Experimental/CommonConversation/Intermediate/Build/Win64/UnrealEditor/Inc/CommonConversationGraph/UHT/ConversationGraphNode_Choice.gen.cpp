// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphNode_Choice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphNode_Choice() {}
// Cross Module References
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_Choice();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_Choice_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraphNode_Choice::StaticRegisterNativesUConversationGraphNode_Choice()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphNode_Choice);
	UClass* Z_Construct_UClass_UConversationGraphNode_Choice_NoRegister()
	{
		return UConversationGraphNode_Choice::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphNode_Choice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphNode_Choice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphNode_Choice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationGraphNode_Choice.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphNode_Choice.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphNode_Choice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphNode_Choice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphNode_Choice_Statics::ClassParams = {
		&UConversationGraphNode_Choice::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphNode_Choice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphNode_Choice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphNode_Choice()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphNode_Choice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphNode_Choice.OuterSingleton, Z_Construct_UClass_UConversationGraphNode_Choice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphNode_Choice.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphNode_Choice>()
	{
		return UConversationGraphNode_Choice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphNode_Choice);
	UConversationGraphNode_Choice::~UConversationGraphNode_Choice() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Choice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Choice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphNode_Choice, UConversationGraphNode_Choice::StaticClass, TEXT("UConversationGraphNode_Choice"), &Z_Registration_Info_UClass_UConversationGraphNode_Choice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphNode_Choice), 3835064627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Choice_h_686168972(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Choice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Choice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
