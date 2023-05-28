// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryGraphNode() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryGraphNode::StaticRegisterNativesUEnvironmentQueryGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvironmentQueryGraphNode);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_NoRegister()
	{
		return UEnvironmentQueryGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQueryGraphNode.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::ClassParams = {
		&UEnvironmentQueryGraphNode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode()
	{
		if (!Z_Registration_Info_UClass_UEnvironmentQueryGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentQueryGraphNode.OuterSingleton, Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvironmentQueryGraphNode.OuterSingleton;
	}
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryGraphNode>()
	{
		return UEnvironmentQueryGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode);
	UEnvironmentQueryGraphNode::~UEnvironmentQueryGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentQueryGraphNode, UEnvironmentQueryGraphNode::StaticClass, TEXT("UEnvironmentQueryGraphNode"), &Z_Registration_Info_UClass_UEnvironmentQueryGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentQueryGraphNode), 3926322029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_273436979(TEXT("/Script/EnvironmentQueryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
