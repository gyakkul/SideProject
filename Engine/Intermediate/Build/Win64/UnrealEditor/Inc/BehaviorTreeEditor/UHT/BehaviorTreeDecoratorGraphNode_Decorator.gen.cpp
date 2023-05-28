// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeDecoratorGraphNode_Decorator.h"
#include "AIGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeDecoratorGraphNode_Decorator() {}
// Cross Module References
	AIGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FGraphNodeClassData();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeDecoratorGraphNode_Decorator::StaticRegisterNativesUBehaviorTreeDecoratorGraphNode_Decorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeDecoratorGraphNode_Decorator);
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_NoRegister()
	{
		return UBehaviorTreeDecoratorGraphNode_Decorator::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeDecoratorGraphNode_Decorator.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Decorator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_NodeInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Decorator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_NodeInstance = { "NodeInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeDecoratorGraphNode_Decorator, NodeInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_NodeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_NodeInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_ClassData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeDecoratorGraphNode_Decorator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_ClassData = { "ClassData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeDecoratorGraphNode_Decorator, ClassData), Z_Construct_UScriptStruct_FGraphNodeClassData, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_ClassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_ClassData_MetaData)) }; // 1802589264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_NodeInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::NewProp_ClassData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeDecoratorGraphNode_Decorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::ClassParams = {
		&UBehaviorTreeDecoratorGraphNode_Decorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Decorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Decorator.OuterSingleton, Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Decorator.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeDecoratorGraphNode_Decorator>()
	{
		return UBehaviorTreeDecoratorGraphNode_Decorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeDecoratorGraphNode_Decorator);
	UBehaviorTreeDecoratorGraphNode_Decorator::~UBehaviorTreeDecoratorGraphNode_Decorator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Decorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Decorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeDecoratorGraphNode_Decorator, UBehaviorTreeDecoratorGraphNode_Decorator::StaticClass, TEXT("UBehaviorTreeDecoratorGraphNode_Decorator"), &Z_Registration_Info_UClass_UBehaviorTreeDecoratorGraphNode_Decorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeDecoratorGraphNode_Decorator), 2194519664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Decorator_h_3891933729(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Decorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeDecoratorGraphNode_Decorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
