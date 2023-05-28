// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterLabelComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLabelComponent() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLabelComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLabelComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLabelWidget_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterLabelComponent::StaticRegisterNativesUDisplayClusterLabelComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLabelComponent);
	UClass* Z_Construct_UClass_UDisplayClusterLabelComponent_NoRegister()
	{
		return UDisplayClusterLabelComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLabelComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RootActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * A label component specific to nDisplay. Displays a widget with a consistent scale facing the root actor view origin.\n * Visible only in scene capture when in the editor or in 3d space on the wall.\n *\n * The component needs to be transient so its settings aren't saved, but should still transact over multi-user.\n */" },
		{ "DisplayClusterMultiUserInclude", "" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DisplayClusterLabelComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLabelComponent.h" },
		{ "ToolTip", "A label component specific to nDisplay. Displays a widget with a consistent scale facing the root actor view origin.\nVisible only in scene capture when in the editor or in 3d space on the wall.\n\nThe component needs to be transient so its settings aren't saved, but should still transact over multi-user." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_RootActor_MetaData[] = {
		{ "Comment", "/** The root actor this label needs to know about */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLabelComponent.h" },
		{ "ToolTip", "The root actor this label needs to know about" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLabelComponent, RootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_RootActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "LabelText" },
		{ "Comment", "/** The widget component to display for this label */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLabelComponent.h" },
		{ "ToolTip", "The widget component to display for this label" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetComponent = { "WidgetComponent", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLabelComponent, WidgetComponent), Z_Construct_UClass_UDisplayClusterWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "LabelText" },
		{ "Comment", "/** The widget class to apply to the widget component */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLabelComponent.h" },
		{ "ToolTip", "The widget class to apply to the widget component" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLabelComponent, WidgetClass), Z_Construct_UClass_UDisplayClusterLabelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetScale_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Label" },
		{ "Comment", "/** A uniform scale to apply to the text which will keep consistency across distance from the label to the root actor view */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterLabelComponent.h" },
		{ "ToolTip", "A uniform scale to apply to the text which will keep consistency across distance from the label to the root actor view" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetScale = { "WidgetScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterLabelComponent, WidgetScale), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::NewProp_WidgetScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLabelComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::ClassParams = {
		&UDisplayClusterLabelComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::PropPointers),
		0,
		0x00B000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLabelComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLabelComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLabelComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterLabelComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLabelComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterLabelComponent>()
	{
		return UDisplayClusterLabelComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLabelComponent);
	UDisplayClusterLabelComponent::~UDisplayClusterLabelComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterLabelComponent, UDisplayClusterLabelComponent::StaticClass, TEXT("UDisplayClusterLabelComponent"), &Z_Registration_Info_UClass_UDisplayClusterLabelComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLabelComponent), 3295550989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelComponent_h_1511248337(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterLabelComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
