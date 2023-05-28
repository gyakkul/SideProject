// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureCubeArrayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureCubeArrayNode() {}
// Cross Module References
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	void UInterchangeTextureCubeArrayNode::StaticRegisterNativesUInterchangeTextureCubeArrayNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureCubeArrayNode);
	UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister()
	{
		return UInterchangeTextureCubeArrayNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureCubeArrayNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureCubeArrayNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureCubeArrayNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::ClassParams = {
		&UInterchangeTextureCubeArrayNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureCubeArrayNode>()
	{
		return UInterchangeTextureCubeArrayNode::StaticClass();
	}
	UInterchangeTextureCubeArrayNode::UInterchangeTextureCubeArrayNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureCubeArrayNode);
	UInterchangeTextureCubeArrayNode::~UInterchangeTextureCubeArrayNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureCubeArrayNode, UInterchangeTextureCubeArrayNode::StaticClass, TEXT("UInterchangeTextureCubeArrayNode"), &Z_Registration_Info_UClass_UInterchangeTextureCubeArrayNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureCubeArrayNode), 575983192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_1007966411(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
