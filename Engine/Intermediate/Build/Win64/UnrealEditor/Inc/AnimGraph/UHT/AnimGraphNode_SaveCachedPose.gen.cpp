// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_SaveCachedPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SaveCachedPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_SaveCachedPose::StaticRegisterNativesUAnimGraphNode_SaveCachedPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SaveCachedPose);
	UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_NoRegister()
	{
		return UAnimGraphNode_SaveCachedPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CacheName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_SaveCachedPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SaveCachedPose.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SaveCachedPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_SaveCachedPose, Node), Z_Construct_UScriptStruct_FAnimNode_SaveCachedPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_Node_MetaData)) }; // 415237874
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_CacheName_MetaData[] = {
		{ "Category", "CachedPose" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SaveCachedPose.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_CacheName = { "CacheName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_SaveCachedPose, CacheName), METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_CacheName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_CacheName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::NewProp_CacheName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SaveCachedPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::ClassParams = {
		&UAnimGraphNode_SaveCachedPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SaveCachedPose()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SaveCachedPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SaveCachedPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SaveCachedPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SaveCachedPose.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_SaveCachedPose>()
	{
		return UAnimGraphNode_SaveCachedPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SaveCachedPose);
	UAnimGraphNode_SaveCachedPose::~UAnimGraphNode_SaveCachedPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SaveCachedPose, UAnimGraphNode_SaveCachedPose::StaticClass, TEXT("UAnimGraphNode_SaveCachedPose"), &Z_Registration_Info_UClass_UAnimGraphNode_SaveCachedPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SaveCachedPose), 155487380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_3885562746(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SaveCachedPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
