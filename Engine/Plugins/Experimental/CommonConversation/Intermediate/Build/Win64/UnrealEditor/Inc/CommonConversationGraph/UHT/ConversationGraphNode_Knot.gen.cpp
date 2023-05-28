// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphNode_Knot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphNode_Knot() {}
// Cross Module References
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_Knot();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_Knot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraphNode_Knot::StaticRegisterNativesUConversationGraphNode_Knot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphNode_Knot);
	UClass* Z_Construct_UClass_UConversationGraphNode_Knot_NoRegister()
	{
		return UConversationGraphNode_Knot::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphNode_Knot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphNode_Knot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphNode_Knot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationGraphNode_Knot.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphNode_Knot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphNode_Knot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphNode_Knot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphNode_Knot_Statics::ClassParams = {
		&UConversationGraphNode_Knot::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphNode_Knot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphNode_Knot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphNode_Knot()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphNode_Knot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphNode_Knot.OuterSingleton, Z_Construct_UClass_UConversationGraphNode_Knot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphNode_Knot.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphNode_Knot>()
	{
		return UConversationGraphNode_Knot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphNode_Knot);
	UConversationGraphNode_Knot::~UConversationGraphNode_Knot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Knot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Knot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphNode_Knot, UConversationGraphNode_Knot::StaticClass, TEXT("UConversationGraphNode_Knot"), &Z_Registration_Info_UClass_UConversationGraphNode_Knot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphNode_Knot), 1114345013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Knot_h_2469360375(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Knot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Knot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
