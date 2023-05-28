// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimBlueprintExtension_LinkedAnimGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintExtension_LinkedAnimGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintExtension_LinkedAnimGraph::StaticRegisterNativesUAnimBlueprintExtension_LinkedAnimGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintExtension_LinkedAnimGraph);
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_NoRegister()
	{
		return UAnimBlueprintExtension_LinkedAnimGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimBlueprintExtension_LinkedAnimGraph.h" },
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_LinkedAnimGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintExtension_LinkedAnimGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::ClassParams = {
		&UAnimBlueprintExtension_LinkedAnimGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintExtension_LinkedAnimGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintExtension_LinkedAnimGraph.OuterSingleton, Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintExtension_LinkedAnimGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintExtension_LinkedAnimGraph>()
	{
		return UAnimBlueprintExtension_LinkedAnimGraph::StaticClass();
	}
	UAnimBlueprintExtension_LinkedAnimGraph::UAnimBlueprintExtension_LinkedAnimGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintExtension_LinkedAnimGraph);
	UAnimBlueprintExtension_LinkedAnimGraph::~UAnimBlueprintExtension_LinkedAnimGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_LinkedAnimGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_LinkedAnimGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintExtension_LinkedAnimGraph, UAnimBlueprintExtension_LinkedAnimGraph::StaticClass, TEXT("UAnimBlueprintExtension_LinkedAnimGraph"), &Z_Registration_Info_UClass_UAnimBlueprintExtension_LinkedAnimGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintExtension_LinkedAnimGraph), 3714641589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_LinkedAnimGraph_h_1674662708(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_LinkedAnimGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_LinkedAnimGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
