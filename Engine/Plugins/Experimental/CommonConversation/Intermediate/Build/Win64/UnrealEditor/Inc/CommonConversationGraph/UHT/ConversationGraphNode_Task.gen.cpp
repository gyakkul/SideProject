// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphNode_Task.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphNode_Task() {}
// Cross Module References
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_Task();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_Task_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraphNode_Task::StaticRegisterNativesUConversationGraphNode_Task()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphNode_Task);
	UClass* Z_Construct_UClass_UConversationGraphNode_Task_NoRegister()
	{
		return UConversationGraphNode_Task::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphNode_Task_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphNode_Task_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphNode_Task_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationGraphNode_Task.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphNode_Task.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphNode_Task_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphNode_Task>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphNode_Task_Statics::ClassParams = {
		&UConversationGraphNode_Task::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphNode_Task_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphNode_Task_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphNode_Task()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphNode_Task.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphNode_Task.OuterSingleton, Z_Construct_UClass_UConversationGraphNode_Task_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphNode_Task.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphNode_Task>()
	{
		return UConversationGraphNode_Task::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphNode_Task);
	UConversationGraphNode_Task::~UConversationGraphNode_Task() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Task_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Task_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphNode_Task, UConversationGraphNode_Task::StaticClass, TEXT("UConversationGraphNode_Task"), &Z_Registration_Info_UClass_UConversationGraphNode_Task, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphNode_Task), 2837395519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Task_h_1072335808(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Task_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_Task_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
