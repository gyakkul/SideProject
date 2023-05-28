// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelCSGMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelCSGMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UVoxelCSGMeshesTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UVoxelCSGMeshesTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UVoxelCSGMeshesToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UVoxelCSGMeshesToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UVoxelCSGMeshesToolProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UVoxelCSGMeshesToolBuilder::StaticRegisterNativesUVoxelCSGMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelCSGMeshesToolBuilder);
	UClass* Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_NoRegister()
	{
		return UVoxelCSGMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VoxelCSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCSGMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::ClassParams = {
		&UVoxelCSGMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCSGMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UVoxelCSGMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCSGMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UVoxelCSGMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelCSGMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UVoxelCSGMeshesToolBuilder>()
	{
		return UVoxelCSGMeshesToolBuilder::StaticClass();
	}
	UVoxelCSGMeshesToolBuilder::UVoxelCSGMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCSGMeshesToolBuilder);
	UVoxelCSGMeshesToolBuilder::~UVoxelCSGMeshesToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoxelCSGOperation;
	static UEnum* EVoxelCSGOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoxelCSGOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoxelCSGOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EVoxelCSGOperation"));
		}
		return Z_Registration_Info_UEnum_EVoxelCSGOperation.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EVoxelCSGOperation>()
	{
		return EVoxelCSGOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::Enumerators[] = {
		{ "EVoxelCSGOperation::DifferenceAB", (int64)EVoxelCSGOperation::DifferenceAB },
		{ "EVoxelCSGOperation::DifferenceBA", (int64)EVoxelCSGOperation::DifferenceBA },
		{ "EVoxelCSGOperation::Intersect", (int64)EVoxelCSGOperation::Intersect },
		{ "EVoxelCSGOperation::Union", (int64)EVoxelCSGOperation::Union },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "DifferenceAB.Comment", "/** Subtracts the first object from the second */" },
		{ "DifferenceAB.DisplayName", "A - B" },
		{ "DifferenceAB.Name", "EVoxelCSGOperation::DifferenceAB" },
		{ "DifferenceAB.ToolTip", "Subtracts the first object from the second" },
		{ "DifferenceBA.Comment", "/** Subtracts the second object from the first */" },
		{ "DifferenceBA.DisplayName", "B - A" },
		{ "DifferenceBA.Name", "EVoxelCSGOperation::DifferenceBA" },
		{ "DifferenceBA.ToolTip", "Subtracts the second object from the first" },
		{ "Intersect.Comment", "/** intersection of two objects */" },
		{ "Intersect.DisplayName", "Intersect" },
		{ "Intersect.Name", "EVoxelCSGOperation::Intersect" },
		{ "Intersect.ToolTip", "intersection of two objects" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "Union.Comment", "/** union of two objects */" },
		{ "Union.DisplayName", "Union" },
		{ "Union.Name", "EVoxelCSGOperation::Union" },
		{ "Union.ToolTip", "union of two objects" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EVoxelCSGOperation",
		"EVoxelCSGOperation",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation()
	{
		if (!Z_Registration_Info_UEnum_EVoxelCSGOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoxelCSGOperation.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoxelCSGOperation.InnerSingleton;
	}
	void UVoxelCSGMeshesToolProperties::StaticRegisterNativesUVoxelCSGMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelCSGMeshesToolProperties);
	UClass* Z_Construct_UClass_UVoxelCSGMeshesToolProperties_NoRegister()
	{
		return UVoxelCSGMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
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
	UObject* (*const Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Voxel CSG operation\n */" },
		{ "IncludePath", "VoxelCSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "ToolTip", "Standard properties of the Voxel CSG operation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The type of operation  */" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "ToolTip", "The type of operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesToolProperties, Operation), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EVoxelCSGOperation, METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation_MetaData)) }; // 3460933387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_VoxelCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "8" },
		{ "Comment", "/** The size of the geometry bounding box major axis measured in voxels.*/" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "ToolTip", "The size of the geometry bounding box major axis measured in voxels." },
		{ "UIMax", "1024" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_VoxelCount = { "VoxelCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesToolProperties, VoxelCount), METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_VoxelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_VoxelCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_MeshAdaptivity_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Remeshing adaptivity, prior to optional simplification */" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "ToolTip", "Remeshing adaptivity, prior to optional simplification" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_MeshAdaptivity = { "MeshAdaptivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesToolProperties, MeshAdaptivity), METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_MeshAdaptivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_MeshAdaptivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10" },
		{ "ClampMin", "-10" },
		{ "Comment", "/** Offset when remeshing, note large offsets with high voxels counts will be slow */" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "ToolTip", "Offset when remeshing, note large offsets with high voxels counts will be slow" },
		{ "UIMax", "10" },
		{ "UIMin", "-10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesToolProperties, OffsetDistance), METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_OffsetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_OffsetDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Automatically simplify the result of voxel-based merge.*/" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
		{ "ToolTip", "Automatically simplify the result of voxel-based merge." },
	};
#endif
	void Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify_SetBit(void* Obj)
	{
		((UVoxelCSGMeshesToolProperties*)Obj)->bAutoSimplify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify = { "bAutoSimplify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVoxelCSGMeshesToolProperties), &Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_VoxelCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_MeshAdaptivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_OffsetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::NewProp_bAutoSimplify,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCSGMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::ClassParams = {
		&UVoxelCSGMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCSGMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UVoxelCSGMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCSGMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UVoxelCSGMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelCSGMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UVoxelCSGMeshesToolProperties>()
	{
		return UVoxelCSGMeshesToolProperties::StaticClass();
	}
	UVoxelCSGMeshesToolProperties::UVoxelCSGMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCSGMeshesToolProperties);
	UVoxelCSGMeshesToolProperties::~UVoxelCSGMeshesToolProperties() {}
	void UVoxelCSGMeshesTool::StaticRegisterNativesUVoxelCSGMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelCSGMeshesTool);
	UClass* Z_Construct_UClass_UVoxelCSGMeshesTool_NoRegister()
	{
		return UVoxelCSGMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelCSGMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CSGProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CSGProps;
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
	UObject* (*const Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VoxelCSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_CSGProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_CSGProps = { "CSGProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesTool, CSGProps), Z_Construct_UClass_UVoxelCSGMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_CSGProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_CSGProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_MeshStatisticsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_MeshStatisticsProperties = { "MeshStatisticsProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesTool, MeshStatisticsProperties), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_MeshStatisticsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_MeshStatisticsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_HandleSourcesProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_HandleSourcesProperties = { "HandleSourcesProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesTool, HandleSourcesProperties), Z_Construct_UClass_UOnAcceptHandleSourcesProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_HandleSourcesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_HandleSourcesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelCSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVoxelCSGMeshesTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_CSGProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_MeshStatisticsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_HandleSourcesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCSGMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::ClassParams = {
		&UVoxelCSGMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelCSGMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UVoxelCSGMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCSGMeshesTool.OuterSingleton, Z_Construct_UClass_UVoxelCSGMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelCSGMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UVoxelCSGMeshesTool>()
	{
		return UVoxelCSGMeshesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCSGMeshesTool);
	UVoxelCSGMeshesTool::~UVoxelCSGMeshesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics::EnumInfo[] = {
		{ EVoxelCSGOperation_StaticEnum, TEXT("EVoxelCSGOperation"), &Z_Registration_Info_UEnum_EVoxelCSGOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3460933387U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelCSGMeshesToolBuilder, UVoxelCSGMeshesToolBuilder::StaticClass, TEXT("UVoxelCSGMeshesToolBuilder"), &Z_Registration_Info_UClass_UVoxelCSGMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCSGMeshesToolBuilder), 1133739493U) },
		{ Z_Construct_UClass_UVoxelCSGMeshesToolProperties, UVoxelCSGMeshesToolProperties::StaticClass, TEXT("UVoxelCSGMeshesToolProperties"), &Z_Registration_Info_UClass_UVoxelCSGMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCSGMeshesToolProperties), 635871318U) },
		{ Z_Construct_UClass_UVoxelCSGMeshesTool, UVoxelCSGMeshesTool::StaticClass, TEXT("UVoxelCSGMeshesTool"), &Z_Registration_Info_UClass_UVoxelCSGMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCSGMeshesTool), 744647484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_2478584433(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_VoxelCSGMeshesTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
