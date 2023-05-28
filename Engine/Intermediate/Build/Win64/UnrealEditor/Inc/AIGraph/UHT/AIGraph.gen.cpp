// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIGraph() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AIGraph();
// End Cross Module References
	void UAIGraph::StaticRegisterNativesUAIGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIGraph);
	UClass* Z_Construct_UClass_UAIGraph_NoRegister()
	{
		return UAIGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAIGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GraphVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AIGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIGraph.h" },
		{ "ModuleRelativePath", "Classes/AIGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AIGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion = { "GraphVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIGraph, GraphVersion), METADATA_PARAMS(Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIGraph_Statics::NewProp_GraphVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIGraph_Statics::ClassParams = {
		&UAIGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAIGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIGraph()
	{
		if (!Z_Registration_Info_UClass_UAIGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIGraph.OuterSingleton, Z_Construct_UClass_UAIGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIGraph.OuterSingleton;
	}
	template<> AIGRAPH_API UClass* StaticClass<UAIGraph>()
	{
		return UAIGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIGraph);
	UAIGraph::~UAIGraph() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAIGraph)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIGraph, UAIGraph::StaticClass, TEXT("UAIGraph"), &Z_Registration_Info_UClass_UAIGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIGraph), 2023344522U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_2047404774(TEXT("/Script/AIGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
