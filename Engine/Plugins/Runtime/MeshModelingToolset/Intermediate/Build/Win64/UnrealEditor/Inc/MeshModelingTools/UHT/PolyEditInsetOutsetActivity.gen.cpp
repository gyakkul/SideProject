// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolActivities/PolyEditInsetOutsetActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditInsetOutsetActivity() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UPolyEditInsetOutsetProperties::StaticRegisterNativesUPolyEditInsetOutsetProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsetOutsetProperties);
	UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister()
	{
		return UPolyEditInsetOutsetProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Softness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Softness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoundaryOnly_MetaData[];
#endif
		static void NewProp_bBoundaryOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundaryOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[];
#endif
		static void NewProp_bReproject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutset_MetaData[];
#endif
		static void NewProp_bOutset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness_MetaData[] = {
		{ "Category", "Inset/Outset" },
		{ "Comment", "/** Amount of smoothing applied to outset boundary */" },
		{ "EditCondition", "bBoundaryOnly == false" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "Amount of smoothing applied to outset boundary" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness = { "Softness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsetOutsetProperties, Softness), METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_MetaData[] = {
		{ "Category", "Inset/Outset" },
		{ "Comment", "/** Controls whether outset operation will move interior vertices as well as border vertices */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "Controls whether outset operation will move interior vertices as well as border vertices" },
	};
#endif
	void Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_SetBit(void* Obj)
	{
		((UPolyEditInsetOutsetProperties*)Obj)->bBoundaryOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly = { "bBoundaryOnly", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolyEditInsetOutsetProperties), &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale_MetaData[] = {
		{ "Category", "Inset/Outset" },
		{ "Comment", "/** Tweak area scaling when solving for interior vertices */" },
		{ "EditCondition", "bBoundaryOnly == false" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "Tweak area scaling when solving for interior vertices" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale = { "AreaScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsetOutsetProperties, AreaScale), METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_MetaData[] = {
		{ "Category", "Inset/Outset" },
		{ "Comment", "/** When insetting, determines whether vertices in inset region should be projected back onto input surface */" },
		{ "EditCondition", "!bOutset" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ToolTip", "When insetting, determines whether vertices in inset region should be projected back onto input surface" },
	};
#endif
	void Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_SetBit(void* Obj)
	{
		((UPolyEditInsetOutsetProperties*)Obj)->bReproject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolyEditInsetOutsetProperties), &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_MetaData[] = {
		{ "Comment", "//~ This is not user editable- it gets set by PolyEdit depending on whether the user clicks\n//~ inset or outset. Currently, both operations share the same code, and one may argue that\n//~ we should just determine which to do based on where the user clicks. However, our long\n//~ term plan is that they will be more differentiated in operation, to the point that we\n//~ may split them into separate activities.\n" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
	void Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_SetBit(void* Obj)
	{
		((UPolyEditInsetOutsetProperties*)Obj)->bOutset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset = { "bOutset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolyEditInsetOutsetProperties), &Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_Softness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bBoundaryOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_AreaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bReproject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::NewProp_bOutset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsetOutsetProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::ClassParams = {
		&UPolyEditInsetOutsetProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditInsetOutsetProperties()
	{
		if (!Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton, Z_Construct_UClass_UPolyEditInsetOutsetProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsetOutsetProperties>()
	{
		return UPolyEditInsetOutsetProperties::StaticClass();
	}
	UPolyEditInsetOutsetProperties::UPolyEditInsetOutsetProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsetOutsetProperties);
	UPolyEditInsetOutsetProperties::~UPolyEditInsetOutsetProperties() {}
	void UPolyEditInsetOutsetActivity::StaticRegisterNativesUPolyEditInsetOutsetActivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsetOutsetActivity);
	UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister()
	{
		return UPolyEditInsetOutsetActivity::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveDistMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveDistMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivityContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ToolActivities/PolyEditInsetOutsetActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, Settings), Z_Construct_UClass_UPolyEditInsetOutsetProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview = { "EditPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, EditPreview), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic = { "CurveDistMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, CurveDistMechanic), Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsetOutsetActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsetOutsetActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_EditPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_CurveDistMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::NewProp_ActivityContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsetOutsetActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::ClassParams = {
		&UPolyEditInsetOutsetActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditInsetOutsetActivity()
	{
		if (!Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton, Z_Construct_UClass_UPolyEditInsetOutsetActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsetOutsetActivity>()
	{
		return UPolyEditInsetOutsetActivity::StaticClass();
	}
	UPolyEditInsetOutsetActivity::UPolyEditInsetOutsetActivity() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsetOutsetActivity);
	UPolyEditInsetOutsetActivity::~UPolyEditInsetOutsetActivity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditInsetOutsetProperties, UPolyEditInsetOutsetProperties::StaticClass, TEXT("UPolyEditInsetOutsetProperties"), &Z_Registration_Info_UClass_UPolyEditInsetOutsetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsetOutsetProperties), 924260310U) },
		{ Z_Construct_UClass_UPolyEditInsetOutsetActivity, UPolyEditInsetOutsetActivity::StaticClass, TEXT("UPolyEditInsetOutsetActivity"), &Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsetOutsetActivity), 2024128343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_3517123925(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsetOutsetActivity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
