// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoLineHandleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoLineHandleComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLineHandleComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoLineHandleComponent::StaticRegisterNativesUGizmoLineHandleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLineHandleComponent);
	UClass* Z_Construct_UClass_UGizmoLineHandleComponent_NoRegister()
	{
		return UGizmoLineHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLineHandleComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImageScale_MetaData[];
#endif
		static void NewProp_bImageScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImageScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLineHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * Simple Component intended to be used as part of 3D Gizmos.\n * Draws line terminated by a short perpendicular handle line based on parameters.\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Physics Collision Mobile Mobility VirtualTexture Trigger" },
		{ "IncludePath", "BaseGizmos/GizmoLineHandleComponent.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
		{ "ToolTip", "Simple Component intended to be used as part of 3D Gizmos.\nDraws line terminated by a short perpendicular handle line based on parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLineHandleComponent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize = { "HandleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLineHandleComponent, HandleSize), METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLineHandleComponent, Thickness), METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLineHandleComponent, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLineHandleComponent, Length), METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoLineHandleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_SetBit(void* Obj)
	{
		((UGizmoLineHandleComponent*)Obj)->bImageScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale = { "bImageScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoLineHandleComponent), &Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_HandleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLineHandleComponent_Statics::NewProp_bImageScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLineHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLineHandleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLineHandleComponent_Statics::ClassParams = {
		&UGizmoLineHandleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLineHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLineHandleComponent()
	{
		if (!Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton, Z_Construct_UClass_UGizmoLineHandleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoLineHandleComponent.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLineHandleComponent>()
	{
		return UGizmoLineHandleComponent::StaticClass();
	}
	UGizmoLineHandleComponent::UGizmoLineHandleComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLineHandleComponent);
	UGizmoLineHandleComponent::~UGizmoLineHandleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoLineHandleComponent, UGizmoLineHandleComponent::StaticClass, TEXT("UGizmoLineHandleComponent"), &Z_Registration_Info_UClass_UGizmoLineHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLineHandleComponent), 328503979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_1000037913(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoLineHandleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
