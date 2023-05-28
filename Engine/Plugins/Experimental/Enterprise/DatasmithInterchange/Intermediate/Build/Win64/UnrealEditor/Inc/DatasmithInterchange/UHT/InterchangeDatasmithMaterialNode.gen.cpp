// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InterchangeDatasmithMaterialNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithMaterialNode() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderGraphNode();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithPbrMaterialNode::StaticRegisterNativesUInterchangeDatasmithPbrMaterialNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithPbrMaterialNode);
	UClass* Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_NoRegister()
	{
		return UInterchangeDatasmithPbrMaterialNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeShaderGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithMaterialNode.h" },
		{ "ModuleRelativePath", "Private/InterchangeDatasmithMaterialNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithPbrMaterialNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::ClassParams = {
		&UInterchangeDatasmithPbrMaterialNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithPbrMaterialNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithPbrMaterialNode.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithPbrMaterialNode.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithPbrMaterialNode>()
	{
		return UInterchangeDatasmithPbrMaterialNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithPbrMaterialNode);
	UInterchangeDatasmithPbrMaterialNode::~UInterchangeDatasmithPbrMaterialNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithPbrMaterialNode, UInterchangeDatasmithPbrMaterialNode::StaticClass, TEXT("UInterchangeDatasmithPbrMaterialNode"), &Z_Registration_Info_UClass_UInterchangeDatasmithPbrMaterialNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithPbrMaterialNode), 428932597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialNode_h_1309322509(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Private_InterchangeDatasmithMaterialNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
