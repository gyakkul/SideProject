// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementLineBase.h"
#include "BaseGizmos/GizmoElementRenderState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementLineBase() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementLineBase_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementLineBase::StaticRegisterNativesUGizmoElementLineBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementLineBase);
	UClass* Z_Construct_UClass_UGizmoElementLineBase_NoRegister()
	{
		return UGizmoElementLineBase::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementLineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineRenderAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineRenderAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceLine_MetaData[];
#endif
		static void NewProp_bScreenSpaceLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverLineThicknessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverLineThicknessMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractLineThicknessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractLineThicknessMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementLineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementLineBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for 2d and 3d primitive objects which support line drawing,\n * intended to be used as part of 3D Gizmos.\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementLineBase.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Base class for 2d and 3d primitive objects which support line drawing,\nintended to be used as part of 3D Gizmos." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes_MetaData[] = {
		{ "Comment", "// Line render state attributes for this element\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Line render state attributes for this element" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes = { "LineRenderAttributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementLineBase, LineRenderAttributes), Z_Construct_UScriptStruct_FGizmoElementLineRenderStateAttributes, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes_MetaData)) }; // 1343872892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Comment", "// Line thickness when rendering lines, must be >= 0.0, value of 0.0 will render thinnest line \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Line thickness when rendering lines, must be >= 0.0, value of 0.0 will render thinnest line" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementLineBase, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_MetaData[] = {
		{ "Comment", "// Whether line thickness is in screen space\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Whether line thickness is in screen space" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_SetBit(void* Obj)
	{
		((UGizmoElementLineBase*)Obj)->bScreenSpaceLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine = { "bScreenSpaceLine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementLineBase), &Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Multiplier applied to line thickness when hovering\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Multiplier applied to line thickness when hovering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier = { "HoverLineThicknessMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementLineBase, HoverLineThicknessMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Multiplier applied to line thickness when interacting\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementLineBase.h" },
		{ "ToolTip", "Multiplier applied to line thickness when interacting" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier = { "InteractLineThicknessMultiplier", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementLineBase, InteractLineThicknessMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineRenderAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_bScreenSpaceLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_HoverLineThicknessMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementLineBase_Statics::NewProp_InteractLineThicknessMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementLineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementLineBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementLineBase_Statics::ClassParams = {
		&UGizmoElementLineBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementLineBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementLineBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementLineBase()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton, Z_Construct_UClass_UGizmoElementLineBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementLineBase.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementLineBase>()
	{
		return UGizmoElementLineBase::StaticClass();
	}
	UGizmoElementLineBase::UGizmoElementLineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementLineBase);
	UGizmoElementLineBase::~UGizmoElementLineBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementLineBase, UGizmoElementLineBase::StaticClass, TEXT("UGizmoElementLineBase"), &Z_Registration_Info_UClass_UGizmoElementLineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementLineBase), 1206680720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_59508125(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementLineBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
