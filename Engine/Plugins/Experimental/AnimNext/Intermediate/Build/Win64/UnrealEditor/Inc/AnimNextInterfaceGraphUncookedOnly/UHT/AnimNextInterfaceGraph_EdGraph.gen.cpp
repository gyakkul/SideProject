// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/AnimNextInterfaceGraph_EdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterfaceGraph_EdGraph() {}
// Cross Module References
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph();
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraph();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraphUncookedOnly();
// End Cross Module References
	void UAnimNextInterfaceGraph_EdGraph::StaticRegisterNativesUAnimNextInterfaceGraph_EdGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterfaceGraph_EdGraph);
	UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_NoRegister()
	{
		return UAnimNextInterfaceGraph_EdGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRigGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraphUncookedOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimNextInterfaceGraph_EdGraph.h" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EdGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterfaceGraph_EdGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::ClassParams = {
		&UAnimNextInterfaceGraph_EdGraph::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EdGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EdGraph.OuterSingleton, Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EdGraph.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* StaticClass<UAnimNextInterfaceGraph_EdGraph>()
	{
		return UAnimNextInterfaceGraph_EdGraph::StaticClass();
	}
	UAnimNextInterfaceGraph_EdGraph::UAnimNextInterfaceGraph_EdGraph() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterfaceGraph_EdGraph);
	UAnimNextInterfaceGraph_EdGraph::~UAnimNextInterfaceGraph_EdGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EdGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EdGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph, UAnimNextInterfaceGraph_EdGraph::StaticClass, TEXT("UAnimNextInterfaceGraph_EdGraph"), &Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterfaceGraph_EdGraph), 2423985948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EdGraph_h_1461664878(TEXT("/Script/AnimNextInterfaceGraphUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EdGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
