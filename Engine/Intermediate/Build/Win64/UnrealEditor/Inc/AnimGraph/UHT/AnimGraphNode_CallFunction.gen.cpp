// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimGraphNode_CallFunction.h"
#include "AnimNodes/AnimNode_CallFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_CallFunction() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CallFunction();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CallFunction_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CallFunction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_CallFunction::StaticRegisterNativesUAnimGraphNode_CallFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_CallFunction);
	UClass* Z_Construct_UClass_UAnimGraphNode_CallFunction_NoRegister()
	{
		return UAnimGraphNode_CallFunction::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InnerGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallFunctionPrototype_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CallFunctionPrototype;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_CallFunction.h" },
		{ "Keywords", "Event" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_CallFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_InnerGraph_MetaData[] = {
		{ "Comment", "// Inner graph we maintain to hook into the function call machinery\n" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_CallFunction.h" },
		{ "ToolTip", "Inner graph we maintain to hook into the function call machinery" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_InnerGraph = { "InnerGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CallFunction, InnerGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_InnerGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_InnerGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_CallFunctionPrototype_MetaData[] = {
		{ "Comment", "// Inner node we maintain to hook into the function call machinery\n" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_CallFunction.h" },
		{ "ToolTip", "Inner node we maintain to hook into the function call machinery" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_CallFunctionPrototype = { "CallFunctionPrototype", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CallFunction, CallFunctionPrototype), Z_Construct_UClass_UK2Node_CallFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_CallFunctionPrototype_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_CallFunctionPrototype_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_CallFunction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CallFunction, Node), Z_Construct_UScriptStruct_FAnimNode_CallFunction, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_Node_MetaData)) }; // 4182766023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_InnerGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_CallFunctionPrototype,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_CallFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::ClassParams = {
		&UAnimGraphNode_CallFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_CallFunction()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_CallFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_CallFunction.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_CallFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_CallFunction.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_CallFunction>()
	{
		return UAnimGraphNode_CallFunction::StaticClass();
	}
	UAnimGraphNode_CallFunction::UAnimGraphNode_CallFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_CallFunction);
	UAnimGraphNode_CallFunction::~UAnimGraphNode_CallFunction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_CallFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_CallFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_CallFunction, UAnimGraphNode_CallFunction::StaticClass, TEXT("UAnimGraphNode_CallFunction"), &Z_Registration_Info_UClass_UAnimGraphNode_CallFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_CallFunction), 17208208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_CallFunction_h_1131314451(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_CallFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimGraphNode_CallFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
