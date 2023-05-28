// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterChromakeyCardStageActorComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterChromakeyCardStageActorComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftComponentReference();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterChromakeyCardStageActorComponent::StaticRegisterNativesUDisplayClusterChromakeyCardStageActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterChromakeyCardStageActorComponent);
	UClass* Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_NoRegister()
	{
		return UDisplayClusterChromakeyCardStageActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ICVFXCameras_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ICVFXCameras_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ICVFXCameras;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterStageActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Stage Actor Component to be placed in chromakey card actors\n */" },
		{ "DisplayName", "Chromakey Card Stage Actor" },
		{ "HideCategories", "Physics Collision Lighting Navigation Cooking LOD MaterialParameters HLOD RayTracing TextureStreaming Mobile Physics Collision Lighting Navigation Cooking LOD MaterialParameters HLOD RayTracing TextureStreaming Mobile" },
		{ "IncludePath", "Components/DisplayClusterChromakeyCardStageActorComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterChromakeyCardStageActorComponent.h" },
		{ "ToolTip", "Stage Actor Component to be placed in chromakey card actors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras_Inner = { "ICVFXCameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftComponentReference, METADATA_PARAMS(nullptr, 0) }; // 1529383607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "/Script/DisplayCluster.DisplayClusterICVFXCameraComponent" },
		{ "Category", "NDisplay Root Actor" },
		{ "Comment", "/** Associate this Chromakey Card with the nDisplay configuration actor and ICVFX Camera component(s) specified here.\n\x09 * The content will only appear in the ICVFX Editor when this nDisplay configuration is selected. */" },
		{ "DisplayName", "ICVFX Cameras" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterChromakeyCardStageActorComponent.h" },
		{ "ToolTip", "Associate this Chromakey Card with the nDisplay configuration actor and ICVFX Camera component(s) specified here.\nThe content will only appear in the ICVFX Editor when this nDisplay configuration is selected." },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras = { "ICVFXCameras", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterChromakeyCardStageActorComponent, ICVFXCameras), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras_MetaData)) }; // 1529383607
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::NewProp_ICVFXCameras,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterChromakeyCardStageActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::ClassParams = {
		&UDisplayClusterChromakeyCardStageActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterChromakeyCardStageActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterChromakeyCardStageActorComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterChromakeyCardStageActorComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterChromakeyCardStageActorComponent>()
	{
		return UDisplayClusterChromakeyCardStageActorComponent::StaticClass();
	}
	UDisplayClusterChromakeyCardStageActorComponent::UDisplayClusterChromakeyCardStageActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterChromakeyCardStageActorComponent);
	UDisplayClusterChromakeyCardStageActorComponent::~UDisplayClusterChromakeyCardStageActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterChromakeyCardStageActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterChromakeyCardStageActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterChromakeyCardStageActorComponent, UDisplayClusterChromakeyCardStageActorComponent::StaticClass, TEXT("UDisplayClusterChromakeyCardStageActorComponent"), &Z_Registration_Info_UClass_UDisplayClusterChromakeyCardStageActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterChromakeyCardStageActorComponent), 2945785660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterChromakeyCardStageActorComponent_h_1879911910(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterChromakeyCardStageActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterChromakeyCardStageActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
