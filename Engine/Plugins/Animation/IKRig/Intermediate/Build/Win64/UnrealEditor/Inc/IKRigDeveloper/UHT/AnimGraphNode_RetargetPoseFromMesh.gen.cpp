// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_RetargetPoseFromMesh.h"
#include "AnimNodes/AnimNode_RetargetPoseFromMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RetargetPoseFromMesh() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh();
	IKRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh();
	IKRIGDEVELOPER_API UClass* Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigDeveloper();
// End Cross Module References
	void UAnimGraphNode_RetargetPoseFromMesh::StaticRegisterNativesUAnimGraphNode_RetargetPoseFromMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_RetargetPoseFromMesh);
	UClass* Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_NoRegister()
	{
		return UAnimGraphNode_RetargetPoseFromMesh::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Editor node for IKRig \n" },
		{ "IncludePath", "AnimGraphNode_RetargetPoseFromMesh.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RetargetPoseFromMesh.h" },
		{ "ToolTip", "Editor node for IKRig" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RetargetPoseFromMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_RetargetPoseFromMesh, Node), Z_Construct_UScriptStruct_FAnimNode_RetargetPoseFromMesh, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::NewProp_Node_MetaData)) }; // 3302480198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RetargetPoseFromMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::ClassParams = {
		&UAnimGraphNode_RetargetPoseFromMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_RetargetPoseFromMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_RetargetPoseFromMesh.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_RetargetPoseFromMesh.OuterSingleton;
	}
	template<> IKRIGDEVELOPER_API UClass* StaticClass<UAnimGraphNode_RetargetPoseFromMesh>()
	{
		return UAnimGraphNode_RetargetPoseFromMesh::StaticClass();
	}
	UAnimGraphNode_RetargetPoseFromMesh::UAnimGraphNode_RetargetPoseFromMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RetargetPoseFromMesh);
	UAnimGraphNode_RetargetPoseFromMesh::~UAnimGraphNode_RetargetPoseFromMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_RetargetPoseFromMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_RetargetPoseFromMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_RetargetPoseFromMesh, UAnimGraphNode_RetargetPoseFromMesh::StaticClass, TEXT("UAnimGraphNode_RetargetPoseFromMesh"), &Z_Registration_Info_UClass_UAnimGraphNode_RetargetPoseFromMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_RetargetPoseFromMesh), 760100621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_RetargetPoseFromMesh_h_1020574577(TEXT("/Script/IKRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_RetargetPoseFromMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigDeveloper_Public_AnimGraphNode_RetargetPoseFromMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
