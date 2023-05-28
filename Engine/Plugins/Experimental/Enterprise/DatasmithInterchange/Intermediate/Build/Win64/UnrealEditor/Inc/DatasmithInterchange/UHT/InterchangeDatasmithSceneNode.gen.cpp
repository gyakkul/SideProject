// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeDatasmithSceneNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithSceneNode() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithSceneNode();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithSceneNode_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithSceneNode::StaticRegisterNativesUInterchangeDatasmithSceneNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithSceneNode);
	UClass* Z_Construct_UClass_UInterchangeDatasmithSceneNode_NoRegister()
	{
		return UInterchangeDatasmithSceneNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithSceneNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithSceneNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithSceneNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::ClassParams = {
		&UInterchangeDatasmithSceneNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithSceneNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithSceneNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithSceneNode.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithSceneNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithSceneNode.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithSceneNode>()
	{
		return UInterchangeDatasmithSceneNode::StaticClass();
	}
	UInterchangeDatasmithSceneNode::UInterchangeDatasmithSceneNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithSceneNode);
	UInterchangeDatasmithSceneNode::~UInterchangeDatasmithSceneNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithSceneNode, UInterchangeDatasmithSceneNode::StaticClass, TEXT("UInterchangeDatasmithSceneNode"), &Z_Registration_Info_UClass_UInterchangeDatasmithSceneNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithSceneNode), 229770591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneNode_h_1489260966(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithSceneNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
