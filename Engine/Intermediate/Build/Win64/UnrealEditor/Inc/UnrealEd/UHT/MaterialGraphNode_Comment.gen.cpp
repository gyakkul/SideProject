// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialGraph/MaterialGraphNode_Comment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialGraphNode_Comment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Comment();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialGraphNode_Comment::StaticRegisterNativesUMaterialGraphNode_Comment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialGraphNode_Comment);
	UClass* Z_Construct_UClass_UMaterialGraphNode_Comment_NoRegister()
	{
		return UMaterialGraphNode_Comment::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialGraphNode_Comment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionComment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialExpressionComment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode_Comment,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialGraph/MaterialGraphNode_Comment.h" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Comment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment_MetaData[] = {
		{ "Comment", "/** Material Comment that this node represents */" },
		{ "ModuleRelativePath", "Classes/MaterialGraph/MaterialGraphNode_Comment.h" },
		{ "ToolTip", "Material Comment that this node represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment = { "MaterialExpressionComment", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialGraphNode_Comment, MaterialExpressionComment), Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::NewProp_MaterialExpressionComment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialGraphNode_Comment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::ClassParams = {
		&UMaterialGraphNode_Comment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialGraphNode_Comment()
	{
		if (!Z_Registration_Info_UClass_UMaterialGraphNode_Comment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialGraphNode_Comment.OuterSingleton, Z_Construct_UClass_UMaterialGraphNode_Comment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialGraphNode_Comment.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialGraphNode_Comment>()
	{
		return UMaterialGraphNode_Comment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialGraphNode_Comment);
	UMaterialGraphNode_Comment::~UMaterialGraphNode_Comment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialGraphNode_Comment, UMaterialGraphNode_Comment::StaticClass, TEXT("UMaterialGraphNode_Comment"), &Z_Registration_Info_UClass_UMaterialGraphNode_Comment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialGraphNode_Comment), 2821017682U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_1741895484(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialGraph_MaterialGraphNode_Comment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
