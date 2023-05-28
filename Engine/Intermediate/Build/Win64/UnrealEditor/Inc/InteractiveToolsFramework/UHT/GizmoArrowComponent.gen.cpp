// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoArrowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoArrowComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoArrowComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoArrowComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoArrowComponent::StaticRegisterNativesUGizmoArrowComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoArrowComponent);
	UClass* Z_Construct_UClass_UGizmoArrowComponent_NoRegister()
	{
		return UGizmoArrowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoArrowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoArrowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoArrowComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos.\n * Currently draws the \"arrow\" as a single 3D line.\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoArrowComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoArrowComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nCurrently draws the \"arrow\" as a single 3D line." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoArrowComponent, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Gap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Gap = { "Gap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoArrowComponent, Gap), METADATA_PARAMS(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Gap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Gap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoArrowComponent, Length), METADATA_PARAMS(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoArrowComponent, Thickness), METADATA_PARAMS(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoArrowComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Gap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoArrowComponent_Statics::NewProp_Thickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoArrowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoArrowComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoArrowComponent_Statics::ClassParams = {
		&UGizmoArrowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoArrowComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoArrowComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoArrowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoArrowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoArrowComponent()
	{
		if (!Z_Registration_Info_UClass_UGizmoArrowComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoArrowComponent.OuterSingleton, Z_Construct_UClass_UGizmoArrowComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoArrowComponent.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoArrowComponent>()
	{
		return UGizmoArrowComponent::StaticClass();
	}
	UGizmoArrowComponent::UGizmoArrowComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoArrowComponent);
	UGizmoArrowComponent::~UGizmoArrowComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoArrowComponent, UGizmoArrowComponent::StaticClass, TEXT("UGizmoArrowComponent"), &Z_Registration_Info_UClass_UGizmoArrowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoArrowComponent), 2254973535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_1330064686(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoArrowComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
