// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_PoseHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PoseHandler() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_PoseHandler::StaticRegisterNativesUAnimGraphNode_PoseHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PoseHandler);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler_NoRegister()
	{
		return UAnimGraphNode_PoseHandler::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_PoseHandler.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PoseHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::ClassParams = {
		&UAnimGraphNode_PoseHandler::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PoseHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PoseHandler.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PoseHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PoseHandler.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_PoseHandler>()
	{
		return UAnimGraphNode_PoseHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PoseHandler);
	UAnimGraphNode_PoseHandler::~UAnimGraphNode_PoseHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PoseHandler, UAnimGraphNode_PoseHandler::StaticClass, TEXT("UAnimGraphNode_PoseHandler"), &Z_Registration_Info_UClass_UAnimGraphNode_PoseHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PoseHandler), 688119163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_3118291704(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
