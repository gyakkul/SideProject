// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MultiGate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MultiGate() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExecutionSequence();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MultiGate();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MultiGate_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_MultiGate::StaticRegisterNativesUK2Node_MultiGate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MultiGate);
	UClass* Z_Construct_UClass_UK2Node_MultiGate_NoRegister()
	{
		return UK2Node_MultiGate::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MultiGate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MultiGate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ExecutionSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MultiGate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MultiGate.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MultiGate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode_MetaData[] = {
		{ "Comment", "/** Reference to the integer that contains */" },
		{ "ModuleRelativePath", "Classes/K2Node_MultiGate.h" },
		{ "ToolTip", "Reference to the integer that contains" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode = { "DataNode", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_MultiGate, DataNode), Z_Construct_UClass_UK2Node_TemporaryVariable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MultiGate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MultiGate_Statics::NewProp_DataNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MultiGate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MultiGate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MultiGate_Statics::ClassParams = {
		&UK2Node_MultiGate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MultiGate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MultiGate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MultiGate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MultiGate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MultiGate()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MultiGate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MultiGate.OuterSingleton, Z_Construct_UClass_UK2Node_MultiGate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MultiGate.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MultiGate>()
	{
		return UK2Node_MultiGate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MultiGate);
	UK2Node_MultiGate::~UK2Node_MultiGate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MultiGate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MultiGate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MultiGate, UK2Node_MultiGate::StaticClass, TEXT("UK2Node_MultiGate"), &Z_Registration_Info_UClass_UK2Node_MultiGate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MultiGate), 4249147926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MultiGate_h_3251154952(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MultiGate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MultiGate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
