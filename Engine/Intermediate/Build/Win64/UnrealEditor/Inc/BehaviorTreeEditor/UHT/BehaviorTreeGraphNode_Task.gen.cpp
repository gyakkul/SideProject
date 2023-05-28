// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeGraphNode_Task.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraphNode_Task() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Task();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Task_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraphNode_Task::StaticRegisterNativesUBehaviorTreeGraphNode_Task()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeGraphNode_Task);
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Task_NoRegister()
	{
		return UBehaviorTreeGraphNode_Task::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraphNode_Task.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraphNode_Task.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraphNode_Task>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::ClassParams = {
		&UBehaviorTreeGraphNode_Task::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraphNode_Task()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Task.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Task.OuterSingleton, Z_Construct_UClass_UBehaviorTreeGraphNode_Task_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Task.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraphNode_Task>()
	{
		return UBehaviorTreeGraphNode_Task::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraphNode_Task);
	UBehaviorTreeGraphNode_Task::~UBehaviorTreeGraphNode_Task() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Task_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Task_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeGraphNode_Task, UBehaviorTreeGraphNode_Task::StaticClass, TEXT("UBehaviorTreeGraphNode_Task"), &Z_Registration_Info_UClass_UBehaviorTreeGraphNode_Task, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeGraphNode_Task), 68758529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Task_h_2385176456(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Task_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraphNode_Task_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
