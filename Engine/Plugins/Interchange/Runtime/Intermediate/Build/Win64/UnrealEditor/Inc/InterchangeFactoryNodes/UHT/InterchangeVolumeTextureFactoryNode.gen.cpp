// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeVolumeTextureFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVolumeTextureFactoryNode() {}
// Cross Module References
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	void UInterchangeVolumeTextureFactoryNode::StaticRegisterNativesUInterchangeVolumeTextureFactoryNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVolumeTextureFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_NoRegister()
	{
		return UInterchangeVolumeTextureFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTextureFactoryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeVolumeTextureFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVolumeTextureFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeVolumeTextureFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::ClassParams = {
		&UInterchangeVolumeTextureFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeVolumeTextureFactoryNode>()
	{
		return UInterchangeVolumeTextureFactoryNode::StaticClass();
	}
	UInterchangeVolumeTextureFactoryNode::UInterchangeVolumeTextureFactoryNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVolumeTextureFactoryNode);
	UInterchangeVolumeTextureFactoryNode::~UInterchangeVolumeTextureFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode, UInterchangeVolumeTextureFactoryNode::StaticClass, TEXT("UInterchangeVolumeTextureFactoryNode"), &Z_Registration_Info_UClass_UInterchangeVolumeTextureFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVolumeTextureFactoryNode), 937810013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_2157182545(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeVolumeTextureFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
