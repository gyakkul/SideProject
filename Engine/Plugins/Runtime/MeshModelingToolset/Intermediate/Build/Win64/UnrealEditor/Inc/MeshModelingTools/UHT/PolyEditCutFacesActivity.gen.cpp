// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolActivities/PolyEditCutFacesActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditCutFacesActivity() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutFacesActivity();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditCutProperties_NoRegister();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation;
	static UEnum* EPolyEditCutPlaneOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EPolyEditCutPlaneOrientation"));
		}
		return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditCutPlaneOrientation>()
	{
		return EPolyEditCutPlaneOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enumerators[] = {
		{ "EPolyEditCutPlaneOrientation::FaceNormals", (int64)EPolyEditCutPlaneOrientation::FaceNormals },
		{ "EPolyEditCutPlaneOrientation::ViewDirection", (int64)EPolyEditCutPlaneOrientation::ViewDirection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enum_MetaDataParams[] = {
		{ "FaceNormals.Name", "EPolyEditCutPlaneOrientation::FaceNormals" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
		{ "ViewDirection.Name", "EPolyEditCutPlaneOrientation::ViewDirection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"EPolyEditCutPlaneOrientation",
		"EPolyEditCutPlaneOrientation",
		Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation()
	{
		if (!Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation.InnerSingleton;
	}
	void UPolyEditCutProperties::StaticRegisterNativesUPolyEditCutProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditCutProperties);
	UClass* Z_Construct_UClass_UPolyEditCutProperties_NoRegister()
	{
		return UPolyEditCutProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditCutProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToVertices_MetaData[];
#endif
		static void NewProp_bSnapToVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditCutProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditCutFacesActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditCutProperties, Orientation), Z_Construct_UEnum_MeshModelingTools_EPolyEditCutPlaneOrientation, METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_MetaData)) }; // 588036115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	void Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_SetBit(void* Obj)
	{
		((UPolyEditCutProperties*)Obj)->bSnapToVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices = { "bSnapToVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolyEditCutProperties), &Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutProperties_Statics::NewProp_bSnapToVertices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditCutProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditCutProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditCutProperties_Statics::ClassParams = {
		&UPolyEditCutProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditCutProperties()
	{
		if (!Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton, Z_Construct_UClass_UPolyEditCutProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditCutProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditCutProperties>()
	{
		return UPolyEditCutProperties::StaticClass();
	}
	UPolyEditCutProperties::UPolyEditCutProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditCutProperties);
	UPolyEditCutProperties::~UPolyEditCutProperties() {}
	void UPolyEditCutFacesActivity::StaticRegisterNativesUPolyEditCutFacesActivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditCutFacesActivity);
	UClass* Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister()
	{
		return UPolyEditCutFacesActivity::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditCutFacesActivity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CutProperties;
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
	UObject* (*const Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ToolActivities/PolyEditCutFacesActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties = { "CutProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditCutFacesActivity, CutProperties), Z_Construct_UClass_UPolyEditCutProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview = { "EditPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditCutFacesActivity, EditPreview), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic = { "SurfacePathMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditCutFacesActivity, SurfacePathMechanic), Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditCutFacesActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditCutFacesActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_CutProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_EditPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_SurfacePathMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::NewProp_ActivityContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditCutFacesActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::ClassParams = {
		&UPolyEditCutFacesActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditCutFacesActivity()
	{
		if (!Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton, Z_Construct_UClass_UPolyEditCutFacesActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditCutFacesActivity.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditCutFacesActivity>()
	{
		return UPolyEditCutFacesActivity::StaticClass();
	}
	UPolyEditCutFacesActivity::UPolyEditCutFacesActivity() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditCutFacesActivity);
	UPolyEditCutFacesActivity::~UPolyEditCutFacesActivity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::EnumInfo[] = {
		{ EPolyEditCutPlaneOrientation_StaticEnum, TEXT("EPolyEditCutPlaneOrientation"), &Z_Registration_Info_UEnum_EPolyEditCutPlaneOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 588036115U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolyEditCutProperties, UPolyEditCutProperties::StaticClass, TEXT("UPolyEditCutProperties"), &Z_Registration_Info_UClass_UPolyEditCutProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditCutProperties), 3377422315U) },
		{ Z_Construct_UClass_UPolyEditCutFacesActivity, UPolyEditCutFacesActivity::StaticClass, TEXT("UPolyEditCutFacesActivity"), &Z_Registration_Info_UClass_UPolyEditCutFacesActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditCutFacesActivity), 3227350077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_760639241(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditCutFacesActivity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
