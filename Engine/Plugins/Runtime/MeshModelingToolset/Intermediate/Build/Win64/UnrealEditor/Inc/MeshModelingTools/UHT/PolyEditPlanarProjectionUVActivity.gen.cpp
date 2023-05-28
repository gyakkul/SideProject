// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolActivities/PolyEditPlanarProjectionUVActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditPlanarProjectionUVActivity() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditSetUVProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditSetUVProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UPolyEditSetUVProperties::StaticRegisterNativesUPolyEditSetUVProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditSetUVProperties);
	UClass* Z_Construct_UClass_UPolyEditSetUVProperties_NoRegister()
	{
		return UPolyEditSetUVProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditSetUVProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMaterial_MetaData[];
#endif
		static void NewProp_bShowMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditSetUVProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditSetUVProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial_MetaData[] = {
		{ "Category", "PlanarProjectUV" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
	void Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial_SetBit(void* Obj)
	{
		((UPolyEditSetUVProperties*)Obj)->bShowMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial = { "bShowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolyEditSetUVProperties), &Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditSetUVProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditSetUVProperties_Statics::NewProp_bShowMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditSetUVProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditSetUVProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditSetUVProperties_Statics::ClassParams = {
		&UPolyEditSetUVProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditSetUVProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditSetUVProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditSetUVProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditSetUVProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditSetUVProperties()
	{
		if (!Z_Registration_Info_UClass_UPolyEditSetUVProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditSetUVProperties.OuterSingleton, Z_Construct_UClass_UPolyEditSetUVProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditSetUVProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditSetUVProperties>()
	{
		return UPolyEditSetUVProperties::StaticClass();
	}
	UPolyEditSetUVProperties::UPolyEditSetUVProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditSetUVProperties);
	UPolyEditSetUVProperties::~UPolyEditSetUVProperties() {}
	void UPolyEditPlanarProjectionUVActivity::StaticRegisterNativesUPolyEditPlanarProjectionUVActivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditPlanarProjectionUVActivity);
	UClass* Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister()
	{
		return UPolyEditPlanarProjectionUVActivity::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetUVProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SetUVProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePathMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SurfacePathMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivityContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SetUVProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SetUVProperties = { "SetUVProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditPlanarProjectionUVActivity, SetUVProperties), Z_Construct_UClass_UPolyEditSetUVProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SetUVProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SetUVProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_EditPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_EditPreview = { "EditPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditPlanarProjectionUVActivity, EditPreview), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_EditPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_EditPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SurfacePathMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SurfacePathMechanic = { "SurfacePathMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditPlanarProjectionUVActivity, SurfacePathMechanic), Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SurfacePathMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SurfacePathMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditPlanarProjectionUVActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditPlanarProjectionUVActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_ActivityContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_ActivityContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SetUVProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_EditPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_SurfacePathMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::NewProp_ActivityContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditPlanarProjectionUVActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::ClassParams = {
		&UPolyEditPlanarProjectionUVActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity()
	{
		if (!Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.OuterSingleton, Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditPlanarProjectionUVActivity>()
	{
		return UPolyEditPlanarProjectionUVActivity::StaticClass();
	}
	UPolyEditPlanarProjectionUVActivity::UPolyEditPlanarProjectionUVActivity() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditPlanarProjectionUVActivity);
	UPolyEditPlanarProjectionUVActivity::~UPolyEditPlanarProjectionUVActivity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditSetUVProperties, UPolyEditSetUVProperties::StaticClass, TEXT("UPolyEditSetUVProperties"), &Z_Registration_Info_UClass_UPolyEditSetUVProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditSetUVProperties), 2106302581U) },
		{ Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity, UPolyEditPlanarProjectionUVActivity::StaticClass, TEXT("UPolyEditPlanarProjectionUVActivity"), &Z_Registration_Info_UClass_UPolyEditPlanarProjectionUVActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditPlanarProjectionUVActivity), 3457591331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h_3912339039(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditPlanarProjectionUVActivity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
