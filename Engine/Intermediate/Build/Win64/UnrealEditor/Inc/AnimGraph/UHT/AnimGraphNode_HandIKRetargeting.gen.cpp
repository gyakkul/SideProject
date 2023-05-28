// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_HandIKRetargeting.h"
#include "BoneControllers/AnimNode_HandIKRetargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_HandIKRetargeting() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_HandIKRetargeting::StaticRegisterNativesUAnimGraphNode_HandIKRetargeting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_HandIKRetargeting);
	UClass* Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_NoRegister()
	{
		return UAnimGraphNode_HandIKRetargeting::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_HandIKRetargeting.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_HandIKRetargeting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_HandIKRetargeting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_HandIKRetargeting, Node), Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::NewProp_Node_MetaData)) }; // 3911275275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_HandIKRetargeting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::ClassParams = {
		&UAnimGraphNode_HandIKRetargeting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_HandIKRetargeting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_HandIKRetargeting.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_HandIKRetargeting.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_HandIKRetargeting>()
	{
		return UAnimGraphNode_HandIKRetargeting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_HandIKRetargeting);
	UAnimGraphNode_HandIKRetargeting::~UAnimGraphNode_HandIKRetargeting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_HandIKRetargeting, UAnimGraphNode_HandIKRetargeting::StaticClass, TEXT("UAnimGraphNode_HandIKRetargeting"), &Z_Registration_Info_UClass_UAnimGraphNode_HandIKRetargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_HandIKRetargeting), 2516624403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_1619700112(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_HandIKRetargeting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
