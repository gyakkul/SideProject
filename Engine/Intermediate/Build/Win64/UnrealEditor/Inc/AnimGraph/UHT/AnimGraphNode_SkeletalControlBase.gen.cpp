// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_SkeletalControlBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SkeletalControlBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_SkeletalControlBase::StaticRegisterNativesUAnimGraphNode_SkeletalControlBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SkeletalControlBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_NoRegister()
	{
		return UAnimGraphNode_SkeletalControlBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base class for the 'source version' of all skeletal control animation graph nodes\n * (nodes that manipulate the pose rather than playing animations to create a pose or blending between poses)\n *\n * Concrete subclasses should contain a member struct derived from FAnimNode_SkeletalControlBase\n */" },
		{ "IncludePath", "AnimGraphNode_SkeletalControlBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SkeletalControlBase.h" },
		{ "ToolTip", "This is the base class for the 'source version' of all skeletal control animation graph nodes\n(nodes that manipulate the pose rather than playing animations to create a pose or blending between poses)\n\nConcrete subclasses should contain a member struct derived from FAnimNode_SkeletalControlBase" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SkeletalControlBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::ClassParams = {
		&UAnimGraphNode_SkeletalControlBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SkeletalControlBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SkeletalControlBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SkeletalControlBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_SkeletalControlBase>()
	{
		return UAnimGraphNode_SkeletalControlBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SkeletalControlBase);
	UAnimGraphNode_SkeletalControlBase::~UAnimGraphNode_SkeletalControlBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase, UAnimGraphNode_SkeletalControlBase::StaticClass, TEXT("UAnimGraphNode_SkeletalControlBase"), &Z_Registration_Info_UClass_UAnimGraphNode_SkeletalControlBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SkeletalControlBase), 1849643797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_3262200645(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SkeletalControlBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
