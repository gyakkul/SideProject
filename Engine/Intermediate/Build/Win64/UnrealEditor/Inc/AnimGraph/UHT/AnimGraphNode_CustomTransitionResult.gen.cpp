// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_CustomTransitionResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_CustomTransitionResult() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateResult();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_CustomTransitionResult::StaticRegisterNativesUAnimGraphNode_CustomTransitionResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_CustomTransitionResult);
	UClass* Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_NoRegister()
	{
		return UAnimGraphNode_CustomTransitionResult::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_StateResult,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_CustomTransitionResult.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CustomTransitionResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_CustomTransitionResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::ClassParams = {
		&UAnimGraphNode_CustomTransitionResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_CustomTransitionResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_CustomTransitionResult.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_CustomTransitionResult.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_CustomTransitionResult>()
	{
		return UAnimGraphNode_CustomTransitionResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_CustomTransitionResult);
	UAnimGraphNode_CustomTransitionResult::~UAnimGraphNode_CustomTransitionResult() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomTransitionResult_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomTransitionResult_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult, UAnimGraphNode_CustomTransitionResult::StaticClass, TEXT("UAnimGraphNode_CustomTransitionResult"), &Z_Registration_Info_UClass_UAnimGraphNode_CustomTransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_CustomTransitionResult), 980673994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomTransitionResult_h_615617914(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomTransitionResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomTransitionResult_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
