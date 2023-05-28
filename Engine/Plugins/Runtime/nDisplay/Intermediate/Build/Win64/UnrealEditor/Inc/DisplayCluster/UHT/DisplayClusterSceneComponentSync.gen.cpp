// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterSceneComponentSync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterSceneComponentSync() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSync();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSync_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterSceneComponentSync::StaticRegisterNativesUDisplayClusterSceneComponentSync()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterSceneComponentSync);
	UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSync_NoRegister()
	{
		return UDisplayClusterSceneComponentSync::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract synchronization component\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DisplayClusterSceneComponentSync.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterSceneComponentSync.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract synchronization component" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterSceneComponentSync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::ClassParams = {
		&UDisplayClusterSceneComponentSync::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterSceneComponentSync()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterSceneComponentSync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterSceneComponentSync.OuterSingleton, Z_Construct_UClass_UDisplayClusterSceneComponentSync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterSceneComponentSync.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterSceneComponentSync>()
	{
		return UDisplayClusterSceneComponentSync::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterSceneComponentSync);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterSceneComponentSync, UDisplayClusterSceneComponentSync::StaticClass, TEXT("UDisplayClusterSceneComponentSync"), &Z_Registration_Info_UClass_UDisplayClusterSceneComponentSync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterSceneComponentSync), 735231314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSync_h_1462814160(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterSceneComponentSync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
