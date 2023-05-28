// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureCubeFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureCubeFactoryNode() {}
// Cross Module References
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	void UInterchangeTextureCubeFactoryNode::StaticRegisterNativesUInterchangeTextureCubeFactoryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureCubeFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister()
	{
		return UInterchangeTextureCubeFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureCubeFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureCubeFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureCubeFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::ClassParams = {
		&UInterchangeTextureCubeFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTextureCubeFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeTextureCubeFactoryNode>()
	{
		return UInterchangeTextureCubeFactoryNode::StaticClass();
	}
	UInterchangeTextureCubeFactoryNode::UInterchangeTextureCubeFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureCubeFactoryNode);
	UInterchangeTextureCubeFactoryNode::~UInterchangeTextureCubeFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureCubeFactoryNode, UInterchangeTextureCubeFactoryNode::StaticClass, TEXT("UInterchangeTextureCubeFactoryNode"), &Z_Registration_Info_UClass_UInterchangeTextureCubeFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureCubeFactoryNode), 3898444861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_986762469(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureCubeFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
