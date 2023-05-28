// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavMesh/NavMeshRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMeshRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavMeshRenderingComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavMeshRenderingComponent::StaticRegisterNativesUNavMeshRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavMeshRenderingComponent);
	UClass* Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister()
	{
		return UNavMeshRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavMeshRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavMeshRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavMeshRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavMesh/NavMeshRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/NavMesh/NavMeshRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavMeshRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavMeshRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavMeshRenderingComponent_Statics::ClassParams = {
		&UNavMeshRenderingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavMeshRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavMeshRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavMeshRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UNavMeshRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavMeshRenderingComponent.OuterSingleton, Z_Construct_UClass_UNavMeshRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavMeshRenderingComponent.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavMeshRenderingComponent>()
	{
		return UNavMeshRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavMeshRenderingComponent);
	UNavMeshRenderingComponent::~UNavMeshRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavMeshRenderingComponent, UNavMeshRenderingComponent::StaticClass, TEXT("UNavMeshRenderingComponent"), &Z_Registration_Info_UClass_UNavMeshRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavMeshRenderingComponent), 2220274856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_3271447500(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
