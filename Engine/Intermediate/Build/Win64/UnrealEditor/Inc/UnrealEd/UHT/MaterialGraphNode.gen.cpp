// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Base();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode::StaticRegisterNativesUMaterialGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode);
	UClass* Z_Construct_UClass_UMaterialGraphNode_NoRegister()
	{
		return UMaterialGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialExpression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Statics::NewProp_MaterialExpression_MetaData[] = {
		{ "Comment", "/** Material Expression this node is representing */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode.h" },
		{ "ToolTip", "Material Expression this node is representing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraphNode_Statics::NewProp_MaterialExpression = { "MaterialExpression", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraphNode, MaterialExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Statics::NewProp_MaterialExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Statics::NewProp_MaterialExpression_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphNode_Statics::NewProp_MaterialExpression,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Statics::ClassParams = {
		&UMaterialGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode>()
	{
		return UMaterialGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode);
	UMaterialGraphNode::~UMaterialGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode, UMaterialGraphNode::StaticClass, TEXT("UMaterialGraphNode"), &Z_Registration_Info_UClass_UMaterialGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode), 1155464490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_475750410(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
