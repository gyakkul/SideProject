// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_AimOffsetLookAt.h"
#include "AnimNodes/AnimNode_AimOffsetLookAt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AimOffsetLookAt() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_AimOffsetLookAt::StaticRegisterNativesUAnimGraphNode_AimOffsetLookAt()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AimOffsetLookAt);
	UClass* Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_NoRegister()
	{
		return UAnimGraphNode_AimOffsetLookAt::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Coordinates" },
		{ "IncludePath", "AnimGraphNode_AimOffsetLookAt.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AimOffsetLookAt.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AimOffsetLookAt.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_AimOffsetLookAt, Node), Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::NewProp_Node_MetaData)) }; // 2616417244
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AimOffsetLookAt>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::ClassParams = {
		&UAnimGraphNode_AimOffsetLookAt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_AimOffsetLookAt.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AimOffsetLookAt.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_AimOffsetLookAt.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_AimOffsetLookAt>()
	{
		return UAnimGraphNode_AimOffsetLookAt::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AimOffsetLookAt);
	UAnimGraphNode_AimOffsetLookAt::~UAnimGraphNode_AimOffsetLookAt() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AimOffsetLookAt_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AimOffsetLookAt_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AimOffsetLookAt, UAnimGraphNode_AimOffsetLookAt::StaticClass, TEXT("UAnimGraphNode_AimOffsetLookAt"), &Z_Registration_Info_UClass_UAnimGraphNode_AimOffsetLookAt, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AimOffsetLookAt), 2127271700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AimOffsetLookAt_h_1146124593(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AimOffsetLookAt_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AimOffsetLookAt_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
