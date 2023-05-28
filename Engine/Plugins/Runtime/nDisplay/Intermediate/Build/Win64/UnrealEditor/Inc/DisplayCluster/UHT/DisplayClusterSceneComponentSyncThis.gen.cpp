// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterSceneComponentSyncThis.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterSceneComponentSyncThis() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSync();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterSceneComponentSyncThis::StaticRegisterNativesUDisplayClusterSceneComponentSyncThis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterSceneComponentSyncThis);
	UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_NoRegister()
	{
		return UDisplayClusterSceneComponentSyncThis::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterSceneComponentSync,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Synchronization component. Synchronizes itself\n */" },
		{ "DisplayName", "NDisplay Sync This" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DisplayClusterSceneComponentSyncThis.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterSceneComponentSyncThis.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Synchronization component. Synchronizes itself" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterSceneComponentSyncThis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::ClassParams = {
		&UDisplayClusterSceneComponentSyncThis::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncThis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncThis.OuterSingleton, Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncThis.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterSceneComponentSyncThis>()
	{
		return UDisplayClusterSceneComponentSyncThis::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterSceneComponentSyncThis);
	UDisplayClusterSceneComponentSyncThis::~UDisplayClusterSceneComponentSyncThis() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncThis_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncThis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterSceneComponentSyncThis, UDisplayClusterSceneComponentSyncThis::StaticClass, TEXT("UDisplayClusterSceneComponentSyncThis"), &Z_Registration_Info_UClass_UDisplayClusterSceneComponentSyncThis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterSceneComponentSyncThis), 1379514166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncThis_h_3402931011(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncThis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSyncThis_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
