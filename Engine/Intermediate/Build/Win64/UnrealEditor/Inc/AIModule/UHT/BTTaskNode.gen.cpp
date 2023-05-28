// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/BehaviorTree/BTTaskNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskNode() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UBTTaskNode::StaticRegisterNativesUBTTaskNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTaskNode);
	UClass* Z_Construct_UClass_UBTTaskNode_NoRegister()
	{
		return UBTTaskNode::StaticClass();
	}
	struct Z_Construct_UClass_UBTTaskNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Services_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Services;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRestartSelf_MetaData[];
#endif
		static void NewProp_bIgnoreRestartSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRestartSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTaskNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Task are leaf nodes of behavior tree, which perform actual actions\n *\n * Because some of them can be instanced for specific AI, following virtual functions are not marked as const:\n *  - ExecuteTask\n *  - AbortTask\n *  - TickTask\n *  - OnMessage\n *\n * If your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\n * Template nodes are shared across all behavior tree components using the same tree asset and must store\n * their runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )\n *\n */" },
		{ "IncludePath", "BehaviorTree/BTTaskNode.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "Task are leaf nodes of behavior tree, which perform actual actions\n\nBecause some of them can be instanced for specific AI, following virtual functions are not marked as const:\n - ExecuteTask\n - AbortTask\n - TickTask\n - OnMessage\n\nIf your node is not being instanced (default behavior), DO NOT change any properties of object within those functions!\nTemplate nodes are shared across all behavior tree components using the same tree asset and must store\ntheir runtime properties in provided NodeMemory block (allocation size determined by GetInstanceMemorySize() )" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_Inner = { "Services", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBTService_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_MetaData[] = {
		{ "Comment", "/** service nodes */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "service nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBTTaskNode, Services), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** if set, task search will be discarded when this task is selected to execute but is already running */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BTTaskNode.h" },
		{ "ToolTip", "if set, task search will be discarded when this task is selected to execute but is already running" },
	};
#endif
	void Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_SetBit(void* Obj)
	{
		((UBTTaskNode*)Obj)->bIgnoreRestartSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf = { "bIgnoreRestartSelf", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UBTTaskNode), &Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTaskNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_Services,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTaskNode_Statics::NewProp_bIgnoreRestartSelf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTaskNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_Statics::ClassParams = {
		&UBTTaskNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTaskNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTaskNode()
	{
		if (!Z_Registration_Info_UClass_UBTTaskNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode.OuterSingleton, Z_Construct_UClass_UBTTaskNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTaskNode.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UBTTaskNode>()
	{
		return UBTTaskNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode);
	UBTTaskNode::~UBTTaskNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode, UBTTaskNode::StaticClass, TEXT("UBTTaskNode"), &Z_Registration_Info_UClass_UBTTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode), 370656700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_1585979274(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
