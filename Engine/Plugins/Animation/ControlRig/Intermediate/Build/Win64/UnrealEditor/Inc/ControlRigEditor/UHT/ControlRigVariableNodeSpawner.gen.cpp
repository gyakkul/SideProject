// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/NodeSpawners/ControlRigVariableNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigVariableNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigVariableNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigVariableNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigVariableNodeSpawner::StaticRegisterNativesUControlRigVariableNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigVariableNodeSpawner);
	UClass* Z_Construct_UClass_UControlRigVariableNodeSpawner_NoRegister()
	{
		return UControlRigVariableNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/NodeSpawners/ControlRigVariableNodeSpawner.h" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigVariableNodeSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigVariableNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::ClassParams = {
		&UControlRigVariableNodeSpawner::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigVariableNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UControlRigVariableNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigVariableNodeSpawner.OuterSingleton, Z_Construct_UClass_UControlRigVariableNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigVariableNodeSpawner.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigVariableNodeSpawner>()
	{
		return UControlRigVariableNodeSpawner::StaticClass();
	}
	UControlRigVariableNodeSpawner::UControlRigVariableNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigVariableNodeSpawner);
	UControlRigVariableNodeSpawner::~UControlRigVariableNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigVariableNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigVariableNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigVariableNodeSpawner, UControlRigVariableNodeSpawner::StaticClass, TEXT("UControlRigVariableNodeSpawner"), &Z_Registration_Info_UClass_UControlRigVariableNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigVariableNodeSpawner), 2578522675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigVariableNodeSpawner_h_3702057750(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigVariableNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigVariableNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
