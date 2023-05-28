// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_CopyPoseFromMesh.h"
#include "AnimNodes/AnimNode_CopyPoseFromMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_CopyPoseFromMesh() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_CopyPoseFromMesh::StaticRegisterNativesUAnimGraphNode_CopyPoseFromMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_CopyPoseFromMesh);
	UClass* Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_NoRegister()
	{
		return UAnimGraphNode_CopyPoseFromMesh::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_CopyPoseFromMesh.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CopyPoseFromMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CopyPoseFromMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CopyPoseFromMesh, Node), Z_Construct_UScriptStruct_FAnimNode_CopyPoseFromMesh, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::NewProp_Node_MetaData)) }; // 964590067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_CopyPoseFromMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::ClassParams = {
		&UAnimGraphNode_CopyPoseFromMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_CopyPoseFromMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_CopyPoseFromMesh.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_CopyPoseFromMesh.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_CopyPoseFromMesh>()
	{
		return UAnimGraphNode_CopyPoseFromMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_CopyPoseFromMesh);
	UAnimGraphNode_CopyPoseFromMesh::~UAnimGraphNode_CopyPoseFromMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_CopyPoseFromMesh, UAnimGraphNode_CopyPoseFromMesh::StaticClass, TEXT("UAnimGraphNode_CopyPoseFromMesh"), &Z_Registration_Info_UClass_UAnimGraphNode_CopyPoseFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_CopyPoseFromMesh), 1851735992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_4117725229(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CopyPoseFromMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
