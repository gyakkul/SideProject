// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/SetCollisionGeometryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetCollisionGeometryTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void USetCollisionGeometryToolBuilder::StaticRegisterNativesUSetCollisionGeometryToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetCollisionGeometryToolBuilder);
	UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder_NoRegister()
	{
		return USetCollisionGeometryToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/SetCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetCollisionGeometryToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::ClassParams = {
		&USetCollisionGeometryToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetCollisionGeometryToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder.OuterSingleton, Z_Construct_UClass_USetCollisionGeometryToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USetCollisionGeometryToolBuilder>()
	{
		return USetCollisionGeometryToolBuilder::StaticClass();
	}
	USetCollisionGeometryToolBuilder::USetCollisionGeometryToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetCollisionGeometryToolBuilder);
	USetCollisionGeometryToolBuilder::~USetCollisionGeometryToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode;
	static UEnum* ESetCollisionGeometryInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ESetCollisionGeometryInputMode"));
		}
		return Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ESetCollisionGeometryInputMode>()
	{
		return ESetCollisionGeometryInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enumerators[] = {
		{ "ESetCollisionGeometryInputMode::CombineAll", (int64)ESetCollisionGeometryInputMode::CombineAll },
		{ "ESetCollisionGeometryInputMode::PerInputObject", (int64)ESetCollisionGeometryInputMode::PerInputObject },
		{ "ESetCollisionGeometryInputMode::PerMeshComponent", (int64)ESetCollisionGeometryInputMode::PerMeshComponent },
		{ "ESetCollisionGeometryInputMode::PerMeshGroup", (int64)ESetCollisionGeometryInputMode::PerMeshGroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enum_MetaDataParams[] = {
		{ "CombineAll.Name", "ESetCollisionGeometryInputMode::CombineAll" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "PerInputObject.Name", "ESetCollisionGeometryInputMode::PerInputObject" },
		{ "PerMeshComponent.Name", "ESetCollisionGeometryInputMode::PerMeshComponent" },
		{ "PerMeshGroup.Name", "ESetCollisionGeometryInputMode::PerMeshGroup" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ESetCollisionGeometryInputMode",
		"ESetCollisionGeometryInputMode",
		Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode()
	{
		if (!Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionGeometryType;
	static UEnum* ECollisionGeometryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionGeometryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ECollisionGeometryType"));
		}
		return Z_Registration_Info_UEnum_ECollisionGeometryType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECollisionGeometryType>()
	{
		return ECollisionGeometryType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enumerators[] = {
		{ "ECollisionGeometryType::KeepExisting", (int64)ECollisionGeometryType::KeepExisting },
		{ "ECollisionGeometryType::AlignedBoxes", (int64)ECollisionGeometryType::AlignedBoxes },
		{ "ECollisionGeometryType::OrientedBoxes", (int64)ECollisionGeometryType::OrientedBoxes },
		{ "ECollisionGeometryType::MinimalSpheres", (int64)ECollisionGeometryType::MinimalSpheres },
		{ "ECollisionGeometryType::Capsules", (int64)ECollisionGeometryType::Capsules },
		{ "ECollisionGeometryType::ConvexHulls", (int64)ECollisionGeometryType::ConvexHulls },
		{ "ECollisionGeometryType::SweptHulls", (int64)ECollisionGeometryType::SweptHulls },
		{ "ECollisionGeometryType::LevelSets", (int64)ECollisionGeometryType::LevelSets },
		{ "ECollisionGeometryType::MinVolume", (int64)ECollisionGeometryType::MinVolume },
		{ "ECollisionGeometryType::None", (int64)ECollisionGeometryType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enum_MetaDataParams[] = {
		{ "AlignedBoxes.Name", "ECollisionGeometryType::AlignedBoxes" },
		{ "Capsules.Name", "ECollisionGeometryType::Capsules" },
		{ "ConvexHulls.Name", "ECollisionGeometryType::ConvexHulls" },
		{ "KeepExisting.Name", "ECollisionGeometryType::KeepExisting" },
		{ "LevelSets.Name", "ECollisionGeometryType::LevelSets" },
		{ "MinimalSpheres.Name", "ECollisionGeometryType::MinimalSpheres" },
		{ "MinVolume.Name", "ECollisionGeometryType::MinVolume" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "None.Name", "ECollisionGeometryType::None" },
		{ "OrientedBoxes.Name", "ECollisionGeometryType::OrientedBoxes" },
		{ "SweptHulls.Name", "ECollisionGeometryType::SweptHulls" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ECollisionGeometryType",
		"ECollisionGeometryType",
		Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType()
	{
		if (!Z_Registration_Info_UEnum_ECollisionGeometryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionGeometryType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionGeometryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProjectedHullAxis;
	static UEnum* EProjectedHullAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProjectedHullAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProjectedHullAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EProjectedHullAxis"));
		}
		return Z_Registration_Info_UEnum_EProjectedHullAxis.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EProjectedHullAxis>()
	{
		return EProjectedHullAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enumerators[] = {
		{ "EProjectedHullAxis::X", (int64)EProjectedHullAxis::X },
		{ "EProjectedHullAxis::Y", (int64)EProjectedHullAxis::Y },
		{ "EProjectedHullAxis::Z", (int64)EProjectedHullAxis::Z },
		{ "EProjectedHullAxis::SmallestBoxDimension", (int64)EProjectedHullAxis::SmallestBoxDimension },
		{ "EProjectedHullAxis::SmallestVolume", (int64)EProjectedHullAxis::SmallestVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "SmallestBoxDimension.Name", "EProjectedHullAxis::SmallestBoxDimension" },
		{ "SmallestVolume.Name", "EProjectedHullAxis::SmallestVolume" },
		{ "X.Name", "EProjectedHullAxis::X" },
		{ "Y.Name", "EProjectedHullAxis::Y" },
		{ "Z.Name", "EProjectedHullAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EProjectedHullAxis",
		"EProjectedHullAxis",
		Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis()
	{
		if (!Z_Registration_Info_UEnum_EProjectedHullAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProjectedHullAxis.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProjectedHullAxis.InnerSingleton;
	}
	void USetCollisionGeometryToolProperties::StaticRegisterNativesUSetCollisionGeometryToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetCollisionGeometryToolProperties);
	UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties_NoRegister()
	{
		return USetCollisionGeometryToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GeometryType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpace_MetaData[];
#endif
		static void NewProp_bUseWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveContained_MetaData[];
#endif
		static void NewProp_bRemoveContained_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveContained;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMaxCount_MetaData[];
#endif
		static void NewProp_bEnableMaxCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectBoxes_MetaData[];
#endif
		static void NewProp_bDetectBoxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectBoxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectSpheres_MetaData[];
#endif
		static void NewProp_bDetectSpheres_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectSpheres;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectCapsules_MetaData[];
#endif
		static void NewProp_bDetectCapsules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectCapsules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyHulls_MetaData[];
#endif
		static void NewProp_bSimplifyHulls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyHulls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HullTargetFaceCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullTargetFaceCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHullsPerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullsPerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvexDecompositionSearchFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConvexDecompositionSearchFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddHullsErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AddHullsErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPartThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPartThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyPolygons_MetaData[];
#endif
		static void NewProp_bSimplifyPolygons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyPolygons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HullTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HullTolerance;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SweepAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SweepAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LevelSetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAppendToExisting_MetaData[];
#endif
		static void NewProp_bAppendToExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendToExisting;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetCollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SetCollisionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/SetCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, GeometryType), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryType, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_MetaData)) }; // 3055103104
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, InputMode), Z_Construct_UEnum_MeshModelingToolsExp_ESetCollisionGeometryInputMode, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_MetaData)) }; // 712641755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bUseWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace = { "bUseWorldSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bRemoveContained = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained = { "bRemoveContained", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bEnableMaxCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount = { "bEnableMaxCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "9999999" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bEnableMaxCount" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MaxCount), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness = { "MinThickness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MinThickness), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_MetaData[] = {
		{ "Category", "AutoDetect" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bDetectBoxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes = { "bDetectBoxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_MetaData[] = {
		{ "Category", "AutoDetect" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bDetectSpheres = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres = { "bDetectSpheres", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_MetaData[] = {
		{ "Category", "AutoDetect" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bDetectCapsules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules = { "bDetectCapsules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bSimplifyHulls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls = { "bSimplifyHulls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMax", "9999999" },
		{ "ClampMin", "4" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "UIMax", "100" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount = { "HullTargetFaceCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, HullTargetFaceCount), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "1" },
		{ "Comment", "/** How many convex hulls can be used to approximate each mesh */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "How many convex hulls can be used to approximate each mesh" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh = { "MaxHullsPerMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MaxHullsPerMesh), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to search the space of possible decompositions beyond MaxHullsPerMesh; for larger values, will do additional work to try to better approximate mesh features (but resulting hulls may overlap more) */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "How much to search the space of possible decompositions beyond MaxHullsPerMesh; for larger values, will do additional work to try to better approximate mesh features (but resulting hulls may overlap more)" },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor = { "ConvexDecompositionSearchFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, ConvexDecompositionSearchFactor), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Error tolerance for adding more convex hulls, in cm.  For volumetric errors, the value will be cubed (so a value of 10 indicates a 10x10x10 volume worth of error is acceptable). */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Error tolerance for adding more convex hulls, in cm.  For volumetric errors, the value will be cubed (so a value of 10 indicates a 10x10x10 volume worth of error is acceptable)." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance = { "AddHullsErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, AddHullsErrorTolerance), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness_MetaData[] = {
		{ "Category", "ConvexHulls" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum part thickness for convex decomposition (in cm); hulls thinner than this will be merged into adjacent hulls, if possible. */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::ConvexHulls && MaxHullsPerMesh > 1" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Minimum part thickness for convex decomposition (in cm); hulls thinner than this will be merged into adjacent hulls, if possible." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness = { "MinPartThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, MinPartThickness), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons_MetaData[] = {
		{ "Category", "SweptHulls" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bSimplifyPolygons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons = { "bSimplifyPolygons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance_MetaData[] = {
		{ "Category", "SweptHulls" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance = { "HullTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, HullTolerance), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_MetaData[] = {
		{ "Category", "SweptHulls" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::SweptHulls" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis = { "SweepAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, SweepAxis), Z_Construct_UEnum_MeshModelingToolsExp_EProjectedHullAxis, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_MetaData)) }; // 923433839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution_MetaData[] = {
		{ "Category", "LevelSets" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "3" },
		{ "Comment", "/** Level set grid resolution along longest grid axis */" },
		{ "EditCondition", "GeometryType == ECollisionGeometryType::LevelSets" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Level set grid resolution along longest grid axis" },
		{ "UIMax", "100" },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution = { "LevelSetResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, LevelSetResolution), METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_MetaData[] = {
		{ "Category", "OutputOptions" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	void Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_SetBit(void* Obj)
	{
		((USetCollisionGeometryToolProperties*)Obj)->bAppendToExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting = { "bAppendToExisting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USetCollisionGeometryToolProperties), &Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_MetaData[] = {
		{ "Category", "OutputOptions" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType = { "SetCollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryToolProperties, SetCollisionType), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_MetaData)) }; // 1167877315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_GeometryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bUseWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bRemoveContained,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bEnableMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectSpheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bDetectCapsules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyHulls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTargetFaceCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MaxHullsPerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_ConvexDecompositionSearchFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_AddHullsErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_MinPartThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bSimplifyPolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_HullTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SweepAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_LevelSetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_bAppendToExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::NewProp_SetCollisionType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetCollisionGeometryToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::ClassParams = {
		&USetCollisionGeometryToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetCollisionGeometryToolProperties()
	{
		if (!Z_Registration_Info_UClass_USetCollisionGeometryToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetCollisionGeometryToolProperties.OuterSingleton, Z_Construct_UClass_USetCollisionGeometryToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USetCollisionGeometryToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USetCollisionGeometryToolProperties>()
	{
		return USetCollisionGeometryToolProperties::StaticClass();
	}
	USetCollisionGeometryToolProperties::USetCollisionGeometryToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetCollisionGeometryToolProperties);
	USetCollisionGeometryToolProperties::~USetCollisionGeometryToolProperties() {}
	void USetCollisionGeometryTool::StaticRegisterNativesUSetCollisionGeometryTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USetCollisionGeometryTool);
	UClass* Z_Construct_UClass_USetCollisionGeometryTool_NoRegister()
	{
		return USetCollisionGeometryTool::StaticClass();
	}
	struct Z_Construct_UClass_USetCollisionGeometryTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayerProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VizSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VizSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetCollisionGeometryTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Inspector Tool for visualizing mesh information\n */" },
		{ "IncludePath", "Physics/SetCollisionGeometryTool.h" },
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
		{ "ToolTip", "Mesh Inspector Tool for visualizing mesh information" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryTool, Settings), Z_Construct_UClass_USetCollisionGeometryToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings = { "VizSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryTool, VizSettings), Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps = { "CollisionProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryTool, CollisionProps), Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryTool, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom_MetaData[] = {
		{ "ModuleRelativePath", "Public/Physics/SetCollisionGeometryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom = { "PreviewGeom", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USetCollisionGeometryTool, PreviewGeom), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_VizSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_CollisionProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetCollisionGeometryTool_Statics::NewProp_PreviewGeom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetCollisionGeometryTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetCollisionGeometryTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USetCollisionGeometryTool_Statics::ClassParams = {
		&USetCollisionGeometryTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USetCollisionGeometryTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetCollisionGeometryTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetCollisionGeometryTool()
	{
		if (!Z_Registration_Info_UClass_USetCollisionGeometryTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USetCollisionGeometryTool.OuterSingleton, Z_Construct_UClass_USetCollisionGeometryTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USetCollisionGeometryTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USetCollisionGeometryTool>()
	{
		return USetCollisionGeometryTool::StaticClass();
	}
	USetCollisionGeometryTool::USetCollisionGeometryTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetCollisionGeometryTool);
	USetCollisionGeometryTool::~USetCollisionGeometryTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::EnumInfo[] = {
		{ ESetCollisionGeometryInputMode_StaticEnum, TEXT("ESetCollisionGeometryInputMode"), &Z_Registration_Info_UEnum_ESetCollisionGeometryInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 712641755U) },
		{ ECollisionGeometryType_StaticEnum, TEXT("ECollisionGeometryType"), &Z_Registration_Info_UEnum_ECollisionGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3055103104U) },
		{ EProjectedHullAxis_StaticEnum, TEXT("EProjectedHullAxis"), &Z_Registration_Info_UEnum_EProjectedHullAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 923433839U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USetCollisionGeometryToolBuilder, USetCollisionGeometryToolBuilder::StaticClass, TEXT("USetCollisionGeometryToolBuilder"), &Z_Registration_Info_UClass_USetCollisionGeometryToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetCollisionGeometryToolBuilder), 1479553703U) },
		{ Z_Construct_UClass_USetCollisionGeometryToolProperties, USetCollisionGeometryToolProperties::StaticClass, TEXT("USetCollisionGeometryToolProperties"), &Z_Registration_Info_UClass_USetCollisionGeometryToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetCollisionGeometryToolProperties), 2007190140U) },
		{ Z_Construct_UClass_USetCollisionGeometryTool, USetCollisionGeometryTool::StaticClass, TEXT("USetCollisionGeometryTool"), &Z_Registration_Info_UClass_USetCollisionGeometryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USetCollisionGeometryTool), 716671545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_1828442112(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_SetCollisionGeometryTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
