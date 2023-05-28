// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_BlendSpaceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendSpaceBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_BlendSpaceBase::StaticRegisterNativesUAnimGraphNode_BlendSpaceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_BlendSpaceBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_NoRegister()
	{
		return UAnimGraphNode_BlendSpaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_BlendSpaceBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendSpaceBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendSpaceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::ClassParams = {
		&UAnimGraphNode_BlendSpaceBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_BlendSpaceBase>()
	{
		return UAnimGraphNode_BlendSpaceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendSpaceBase);
	UAnimGraphNode_BlendSpaceBase::~UAnimGraphNode_BlendSpaceBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_BlendSpaceBase, UAnimGraphNode_BlendSpaceBase::StaticClass, TEXT("UAnimGraphNode_BlendSpaceBase"), &Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_BlendSpaceBase), 4168271150U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceBase_h_2109610653(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
