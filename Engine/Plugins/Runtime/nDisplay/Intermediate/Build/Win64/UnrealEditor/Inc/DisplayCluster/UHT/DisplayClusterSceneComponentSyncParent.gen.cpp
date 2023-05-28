// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterSceneComponentSyncParent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterSceneComponentSyncParent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSync();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterSceneComponentSyncParent::StaticRegisterNativesUDisplayClusterSceneComponentSyncParent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterSceneComponentSyncParent);
	UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_NoRegister()
	{
		return UDisplayClusterSceneComponentSyncParent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterSceneComponentSync,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Synchronization component. Synchronizes parent scene component.\n */" },
		{ "DisplayName", "NDisplay Sync Parent" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DisplayClusterSceneComponentSyncParent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterSceneComponentSyncParent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Synchronization component. Synchronizes parent scene component." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterSceneComponentSyncParent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::ClassParams = {
		&UDisplayClusterSceneComponentSyncParent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncParent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncParent.OuterSingleton, Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncParent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterSceneComponentSyncParent>()
	{
		return UDisplayClusterSceneComponentSyncParent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterSceneComponentSyncParent);
	UDisplayClusterSceneComponentSyncParent::~UDisplayClusterSceneComponentSyncParent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncParent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncParent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterSceneComponentSyncParent, UDisplayClusterSceneComponentSyncParent::StaticClass, TEXT("UDisplayClusterSceneComponentSyncParent"), &Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncParent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterSceneComponentSyncParent), 1702344787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncParent_h_2152549141(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncParent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncParent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
