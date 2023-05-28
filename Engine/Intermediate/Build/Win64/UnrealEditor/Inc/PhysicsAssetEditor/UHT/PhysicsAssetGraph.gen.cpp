// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetGraph/PhysicsAssetGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraph();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetGraph::StaticRegisterNativesUPhysicsAssetGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetGraph);
	UClass* Z_Construct_UClass_UPhysicsAssetGraph_NoRegister()
	{
		return UPhysicsAssetGraph::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGraph/PhysicsAssetGraph.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetGraph/PhysicsAssetGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGraph_Statics::ClassParams = {
		&UPhysicsAssetGraph::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGraph()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetGraph.OuterSingleton, Z_Construct_UClass_UPhysicsAssetGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetGraph.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetGraph>()
	{
		return UPhysicsAssetGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGraph);
	UPhysicsAssetGraph::~UPhysicsAssetGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetGraph, UPhysicsAssetGraph::StaticClass, TEXT("UPhysicsAssetGraph"), &Z_Registration_Info_UClass_UPhysicsAssetGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetGraph), 1698421416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraph_h_3941952875(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
