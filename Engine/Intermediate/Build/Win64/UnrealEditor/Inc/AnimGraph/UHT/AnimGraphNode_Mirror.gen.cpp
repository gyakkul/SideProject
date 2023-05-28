// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_Mirror.h"
#include "AnimNodes/AnimNode_Mirror.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_Mirror() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Mirror();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_Mirror::StaticRegisterNativesUAnimGraphNode_Mirror()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_Mirror);
	UClass* Z_Construct_UClass_UAnimGraphNode_Mirror_NoRegister()
	{
		return UAnimGraphNode_Mirror::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_Mirror_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_Mirror.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Mirror.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_Mirror.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_Mirror, Node), Z_Construct_UScriptStruct_FAnimNode_Mirror, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::NewProp_Node_MetaData)) }; // 4232100041
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_Mirror>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::ClassParams = {
		&UAnimGraphNode_Mirror::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_Mirror()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_Mirror.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_Mirror.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_Mirror_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_Mirror.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_Mirror>()
	{
		return UAnimGraphNode_Mirror::StaticClass();
	}
	UAnimGraphNode_Mirror::UAnimGraphNode_Mirror(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_Mirror);
	UAnimGraphNode_Mirror::~UAnimGraphNode_Mirror() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_Mirror, UAnimGraphNode_Mirror::StaticClass, TEXT("UAnimGraphNode_Mirror"), &Z_Registration_Info_UClass_UAnimGraphNode_Mirror, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_Mirror), 1691945599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_172250573(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_Mirror_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
