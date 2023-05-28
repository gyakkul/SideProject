// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_TwoBoneIK.h"
#include "BoneControllers/AnimNode_TwoBoneIK.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_TwoBoneIK() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwoBoneIK();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_TwoBoneIK::StaticRegisterNativesUAnimGraphNode_TwoBoneIK()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_TwoBoneIK);
	UClass* Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_NoRegister()
	{
		return UAnimGraphNode_TwoBoneIK::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_TwoBoneIK.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TwoBoneIK.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TwoBoneIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_TwoBoneIK, Node), Z_Construct_UScriptStruct_FAnimNode_TwoBoneIK, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_Node_MetaData)) }; // 1769009409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable drawing of the debug information of the node */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TwoBoneIK.h" },
		{ "ToolTip", "Enable drawing of the debug information of the node" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((UAnimGraphNode_TwoBoneIK*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_TwoBoneIK), &Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::NewProp_bEnableDebugDraw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_TwoBoneIK>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::ClassParams = {
		&UAnimGraphNode_TwoBoneIK::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_TwoBoneIK()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_TwoBoneIK.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_TwoBoneIK.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_TwoBoneIK_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_TwoBoneIK.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_TwoBoneIK>()
	{
		return UAnimGraphNode_TwoBoneIK::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_TwoBoneIK);
	UAnimGraphNode_TwoBoneIK::~UAnimGraphNode_TwoBoneIK() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_TwoBoneIK)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_TwoBoneIK, UAnimGraphNode_TwoBoneIK::StaticClass, TEXT("UAnimGraphNode_TwoBoneIK"), &Z_Registration_Info_UClass_UAnimGraphNode_TwoBoneIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_TwoBoneIK), 2871525806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_2523093975(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwoBoneIK_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
