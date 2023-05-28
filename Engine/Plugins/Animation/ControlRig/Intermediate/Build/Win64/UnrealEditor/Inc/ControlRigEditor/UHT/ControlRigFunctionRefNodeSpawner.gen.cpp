// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/NodeSpawners/ControlRigFunctionRefNodeSpawner.h"
#include "RigVMCore/RigVMGraphFunctionDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigFunctionRefNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigFunctionRefNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigFunctionRefNodeSpawner::StaticRegisterNativesUControlRigFunctionRefNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigFunctionRefNodeSpawner);
	UClass* Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_NoRegister()
	{
		return UControlRigFunctionRefNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedPublicFunctionHeader_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedPublicFunctionHeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalFunction_MetaData[];
#endif
		static void NewProp_bIsLocalFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/NodeSpawners/ControlRigFunctionRefNodeSpawner.h" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigFunctionRefNodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader_MetaData[] = {
		{ "Comment", "/** The public function definition we will spawn from [optional] */" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigFunctionRefNodeSpawner.h" },
		{ "ToolTip", "The public function definition we will spawn from [optional]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader = { "ReferencedPublicFunctionHeader", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigFunctionRefNodeSpawner, ReferencedPublicFunctionHeader), Z_Construct_UScriptStruct_FRigVMGraphFunctionHeader, METADATA_PARAMS(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader_MetaData)) }; // 767263506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_MetaData[] = {
		{ "Comment", "/** Marked as true for local function definitions */" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigFunctionRefNodeSpawner.h" },
		{ "ToolTip", "Marked as true for local function definitions" },
	};
#endif
	void Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_SetBit(void* Obj)
	{
		((UControlRigFunctionRefNodeSpawner*)Obj)->bIsLocalFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction = { "bIsLocalFunction", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigFunctionRefNodeSpawner), &Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigFunctionRefNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigFunctionRefNodeSpawner, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_ReferencedPublicFunctionHeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_bIsLocalFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::NewProp_AssetPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigFunctionRefNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::ClassParams = {
		&UControlRigFunctionRefNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigFunctionRefNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UControlRigFunctionRefNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigFunctionRefNodeSpawner.OuterSingleton, Z_Construct_UClass_UControlRigFunctionRefNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigFunctionRefNodeSpawner.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigFunctionRefNodeSpawner>()
	{
		return UControlRigFunctionRefNodeSpawner::StaticClass();
	}
	UControlRigFunctionRefNodeSpawner::UControlRigFunctionRefNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigFunctionRefNodeSpawner);
	UControlRigFunctionRefNodeSpawner::~UControlRigFunctionRefNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigFunctionRefNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigFunctionRefNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigFunctionRefNodeSpawner, UControlRigFunctionRefNodeSpawner::StaticClass, TEXT("UControlRigFunctionRefNodeSpawner"), &Z_Registration_Info_UClass_UControlRigFunctionRefNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigFunctionRefNodeSpawner), 999211376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigFunctionRefNodeSpawner_h_875994890(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigFunctionRefNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigFunctionRefNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
