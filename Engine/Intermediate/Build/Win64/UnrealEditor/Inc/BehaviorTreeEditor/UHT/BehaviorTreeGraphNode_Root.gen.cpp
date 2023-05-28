// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode_Root() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Root();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Root_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraphNode_Root::StaticRegisterNativesUBehaviorTreeGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeGraphNode_Root);
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Root_NoRegister()
	{
		return UBehaviorTreeGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlackboardAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Root node of this behavior tree, holds Blackboard data */" },
		{ "IncludePath", "BehaviorTreeGraphNode_Root.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_Root.h" },
		{ "ToolTip", "Root node of this behavior tree, holds Blackboard data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::NewProp_BlackboardAsset_MetaData[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_Root.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraphNode_Root, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::NewProp_BlackboardAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::NewProp_BlackboardAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::NewProp_BlackboardAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::ClassParams = {
		&UBehaviorTreeGraphNode_Root::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Root.OuterSingleton, Z_Construct_UClass_UBehaviorTreeGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Root.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode_Root>()
	{
		return UBehaviorTreeGraphNode_Root::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode_Root);
	UBehaviorTreeGraphNode_Root::~UBehaviorTreeGraphNode_Root() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeGraphNode_Root, UBehaviorTreeGraphNode_Root::StaticClass, TEXT("UBehaviorTreeGraphNode_Root"), &Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeGraphNode_Root), 1962448038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_51187835(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
