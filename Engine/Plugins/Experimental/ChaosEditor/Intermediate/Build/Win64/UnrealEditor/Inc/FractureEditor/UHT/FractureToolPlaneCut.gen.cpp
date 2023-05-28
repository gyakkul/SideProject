// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolPlaneCut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolPlaneCut() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFracturePlaneCutSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFracturePlaneCutSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolPlaneCut();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolPlaneCut_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFracturePlaneCutSettings::StaticRegisterNativesUFracturePlaneCutSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFracturePlaneCutSettings);
	UClass* Z_Construct_UClass_UFracturePlaneCutSettings_NoRegister()
	{
		return UFracturePlaneCutSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFracturePlaneCutSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberPlanarCuts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberPlanarCuts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCutWithMultiplePlanes_MetaData[];
#endif
		static void NewProp_bCanCutWithMultiplePlanes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCutWithMultiplePlanes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFracturePlaneCutSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFracturePlaneCutSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolPlaneCut.h" },
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_NumberPlanarCuts_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of cutting planes. Only used when \"Use Gizmo\" is disabled */" },
		{ "DisplayName", "Number of Cuts" },
		{ "EditCondition", "bCanCutWithMultiplePlanes" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
		{ "ToolTip", "Number of cutting planes. Only used when \"Use Gizmo\" is disabled" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_NumberPlanarCuts = { "NumberPlanarCuts", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFracturePlaneCutSettings, NumberPlanarCuts), METADATA_PARAMS(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_NumberPlanarCuts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_NumberPlanarCuts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
	};
#endif
	void Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes_SetBit(void* Obj)
	{
		((UFracturePlaneCutSettings*)Obj)->bCanCutWithMultiplePlanes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes = { "bCanCutWithMultiplePlanes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFracturePlaneCutSettings), &Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFracturePlaneCutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_NumberPlanarCuts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFracturePlaneCutSettings_Statics::NewProp_bCanCutWithMultiplePlanes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFracturePlaneCutSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFracturePlaneCutSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFracturePlaneCutSettings_Statics::ClassParams = {
		&UFracturePlaneCutSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFracturePlaneCutSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFracturePlaneCutSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFracturePlaneCutSettings()
	{
		if (!Z_Registration_Info_UClass_UFracturePlaneCutSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFracturePlaneCutSettings.OuterSingleton, Z_Construct_UClass_UFracturePlaneCutSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFracturePlaneCutSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFracturePlaneCutSettings>()
	{
		return UFracturePlaneCutSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFracturePlaneCutSettings);
	UFracturePlaneCutSettings::~UFracturePlaneCutSettings() {}
	void UFractureToolPlaneCut::StaticRegisterNativesUFractureToolPlaneCut()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolPlaneCut);
	UClass* Z_Construct_UClass_UFractureToolPlaneCut_NoRegister()
	{
		return UFractureToolPlaneCut::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolPlaneCut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneCutSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneCutSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoisePreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoisePreview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolPlaneCut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolPlaneCut_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Plane Cut Tool" },
		{ "IncludePath", "FractureToolPlaneCut.h" },
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_PlaneCutSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "// Slicing\n" },
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
		{ "ToolTip", "Slicing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_PlaneCutSettings = { "PlaneCutSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolPlaneCut, PlaneCutSettings), Z_Construct_UClass_UFracturePlaneCutSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_PlaneCutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_PlaneCutSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_GizmoSettings_MetaData[] = {
		{ "Category", "Uniform" },
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_GizmoSettings = { "GizmoSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolPlaneCut, GizmoSettings), Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_GizmoSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_GizmoSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_NoisePreview_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolPlaneCut.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_NoisePreview = { "NoisePreview", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolPlaneCut, NoisePreview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_NoisePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_NoisePreview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolPlaneCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_PlaneCutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_GizmoSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolPlaneCut_Statics::NewProp_NoisePreview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolPlaneCut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolPlaneCut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolPlaneCut_Statics::ClassParams = {
		&UFractureToolPlaneCut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolPlaneCut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolPlaneCut_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolPlaneCut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolPlaneCut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolPlaneCut()
	{
		if (!Z_Registration_Info_UClass_UFractureToolPlaneCut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolPlaneCut.OuterSingleton, Z_Construct_UClass_UFractureToolPlaneCut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolPlaneCut.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolPlaneCut>()
	{
		return UFractureToolPlaneCut::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolPlaneCut);
	UFractureToolPlaneCut::~UFractureToolPlaneCut() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolPlaneCut_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolPlaneCut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFracturePlaneCutSettings, UFracturePlaneCutSettings::StaticClass, TEXT("UFracturePlaneCutSettings"), &Z_Registration_Info_UClass_UFracturePlaneCutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFracturePlaneCutSettings), 3274488878U) },
		{ Z_Construct_UClass_UFractureToolPlaneCut, UFractureToolPlaneCut::StaticClass, TEXT("UFractureToolPlaneCut"), &Z_Registration_Info_UClass_UFractureToolPlaneCut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolPlaneCut), 898051481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolPlaneCut_h_1472340355(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolPlaneCut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolPlaneCut_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
