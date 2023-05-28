// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraph/AnimGraphNode_SlopeWarping.h"
#include "BoneControllers/AnimNode_SlopeWarping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SlopeWarping() {}
// Cross Module References
	ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SlopeWarping();
	ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SlopeWarping_NoRegister();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SlopeWarping();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_AnimationWarpingEditor();
// End Cross Module References
	void UAnimGraphNode_SlopeWarping::StaticRegisterNativesUAnimGraphNode_SlopeWarping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SlopeWarping);
	UClass* Z_Construct_UClass_UAnimGraphNode_SlopeWarping_NoRegister()
	{
		return UAnimGraphNode_SlopeWarping::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraph/AnimGraphNode_SlopeWarping.h" },
		{ "ModuleRelativePath", "Public/AnimGraph/AnimGraphNode_SlopeWarping.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraph/AnimGraphNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_SlopeWarping, Node), Z_Construct_UScriptStruct_FAnimNode_SlopeWarping, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::NewProp_Node_MetaData)) }; // 3906354243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SlopeWarping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::ClassParams = {
		&UAnimGraphNode_SlopeWarping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SlopeWarping()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SlopeWarping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SlopeWarping.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SlopeWarping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SlopeWarping.OuterSingleton;
	}
	template<> ANIMATIONWARPINGEDITOR_API UClass* StaticClass<UAnimGraphNode_SlopeWarping>()
	{
		return UAnimGraphNode_SlopeWarping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SlopeWarping);
	UAnimGraphNode_SlopeWarping::~UAnimGraphNode_SlopeWarping() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_SlopeWarping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_SlopeWarping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SlopeWarping, UAnimGraphNode_SlopeWarping::StaticClass, TEXT("UAnimGraphNode_SlopeWarping"), &Z_Registration_Info_UClass_UAnimGraphNode_SlopeWarping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SlopeWarping), 210734716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_SlopeWarping_h_3741518292(TEXT("/Script/AnimationWarpingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_SlopeWarping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_SlopeWarping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
