// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_BlendSpaceGraphBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BlendSpaceGraphBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UBlendSpaceGraph_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_BlendSpaceGraphBase::StaticRegisterNativesUAnimGraphNode_BlendSpaceGraphBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_BlendSpaceGraphBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_NoRegister()
	{
		return UAnimGraphNode_BlendSpaceGraphBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlendSpaceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaceGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpaceGraph;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_BlendSpaceGraphBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendSpaceGraphBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Comment", "// Internal blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Internal blendspace" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_BlendSpaceGraphBase, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceClass_MetaData[] = {
		{ "Comment", "// Blendspace class, for template nodes\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Blendspace class, for template nodes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceClass = { "BlendSpaceClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_BlendSpaceGraphBase, BlendSpaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceGraph_MetaData[] = {
		{ "Comment", "// Dummy blendspace graph (used for navigation only)\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Dummy blendspace graph (used for navigation only)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceGraph = { "BlendSpaceGraph", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_BlendSpaceGraphBase, BlendSpaceGraph), Z_Construct_UClass_UBlendSpaceGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceGraph_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs_Inner = { "Graphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs_MetaData[] = {
		{ "Comment", "// Linked animation graphs for sample points\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Linked animation graphs for sample points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_BlendSpaceGraphBase, Graphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpaceGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::NewProp_Graphs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BlendSpaceGraphBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::ClassParams = {
		&UAnimGraphNode_BlendSpaceGraphBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceGraphBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceGraphBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceGraphBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_BlendSpaceGraphBase>()
	{
		return UAnimGraphNode_BlendSpaceGraphBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BlendSpaceGraphBase);
	UAnimGraphNode_BlendSpaceGraphBase::~UAnimGraphNode_BlendSpaceGraphBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraphBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraphBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_BlendSpaceGraphBase, UAnimGraphNode_BlendSpaceGraphBase::StaticClass, TEXT("UAnimGraphNode_BlendSpaceGraphBase"), &Z_Registration_Info_UClass_UAnimGraphNode_BlendSpaceGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_BlendSpaceGraphBase), 27878960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraphBase_h_2107335845(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraphBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BlendSpaceGraphBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
