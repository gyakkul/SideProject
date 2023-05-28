// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_StateMachineBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_StateMachineBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_StateMachineBase::StaticRegisterNativesUAnimGraphNode_StateMachineBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_StateMachineBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister()
	{
		return UAnimGraphNode_StateMachineBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorStateMachineGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorStateMachineGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_StateMachineBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_StateMachineBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph_MetaData[] = {
		{ "Comment", "// Editor state machine representation\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_StateMachineBase.h" },
		{ "ToolTip", "Editor state machine representation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph = { "EditorStateMachineGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_StateMachineBase, EditorStateMachineGraph), Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::NewProp_EditorStateMachineGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_StateMachineBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::ClassParams = {
		&UAnimGraphNode_StateMachineBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_StateMachineBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_StateMachineBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_StateMachineBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_StateMachineBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_StateMachineBase>()
	{
		return UAnimGraphNode_StateMachineBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_StateMachineBase);
	UAnimGraphNode_StateMachineBase::~UAnimGraphNode_StateMachineBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_StateMachineBase, UAnimGraphNode_StateMachineBase::StaticClass, TEXT("UAnimGraphNode_StateMachineBase"), &Z_Registration_Info_UClass_UAnimGraphNode_StateMachineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_StateMachineBase), 1709001410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_3164674174(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_StateMachineBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
