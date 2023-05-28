// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Private/VisualLoggerRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	void UVisualLoggerRenderingComponent::StaticRegisterNativesUVisualLoggerRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerRenderingComponent);
	UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent_NoRegister()
	{
		return UVisualLoggerRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "Comment", "/**\n *\x09Primitive component used to draw visual logger data on level\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VisualLoggerRenderingComponent.h" },
		{ "ModuleRelativePath", "Private/VisualLoggerRenderingComponent.h" },
		{ "ToolTip", "Primitive component used to draw visual logger data on level" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::ClassParams = {
		&UVisualLoggerRenderingComponent::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UVisualLoggerRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerRenderingComponent.OuterSingleton, Z_Construct_UClass_UVisualLoggerRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisualLoggerRenderingComponent.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<UVisualLoggerRenderingComponent>()
	{
		return UVisualLoggerRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerRenderingComponent);
	UVisualLoggerRenderingComponent::~UVisualLoggerRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerRenderingComponent, UVisualLoggerRenderingComponent::StaticClass, TEXT("UVisualLoggerRenderingComponent"), &Z_Registration_Info_UClass_UVisualLoggerRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerRenderingComponent), 1292286111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_3019764090(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Private_VisualLoggerRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
