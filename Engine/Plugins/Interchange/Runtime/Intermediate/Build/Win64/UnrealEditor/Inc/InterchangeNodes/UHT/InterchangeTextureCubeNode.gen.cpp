// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureCubeNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureCubeNode() {}
// Cross Module References
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	void UInterchangeTextureCubeNode::StaticRegisterNativesUInterchangeTextureCubeNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureCubeNode);
	UClass* Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister()
	{
		return UInterchangeTextureCubeNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureCubeNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureCubeNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureCubeNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureCubeNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::ClassParams = {
		&UInterchangeTextureCubeNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTextureCubeNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureCubeNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureCubeNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureCubeNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureCubeNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureCubeNode>()
	{
		return UInterchangeTextureCubeNode::StaticClass();
	}
	UInterchangeTextureCubeNode::UInterchangeTextureCubeNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureCubeNode);
	UInterchangeTextureCubeNode::~UInterchangeTextureCubeNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureCubeNode, UInterchangeTextureCubeNode::StaticClass, TEXT("UInterchangeTextureCubeNode"), &Z_Registration_Info_UClass_UInterchangeTextureCubeNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureCubeNode), 4065585770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_1585495194(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
