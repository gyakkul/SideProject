// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavMesh/NavTestRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavTestRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavTestRenderingComponent::StaticRegisterNativesUNavTestRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavTestRenderingComponent);
	UClass* Z_Construct_UClass_UNavTestRenderingComponent_NoRegister()
	{
		return UNavTestRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavTestRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavTestRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavTestRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavMesh/NavTestRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavTestRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavTestRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavTestRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavTestRenderingComponent_Statics::ClassParams = {
		&UNavTestRenderingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavTestRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavTestRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavTestRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton, Z_Construct_UClass_UNavTestRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavTestRenderingComponent.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavTestRenderingComponent>()
	{
		return UNavTestRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavTestRenderingComponent);
	UNavTestRenderingComponent::~UNavTestRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavTestRenderingComponent, UNavTestRenderingComponent::StaticClass, TEXT("UNavTestRenderingComponent"), &Z_Registration_Info_UClass_UNavTestRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavTestRenderingComponent), 335926605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_1623939561(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
