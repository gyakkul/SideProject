// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintVariableNodeSpawner.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintVariableNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableDescription();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintVariableNodeSpawner::StaticRegisterNativesUBlueprintVariableNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintVariableNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner_NoRegister()
	{
		return UBlueprintVariableNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVarOuter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalVarOuter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalVarDesc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVarDesc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFieldNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning variable getter/setter nodes. Serves as the \"action\"\n * portion for certain FBlueprintActionMenuItems. Evolved from \n * FEdGraphSchemaAction_K2Var, and can spawn nodes for both member-variables and \n * local function variables.\n */" },
		{ "IncludePath", "BlueprintVariableNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintVariableNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning variable getter/setter nodes. Serves as the \"action\"\nportion for certain FBlueprintActionMenuItems. Evolved from\nFEdGraphSchemaAction_K2Var, and can spawn nodes for both member-variables and\nlocal function variables." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter_MetaData[] = {
		{ "Comment", "/** The graph that the local variable belongs to (if this is a local variable spawner). */" },
		{ "ModuleRelativePath", "Classes/BlueprintVariableNodeSpawner.h" },
		{ "ToolTip", "The graph that the local variable belongs to (if this is a local variable spawner)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter = { "LocalVarOuter", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintVariableNodeSpawner, LocalVarOuter), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Classes/BlueprintVariableNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc = { "LocalVarDesc", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintVariableNodeSpawner, LocalVarDesc), Z_Construct_UScriptStruct_FBPVariableDescription, METADATA_PARAMS(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc_MetaData)) }; // 1436727657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::NewProp_LocalVarDesc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintVariableNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::ClassParams = {
		&UBlueprintVariableNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintVariableNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintVariableNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintVariableNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintVariableNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintVariableNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintVariableNodeSpawner>()
	{
		return UBlueprintVariableNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintVariableNodeSpawner);
	UBlueprintVariableNodeSpawner::~UBlueprintVariableNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintVariableNodeSpawner, UBlueprintVariableNodeSpawner::StaticClass, TEXT("UBlueprintVariableNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintVariableNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintVariableNodeSpawner), 1280844057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_2472517554(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintVariableNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
