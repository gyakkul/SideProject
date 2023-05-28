// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_RemapCurvesFromMesh.h"
#include "AnimNode_RemapCurvesFromMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RemapCurvesFromMesh() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	CURVEEXPRESSION_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh();
	CURVEEXPRESSIONEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CurveExpressionEditor();
// End Cross Module References
	void UAnimGraphNode_RemapCurvesFromMesh::StaticRegisterNativesUAnimGraphNode_RemapCurvesFromMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_RemapCurvesFromMesh);
	UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_NoRegister()
	{
		return UAnimGraphNode_RemapCurvesFromMesh::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveExpressionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RemapCurvesFromMesh.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RemapCurvesFromMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RemapCurvesFromMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_RemapCurvesFromMesh, Node), Z_Construct_UScriptStruct_FAnimNode_RemapCurvesFromMesh, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::NewProp_Node_MetaData)) }; // 2223821481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RemapCurvesFromMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::ClassParams = {
		&UAnimGraphNode_RemapCurvesFromMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_RemapCurvesFromMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_RemapCurvesFromMesh.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_RemapCurvesFromMesh.OuterSingleton;
	}
	template<> CURVEEXPRESSIONEDITOR_API UClass* StaticClass<UAnimGraphNode_RemapCurvesFromMesh>()
	{
		return UAnimGraphNode_RemapCurvesFromMesh::StaticClass();
	}
	UAnimGraphNode_RemapCurvesFromMesh::UAnimGraphNode_RemapCurvesFromMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RemapCurvesFromMesh);
	UAnimGraphNode_RemapCurvesFromMesh::~UAnimGraphNode_RemapCurvesFromMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurvesFromMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurvesFromMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_RemapCurvesFromMesh, UAnimGraphNode_RemapCurvesFromMesh::StaticClass, TEXT("UAnimGraphNode_RemapCurvesFromMesh"), &Z_Registration_Info_UClass_UAnimGraphNode_RemapCurvesFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_RemapCurvesFromMesh), 2472329963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurvesFromMesh_h_3228262301(TEXT("/Script/CurveExpressionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurvesFromMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_CurveExpression_Source_Editor_Public_AnimGraphNode_RemapCurvesFromMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
