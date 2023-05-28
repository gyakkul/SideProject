// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_UseCachedPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_UseCachedPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_UseCachedPose();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_UseCachedPose::StaticRegisterNativesUAnimGraphNode_UseCachedPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_UseCachedPose);
	UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose_NoRegister()
	{
		return UAnimGraphNode_UseCachedPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveCachedPoseNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SaveCachedPoseNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOfCache_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameOfCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_UseCachedPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_UseCachedPose.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_UseCachedPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_UseCachedPose, Node), Z_Construct_UScriptStruct_FAnimNode_UseCachedPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node_MetaData)) }; // 3109715080
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_UseCachedPose.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode = { "SaveCachedPoseNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_UseCachedPose, SaveCachedPoseNode), Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimGraphNode_UseCachedPose.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache = { "NameOfCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_UseCachedPose, NameOfCache), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_SaveCachedPoseNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::NewProp_NameOfCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_UseCachedPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::ClassParams = {
		&UAnimGraphNode_UseCachedPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_UseCachedPose()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_UseCachedPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_UseCachedPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_UseCachedPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_UseCachedPose.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_UseCachedPose>()
	{
		return UAnimGraphNode_UseCachedPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_UseCachedPose);
	UAnimGraphNode_UseCachedPose::~UAnimGraphNode_UseCachedPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_UseCachedPose, UAnimGraphNode_UseCachedPose::StaticClass, TEXT("UAnimGraphNode_UseCachedPose"), &Z_Registration_Info_UClass_UAnimGraphNode_UseCachedPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_UseCachedPose), 3447288074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_4083845872(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_UseCachedPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
