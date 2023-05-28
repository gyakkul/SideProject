// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTexture2DArrayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexture2DArrayNode() {}
// Cross Module References
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	void UInterchangeTexture2DArrayNode::StaticRegisterNativesUInterchangeTexture2DArrayNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexture2DArrayNode);
	UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister()
	{
		return UInterchangeTexture2DArrayNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTexture2DArrayNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTexture2DArrayNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTexture2DArrayNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::ClassParams = {
		&UInterchangeTexture2DArrayNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.OuterSingleton, Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTexture2DArrayNode>()
	{
		return UInterchangeTexture2DArrayNode::StaticClass();
	}
	UInterchangeTexture2DArrayNode::UInterchangeTexture2DArrayNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexture2DArrayNode);
	UInterchangeTexture2DArrayNode::~UInterchangeTexture2DArrayNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexture2DArrayNode, UInterchangeTexture2DArrayNode::StaticClass, TEXT("UInterchangeTexture2DArrayNode"), &Z_Registration_Info_UClass_UInterchangeTexture2DArrayNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexture2DArrayNode), 638322553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_1657011482(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
