// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_IdentityPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_IdentityPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_IdentityPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_IdentityPose_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_RefPoseBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_IdentityPose::StaticRegisterNativesUAnimGraphNode_IdentityPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_IdentityPose);
	UClass* Z_Construct_UClass_UAnimGraphNode_IdentityPose_NoRegister()
	{
		return UAnimGraphNode_IdentityPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_RefPoseBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_IdentityPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_IdentityPose.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_IdentityPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::ClassParams = {
		&UAnimGraphNode_IdentityPose::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_IdentityPose()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_IdentityPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_IdentityPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_IdentityPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_IdentityPose.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_IdentityPose>()
	{
		return UAnimGraphNode_IdentityPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_IdentityPose);
	UAnimGraphNode_IdentityPose::~UAnimGraphNode_IdentityPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_IdentityPose, UAnimGraphNode_IdentityPose::StaticClass, TEXT("UAnimGraphNode_IdentityPose"), &Z_Registration_Info_UClass_UAnimGraphNode_IdentityPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_IdentityPose), 2467843411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_1162246198(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_IdentityPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
