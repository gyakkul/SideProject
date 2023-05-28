// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintBoundEventNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintBoundEventNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEventNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintBoundEventNodeSpawner::StaticRegisterNativesUBlueprintBoundEventNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintBoundEventNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_NoRegister()
	{
		return UBlueprintBoundEventNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_EventDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintEventNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning UK2Node_Event nodes. Acts as the \"action\" portion of\n * certain FBlueprintActionMenuItems. Will not spawn a new event node if one\n * associated with the specified function already exits (instead, Invoke() will\n * return the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and \n * FEdGraphSchemaAction_K2ViewNode.\n */" },
		{ "IncludePath", "BlueprintBoundEventNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintBoundEventNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning UK2Node_Event nodes. Acts as the \"action\" portion of\ncertain FBlueprintActionMenuItems. Will not spawn a new event node if one\nassociated with the specified function already exits (instead, Invoke() will\nreturn the existing one). Evolved from FEdGraphSchemaAction_K2AddEvent and\nFEdGraphSchemaAction_K2ViewNode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Classes/BlueprintBoundEventNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate = { "EventDelegate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintBoundEventNodeSpawner, EventDelegate), &FMulticastDelegateProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::NewProp_EventDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintBoundEventNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::ClassParams = {
		&UBlueprintBoundEventNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintBoundEventNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintBoundEventNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintBoundEventNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintBoundEventNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintBoundEventNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintBoundEventNodeSpawner>()
	{
		return UBlueprintBoundEventNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintBoundEventNodeSpawner);
	UBlueprintBoundEventNodeSpawner::~UBlueprintBoundEventNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintBoundEventNodeSpawner, UBlueprintBoundEventNodeSpawner::StaticClass, TEXT("UBlueprintBoundEventNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintBoundEventNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintBoundEventNodeSpawner), 1476946186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_1891653562(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintBoundEventNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
