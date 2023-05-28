// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/NodeSpawners/ControlRigRerouteNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigRerouteNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigRerouteNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigRerouteNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigRerouteNodeSpawner::StaticRegisterNativesUControlRigRerouteNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigRerouteNodeSpawner);
	UClass* Z_Construct_UClass_UControlRigRerouteNodeSpawner_NoRegister()
	{
		return UControlRigRerouteNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/NodeSpawners/ControlRigRerouteNodeSpawner.h" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigRerouteNodeSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigRerouteNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::ClassParams = {
		&UControlRigRerouteNodeSpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigRerouteNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UControlRigRerouteNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigRerouteNodeSpawner.OuterSingleton, Z_Construct_UClass_UControlRigRerouteNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigRerouteNodeSpawner.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigRerouteNodeSpawner>()
	{
		return UControlRigRerouteNodeSpawner::StaticClass();
	}
	UControlRigRerouteNodeSpawner::UControlRigRerouteNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigRerouteNodeSpawner);
	UControlRigRerouteNodeSpawner::~UControlRigRerouteNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigRerouteNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigRerouteNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigRerouteNodeSpawner, UControlRigRerouteNodeSpawner::StaticClass, TEXT("UControlRigRerouteNodeSpawner"), &Z_Registration_Info_UClass_UControlRigRerouteNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigRerouteNodeSpawner), 2144964905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigRerouteNodeSpawner_h_3800857080(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigRerouteNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigRerouteNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
