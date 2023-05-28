// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatternTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_GridSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_GridSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_LinearSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_LinearSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_OutputSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_OutputSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RadialSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RadialSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RotationSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_RotationSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_ScaleSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_ScaleSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_TranslationSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternTool_TranslationSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolSettings();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPatternToolSettings_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UPatternToolBuilder::StaticRegisterNativesUPatternToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternToolBuilder);
	UClass* Z_Construct_UClass_UPatternToolBuilder_NoRegister()
	{
		return UPatternToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPatternToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternToolBuilder_Statics::ClassParams = {
		&UPatternToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPatternToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPatternToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternToolBuilder.OuterSingleton, Z_Construct_UClass_UPatternToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternToolBuilder>()
	{
		return UPatternToolBuilder::StaticClass();
	}
	UPatternToolBuilder::UPatternToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternToolBuilder);
	UPatternToolBuilder::~UPatternToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolShape;
	static UEnum* EPatternToolShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPatternToolShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolShape"));
		}
		return Z_Registration_Info_UEnum_EPatternToolShape.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolShape>()
	{
		return EPatternToolShape_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enumerators[] = {
		{ "EPatternToolShape::Line", (int64)EPatternToolShape::Line },
		{ "EPatternToolShape::Grid", (int64)EPatternToolShape::Grid },
		{ "EPatternToolShape::Circle", (int64)EPatternToolShape::Circle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enum_MetaDataParams[] = {
		{ "Circle.Comment", "/** Arrange pattern elements in a Circle */" },
		{ "Circle.Name", "EPatternToolShape::Circle" },
		{ "Circle.ToolTip", "Arrange pattern elements in a Circle" },
		{ "Grid.Comment", "/** Arrange pattern elements in a 2D Grid */" },
		{ "Grid.Name", "EPatternToolShape::Grid" },
		{ "Grid.ToolTip", "Arrange pattern elements in a 2D Grid" },
		{ "Line.Comment", "/** Arrange pattern elements along a Line */" },
		{ "Line.Name", "EPatternToolShape::Line" },
		{ "Line.ToolTip", "Arrange pattern elements along a Line" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EPatternToolShape",
		"EPatternToolShape",
		Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolShape.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPatternToolShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolSingleAxis;
	static UEnum* EPatternToolSingleAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolSingleAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPatternToolSingleAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolSingleAxis"));
		}
		return Z_Registration_Info_UEnum_EPatternToolSingleAxis.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolSingleAxis>()
	{
		return EPatternToolSingleAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enumerators[] = {
		{ "EPatternToolSingleAxis::XAxis", (int64)EPatternToolSingleAxis::XAxis },
		{ "EPatternToolSingleAxis::YAxis", (int64)EPatternToolSingleAxis::YAxis },
		{ "EPatternToolSingleAxis::ZAxis", (int64)EPatternToolSingleAxis::ZAxis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "XAxis.Name", "EPatternToolSingleAxis::XAxis" },
		{ "YAxis.Name", "EPatternToolSingleAxis::YAxis" },
		{ "ZAxis.Name", "EPatternToolSingleAxis::ZAxis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EPatternToolSingleAxis",
		"EPatternToolSingleAxis",
		Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolSingleAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolSingleAxis.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPatternToolSingleAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolSinglePlane;
	static UEnum* EPatternToolSinglePlane_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolSinglePlane.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPatternToolSinglePlane.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolSinglePlane"));
		}
		return Z_Registration_Info_UEnum_EPatternToolSinglePlane.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolSinglePlane>()
	{
		return EPatternToolSinglePlane_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enumerators[] = {
		{ "EPatternToolSinglePlane::XYPlane", (int64)EPatternToolSinglePlane::XYPlane },
		{ "EPatternToolSinglePlane::XZPlane", (int64)EPatternToolSinglePlane::XZPlane },
		{ "EPatternToolSinglePlane::YZPlane", (int64)EPatternToolSinglePlane::YZPlane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "XYPlane.Name", "EPatternToolSinglePlane::XYPlane" },
		{ "XZPlane.Name", "EPatternToolSinglePlane::XZPlane" },
		{ "YZPlane.Name", "EPatternToolSinglePlane::YZPlane" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EPatternToolSinglePlane",
		"EPatternToolSinglePlane",
		Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolSinglePlane.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolSinglePlane.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPatternToolSinglePlane.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode;
	static UEnum* EPatternToolAxisSpacingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPatternToolAxisSpacingMode"));
		}
		return Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPatternToolAxisSpacingMode>()
	{
		return EPatternToolAxisSpacingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enumerators[] = {
		{ "EPatternToolAxisSpacingMode::ByCount", (int64)EPatternToolAxisSpacingMode::ByCount },
		{ "EPatternToolAxisSpacingMode::StepSize", (int64)EPatternToolAxisSpacingMode::StepSize },
		{ "EPatternToolAxisSpacingMode::Packed", (int64)EPatternToolAxisSpacingMode::Packed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enum_MetaDataParams[] = {
		{ "ByCount.Comment", "/** Place a specific number of Pattern Elements along the pattern geometry */" },
		{ "ByCount.Name", "EPatternToolAxisSpacingMode::ByCount" },
		{ "ByCount.ToolTip", "Place a specific number of Pattern Elements along the pattern geometry" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "Packed.Comment", "/** Pack in as many Pattern Elements as fits in the available space */" },
		{ "Packed.Name", "EPatternToolAxisSpacingMode::Packed" },
		{ "Packed.ToolTip", "Pack in as many Pattern Elements as fits in the available space" },
		{ "StepSize.Comment", "/** Place Pattern Elements at regular increments along the Pattern Geometry (on-center) */" },
		{ "StepSize.Name", "EPatternToolAxisSpacingMode::StepSize" },
		{ "StepSize.ToolTip", "Place Pattern Elements at regular increments along the Pattern Geometry (on-center)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EPatternToolAxisSpacingMode",
		"EPatternToolAxisSpacingMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode()
	{
		if (!Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode.InnerSingleton;
	}
	void UPatternToolSettings::StaticRegisterNativesUPatternToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternToolSettings);
	UClass* Z_Construct_UClass_UPatternToolSettings_NoRegister()
	{
		return UPatternToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectElementsDown_MetaData[];
#endif
		static void NewProp_bProjectElementsDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectElementsDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideSources_MetaData[];
#endif
		static void NewProp_bHideSources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeTransforms_MetaData[];
#endif
		static void NewProp_bUseRelativeTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeTransforms;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SingleAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SingleAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SinglePlane_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SinglePlane_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SinglePlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for the Pattern Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The seed used to introduce random transform variations when enabled */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The seed used to introduce random transform variations when enabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternToolSettings, Seed), METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not the pattern items should be projected along the negative Z axis of the plane mechanic */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Whether or not the pattern items should be projected along the negative Z axis of the plane mechanic" },
	};
#endif
	void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_SetBit(void* Obj)
	{
		((UPatternToolSettings*)Obj)->bProjectElementsDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown = { "bProjectElementsDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** How much each pattern item should be moved along the negative Z axis of the plane mechanic if Project Elements Down is enabled */" },
		{ "Delta", "0.100000" },
		{ "EditCondition", "bProjectElementsDown == true" },
		{ "EditConditionHides", "" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "How much each pattern item should be moved along the negative Z axis of the plane mechanic if Project Elements Down is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset = { "ProjectionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternToolSettings, ProjectionOffset), METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Hide the source meshes when enabled */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Hide the source meshes when enabled" },
	};
#endif
	void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_SetBit(void* Obj)
	{
		((UPatternToolSettings*)Obj)->bHideSources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources = { "bHideSources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If false, all pattern elements will be positioned at the origin of the first pattern element */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If false, all pattern elements will be positioned at the origin of the first pattern element" },
	};
#endif
	void Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_SetBit(void* Obj)
	{
		((UPatternToolSettings*)Obj)->bUseRelativeTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms = { "bUseRelativeTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternToolSettings), &Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Shape of the underlying Pattern */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Shape of the underlying Pattern" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternToolSettings, Shape), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolShape, METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_MetaData)) }; // 881393722
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Axis direction used for the Pattern geometry */" },
		{ "DisplayName", "Direction" },
		{ "EditCondition", "Shape == EPatternToolShape::Line" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Axis direction used for the Pattern geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis = { "SingleAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternToolSettings, SingleAxis), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSingleAxis, METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_MetaData)) }; // 1014425693
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Plane used for the Pattern geometry */" },
		{ "DisplayName", "Plane" },
		{ "EditCondition", "Shape != EPatternToolShape::Line" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Plane used for the Pattern geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane = { "SinglePlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternToolSettings, SinglePlane), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolSinglePlane, METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_MetaData)) }; // 231482302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bProjectElementsDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_ProjectionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bHideSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_bUseRelativeTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SingleAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternToolSettings_Statics::NewProp_SinglePlane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternToolSettings_Statics::ClassParams = {
		&UPatternToolSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternToolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternToolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternToolSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternToolSettings.OuterSingleton, Z_Construct_UClass_UPatternToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternToolSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternToolSettings>()
	{
		return UPatternToolSettings::StaticClass();
	}
	UPatternToolSettings::UPatternToolSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternToolSettings);
	UPatternToolSettings::~UPatternToolSettings() {}
	void UPatternTool_BoundingBoxSettings::StaticRegisterNativesUPatternTool_BoundingBoxSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_BoundingBoxSettings);
	UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings_NoRegister()
	{
		return UPatternTool_BoundingBoxSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTransforms_MetaData[];
#endif
		static void NewProp_bIgnoreTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Adjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Adjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualize_MetaData[];
#endif
		static void NewProp_bVisualize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Bounding Box adjustments in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Bounding Box adjustments in the Pattern Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_MetaData[] = {
		{ "Category", "BoundingBox" },
		{ "Comment", "/** If true, pattern element bounding boxes are not changed to account for StartScale or StartRotation */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, pattern element bounding boxes are not changed to account for StartScale or StartRotation" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_SetBit(void* Obj)
	{
		((UPatternTool_BoundingBoxSettings*)Obj)->bIgnoreTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms = { "bIgnoreTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_BoundingBoxSettings), &Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment_MetaData[] = {
		{ "Category", "BoundingBox" },
		{ "Comment", "/** Value added to the all pattern elements' bounding boxes for adjusting the behavior of packed spacing mode manually */" },
		{ "Delta", "0.100000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Value added to the all pattern elements' bounding boxes for adjusting the behavior of packed spacing mode manually" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment = { "Adjustment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_BoundingBoxSettings, Adjustment), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_MetaData[] = {
		{ "Category", "BoundingBox" },
		{ "Comment", "/** If true, the bounding boxes of each element are rendered in green and the combined bounding box of all source elements is rendered in red */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, the bounding boxes of each element are rendered in green and the combined bounding box of all source elements is rendered in red" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_SetBit(void* Obj)
	{
		((UPatternTool_BoundingBoxSettings*)Obj)->bVisualize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize = { "bVisualize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_BoundingBoxSettings), &Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bIgnoreTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_Adjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::NewProp_bVisualize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_BoundingBoxSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::ClassParams = {
		&UPatternTool_BoundingBoxSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_BoundingBoxSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_BoundingBoxSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_BoundingBoxSettings>()
	{
		return UPatternTool_BoundingBoxSettings::StaticClass();
	}
	UPatternTool_BoundingBoxSettings::UPatternTool_BoundingBoxSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_BoundingBoxSettings);
	UPatternTool_BoundingBoxSettings::~UPatternTool_BoundingBoxSettings() {}
	void UPatternTool_LinearSettings::StaticRegisterNativesUPatternTool_LinearSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_LinearSettings);
	UClass* Z_Construct_UClass_UPatternTool_LinearSettings_NoRegister()
	{
		return UPatternTool_LinearSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_LinearSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Extent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCentered_MetaData[];
#endif
		static void NewProp_bCentered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCentered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_LinearSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_LinearSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Linear Patterns in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Linear Patterns in the Pattern Tool" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode = { "SpacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_LinearSettings, SpacingMode), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_MetaData)) }; // 2113715397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Pattern Elements to place */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of Pattern Elements to place" },
		{ "UIMax", "25" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_LinearSettings, Count), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment used to place Pattern Elements */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment used to place Pattern Elements" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_LinearSettings, StepSize), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length of Pattern along the Axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Length of Pattern along the Axis" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_LinearSettings, Extent), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_MetaData[] = {
		{ "Category", "LinearPattern" },
		{ "Comment", "/** If true, Pattern is centered at the Origin, otherwise Pattern starts at the Origin */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern is centered at the Origin, otherwise Pattern starts at the Origin" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_SetBit(void* Obj)
	{
		((UPatternTool_LinearSettings*)Obj)->bCentered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered = { "bCentered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_LinearSettings), &Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_SpacingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_LinearSettings_Statics::NewProp_bCentered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_LinearSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_LinearSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_LinearSettings_Statics::ClassParams = {
		&UPatternTool_LinearSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_LinearSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_LinearSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_LinearSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_LinearSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_LinearSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_LinearSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_LinearSettings>()
	{
		return UPatternTool_LinearSettings::StaticClass();
	}
	UPatternTool_LinearSettings::UPatternTool_LinearSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_LinearSettings);
	UPatternTool_LinearSettings::~UPatternTool_LinearSettings() {}
	void UPatternTool_GridSettings::StaticRegisterNativesUPatternTool_GridSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_GridSettings);
	UClass* Z_Construct_UClass_UPatternTool_GridSettings_NoRegister()
	{
		return UPatternTool_GridSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_GridSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingX_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingX_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentX_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenteredX_MetaData[];
#endif
		static void NewProp_bCenteredX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenteredX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingY_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingY_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentY_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenteredY_MetaData[];
#endif
		static void NewProp_bCenteredY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenteredY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_GridSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Grid Patterns in the Pattern Tool\n * TODO: maybe we can just re-use UPatternTool_LinearSettings for this??\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Grid Patterns in the Pattern Tool\nTODO: maybe we can just re-use UPatternTool_LinearSettings for this??" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements along the Main axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements along the Main axis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX = { "SpacingX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, SpacingX), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_MetaData)) }; // 2113715397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Pattern Elements to place along the Main axis */" },
		{ "EditCondition", "SpacingX == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of Pattern Elements to place along the Main axis" },
		{ "UIMax", "25" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX = { "CountX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, CountX), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment used to place Pattern Elements along the Main axis */" },
		{ "EditCondition", "SpacingX == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment used to place Pattern Elements along the Main axis" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX = { "StepSizeX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, StepSizeX), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length/Extent of Pattern falong the Main Axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Length/Extent of Pattern falong the Main Axis" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX = { "ExtentX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, ExtentX), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_MetaData[] = {
		{ "Category", "GridPatternX" },
		{ "Comment", "/** If true, Pattern is centered at the Origin along the Main axis, otherwise Pattern starts at the Origin */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern is centered at the Origin along the Main axis, otherwise Pattern starts at the Origin" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_SetBit(void* Obj)
	{
		((UPatternTool_GridSettings*)Obj)->bCenteredX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX = { "bCenteredX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_GridSettings), &Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements along the Secondary axis*/" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements along the Secondary axis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY = { "SpacingY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, SpacingY), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_MetaData)) }; // 2113715397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of  Pattern Elements to place along the Secondary axis */" },
		{ "EditCondition", "SpacingY == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of  Pattern Elements to place along the Secondary axis" },
		{ "UIMax", "25" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY = { "CountY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, CountY), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment used to place Pattern Elements along the Secondary axis */" },
		{ "EditCondition", "SpacingY == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment used to place Pattern Elements along the Secondary axis" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY = { "StepSizeY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, StepSizeY), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Length/Extent of Pattern falong the Secondary Axis */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Length/Extent of Pattern falong the Secondary Axis" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY = { "ExtentY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_GridSettings, ExtentY), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_MetaData[] = {
		{ "Category", "GridPatternY" },
		{ "Comment", "/** If true, Pattern is centered at the Origin along the Secondary axis, otherwise Pattern starts at the Origin */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern is centered at the Origin along the Secondary axis, otherwise Pattern starts at the Origin" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_SetBit(void* Obj)
	{
		((UPatternTool_GridSettings*)Obj)->bCenteredY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY = { "bCenteredY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_GridSettings), &Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_SpacingY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_CountY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_StepSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_ExtentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_GridSettings_Statics::NewProp_bCenteredY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_GridSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_GridSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_GridSettings_Statics::ClassParams = {
		&UPatternTool_GridSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_GridSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_GridSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_GridSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_GridSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_GridSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_GridSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_GridSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_GridSettings>()
	{
		return UPatternTool_GridSettings::StaticClass();
	}
	UPatternTool_GridSettings::UPatternTool_GridSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_GridSettings);
	UPatternTool_GridSettings::~UPatternTool_GridSettings() {}
	void UPatternTool_RadialSettings::StaticRegisterNativesUPatternTool_RadialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_RadialSettings);
	UClass* Z_Construct_UClass_UPatternTool_RadialSettings_NoRegister()
	{
		return UPatternTool_RadialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_RadialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpacingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpacingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartAngle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndAngle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EndAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleShift_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AngleShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriented_MetaData[];
#endif
		static void NewProp_bOriented_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriented;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_RadialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Radial Patterns in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Radial Patterns in the Pattern Tool" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** Spacing Technique used to distribute Pattern Elements around the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Spacing Technique used to distribute Pattern Elements around the Circle/Arc" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode = { "SpacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, SpacingMode), Z_Construct_UEnum_MeshModelingToolsExp_EPatternToolAxisSpacingMode, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_MetaData)) }; // 2113715397
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of  Pattern Elements to place */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::ByCount" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Number of  Pattern Elements to place" },
		{ "UIMax", "25" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, Count), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fixed Increment (in Degrees) used to position Pattern Elements around the Circle/Arc */" },
		{ "EditCondition", "SpacingMode == EPatternToolAxisSpacingMode::StepSize" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed Increment (in Degrees) used to position Pattern Elements around the Circle/Arc" },
		{ "Units", "Degrees" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, StepSize), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Radius of the Circle/Arc" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, Radius), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** Start angle of the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Start angle of the Circle/Arc" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "Degrees" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, StartAngle), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** End angle of the Circle/Arc */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "End angle of the Circle/Arc" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
		{ "Units", "Degrees" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, EndAngle), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "Comment", "/** Fixed offset added to Start/End Angles */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Fixed offset added to Start/End Angles" },
		{ "Units", "Degrees" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift = { "AngleShift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RadialSettings, AngleShift), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_MetaData[] = {
		{ "Category", "RadialPattern" },
		{ "Comment", "/** If true, Pattern elements are rotated to align with the Circle tangent */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Pattern elements are rotated to align with the Circle tangent" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_SetBit(void* Obj)
	{
		((UPatternTool_RadialSettings*)Obj)->bOriented = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented = { "bOriented", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_RadialSettings), &Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_SpacingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_AngleShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RadialSettings_Statics::NewProp_bOriented,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_RadialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_RadialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_RadialSettings_Statics::ClassParams = {
		&UPatternTool_RadialSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RadialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_RadialSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_RadialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_RadialSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_RadialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_RadialSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_RadialSettings>()
	{
		return UPatternTool_RadialSettings::StaticClass();
	}
	UPatternTool_RadialSettings::UPatternTool_RadialSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_RadialSettings);
	UPatternTool_RadialSettings::~UPatternTool_RadialSettings() {}
	void UPatternTool_RotationSettings::StaticRegisterNativesUPatternTool_RotationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_RotationSettings);
	UClass* Z_Construct_UClass_UPatternTool_RotationSettings_NoRegister()
	{
		return UPatternTool_RotationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_RotationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[];
#endif
		static void NewProp_bInterpolate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJitter_MetaData[];
#endif
		static void NewProp_bJitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Jitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_RotationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RotationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Per Element Rotation in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Per Element Rotation in the Pattern Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** If true, Rotation is linearly interpolated between StartRotation and Rotation values */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Rotation is linearly interpolated between StartRotation and Rotation values" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
	{
		((UPatternTool_RotationSettings*)Obj)->bInterpolate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_RotationSettings), &Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** If true, Rotation at each Pattern Element is offset by a uniformly chosen random value in the range of [-RotationJitterRange, RotationJitterRange] */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Rotation at each Pattern Element is offset by a uniformly chosen random value in the range of [-RotationJitterRange, RotationJitterRange]" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_SetBit(void* Obj)
	{
		((UPatternTool_RotationSettings*)Obj)->bJitter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter = { "bJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_RotationSettings), &Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Rotation applied to all Pattern Elements, or to first Pattern Element for Interpolated rotation */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Rotation applied to all Pattern Elements, or to first Pattern Element for Interpolated rotation" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RotationSettings, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Rotation applied to last Pattern Elements for Interpolated rotation */" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Rotation applied to last Pattern Elements for Interpolated rotation" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation = { "EndRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RotationSettings, EndRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Upper bound of the range which is sampled to randomly rotate each Pattern Element if Jitter is true */" },
		{ "EditCondition", "bJitter" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Upper bound of the range which is sampled to randomly rotate each Pattern Element if Jitter is true" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_RotationSettings, Jitter), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bInterpolate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_bJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_StartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_EndRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_RotationSettings_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_RotationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_RotationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_RotationSettings_Statics::ClassParams = {
		&UPatternTool_RotationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_RotationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_RotationSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_RotationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_RotationSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_RotationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_RotationSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_RotationSettings>()
	{
		return UPatternTool_RotationSettings::StaticClass();
	}
	UPatternTool_RotationSettings::UPatternTool_RotationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_RotationSettings);
	UPatternTool_RotationSettings::~UPatternTool_RotationSettings() {}
	void UPatternTool_TranslationSettings::StaticRegisterNativesUPatternTool_TranslationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_TranslationSettings);
	UClass* Z_Construct_UClass_UPatternTool_TranslationSettings_NoRegister()
	{
		return UPatternTool_TranslationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_TranslationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[];
#endif
		static void NewProp_bInterpolate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJitter_MetaData[];
#endif
		static void NewProp_bJitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Jitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Per Element Translation in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Per Element Translation in the Pattern Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** If true, Translation is linearly interpolated between StartTranslation and Translation values */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Translation is linearly interpolated between StartTranslation and Translation values" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
	{
		((UPatternTool_TranslationSettings*)Obj)->bInterpolate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_TranslationSettings), &Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** If true, Translation at each Pattern Element is offset by a uniformly chosen random value in the range of [-TranslationJitterRange, TranslationJitterRange] */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Translation at each Pattern Element is offset by a uniformly chosen random value in the range of [-TranslationJitterRange, TranslationJitterRange]" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_SetBit(void* Obj)
	{
		((UPatternTool_TranslationSettings*)Obj)->bJitter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter = { "bJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_TranslationSettings), &Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Translation applied to all Pattern Elements, or to first Pattern Element for Interpolated translation */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Translation applied to all Pattern Elements, or to first Pattern Element for Interpolated translation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation = { "StartTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_TranslationSettings, StartTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Translation applied to last Pattern Element for Interpolated translation */" },
		{ "EditCondition", "bInterpolate" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Translation applied to last Pattern Element for Interpolated translation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation = { "EndTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_TranslationSettings, EndTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Translation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Upper bound of the range which is sampled to randomly translate each Pattern Element if Jitter is true */" },
		{ "EditCondition", "bJitter" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Upper bound of the range which is sampled to randomly translate each Pattern Element if Jitter is true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_TranslationSettings, Jitter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bInterpolate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_bJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_StartTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_EndTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_TranslationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::ClassParams = {
		&UPatternTool_TranslationSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_TranslationSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_TranslationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_TranslationSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_TranslationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_TranslationSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_TranslationSettings>()
	{
		return UPatternTool_TranslationSettings::StaticClass();
	}
	UPatternTool_TranslationSettings::UPatternTool_TranslationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_TranslationSettings);
	UPatternTool_TranslationSettings::~UPatternTool_TranslationSettings() {}
	void UPatternTool_ScaleSettings::StaticRegisterNativesUPatternTool_ScaleSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_ScaleSettings);
	UClass* Z_Construct_UClass_UPatternTool_ScaleSettings_NoRegister()
	{
		return UPatternTool_ScaleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_ScaleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProportional_MetaData[];
#endif
		static void NewProp_bProportional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProportional;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolate_MetaData[];
#endif
		static void NewProp_bInterpolate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJitter_MetaData[];
#endif
		static void NewProp_bJitter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jitter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Jitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Per Element Scale in the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Settings for Per Element Scale in the Pattern Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** If true, changes to Start Scale, End Scale, and Jitter are proportional along all the axes */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, changes to Start Scale, End Scale, and Jitter are proportional along all the axes" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_SetBit(void* Obj)
	{
		((UPatternTool_ScaleSettings*)Obj)->bProportional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional = { "bProportional", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_ScaleSettings), &Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** If true, Scale is linearly interpolated between StartScale and Scale values */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Scale is linearly interpolated between StartScale and Scale values" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_SetBit(void* Obj)
	{
		((UPatternTool_ScaleSettings*)Obj)->bInterpolate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate = { "bInterpolate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_ScaleSettings), &Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** If true, Scale at each Pattern Element is offset by a uniformly chosen random value in the range of [-ScaleJitterRange, ScaleJitterRange] */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "If true, Scale at each Pattern Element is offset by a uniformly chosen random value in the range of [-ScaleJitterRange, ScaleJitterRange]" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_SetBit(void* Obj)
	{
		((UPatternTool_ScaleSettings*)Obj)->bJitter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter = { "bJitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_ScaleSettings), &Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale_MetaData[] = {
		{ "Category", "Scale" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Scale applied to all Pattern Elements, or to first Pattern Element for Interpolated scale */" },
		{ "Delta", "0.010000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Scale applied to all Pattern Elements, or to first Pattern Element for Interpolated scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale = { "StartScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_ScaleSettings, StartScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale_MetaData[] = {
		{ "Category", "Scale" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Scale applied to last Pattern Element for Interpolated scale */" },
		{ "Delta", "0.010000" },
		{ "EditCondition", "bInterpolate" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Scale applied to last Pattern Element for Interpolated scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale = { "EndScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_ScaleSettings, EndScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter_MetaData[] = {
		{ "Category", "Scale" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** Upper bound of the range which is sampled to randomly scale each Pattern Element if Jitter is true */" },
		{ "Delta", "0.010000" },
		{ "EditCondition", "bJitter" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Upper bound of the range which is sampled to randomly scale each Pattern Element if Jitter is true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter = { "Jitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool_ScaleSettings, Jitter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bProportional,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bInterpolate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_bJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_StartScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_EndScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::NewProp_Jitter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_ScaleSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::ClassParams = {
		&UPatternTool_ScaleSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_ScaleSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_ScaleSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_ScaleSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_ScaleSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_ScaleSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_ScaleSettings>()
	{
		return UPatternTool_ScaleSettings::StaticClass();
	}
	UPatternTool_ScaleSettings::UPatternTool_ScaleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_ScaleSettings);
	UPatternTool_ScaleSettings::~UPatternTool_ScaleSettings() {}
	void UPatternTool_OutputSettings::StaticRegisterNativesUPatternTool_OutputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool_OutputSettings);
	UClass* Z_Construct_UClass_UPatternTool_OutputSettings_NoRegister()
	{
		return UPatternTool_OutputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_OutputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateActors_MetaData[];
#endif
		static void NewProp_bSeparateActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertToDynamic_MetaData[];
#endif
		static void NewProp_bConvertToDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateISMCs_MetaData[];
#endif
		static void NewProp_bCreateISMCs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateISMCs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHaveStaticMeshes_MetaData[];
#endif
		static void NewProp_bHaveStaticMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveStaticMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_OutputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_OutputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Output Settings for the Pattern Tool\n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Output Settings for the Pattern Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Emit a separate Actor for each pattern element */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Emit a separate Actor for each pattern element" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_SetBit(void* Obj)
	{
		((UPatternTool_OutputSettings*)Obj)->bSeparateActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors = { "bSeparateActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Emit StaticMesh pattern elements as DynamicMeshes */" },
		{ "EditCondition", "bHaveStaticMeshes == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Emit StaticMesh pattern elements as DynamicMeshes" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_SetBit(void* Obj)
	{
		((UPatternTool_OutputSettings*)Obj)->bConvertToDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic = { "bConvertToDynamic", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Create InstancedStaticMeshComponents instead multiple StaticMeshComponents, for StaticMesh pattern elements */" },
		{ "EditCondition", "bHaveStaticMeshes == true && bSeparateActors == false && bConvertToDynamic == false" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "Create InstancedStaticMeshComponents instead multiple StaticMeshComponents, for StaticMesh pattern elements" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_SetBit(void* Obj)
	{
		((UPatternTool_OutputSettings*)Obj)->bCreateISMCs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs = { "bCreateISMCs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_MetaData[] = {
		{ "Comment", "/** internal, used to control state of Instance settings */" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "internal, used to control state of Instance settings" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_SetBit(void* Obj)
	{
		((UPatternTool_OutputSettings*)Obj)->bHaveStaticMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes = { "bHaveStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPatternTool_OutputSettings), &Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bSeparateActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bConvertToDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bCreateISMCs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_OutputSettings_Statics::NewProp_bHaveStaticMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_OutputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool_OutputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_OutputSettings_Statics::ClassParams = {
		&UPatternTool_OutputSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_OutputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool_OutputSettings()
	{
		if (!Z_Registration_Info_UClass_UPatternTool_OutputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool_OutputSettings.OuterSingleton, Z_Construct_UClass_UPatternTool_OutputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool_OutputSettings.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool_OutputSettings>()
	{
		return UPatternTool_OutputSettings::StaticClass();
	}
	UPatternTool_OutputSettings::UPatternTool_OutputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool_OutputSettings);
	UPatternTool_OutputSettings::~UPatternTool_OutputSettings() {}
	void UPatternTool::StaticRegisterNativesUPatternTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPatternTool);
	UClass* Z_Construct_UClass_UPatternTool_NoRegister()
	{
		return UPatternTool::StaticClass();
	}
	struct Z_Construct_UClass_UPatternTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundingBoxSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinearSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RadialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatternGizmoProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PatternGizmoProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatternGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PatternGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragAlignmentMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllComponents_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllComponents_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AllComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPatternTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPatternTool takes input meshes and generates 3D Patterns of those meshes, by\n * placing repeated copies along geometric paths like lines, grids, circles, etc.\n * The output can be a single Actor per pattern Element, or combined into single\n * Actors in various ways depending on the input mesh type. \n */" },
		{ "IncludePath", "PatternTool.h" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
		{ "ToolTip", "UPatternTool takes input meshes and generates 3D Patterns of those meshes, by\nplacing repeated copies along geometric paths like lines, grids, circles, etc.\nThe output can be a single Actor per pattern Element, or combined into single\nActors in various ways depending on the input mesh type." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, Settings), Z_Construct_UClass_UPatternToolSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings = { "BoundingBoxSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, BoundingBoxSettings), Z_Construct_UClass_UPatternTool_BoundingBoxSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings = { "LinearSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, LinearSettings), Z_Construct_UClass_UPatternTool_LinearSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings = { "GridSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, GridSettings), Z_Construct_UClass_UPatternTool_GridSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings = { "RadialSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, RadialSettings), Z_Construct_UClass_UPatternTool_RadialSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings = { "RotationSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, RotationSettings), Z_Construct_UClass_UPatternTool_RotationSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings = { "TranslationSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, TranslationSettings), Z_Construct_UClass_UPatternTool_TranslationSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings = { "ScaleSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, ScaleSettings), Z_Construct_UClass_UPatternTool_ScaleSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings = { "OutputSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, OutputSettings), Z_Construct_UClass_UPatternTool_OutputSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy = { "PatternGizmoProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, PatternGizmoProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo = { "PatternGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, PatternGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_ElementProp = { "AllComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents = { "AllComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, AllComponents), METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/PatternTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPatternTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPatternTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_BoundingBoxSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_LinearSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_GridSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_RadialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_RotationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_TranslationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_ScaleSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_OutputSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmoProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PatternGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_DragAlignmentMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PlaneMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_AllComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPatternTool_Statics::NewProp_PreviewGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPatternTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPatternTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPatternTool_Statics::ClassParams = {
		&UPatternTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPatternTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPatternTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPatternTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPatternTool()
	{
		if (!Z_Registration_Info_UClass_UPatternTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPatternTool.OuterSingleton, Z_Construct_UClass_UPatternTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPatternTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPatternTool>()
	{
		return UPatternTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPatternTool);
	UPatternTool::~UPatternTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::EnumInfo[] = {
		{ EPatternToolShape_StaticEnum, TEXT("EPatternToolShape"), &Z_Registration_Info_UEnum_EPatternToolShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 881393722U) },
		{ EPatternToolSingleAxis_StaticEnum, TEXT("EPatternToolSingleAxis"), &Z_Registration_Info_UEnum_EPatternToolSingleAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1014425693U) },
		{ EPatternToolSinglePlane_StaticEnum, TEXT("EPatternToolSinglePlane"), &Z_Registration_Info_UEnum_EPatternToolSinglePlane, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 231482302U) },
		{ EPatternToolAxisSpacingMode_StaticEnum, TEXT("EPatternToolAxisSpacingMode"), &Z_Registration_Info_UEnum_EPatternToolAxisSpacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2113715397U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPatternToolBuilder, UPatternToolBuilder::StaticClass, TEXT("UPatternToolBuilder"), &Z_Registration_Info_UClass_UPatternToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternToolBuilder), 645656160U) },
		{ Z_Construct_UClass_UPatternToolSettings, UPatternToolSettings::StaticClass, TEXT("UPatternToolSettings"), &Z_Registration_Info_UClass_UPatternToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternToolSettings), 2644473235U) },
		{ Z_Construct_UClass_UPatternTool_BoundingBoxSettings, UPatternTool_BoundingBoxSettings::StaticClass, TEXT("UPatternTool_BoundingBoxSettings"), &Z_Registration_Info_UClass_UPatternTool_BoundingBoxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_BoundingBoxSettings), 3568523860U) },
		{ Z_Construct_UClass_UPatternTool_LinearSettings, UPatternTool_LinearSettings::StaticClass, TEXT("UPatternTool_LinearSettings"), &Z_Registration_Info_UClass_UPatternTool_LinearSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_LinearSettings), 3033400241U) },
		{ Z_Construct_UClass_UPatternTool_GridSettings, UPatternTool_GridSettings::StaticClass, TEXT("UPatternTool_GridSettings"), &Z_Registration_Info_UClass_UPatternTool_GridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_GridSettings), 4077661590U) },
		{ Z_Construct_UClass_UPatternTool_RadialSettings, UPatternTool_RadialSettings::StaticClass, TEXT("UPatternTool_RadialSettings"), &Z_Registration_Info_UClass_UPatternTool_RadialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_RadialSettings), 2478356195U) },
		{ Z_Construct_UClass_UPatternTool_RotationSettings, UPatternTool_RotationSettings::StaticClass, TEXT("UPatternTool_RotationSettings"), &Z_Registration_Info_UClass_UPatternTool_RotationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_RotationSettings), 1663621253U) },
		{ Z_Construct_UClass_UPatternTool_TranslationSettings, UPatternTool_TranslationSettings::StaticClass, TEXT("UPatternTool_TranslationSettings"), &Z_Registration_Info_UClass_UPatternTool_TranslationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_TranslationSettings), 3571885103U) },
		{ Z_Construct_UClass_UPatternTool_ScaleSettings, UPatternTool_ScaleSettings::StaticClass, TEXT("UPatternTool_ScaleSettings"), &Z_Registration_Info_UClass_UPatternTool_ScaleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_ScaleSettings), 3189817882U) },
		{ Z_Construct_UClass_UPatternTool_OutputSettings, UPatternTool_OutputSettings::StaticClass, TEXT("UPatternTool_OutputSettings"), &Z_Registration_Info_UClass_UPatternTool_OutputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool_OutputSettings), 817178628U) },
		{ Z_Construct_UClass_UPatternTool, UPatternTool::StaticClass, TEXT("UPatternTool"), &Z_Registration_Info_UClass_UPatternTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPatternTool), 2742201076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_90849910(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PatternTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
