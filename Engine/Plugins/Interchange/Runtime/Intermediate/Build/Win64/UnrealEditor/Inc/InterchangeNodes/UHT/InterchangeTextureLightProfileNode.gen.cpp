// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureLightProfileNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureLightProfileNode() {}
// Cross Module References
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfileNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	void UInterchangeTextureLightProfileNode::StaticRegisterNativesUInterchangeTextureLightProfileNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureLightProfileNode);
	UClass* Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister()
	{
		return UInterchangeTextureLightProfileNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureLightProfileNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureLightProfileNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureLightProfileNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::ClassParams = {
		&UInterchangeTextureLightProfileNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTextureLightProfileNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureLightProfileNode>()
	{
		return UInterchangeTextureLightProfileNode::StaticClass();
	}
	UInterchangeTextureLightProfileNode::UInterchangeTextureLightProfileNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureLightProfileNode);
	UInterchangeTextureLightProfileNode::~UInterchangeTextureLightProfileNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureLightProfileNode, UInterchangeTextureLightProfileNode::StaticClass, TEXT("UInterchangeTextureLightProfileNode"), &Z_Registration_Info_UClass_UInterchangeTextureLightProfileNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureLightProfileNode), 486911068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_3281812825(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
