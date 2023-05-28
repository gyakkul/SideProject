// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Views/Viewport/DisplayClusterWorldOriginComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterWorldOriginComponent() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterWorldOriginComponent();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterWorldOriginComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	void UDisplayClusterWorldOriginComponent::StaticRegisterNativesUDisplayClusterWorldOriginComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterWorldOriginComponent);
	UClass* Z_Construct_UClass_UDisplayClusterWorldOriginComponent_NoRegister()
	{
		return UDisplayClusterWorldOriginComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DisplayCluster" },
		{ "Comment", "/**\n * Display cluster world origin component (for in-Editor visualization)\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Views/Viewport/DisplayClusterWorldOriginComponent.h" },
		{ "ModuleRelativePath", "Private/Views/Viewport/DisplayClusterWorldOriginComponent.h" },
		{ "ToolTip", "Display cluster world origin component (for in-Editor visualization)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterWorldOriginComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::ClassParams = {
		&UDisplayClusterWorldOriginComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterWorldOriginComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterWorldOriginComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterWorldOriginComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterWorldOriginComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterWorldOriginComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterWorldOriginComponent>()
	{
		return UDisplayClusterWorldOriginComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterWorldOriginComponent);
	UDisplayClusterWorldOriginComponent::~UDisplayClusterWorldOriginComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_Viewport_DisplayClusterWorldOriginComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_Viewport_DisplayClusterWorldOriginComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterWorldOriginComponent, UDisplayClusterWorldOriginComponent::StaticClass, TEXT("UDisplayClusterWorldOriginComponent"), &Z_Registration_Info_UClass_UDisplayClusterWorldOriginComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterWorldOriginComponent), 1976972089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_Viewport_DisplayClusterWorldOriginComponent_h_1904583700(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_Viewport_DisplayClusterWorldOriginComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_Viewport_DisplayClusterWorldOriginComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
