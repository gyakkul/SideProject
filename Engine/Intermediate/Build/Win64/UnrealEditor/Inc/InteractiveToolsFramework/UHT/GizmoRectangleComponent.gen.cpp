// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoRectangleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoRectangleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRectangleComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoRectangleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoRectangleComponent::StaticRegisterNativesUGizmoRectangleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoRectangleComponent);
	UClass* Z_Construct_UClass_UGizmoRectangleComponent_NoRegister()
	{
		return UGizmoRectangleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoRectangleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientYAccordingToCamera_MetaData[];
#endif
		static void NewProp_bOrientYAccordingToCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientYAccordingToCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoRectangleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos. \n * Draws outline of 3D rectangle based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoRectangleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws outline of 3D rectangle based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX = { "DirectionX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, DirectionX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY = { "DirectionY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, DirectionY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// When true, instead of using the provided DirectionY, the component will\n// use a direction orthogonal to the camera direction and DirectionX. This\n// keeps the rectangle pinned along DirectionX but spun to be flatter\n// relative the camera.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
		{ "ToolTip", "When true, instead of using the provided DirectionY, the component will\nuse a direction orthogonal to the camera direction and DirectionX. This\nkeeps the rectangle pinned along DirectionX but spun to be flatter\nrelative the camera." },
	};
#endif
	void Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_SetBit(void* Obj)
	{
		((UGizmoRectangleComponent*)Obj)->bOrientYAccordingToCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera = { "bOrientYAccordingToCamera", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoRectangleComponent), &Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX = { "OffsetX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, OffsetX), METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY = { "OffsetY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, OffsetY), METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX = { "LengthX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, LengthX), METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY = { "LengthY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, LengthY), METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, Thickness), METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoRectangleComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags = { "SegmentFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoRectangleComponent, SegmentFlags), nullptr, METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_DirectionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_bOrientYAccordingToCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_OffsetY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_LengthY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoRectangleComponent_Statics::NewProp_SegmentFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoRectangleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoRectangleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoRectangleComponent_Statics::ClassParams = {
		&UGizmoRectangleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoRectangleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoRectangleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoRectangleComponent()
	{
		if (!Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton, Z_Construct_UClass_UGizmoRectangleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoRectangleComponent.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoRectangleComponent>()
	{
		return UGizmoRectangleComponent::StaticClass();
	}
	UGizmoRectangleComponent::UGizmoRectangleComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoRectangleComponent);
	UGizmoRectangleComponent::~UGizmoRectangleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoRectangleComponent, UGizmoRectangleComponent::StaticClass, TEXT("UGizmoRectangleComponent"), &Z_Registration_Info_UClass_UGizmoRectangleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoRectangleComponent), 145167392U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_214320174(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoRectangleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
