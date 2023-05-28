// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeGraphNode_CompositeDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode_CompositeDecorator() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTCompositeNode_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraphNode_CompositeDecorator::StaticRegisterNativesUBehaviorTreeGraphNode_CompositeDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeGraphNode_CompositeDecorator);
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_NoRegister()
	{
		return UBehaviorTreeGraphNode_CompositeDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CompositeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOperations_MetaData[];
#endif
		static void NewProp_bShowOperations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOperations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAbortFlow_MetaData[];
#endif
		static void NewProp_bCanAbortFlow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAbortFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentNodeInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "// The logic graph for this decorator (returning a boolean)\n" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ToolTip", "The logic graph for this decorator (returning a boolean)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName = { "CompositeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, CompositeName), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "/** if set, all logic operations will be shown in description */" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ToolTip", "if set, all logic operations will be shown in description" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_SetBit(void* Obj)
	{
		((UBehaviorTreeGraphNode_CompositeDecorator*)Obj)->bShowOperations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations = { "bShowOperations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBehaviorTreeGraphNode_CompositeDecorator), &Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_MetaData[] = {
		{ "Comment", "/** updated with internal graph changes, set when decorators inside can abort flow */" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
		{ "ToolTip", "updated with internal graph changes, set when decorators inside can abort flow" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_SetBit(void* Obj)
	{
		((UBehaviorTreeGraphNode_CompositeDecorator*)Obj)->bCanAbortFlow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow = { "bCanAbortFlow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBehaviorTreeGraphNode_CompositeDecorator), &Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance = { "ParentNodeInstance", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, ParentNodeInstance), Z_Construct_UClass_UBTCompositeNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_CompositeDecorator.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription = { "CachedDescription", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode_CompositeDecorator, CachedDescription), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_BoundGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CompositeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bShowOperations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_bCanAbortFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_ParentNodeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::NewProp_CachedDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode_CompositeDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::ClassParams = {
		&UBehaviorTreeGraphNode_CompositeDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeGraphNode_CompositeDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeGraphNode_CompositeDecorator.OuterSingleton, Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeGraphNode_CompositeDecorator.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode_CompositeDecorator>()
	{
		return UBehaviorTreeGraphNode_CompositeDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode_CompositeDecorator);
	UBehaviorTreeGraphNode_CompositeDecorator::~UBehaviorTreeGraphNode_CompositeDecorator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_CompositeDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_CompositeDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeGraphNode_CompositeDecorator, UBehaviorTreeGraphNode_CompositeDecorator::StaticClass, TEXT("UBehaviorTreeGraphNode_CompositeDecorator"), &Z_Registration_Info_UClass_UBehaviorTreeGraphNode_CompositeDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeGraphNode_CompositeDecorator), 3587689348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_CompositeDecorator_h_3212425124(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_CompositeDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_CompositeDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
