// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeVolumeTextureNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVolumeTextureNode() {}
// Cross Module References
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	void UInterchangeVolumeTextureNode::StaticRegisterNativesUInterchangeVolumeTextureNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVolumeTextureNode);
	UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister()
	{
		return UInterchangeVolumeTextureNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeVolumeTextureNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVolumeTextureNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeVolumeTextureNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::ClassParams = {
		&UInterchangeVolumeTextureNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeVolumeTextureNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.OuterSingleton, Z_Construct_UClass_UInterchangeVolumeTextureNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeVolumeTextureNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeVolumeTextureNode>()
	{
		return UInterchangeVolumeTextureNode::StaticClass();
	}
	UInterchangeVolumeTextureNode::UInterchangeVolumeTextureNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVolumeTextureNode);
	UInterchangeVolumeTextureNode::~UInterchangeVolumeTextureNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVolumeTextureNode, UInterchangeVolumeTextureNode::StaticClass, TEXT("UInterchangeVolumeTextureNode"), &Z_Registration_Info_UClass_UInterchangeVolumeTextureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVolumeTextureNode), 1292602398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_3028333277(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVolumeTextureNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
