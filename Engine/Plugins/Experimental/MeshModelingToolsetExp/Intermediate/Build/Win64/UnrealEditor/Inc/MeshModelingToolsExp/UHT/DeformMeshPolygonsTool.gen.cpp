// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeformMeshPolygonsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeformMeshPolygonsTool() {}
// Cross Module References
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UDeformMeshPolygonsToolBuilder::StaticRegisterNativesUDeformMeshPolygonsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformMeshPolygonsToolBuilder);
	UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_NoRegister()
	{
		return UDeformMeshPolygonsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "DeformMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformMeshPolygonsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::ClassParams = {
		&UDeformMeshPolygonsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeformMeshPolygonsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.OuterSingleton, Z_Construct_UClass_UDeformMeshPolygonsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDeformMeshPolygonsToolBuilder>()
	{
		return UDeformMeshPolygonsToolBuilder::StaticClass();
	}
	UDeformMeshPolygonsToolBuilder::UDeformMeshPolygonsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformMeshPolygonsToolBuilder);
	UDeformMeshPolygonsToolBuilder::~UDeformMeshPolygonsToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy;
	static UEnum* EGroupTopologyDeformationStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EGroupTopologyDeformationStrategy"));
		}
		return Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EGroupTopologyDeformationStrategy>()
	{
		return EGroupTopologyDeformationStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enumerators[] = {
		{ "EGroupTopologyDeformationStrategy::Linear", (int64)EGroupTopologyDeformationStrategy::Linear },
		{ "EGroupTopologyDeformationStrategy::Laplacian", (int64)EGroupTopologyDeformationStrategy::Laplacian },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Deformation strategies */" },
		{ "Laplacian.Comment", "/** Deforms the mesh using Laplacian deformation. */" },
		{ "Laplacian.DisplayName", "Smooth" },
		{ "Laplacian.Name", "EGroupTopologyDeformationStrategy::Laplacian" },
		{ "Laplacian.ToolTip", "Deforms the mesh using Laplacian deformation." },
		{ "Linear.Comment", "/** Deforms the mesh using linear deformation. */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EGroupTopologyDeformationStrategy::Linear" },
		{ "Linear.ToolTip", "Deforms the mesh using linear deformation." },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Deformation strategies" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EGroupTopologyDeformationStrategy",
		"EGroupTopologyDeformationStrategy",
		Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy()
	{
		if (!Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeightScheme;
	static UEnum* EWeightScheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeightScheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeightScheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EWeightScheme"));
		}
		return Z_Registration_Info_UEnum_EWeightScheme.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EWeightScheme>()
	{
		return EWeightScheme_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enumerators[] = {
		{ "EWeightScheme::Uniform", (int64)EWeightScheme::Uniform },
		{ "EWeightScheme::Umbrella", (int64)EWeightScheme::Umbrella },
		{ "EWeightScheme::Valence", (int64)EWeightScheme::Valence },
		{ "EWeightScheme::MeanValue", (int64)EWeightScheme::MeanValue },
		{ "EWeightScheme::Cotangent", (int64)EWeightScheme::Cotangent },
		{ "EWeightScheme::ClampedCotangent", (int64)EWeightScheme::ClampedCotangent },
		{ "EWeightScheme::IDTCotangent", (int64)EWeightScheme::IDTCotangent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enum_MetaDataParams[] = {
		{ "ClampedCotangent.DisplayName", "ClampedCotangent" },
		{ "ClampedCotangent.Name", "EWeightScheme::ClampedCotangent" },
		{ "Comment", "/** Laplacian weight schemes determine how we will look at the curvature at a given vertex in relation to its neighborhood*/" },
		{ "Cotangent.DisplayName", "Cotangent" },
		{ "Cotangent.Name", "EWeightScheme::Cotangent" },
		{ "IDTCotangent.DisplayName", "IDTCotangent" },
		{ "IDTCotangent.Name", "EWeightScheme::IDTCotangent" },
		{ "MeanValue.DisplayName", "MeanValue" },
		{ "MeanValue.Name", "EWeightScheme::MeanValue" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Laplacian weight schemes determine how we will look at the curvature at a given vertex in relation to its neighborhood" },
		{ "Umbrella.DisplayName", "Umbrella" },
		{ "Umbrella.Name", "EWeightScheme::Umbrella" },
		{ "Uniform.DisplayName", "Uniform" },
		{ "Uniform.Name", "EWeightScheme::Uniform" },
		{ "Valence.DisplayName", "Valence" },
		{ "Valence.Name", "EWeightScheme::Valence" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EWeightScheme",
		"EWeightScheme",
		Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme()
	{
		if (!Z_Registration_Info_UEnum_EWeightScheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeightScheme.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeightScheme.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuickTransformerMode;
	static UEnum* EQuickTransformerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuickTransformerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuickTransformerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EQuickTransformerMode"));
		}
		return Z_Registration_Info_UEnum_EQuickTransformerMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EQuickTransformerMode>()
	{
		return EQuickTransformerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enumerators[] = {
		{ "EQuickTransformerMode::AxisTranslation", (int64)EQuickTransformerMode::AxisTranslation },
		{ "EQuickTransformerMode::AxisRotation", (int64)EQuickTransformerMode::AxisRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enum_MetaDataParams[] = {
		{ "AxisRotation.Comment", "/** Rotation around axes */" },
		{ "AxisRotation.DisplayName", "Rotate" },
		{ "AxisRotation.Name", "EQuickTransformerMode::AxisRotation" },
		{ "AxisRotation.ToolTip", "Rotation around axes" },
		{ "AxisTranslation.Comment", "/** Translation along axes */" },
		{ "AxisTranslation.DisplayName", "Translate" },
		{ "AxisTranslation.Name", "EQuickTransformerMode::AxisTranslation" },
		{ "AxisTranslation.ToolTip", "Translation along axes" },
		{ "Comment", "/** Modes for quick transformer */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Modes for quick transformer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EQuickTransformerMode",
		"EQuickTransformerMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode()
	{
		if (!Z_Registration_Info_UEnum_EQuickTransformerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuickTransformerMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuickTransformerMode.InnerSingleton;
	}
	void UDeformMeshPolygonsTransformProperties::StaticRegisterNativesUDeformMeshPolygonsTransformProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformMeshPolygonsTransformProperties);
	UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_NoRegister()
	{
		return UDeformMeshPolygonsTransformProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeformationStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformationStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeformationStrategy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectFaces_MetaData[];
#endif
		static void NewProp_bSelectFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdges_MetaData[];
#endif
		static void NewProp_bSelectEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectVertices_MetaData[];
#endif
		static void NewProp_bSelectVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[];
#endif
		static void NewProp_bShowWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SelectedWeightScheme_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedWeightScheme_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedWeightScheme;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleWeight_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HandleWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostFixHandles_MetaData[];
#endif
		static void NewProp_bPostFixHandles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostFixHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeformMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of deformation used. */" },
		{ "DisplayName", "Deformation" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Type of deformation used." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy = { "DeformationStrategy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, DeformationStrategy), Z_Construct_UEnum_MeshModelingToolsExp_EGroupTopologyDeformationStrategy, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_MetaData)) }; // 332244684
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of transformation used. */" },
		{ "DisplayName", "Transformation" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Type of transformation used." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, TransformMode), Z_Construct_UEnum_MeshModelingToolsExp_EQuickTransformerMode, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_MetaData)) }; // 617570962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow for faces (PolyGroups) to be selected. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Allow for faces (PolyGroups) to be selected." },
	};
#endif
	void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_SetBit(void* Obj)
	{
		((UDeformMeshPolygonsTransformProperties*)Obj)->bSelectFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces = { "bSelectFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow for edges to be selected. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Allow for edges to be selected." },
	};
#endif
	void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_SetBit(void* Obj)
	{
		((UDeformMeshPolygonsTransformProperties*)Obj)->bSelectEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges = { "bSelectEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** Allow for vertices to be selected. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Allow for vertices to be selected." },
	};
#endif
	void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_SetBit(void* Obj)
	{
		((UDeformMeshPolygonsTransformProperties*)Obj)->bSelectVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices = { "bSelectVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** If true, overlays preview with wireframe. */" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "If true, overlays preview with wireframe." },
	};
#endif
	void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
	{
		((UDeformMeshPolygonsTransformProperties*)Obj)->bShowWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_MetaData[] = {
		{ "Comment", "//Laplacian Deformation Options, currently not exposed.\n" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
		{ "ToolTip", "Laplacian Deformation Options, currently not exposed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme = { "SelectedWeightScheme", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, SelectedWeightScheme), Z_Construct_UEnum_MeshModelingToolsExp_EWeightScheme, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_MetaData)) }; // 2049418019
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight = { "HandleWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTransformProperties, HandleWeight), METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
	void Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_SetBit(void* Obj)
	{
		((UDeformMeshPolygonsTransformProperties*)Obj)->bPostFixHandles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles = { "bPostFixHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDeformMeshPolygonsTransformProperties), &Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_DeformationStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_TransformMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bSelectVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bShowWireframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_SelectedWeightScheme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_HandleWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::NewProp_bPostFixHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformMeshPolygonsTransformProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::ClassParams = {
		&UDeformMeshPolygonsTransformProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeformMeshPolygonsTransformProperties()
	{
		if (!Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.OuterSingleton, Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDeformMeshPolygonsTransformProperties>()
	{
		return UDeformMeshPolygonsTransformProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformMeshPolygonsTransformProperties);
	UDeformMeshPolygonsTransformProperties::~UDeformMeshPolygonsTransformProperties() {}
	void UDeformMeshPolygonsTool::StaticRegisterNativesUDeformMeshPolygonsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformMeshPolygonsTool);
	UClass* Z_Construct_UClass_UDeformMeshPolygonsTool_NoRegister()
	{
		return UDeformMeshPolygonsTool::StaticClass();
	}
	struct Z_Construct_UClass_UDeformMeshPolygonsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DeformMeshPolygonsTool.h" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/DeformMeshPolygonsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps = { "TransformProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformMeshPolygonsTool, TransformProps), Z_Construct_UClass_UDeformMeshPolygonsTransformProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_PreviewMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_DynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::NewProp_TransformProps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformMeshPolygonsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::ClassParams = {
		&UDeformMeshPolygonsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeformMeshPolygonsTool()
	{
		if (!Z_Registration_Info_UClass_UDeformMeshPolygonsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformMeshPolygonsTool.OuterSingleton, Z_Construct_UClass_UDeformMeshPolygonsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeformMeshPolygonsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDeformMeshPolygonsTool>()
	{
		return UDeformMeshPolygonsTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformMeshPolygonsTool);
	UDeformMeshPolygonsTool::~UDeformMeshPolygonsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::EnumInfo[] = {
		{ EGroupTopologyDeformationStrategy_StaticEnum, TEXT("EGroupTopologyDeformationStrategy"), &Z_Registration_Info_UEnum_EGroupTopologyDeformationStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 332244684U) },
		{ EWeightScheme_StaticEnum, TEXT("EWeightScheme"), &Z_Registration_Info_UEnum_EWeightScheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2049418019U) },
		{ EQuickTransformerMode_StaticEnum, TEXT("EQuickTransformerMode"), &Z_Registration_Info_UEnum_EQuickTransformerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 617570962U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeformMeshPolygonsToolBuilder, UDeformMeshPolygonsToolBuilder::StaticClass, TEXT("UDeformMeshPolygonsToolBuilder"), &Z_Registration_Info_UClass_UDeformMeshPolygonsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformMeshPolygonsToolBuilder), 3330948688U) },
		{ Z_Construct_UClass_UDeformMeshPolygonsTransformProperties, UDeformMeshPolygonsTransformProperties::StaticClass, TEXT("UDeformMeshPolygonsTransformProperties"), &Z_Registration_Info_UClass_UDeformMeshPolygonsTransformProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformMeshPolygonsTransformProperties), 178224163U) },
		{ Z_Construct_UClass_UDeformMeshPolygonsTool, UDeformMeshPolygonsTool::StaticClass, TEXT("UDeformMeshPolygonsTool"), &Z_Registration_Info_UClass_UDeformMeshPolygonsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformMeshPolygonsTool), 971566415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_778153748(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DeformMeshPolygonsTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
