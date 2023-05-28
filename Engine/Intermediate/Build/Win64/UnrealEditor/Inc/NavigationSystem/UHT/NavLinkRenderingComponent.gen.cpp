// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavLinkRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavLinkRenderingComponent::StaticRegisterNativesUNavLinkRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkRenderingComponent);
	UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister()
	{
		return UNavLinkRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "NavLinkRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/NavLinkRenderingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkRenderingComponent_Statics::ClassParams = {
		&UNavLinkRenderingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_UNavLinkRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkRenderingComponent.OuterSingleton, Z_Construct_UClass_UNavLinkRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavLinkRenderingComponent.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkRenderingComponent>()
	{
		return UNavLinkRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkRenderingComponent);
	UNavLinkRenderingComponent::~UNavLinkRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkRenderingComponent, UNavLinkRenderingComponent::StaticClass, TEXT("UNavLinkRenderingComponent"), &Z_Registration_Info_UClass_UNavLinkRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkRenderingComponent), 1247052653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_3402576665(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
