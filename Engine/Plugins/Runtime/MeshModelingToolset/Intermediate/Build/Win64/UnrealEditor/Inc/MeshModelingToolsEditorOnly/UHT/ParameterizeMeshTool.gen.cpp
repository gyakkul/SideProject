// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParameterizeMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterizeMeshTool() {}
// Cross Module References
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshUVChannelProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshTool();
	MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolBuilder();
	MESHMODELINGTOOLSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolBuilder_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UUVLayoutPreview_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshOperatorFactory_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister();
	MODELINGOPERATORSEDITORONLY_API UClass* Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnly();
// End Cross Module References
	void UParameterizeMeshToolBuilder::StaticRegisterNativesUParameterizeMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshToolBuilder);
	UClass* Z_Construct_UClass_UParameterizeMeshToolBuilder_NoRegister()
	{
		return UParameterizeMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParameterizeMeshTool.h" },
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::ClassParams = {
		&UParameterizeMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UParameterizeMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLY_API UClass* StaticClass<UParameterizeMeshToolBuilder>()
	{
		return UParameterizeMeshToolBuilder::StaticClass();
	}
	UParameterizeMeshToolBuilder::UParameterizeMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshToolBuilder);
	UParameterizeMeshToolBuilder::~UParameterizeMeshToolBuilder() {}
	void UParameterizeMeshTool::StaticRegisterNativesUParameterizeMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParameterizeMeshTool);
	UClass* Z_Construct_UClass_UParameterizeMeshTool_NoRegister()
	{
		return UParameterizeMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UParameterizeMeshTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVAtlasProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVAtlasProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAtlasProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_XAtlasProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchBuilderProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PatchBuilderProperties;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParameterizeMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UParameterizeMeshTool automatically decomposes the input mesh into charts, solves for UVs,\n * and then packs the resulting charts\n */" },
		{ "IncludePath", "ParameterizeMeshTool.h" },
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
		{ "ToolTip", "UParameterizeMeshTool automatically decomposes the input mesh into charts, solves for UVs,\nand then packs the resulting charts" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVChannelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVChannelProperties = { "UVChannelProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, UVChannelProperties), Z_Construct_UClass_UMeshUVChannelProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVChannelProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVChannelProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, Settings), Z_Construct_UClass_UParameterizeMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVAtlasProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVAtlasProperties = { "UVAtlasProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, UVAtlasProperties), Z_Construct_UClass_UParameterizeMeshToolUVAtlasProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVAtlasProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVAtlasProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_XAtlasProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_XAtlasProperties = { "XAtlasProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, XAtlasProperties), Z_Construct_UClass_UParameterizeMeshToolXAtlasProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_XAtlasProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_XAtlasProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties = { "PatchBuilderProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, PatchBuilderProperties), Z_Construct_UClass_UParameterizeMeshToolPatchBuilderProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, MaterialSettings), Z_Construct_UClass_UExistingMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_MaterialSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	void Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_SetBit(void* Obj)
	{
		((UParameterizeMeshTool*)Obj)->bCreateUVLayoutViewOnSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup = { "bCreateUVLayoutViewOnSetup", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParameterizeMeshTool), &Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVLayoutView_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVLayoutView = { "UVLayoutView", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, UVLayoutView), Z_Construct_UClass_UUVLayoutPreview_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVLayoutView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVLayoutView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Factory_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizeMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParameterizeMeshTool, Factory), Z_Construct_UClass_UParameterizeMeshOperatorFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Factory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Factory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParameterizeMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVChannelProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVAtlasProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_XAtlasProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PatchBuilderProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_bCreateUVLayoutViewOnSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_UVLayoutView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParameterizeMeshTool_Statics::NewProp_Factory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParameterizeMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParameterizeMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParameterizeMeshTool_Statics::ClassParams = {
		&UParameterizeMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParameterizeMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UParameterizeMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParameterizeMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParameterizeMeshTool()
	{
		if (!Z_Registration_Info_UClass_UParameterizeMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParameterizeMeshTool.OuterSingleton, Z_Construct_UClass_UParameterizeMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParameterizeMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLY_API UClass* StaticClass<UParameterizeMeshTool>()
	{
		return UParameterizeMeshTool::StaticClass();
	}
	UParameterizeMeshTool::UParameterizeMeshTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParameterizeMeshTool);
	UParameterizeMeshTool::~UParameterizeMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ParameterizeMeshTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ParameterizeMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParameterizeMeshToolBuilder, UParameterizeMeshToolBuilder::StaticClass, TEXT("UParameterizeMeshToolBuilder"), &Z_Registration_Info_UClass_UParameterizeMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshToolBuilder), 3856651935U) },
		{ Z_Construct_UClass_UParameterizeMeshTool, UParameterizeMeshTool::StaticClass, TEXT("UParameterizeMeshTool"), &Z_Registration_Info_UClass_UParameterizeMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParameterizeMeshTool), 3498176163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ParameterizeMeshTool_h_3324492169(TEXT("/Script/MeshModelingToolsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ParameterizeMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingToolsEditorOnly_Public_ParameterizeMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
