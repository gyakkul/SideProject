// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_RefPoseBase.h"
#include "AnimNodes/AnimNode_RefPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_RefPoseBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RefPoseBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RefPoseBase_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RefPose();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_RefPoseBase::StaticRegisterNativesUAnimGraphNode_RefPoseBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_RefPoseBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_RefPoseBase_NoRegister()
	{
		return UAnimGraphNode_RefPoseBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_RefPoseBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RefPoseBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_RefPoseBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_RefPoseBase, Node), Z_Construct_UScriptStruct_FAnimNode_RefPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::NewProp_Node_MetaData)) }; // 3659335242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_RefPoseBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::ClassParams = {
		&UAnimGraphNode_RefPoseBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_RefPoseBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_RefPoseBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_RefPoseBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_RefPoseBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_RefPoseBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_RefPoseBase>()
	{
		return UAnimGraphNode_RefPoseBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_RefPoseBase);
	UAnimGraphNode_RefPoseBase::~UAnimGraphNode_RefPoseBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_RefPoseBase, UAnimGraphNode_RefPoseBase::StaticClass, TEXT("UAnimGraphNode_RefPoseBase"), &Z_Registration_Info_UClass_UAnimGraphNode_RefPoseBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_RefPoseBase), 1574349725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_2344593167(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_RefPoseBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
