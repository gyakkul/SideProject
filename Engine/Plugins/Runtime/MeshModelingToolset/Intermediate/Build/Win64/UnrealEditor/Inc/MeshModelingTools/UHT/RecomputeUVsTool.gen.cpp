// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RecomputeUVsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecomputeUVsTool() {}
// Cross Module References
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsTool_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URecomputeUVsToolBuilder_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void URecomputeUVsToolBuilder::StaticRegisterNativesURecomputeUVsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecomputeUVsToolBuilder);
	UClass* Z_Construct_UClass_URecomputeUVsToolBuilder_NoRegister()
	{
		return URecomputeUVsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URecomputeUVsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RecomputeUVsTool.h" },
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecomputeUVsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::ClassParams = {
		&URecomputeUVsToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecomputeUVsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_URecomputeUVsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecomputeUVsToolBuilder.OuterSingleton, Z_Construct_UClass_URecomputeUVsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URecomputeUVsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<URecomputeUVsToolBuilder>()
	{
		return URecomputeUVsToolBuilder::StaticClass();
	}
	URecomputeUVsToolBuilder::URecomputeUVsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecomputeUVsToolBuilder);
	URecomputeUVsToolBuilder::~URecomputeUVsToolBuilder() {}
	void URecomputeUVsTool::StaticRegisterNativesURecomputeUVsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecomputeUVsTool);
	UClass* Z_Construct_UClass_URecomputeUVsTool_NoRegister()
	{
		return URecomputeUVsTool::StaticClass();
	}
	struct Z_Construct_UClass_URecomputeUVsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVChannelProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayerProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateUVLayoutViewOnSetup_MetaData[];
#endif
		static void NewProp_bCreateUVLayoutViewOnSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateUVLayoutViewOnSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayoutView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVLayoutView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecomputeUVsOpFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecomputeUVsOpFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecomputeUVsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * URecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh\n */" },
		{ "IncludePath", "RecomputeUVsTool.h" },
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
		{ "ToolTip", "URecomputeUVsTool Recomputes UVs based on existing segmentations of the mesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, Settings), Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	void Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_SetBit(void* Obj)
	{
		((URecomputeUVsTool*)Obj)->bCreateUVLayoutViewOnSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup = { "bCreateUVLayoutViewOnSetup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URecomputeUVsTool), &Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView = { "UVLayoutView", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, UVLayoutView), Z_Construct_UClass_UUVLayoutPreview_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory = { "RecomputeUVsOpFactory", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, RecomputeUVsOpFactory), Z_Construct_UClass_URecomputeUVsOpFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RecomputeUVsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URecomputeUVsTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVChannelProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_bCreateUVLayoutViewOnSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_UVLayoutView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_RecomputeUVsOpFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecomputeUVsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecomputeUVsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URecomputeUVsTool_Statics::ClassParams = {
		&URecomputeUVsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URecomputeUVsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecomputeUVsTool()
	{
		if (!Z_Registration_Info_UClass_URecomputeUVsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecomputeUVsTool.OuterSingleton, Z_Construct_UClass_URecomputeUVsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URecomputeUVsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<URecomputeUVsTool>()
	{
		return URecomputeUVsTool::StaticClass();
	}
	URecomputeUVsTool::URecomputeUVsTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecomputeUVsTool);
	URecomputeUVsTool::~URecomputeUVsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URecomputeUVsToolBuilder, URecomputeUVsToolBuilder::StaticClass, TEXT("URecomputeUVsToolBuilder"), &Z_Registration_Info_UClass_URecomputeUVsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecomputeUVsToolBuilder), 140959918U) },
		{ Z_Construct_UClass_URecomputeUVsTool, URecomputeUVsTool::StaticClass, TEXT("URecomputeUVsTool"), &Z_Registration_Info_UClass_URecomputeUVsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecomputeUVsTool), 3315781186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_748074763(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_RecomputeUVsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
