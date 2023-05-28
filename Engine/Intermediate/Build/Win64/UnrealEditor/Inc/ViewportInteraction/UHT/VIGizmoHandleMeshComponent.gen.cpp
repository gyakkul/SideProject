// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VIGizmoHandleMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIGizmoHandleMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister();
// End Cross Module References
	void UGizmoHandleMeshComponent::StaticRegisterNativesUGizmoHandleMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoHandleMeshComponent);
	UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister()
	{
		return UGizmoHandleMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoHandleMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Activation Components|Activation Trigger" },
		{ "IncludePath", "VIGizmoHandleMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VIGizmoHandleMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoHandleMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::ClassParams = {
		&UGizmoHandleMeshComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoHandleMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UGizmoHandleMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoHandleMeshComponent.OuterSingleton, Z_Construct_UClass_UGizmoHandleMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoHandleMeshComponent.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UGizmoHandleMeshComponent>()
	{
		return UGizmoHandleMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoHandleMeshComponent);
	UGizmoHandleMeshComponent::~UGizmoHandleMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoHandleMeshComponent, UGizmoHandleMeshComponent::StaticClass, TEXT("UGizmoHandleMeshComponent"), &Z_Registration_Info_UClass_UGizmoHandleMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoHandleMeshComponent), 2778172747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_3685828551(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandleMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
