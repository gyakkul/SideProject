// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Game/EngineClasses/Scene/DisplayClusterWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterWidgetComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterWidgetComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterWidgetComponent::StaticRegisterNativesUDisplayClusterWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterWidgetComponent);
	UClass* Z_Construct_UClass_UDisplayClusterWidgetComponent_NoRegister()
	{
		return UDisplayClusterWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extend the widget component to optimize when the widget is initialized and released.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Game/EngineClasses/Scene/DisplayClusterWidgetComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Game/EngineClasses/Scene/DisplayClusterWidgetComponent.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Extend the widget component to optimize when the widget is initialized and released." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::ClassParams = {
		&UDisplayClusterWidgetComponent::StaticClass,
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
		0x00A010ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterWidgetComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterWidgetComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterWidgetComponent>()
	{
		return UDisplayClusterWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterWidgetComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterWidgetComponent, UDisplayClusterWidgetComponent::StaticClass, TEXT("UDisplayClusterWidgetComponent"), &Z_Registration_Info_UClass_UDisplayClusterWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterWidgetComponent), 1407384360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterWidgetComponent_h_4108513361(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
