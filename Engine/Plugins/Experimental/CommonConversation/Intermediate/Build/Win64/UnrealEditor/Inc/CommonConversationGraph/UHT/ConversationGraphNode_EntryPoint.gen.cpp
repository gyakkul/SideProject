// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphNode_EntryPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphNode_EntryPoint() {}
// Cross Module References
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_EntryPoint();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_EntryPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraphNode_EntryPoint::StaticRegisterNativesUConversationGraphNode_EntryPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphNode_EntryPoint);
	UClass* Z_Construct_UClass_UConversationGraphNode_EntryPoint_NoRegister()
	{
		return UConversationGraphNode_EntryPoint::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UConversationGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Root node of this conversation block */" },
		{ "IncludePath", "ConversationGraphNode_EntryPoint.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphNode_EntryPoint.h" },
		{ "ToolTip", "Root node of this conversation block" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphNode_EntryPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::ClassParams = {
		&UConversationGraphNode_EntryPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphNode_EntryPoint()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphNode_EntryPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphNode_EntryPoint.OuterSingleton, Z_Construct_UClass_UConversationGraphNode_EntryPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphNode_EntryPoint.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphNode_EntryPoint>()
	{
		return UConversationGraphNode_EntryPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphNode_EntryPoint);
	UConversationGraphNode_EntryPoint::~UConversationGraphNode_EntryPoint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_EntryPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_EntryPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphNode_EntryPoint, UConversationGraphNode_EntryPoint::StaticClass, TEXT("UConversationGraphNode_EntryPoint"), &Z_Registration_Info_UClass_UConversationGraphNode_EntryPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphNode_EntryPoint), 2647466532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_EntryPoint_h_531131802(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_EntryPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_EntryPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
