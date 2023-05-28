// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdLaneDataRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdLaneDataRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdLaneDataRenderingComponent::StaticRegisterNativesUMassCrowdLaneDataRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdLaneDataRenderingComponent);
	UClass* Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_NoRegister()
	{
		return UMassCrowdLaneDataRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * Primitive component that can be used to render runtime state of zone graph lanes (e.g. Opened|Closed, Density, etc.)\n * The component must be added on a ZoneGraphData actor.\n */" },
		{ "HideCategories", "Object LOD Lighting VirtualTexture Transform HLOD Collision TextureStreaming Mobile Physics Tags AssetUserData Activation Cooking Rendering Navigation Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MassCrowdLaneDataRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/MassCrowdLaneDataRenderingComponent.h" },
		{ "ToolTip", "Primitive component that can be used to render runtime state of zone graph lanes (e.g. Opened|Closed, Density, etc.)\nThe component must be added on a ZoneGraphData actor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdLaneDataRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::ClassParams = {
		&UMassCrowdLaneDataRenderingComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdLaneDataRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdLaneDataRenderingComponent.OuterSingleton, Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdLaneDataRenderingComponent.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdLaneDataRenderingComponent>()
	{
		return UMassCrowdLaneDataRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdLaneDataRenderingComponent);
	UMassCrowdLaneDataRenderingComponent::~UMassCrowdLaneDataRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneDataRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneDataRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdLaneDataRenderingComponent, UMassCrowdLaneDataRenderingComponent::StaticClass, TEXT("UMassCrowdLaneDataRenderingComponent"), &Z_Registration_Info_UClass_UMassCrowdLaneDataRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdLaneDataRenderingComponent), 1937379841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneDataRenderingComponent_h_1248547161(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneDataRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdLaneDataRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
