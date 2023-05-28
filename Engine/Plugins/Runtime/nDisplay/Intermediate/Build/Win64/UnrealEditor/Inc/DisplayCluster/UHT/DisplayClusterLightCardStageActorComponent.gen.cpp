// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterLightCardStageActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLightCardStageActorComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterLightCardStageActorComponent::StaticRegisterNativesUDisplayClusterLightCardStageActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLightCardStageActorComponent);
	UClass* Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_NoRegister()
	{
		return UDisplayClusterLightCardStageActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterStageActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Stage Actor Component to be placed in light card actors\n */" },
		{ "DisplayName", "Light Card Stage Actor" },
		{ "HideCategories", "Physics Collision Lighting Navigation Cooking LOD MaterialParameters HLOD RayTracing TextureStreaming Mobile Physics Collision Lighting Navigation Cooking LOD MaterialParameters HLOD RayTracing TextureStreaming Mobile" },
		{ "IncludePath", "Components/DisplayClusterLightCardStageActorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLightCardStageActorComponent.h" },
		{ "ToolTip", "Stage Actor Component to be placed in light card actors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLightCardStageActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::ClassParams = {
		&UDisplayClusterLightCardStageActorComponent::StaticClass,
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
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLightCardStageActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLightCardStageActorComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLightCardStageActorComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterLightCardStageActorComponent>()
	{
		return UDisplayClusterLightCardStageActorComponent::StaticClass();
	}
	UDisplayClusterLightCardStageActorComponent::UDisplayClusterLightCardStageActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLightCardStageActorComponent);
	UDisplayClusterLightCardStageActorComponent::~UDisplayClusterLightCardStageActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLightCardStageActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLightCardStageActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterLightCardStageActorComponent, UDisplayClusterLightCardStageActorComponent::StaticClass, TEXT("UDisplayClusterLightCardStageActorComponent"), &Z_Registration_Info_UClass_UDisplayClusterLightCardStageActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLightCardStageActorComponent), 2082085075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLightCardStageActorComponent_h_3236166756(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLightCardStageActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLightCardStageActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
