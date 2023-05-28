// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoCircleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoCircleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoCircleComponent::StaticRegisterNativesUGizmoCircleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoCircleComponent);
	UClass* Z_Construct_UClass_UGizmoCircleComponent_NoRegister()
	{
		return UGizmoCircleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoCircleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bViewAligned_MetaData[];
#endif
		static void NewProp_bViewAligned_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bViewAligned;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFullCircle_MetaData[];
#endif
		static void NewProp_bDrawFullCircle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFullCircle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyAllowFrontFacingHits_MetaData[];
#endif
		static void NewProp_bOnlyAllowFrontFacingHits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyAllowFrontFacingHits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoCircleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos.\n * Draws a 3D circle based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoCircleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws a 3D circle based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoCircleComponent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoCircleComponent, Radius), METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoCircleComponent, Thickness), METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoCircleComponent, NumSides), METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_SetBit(void* Obj)
	{
		((UGizmoCircleComponent*)Obj)->bViewAligned = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned = { "bViewAligned", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_SetBit(void* Obj)
	{
		((UGizmoCircleComponent*)Obj)->bDrawFullCircle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle = { "bDrawFullCircle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// If the circle was on a 3D sphere, then only the 'front' part of the circle can be hit, \n// (in other words, if the ray would hit the sphere first, ignore the hit).\n// Dynamically disabled if the circle is parallel to the view plane (ie \"fully visible\")\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoCircleComponent.h" },
		{ "ToolTip", "If the circle was on a 3D sphere, then only the 'front' part of the circle can be hit,\n(in other words, if the ray would hit the sphere first, ignore the hit).\nDynamically disabled if the circle is parallel to the view plane (ie \"fully visible\")" },
	};
#endif
	void Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_SetBit(void* Obj)
	{
		((UGizmoCircleComponent*)Obj)->bOnlyAllowFrontFacingHits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits = { "bOnlyAllowFrontFacingHits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoCircleComponent), &Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_NumSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bViewAligned,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bDrawFullCircle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoCircleComponent_Statics::NewProp_bOnlyAllowFrontFacingHits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoCircleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoCircleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoCircleComponent_Statics::ClassParams = {
		&UGizmoCircleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoCircleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoCircleComponent()
	{
		if (!Z_Registration_Info_UClass_UGizmoCircleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoCircleComponent.OuterSingleton, Z_Construct_UClass_UGizmoCircleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoCircleComponent.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoCircleComponent>()
	{
		return UGizmoCircleComponent::StaticClass();
	}
	UGizmoCircleComponent::UGizmoCircleComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoCircleComponent);
	UGizmoCircleComponent::~UGizmoCircleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoCircleComponent, UGizmoCircleComponent::StaticClass, TEXT("UGizmoCircleComponent"), &Z_Registration_Info_UClass_UGizmoCircleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoCircleComponent), 2004363265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_943390677(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoCircleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
