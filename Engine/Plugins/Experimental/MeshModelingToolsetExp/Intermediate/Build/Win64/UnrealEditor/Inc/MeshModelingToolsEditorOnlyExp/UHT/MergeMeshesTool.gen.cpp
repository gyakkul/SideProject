// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MergeMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMergeMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMergeMeshesTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMergeMeshesTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMergeMeshesToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMergeMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMergeMeshesToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMergeMeshesToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UMergeMeshesToolBuilder::StaticRegisterNativesUMergeMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMergeMeshesToolBuilder);
	UClass* Z_Construct_UClass_UMergeMeshesToolBuilder_NoRegister()
	{
		return UMergeMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMergeMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MergeMeshesTool.h" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergeMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::ClassParams = {
		&UMergeMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergeMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMergeMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMergeMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UMergeMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMergeMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMergeMeshesToolBuilder>()
	{
		return UMergeMeshesToolBuilder::StaticClass();
	}
	UMergeMeshesToolBuilder::UMergeMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergeMeshesToolBuilder);
	UMergeMeshesToolBuilder::~UMergeMeshesToolBuilder() {}
	void UMergeMeshesToolProperties::StaticRegisterNativesUMergeMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMergeMeshesToolProperties);
	UClass* Z_Construct_UClass_UMergeMeshesToolProperties_NoRegister()
	{
		return UMergeMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMergeMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshAdaptivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshAdaptivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSimplify_MetaData[];
#endif
		static void NewProp_bAutoSimplify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSimplify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergeMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Merge Meshes operation\n */" },
		{ "IncludePath", "MergeMeshesTool.h" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
		{ "ToolTip", "Standard properties of the Merge Meshes operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_VoxelCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "8" },
		{ "Comment", "/** The size of the geometry bounding box major axis measured in voxels.*/" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
		{ "ToolTip", "The size of the geometry bounding box major axis measured in voxels." },
		{ "UIMax", "1024" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_VoxelCount = { "VoxelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesToolProperties, VoxelCount), METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_VoxelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_VoxelCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_MeshAdaptivity_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Remeshing adaptivity, prior to optional simplification */" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
		{ "ToolTip", "Remeshing adaptivity, prior to optional simplification" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_MeshAdaptivity = { "MeshAdaptivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesToolProperties, MeshAdaptivity), METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_MeshAdaptivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_MeshAdaptivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Offset when remeshing, note large offsets with high voxels counts will be slow */" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
		{ "ToolTip", "Offset when remeshing, note large offsets with high voxels counts will be slow" },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesToolProperties, OffsetDistance), METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_OffsetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_OffsetDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Automatically simplify the result of voxel-based merge.*/" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
		{ "ToolTip", "Automatically simplify the result of voxel-based merge." },
	};
#endif
	void Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify_SetBit(void* Obj)
	{
		((UMergeMeshesToolProperties*)Obj)->bAutoSimplify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify = { "bAutoSimplify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMergeMeshesToolProperties), &Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMergeMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_VoxelCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_MeshAdaptivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_OffsetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesToolProperties_Statics::NewProp_bAutoSimplify,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergeMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergeMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMergeMeshesToolProperties_Statics::ClassParams = {
		&UMergeMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMergeMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergeMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMergeMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMergeMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UMergeMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMergeMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMergeMeshesToolProperties>()
	{
		return UMergeMeshesToolProperties::StaticClass();
	}
	UMergeMeshesToolProperties::UMergeMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergeMeshesToolProperties);
	UMergeMeshesToolProperties::~UMergeMeshesToolProperties() {}
	void UMergeMeshesTool::StaticRegisterNativesUMergeMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMergeMeshesTool);
	UClass* Z_Construct_UClass_UMergeMeshesTool_NoRegister()
	{
		return UMergeMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UMergeMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MergeProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshStatisticsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshStatisticsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleSourcesProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandleSourcesProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMergeMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MergeMeshesTool.h" },
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MergeProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MergeProps = { "MergeProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesTool, MergeProps), Z_Construct_UClass_UMergeMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MergeProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MergeProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MeshStatisticsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MeshStatisticsProperties = { "MeshStatisticsProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesTool, MeshStatisticsProperties), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MeshStatisticsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MeshStatisticsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_HandleSourcesProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_HandleSourcesProperties = { "HandleSourcesProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesTool, HandleSourcesProperties), Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_HandleSourcesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_HandleSourcesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/MergeMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMergeMeshesTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMergeMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MergeProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_MeshStatisticsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_HandleSourcesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMergeMeshesTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMergeMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMergeMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMergeMeshesTool_Statics::ClassParams = {
		&UMergeMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMergeMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMergeMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMergeMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMergeMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UMergeMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMergeMeshesTool.OuterSingleton, Z_Construct_UClass_UMergeMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMergeMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMergeMeshesTool>()
	{
		return UMergeMeshesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMergeMeshesTool);
	UMergeMeshesTool::~UMergeMeshesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MergeMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MergeMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMergeMeshesToolBuilder, UMergeMeshesToolBuilder::StaticClass, TEXT("UMergeMeshesToolBuilder"), &Z_Registration_Info_UClass_UMergeMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMergeMeshesToolBuilder), 405031898U) },
		{ Z_Construct_UClass_UMergeMeshesToolProperties, UMergeMeshesToolProperties::StaticClass, TEXT("UMergeMeshesToolProperties"), &Z_Registration_Info_UClass_UMergeMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMergeMeshesToolProperties), 1407686034U) },
		{ Z_Construct_UClass_UMergeMeshesTool, UMergeMeshesTool::StaticClass, TEXT("UMergeMeshesTool"), &Z_Registration_Info_UClass_UMergeMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMergeMeshesTool), 3455433755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MergeMeshesTool_h_414107623(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MergeMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MergeMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
