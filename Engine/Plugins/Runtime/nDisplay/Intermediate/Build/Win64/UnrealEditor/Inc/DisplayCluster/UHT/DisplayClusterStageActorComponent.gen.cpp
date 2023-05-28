// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterStageActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterStageActorComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterStageActorComponent::StaticRegisterNativesUDisplayClusterStageActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterStageActorComponent);
	UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent_NoRegister()
	{
		return UDisplayClusterStageActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RootActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Stage Actor Component used to determine root actor ownership\n */" },
		{ "DisplayName", "Stage Actor" },
		{ "HideCategories", "Physics Collision Lighting Navigation Cooking LOD MaterialParameters HLOD RayTracing TextureStreaming Mobile" },
		{ "IncludePath", "Components/DisplayClusterStageActorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageActorComponent.h" },
		{ "ToolTip", "Stage Actor Component used to determine root actor ownership" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::NewProp_RootActor_MetaData[] = {
		{ "Category", "NDisplay Root Actor" },
		{ "Comment", "/** Associate this content with the nDisplay configuration actor specified here.\n\x09 * The content will only appear in the ICVFX Editor when this nDisplay configuration is selected. */" },
		{ "DisplayName", "nDisplay Root Actor" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageActorComponent.h" },
		{ "ToolTip", "Associate this content with the nDisplay configuration actor specified here.\nThe content will only appear in the ICVFX Editor when this nDisplay configuration is selected." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0024080000000801, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterStageActorComponent, RootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::NewProp_RootActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::NewProp_RootActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterStageActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::ClassParams = {
		&UDisplayClusterStageActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::PropPointers),
		0,
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterStageActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterStageActorComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterStageActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterStageActorComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterStageActorComponent>()
	{
		return UDisplayClusterStageActorComponent::StaticClass();
	}
	UDisplayClusterStageActorComponent::UDisplayClusterStageActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterStageActorComponent);
	UDisplayClusterStageActorComponent::~UDisplayClusterStageActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterStageActorComponent, UDisplayClusterStageActorComponent::StaticClass, TEXT("UDisplayClusterStageActorComponent"), &Z_Registration_Info_UClass_UDisplayClusterStageActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterStageActorComponent), 3852718480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageActorComponent_h_2007945717(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
