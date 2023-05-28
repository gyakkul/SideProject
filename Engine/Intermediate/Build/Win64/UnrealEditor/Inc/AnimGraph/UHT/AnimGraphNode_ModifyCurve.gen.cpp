// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_ModifyCurve.h"
#include "AnimNodes/AnimNode_ModifyCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_ModifyCurve() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyCurve();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_ModifyCurve_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_ModifyCurve::StaticRegisterNativesUAnimGraphNode_ModifyCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_ModifyCurve);
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyCurve_NoRegister()
	{
		return UAnimGraphNode_ModifyCurve::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "IncludePath", "AnimGraphNode_ModifyCurve.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyCurve.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_ModifyCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_ModifyCurve, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyCurve, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::NewProp_Node_MetaData)) }; // 1839597080
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_ModifyCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::ClassParams = {
		&UAnimGraphNode_ModifyCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_ModifyCurve()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_ModifyCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_ModifyCurve.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_ModifyCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_ModifyCurve.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_ModifyCurve>()
	{
		return UAnimGraphNode_ModifyCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_ModifyCurve);
	UAnimGraphNode_ModifyCurve::~UAnimGraphNode_ModifyCurve() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_ModifyCurve, UAnimGraphNode_ModifyCurve::StaticClass, TEXT("UAnimGraphNode_ModifyCurve"), &Z_Registration_Info_UClass_UAnimGraphNode_ModifyCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_ModifyCurve), 1101602217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_1061863095(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_ModifyCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
