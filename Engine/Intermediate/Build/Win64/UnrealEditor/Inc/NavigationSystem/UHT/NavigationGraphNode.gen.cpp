// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavGraph/NavigationGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void ANavigationGraphNode::StaticRegisterNativesANavigationGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationGraphNode);
	UClass* Z_Construct_UClass_ANavigationGraphNode_NoRegister()
	{
		return ANavigationGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavGraph/NavigationGraphNode.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/NavGraph/NavigationGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams = {
		&ANavigationGraphNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationGraphNode()
	{
		if (!Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton, Z_Construct_UClass_ANavigationGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavigationGraphNode.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavigationGraphNode>()
	{
		return ANavigationGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationGraphNode);
	ANavigationGraphNode::~ANavigationGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationGraphNode, ANavigationGraphNode::StaticClass, TEXT("ANavigationGraphNode"), &Z_Registration_Info_UClass_ANavigationGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationGraphNode), 2254591570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_1350194970(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
