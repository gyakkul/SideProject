// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/BaseMeshProcessingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMeshProcessingTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseMeshProcessingToolBuilder_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UBaseMeshProcessingToolBuilder::StaticRegisterNativesUBaseMeshProcessingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMeshProcessingToolBuilder);
	UClass* Z_Construct_UClass_UBaseMeshProcessingToolBuilder_NoRegister()
	{
		return UBaseMeshProcessingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder for UBaseMeshProcessingTool\n */" },
		{ "IncludePath", "BaseTools/BaseMeshProcessingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseMeshProcessingTool.h" },
		{ "ToolTip", "ToolBuilder for UBaseMeshProcessingTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMeshProcessingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::ClassParams = {
		&UBaseMeshProcessingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMeshProcessingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.OuterSingleton, Z_Construct_UClass_UBaseMeshProcessingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseMeshProcessingToolBuilder>()
	{
		return UBaseMeshProcessingToolBuilder::StaticClass();
	}
	UBaseMeshProcessingToolBuilder::UBaseMeshProcessingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMeshProcessingToolBuilder);
	UBaseMeshProcessingToolBuilder::~UBaseMeshProcessingToolBuilder() {}
	void UBaseMeshProcessingTool::StaticRegisterNativesUBaseMeshProcessingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMeshProcessingTool);
	UClass* Z_Construct_UClass_UBaseMeshProcessingTool_NoRegister()
	{
		return UBaseMeshProcessingTool::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMeshProcessingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMeshProcessingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMeshProcessingTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UBaseMeshProcessingTool is a base Tool (ie has no functionality of it's own and must be subclassed) \n * that provides the following structure:\n *   - a Background-Compute-With-Preview Temp Actor/Component is created based on the input mesh\n *   - The Subclass provides FDynamicMeshOperator instances (via IDynamicMeshOperatorFactory) that process/modify and update this Preview\n *   - PropertySets with custom visibility can be registered, and on change will invalidate the current computation\n *   \n * Optional support for a WeightMap property set and tracking of active weight map can be enabled by calling\n * AddWeightMapPropertySet(), GetActiveWeightMap() will then return the active WeightMap, and changes to the \n * WeightMap selection will invalidate the computation.\n *\n * Most subclasses will only need to define their PropertySets and implement MakeNewOperator(), see eg SmoothMeshTool for a minimal example\n *\n * Other functions:\n *   - GetInitialMesh() : return reference to copy of initial mesh, used to initialize FDynamicMeshOperator\n *   - GetUPreviewMesh() : return the UPreviewMesh inside the background compute (for configuration/etc - should not directly touch the mesh!)\n *   - GetPreviewTransform() : return active FTransform on the Preview mesh, should be passed to FDynamicMeshOperator unless it is outputting world position\n *   - InvalidateResult() : subclasses call this to notify the base class that current result/computation has been invalidated\n *\n * The Base tool will do various optional precomputations or changes to the input mesh, which can be configured by\n * overriding various functions below.\n * \n *   RequiresInitialVtxNormals() : return true (default=false) to calculate per-vertex normals on the input mesh, returned by GetInitialVtxNormals()\n *\n *   RequiresInitialBoundaryLoops() : return true (default=false) to calculate boundary loops on the input mesh, returned by GetInitialBoundaryLoops()\n *\n *   RequiresScaleNormalization() : return true (default=true) to apply an initial scale to the input mesh so that it has consistent size\n *     before being sent into the computation. Scaling factor (eg for scaling UI constants) can be accessed via GetScaleNormalizationFactor()\n *\n */" },
		{ "IncludePath", "BaseTools/BaseMeshProcessingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseMeshProcessingTool.h" },
		{ "ToolTip", "UBaseMeshProcessingTool is a base Tool (ie has no functionality of it's own and must be subclassed)\nthat provides the following structure:\n  - a Background-Compute-With-Preview Temp Actor/Component is created based on the input mesh\n  - The Subclass provides FDynamicMeshOperator instances (via IDynamicMeshOperatorFactory) that process/modify and update this Preview\n  - PropertySets with custom visibility can be registered, and on change will invalidate the current computation\n\nOptional support for a WeightMap property set and tracking of active weight map can be enabled by calling\nAddWeightMapPropertySet(), GetActiveWeightMap() will then return the active WeightMap, and changes to the\nWeightMap selection will invalidate the computation.\n\nMost subclasses will only need to define their PropertySets and implement MakeNewOperator(), see eg SmoothMeshTool for a minimal example\n\nOther functions:\n  - GetInitialMesh() : return reference to copy of initial mesh, used to initialize FDynamicMeshOperator\n  - GetUPreviewMesh() : return the UPreviewMesh inside the background compute (for configuration/etc - should not directly touch the mesh!)\n  - GetPreviewTransform() : return active FTransform on the Preview mesh, should be passed to FDynamicMeshOperator unless it is outputting world position\n  - InvalidateResult() : subclasses call this to notify the base class that current result/computation has been invalidated\n\nThe Base tool will do various optional precomputations or changes to the input mesh, which can be configured by\noverriding various functions below.\n\n  RequiresInitialVtxNormals() : return true (default=false) to calculate per-vertex normals on the input mesh, returned by GetInitialVtxNormals()\n\n  RequiresInitialBoundaryLoops() : return true (default=false) to calculate boundary loops on the input mesh, returned by GetInitialBoundaryLoops()\n\n  RequiresScaleNormalization() : return true (default=true) to apply an initial scale to the input mesh so that it has consistent size\n    before being sent into the computation. Scaling factor (eg for scaling UI constants) can be accessed via GetScaleNormalizationFactor()" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMeshProcessingTool_Statics::NewProp_Preview_MetaData[] = {
		{ "Comment", "// Preview object holds temporary Actor with preview mesh component\n" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseMeshProcessingTool.h" },
		{ "ToolTip", "Preview object holds temporary Actor with preview mesh component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseMeshProcessingTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseMeshProcessingTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseMeshProcessingTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshProcessingTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMeshProcessingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMeshProcessingTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMeshProcessingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMeshProcessingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMeshProcessingTool_Statics::ClassParams = {
		&UBaseMeshProcessingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseMeshProcessingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshProcessingTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseMeshProcessingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMeshProcessingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMeshProcessingTool()
	{
		if (!Z_Registration_Info_UClass_UBaseMeshProcessingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMeshProcessingTool.OuterSingleton, Z_Construct_UClass_UBaseMeshProcessingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseMeshProcessingTool.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseMeshProcessingTool>()
	{
		return UBaseMeshProcessingTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMeshProcessingTool);
	UBaseMeshProcessingTool::~UBaseMeshProcessingTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseMeshProcessingTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseMeshProcessingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMeshProcessingToolBuilder, UBaseMeshProcessingToolBuilder::StaticClass, TEXT("UBaseMeshProcessingToolBuilder"), &Z_Registration_Info_UClass_UBaseMeshProcessingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMeshProcessingToolBuilder), 3041579674U) },
		{ Z_Construct_UClass_UBaseMeshProcessingTool, UBaseMeshProcessingTool::StaticClass, TEXT("UBaseMeshProcessingTool"), &Z_Registration_Info_UClass_UBaseMeshProcessingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMeshProcessingTool), 1919709701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseMeshProcessingTool_h_2128740442(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseMeshProcessingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseMeshProcessingTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
