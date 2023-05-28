// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshSpaceDeformerTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSpaceDeformerTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UIntervalGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMeshSpaceDeformerToolBuilder::StaticRegisterNativesUMeshSpaceDeformerToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerToolBuilder);
	UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_NoRegister()
	{
		return UMeshSpaceDeformerToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::ClassParams = {
		&UMeshSpaceDeformerToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSpaceDeformerToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerToolBuilder>()
	{
		return UMeshSpaceDeformerToolBuilder::StaticClass();
	}
	UMeshSpaceDeformerToolBuilder::UMeshSpaceDeformerToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerToolBuilder);
	UMeshSpaceDeformerToolBuilder::~UMeshSpaceDeformerToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENonlinearOperationType;
	static UEnum* ENonlinearOperationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENonlinearOperationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENonlinearOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ENonlinearOperationType"));
		}
		return Z_Registration_Info_UEnum_ENonlinearOperationType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ENonlinearOperationType>()
	{
		return ENonlinearOperationType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enumerators[] = {
		{ "ENonlinearOperationType::Bend", (int64)ENonlinearOperationType::Bend },
		{ "ENonlinearOperationType::Flare", (int64)ENonlinearOperationType::Flare },
		{ "ENonlinearOperationType::Twist", (int64)ENonlinearOperationType::Twist },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enum_MetaDataParams[] = {
		{ "Bend.Comment", "/** \n\x09 * Will bend the mesh in the direction of the gizmo Y axis along the Z axis. A line along the Z\n\x09 * axis from the lower bound to the upper bound would not change length as it bends.\n\x09 */" },
		{ "Bend.Name", "ENonlinearOperationType::Bend" },
		{ "Bend.ToolTip", "Will bend the mesh in the direction of the gizmo Y axis along the Z axis. A line along the Z\naxis from the lower bound to the upper bound would not change length as it bends." },
		{ "Comment", "/** ENonlinearOperation determines which type of nonlinear deformation will be applied*/" },
		{ "Flare.Comment", "/**\n\x09 * Depening on 'Flare Percent\", will either flare or squish the mesh along the Gizmo Z axis,\n\x09 * from lower bound to upper bound.\n\x09 */" },
		{ "Flare.DisplayName", "Flare/Squish" },
		{ "Flare.Name", "ENonlinearOperationType::Flare" },
		{ "Flare.ToolTip", "Depening on 'Flare Percent\", will either flare or squish the mesh along the Gizmo Z axis,\nfrom lower bound to upper bound." },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "ENonlinearOperation determines which type of nonlinear deformation will be applied" },
		{ "Twist.Comment", "/** Twists the mesh along the gizmo Z axis, from lower bound to upper bound. */" },
		{ "Twist.Name", "ENonlinearOperationType::Twist" },
		{ "Twist.ToolTip", "Twists the mesh along the gizmo Z axis, from lower bound to upper bound." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ENonlinearOperationType",
		"ENonlinearOperationType",
		Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType()
	{
		if (!Z_Registration_Info_UEnum_ENonlinearOperationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENonlinearOperationType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENonlinearOperationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlareProfileType;
	static UEnum* EFlareProfileType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFlareProfileType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFlareProfileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EFlareProfileType"));
		}
		return Z_Registration_Info_UEnum_EFlareProfileType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EFlareProfileType>()
	{
		return EFlareProfileType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enumerators[] = {
		{ "EFlareProfileType::SinMode", (int64)EFlareProfileType::SinMode },
		{ "EFlareProfileType::SinSquaredMode", (int64)EFlareProfileType::SinSquaredMode },
		{ "EFlareProfileType::TriangleMode", (int64)EFlareProfileType::TriangleMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "SinMode.Comment", "//Displaced by sin(pi x) with x in 0 to 1\n" },
		{ "SinMode.Name", "EFlareProfileType::SinMode" },
		{ "SinMode.ToolTip", "Displaced by sin(pi x) with x in 0 to 1" },
		{ "SinSquaredMode.Comment", "//Displaced by sin(pi x)*sin(pi x) with x in 0 to 1. This provides a smooth normal transition.\n" },
		{ "SinSquaredMode.Name", "EFlareProfileType::SinSquaredMode" },
		{ "SinSquaredMode.ToolTip", "Displaced by sin(pi x)*sin(pi x) with x in 0 to 1. This provides a smooth normal transition." },
		{ "TriangleMode.Comment", "// Displaced by piecewise-linear trianglular mode\n" },
		{ "TriangleMode.Name", "EFlareProfileType::TriangleMode" },
		{ "TriangleMode.ToolTip", "Displaced by piecewise-linear trianglular mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EFlareProfileType",
		"EFlareProfileType",
		Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType()
	{
		if (!Z_Registration_Info_UEnum_EFlareProfileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlareProfileType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFlareProfileType.InnerSingleton;
	}
	void UMeshSpaceDeformerToolProperties::StaticRegisterNativesUMeshSpaceDeformerToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerToolProperties);
	UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties_NoRegister()
	{
		return UMeshSpaceDeformerToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_SelectedOperationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOperationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedOperationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBoundsInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperBoundsInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBoundsInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerBoundsInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TwistDegrees;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_FlareProfileType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlareProfileType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FlareProfileType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlarePercentY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlarePercentY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockXAndYFlaring_MetaData[];
#endif
		static void NewProp_bLockXAndYFlaring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockXAndYFlaring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlarePercentX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlarePercentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockBottom_MetaData[];
#endif
		static void NewProp_bLockBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOriginalMesh_MetaData[];
#endif
		static void NewProp_bShowOriginalMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOriginalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawVisualization_MetaData[];
#endif
		static void NewProp_bDrawVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToNormalOnCtrlClick_MetaData[];
#endif
		static void NewProp_bAlignToNormalOnCtrlClick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToNormalOnCtrlClick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_MetaData[] = {
		{ "Category", "Options" },
		{ "DisplayName", "Operation Type" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType = { "SelectedOperationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, SelectedOperationType), Z_Construct_UEnum_MeshModelingToolsExp_ENonlinearOperationType, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_MetaData)) }; // 247901586
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The upper bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center. */" },
		{ "DisplayName", "Upper Bound" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "The upper bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval = { "UpperBoundsInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, UpperBoundsInterval), METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "0" },
		{ "Comment", "/** The lower bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center. */" },
		{ "DisplayName", "Lower Bound" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "The lower bound to the region of space which the operation will affect. Measured along the gizmo Z axis from the gizmo center." },
		{ "UIMax", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval = { "LowerBoundsInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, LowerBoundsInterval), METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "3600" },
		{ "ClampMin", "0" },
		{ "Comment", "/** \n\x09 * A line along the Z axis of the gizmo from lower bound to upper bound will be bent into a perfect arc of this\n\x09 * many degrees in the direction of the Y axis without changing length.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Bend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "A line along the Z axis of the gizmo from lower bound to upper bound will be bent into a perfect arc of this\nmany degrees in the direction of the Y axis without changing length." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees = { "BendDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, BendDegrees), METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "3600" },
		{ "ClampMin", "-3600" },
		{ "Comment", "/** Degrees of twist to from the lower bound to the upper bound along the gizmo Z axis. */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Twist" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Degrees of twist to from the lower bound to the upper bound along the gizmo Z axis." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees = { "TwistDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, TwistDegrees), METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09* Determines the profile used as a displacement\n\x09*/" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Determines the profile used as a displacement" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType = { "FlareProfileType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, FlareProfileType), Z_Construct_UEnum_MeshModelingToolsExp_EFlareProfileType, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_MetaData)) }; // 4164735505
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/**\n\x09 * Determines how much to flare perpendicular to the Z axis. When set to 100%, points are moved double the distance\n\x09 * away from the gizmo Z axis at the most extreme flare point. 0% does not flare at all, whereas -100% pinches all\n\x09 * the way to the gizmo Z axis at the most extreme flare point.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Determines how much to flare perpendicular to the Z axis. When set to 100%, points are moved double the distance\naway from the gizmo Z axis at the most extreme flare point. 0% does not flare at all, whereas -100% pinches all\nthe way to the gizmo Z axis at the most extreme flare point." },
		{ "UIMax", "200" },
		{ "UIMin", "-100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY = { "FlarePercentY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, FlarePercentY), METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * If true, flaring is applied along the gizmo X and Y axis the same amount.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "If true, flaring is applied along the gizmo X and Y axis the same amount." },
	};
#endif
	void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_SetBit(void* Obj)
	{
		((UMeshSpaceDeformerToolProperties*)Obj)->bLockXAndYFlaring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring = { "bLockXAndYFlaring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "-1000" },
		{ "Comment", "/**\n\x09 * Determines how much to flare perpendicular to the Z axis in the X direction if the flaring is not locked\n\x09 * to be the same in the X and Y directions.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Flare && !bLockXAndYFlaring" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Determines how much to flare perpendicular to the Z axis in the X direction if the flaring is not locked\nto be the same in the X and Y directions." },
		{ "UIMax", "200" },
		{ "UIMin", "-100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX = { "FlarePercentX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerToolProperties, FlarePercentX), METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/**\n\x09 * If true, the \"bottom\" of the mesh relative to the gizmo Z axis will stay in place while the rest bends or twists. If false, the bend\n\x09 * or twist will happen around the gizmo location.\n\x09 */" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Bend || SelectedOperationType == ENonlinearOperationType::Twist" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "If true, the \"bottom\" of the mesh relative to the gizmo Z axis will stay in place while the rest bends or twists. If false, the bend\nor twist will happen around the gizmo location." },
	};
#endif
	void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_SetBit(void* Obj)
	{
		((UMeshSpaceDeformerToolProperties*)Obj)->bLockBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom = { "bLockBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_SetBit(void* Obj)
	{
		((UMeshSpaceDeformerToolProperties*)Obj)->bShowOriginalMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh = { "bShowOriginalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "SelectedOperationType == ENonlinearOperationType::Bend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_SetBit(void* Obj)
	{
		((UMeshSpaceDeformerToolProperties*)Obj)->bDrawVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization = { "bDrawVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** When true, Ctrl+click not only moves the gizmo to the clicked location, but also aligns the Z axis with the normal at that point. */" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "When true, Ctrl+click not only moves the gizmo to the clicked location, but also aligns the Z axis with the normal at that point." },
	};
#endif
	void Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_SetBit(void* Obj)
	{
		((UMeshSpaceDeformerToolProperties*)Obj)->bAlignToNormalOnCtrlClick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick = { "bAlignToNormalOnCtrlClick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSpaceDeformerToolProperties), &Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_SelectedOperationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_UpperBoundsInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_LowerBoundsInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_BendDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_TwistDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlareProfileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockXAndYFlaring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_FlarePercentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bLockBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bShowOriginalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bDrawVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::NewProp_bAlignToNormalOnCtrlClick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::ClassParams = {
		&UMeshSpaceDeformerToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSpaceDeformerToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerToolProperties>()
	{
		return UMeshSpaceDeformerToolProperties::StaticClass();
	}
	UMeshSpaceDeformerToolProperties::UMeshSpaceDeformerToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerToolProperties);
	UMeshSpaceDeformerToolProperties::~UMeshSpaceDeformerToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction;
	static UEnum* EMeshSpaceDeformerToolAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshSpaceDeformerToolAction"));
		}
		return Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSpaceDeformerToolAction>()
	{
		return EMeshSpaceDeformerToolAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enumerators[] = {
		{ "EMeshSpaceDeformerToolAction::NoAction", (int64)EMeshSpaceDeformerToolAction::NoAction },
		{ "EMeshSpaceDeformerToolAction::ShiftToCenter", (int64)EMeshSpaceDeformerToolAction::ShiftToCenter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "NoAction.Name", "EMeshSpaceDeformerToolAction::NoAction" },
		{ "ShiftToCenter.Name", "EMeshSpaceDeformerToolAction::ShiftToCenter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshSpaceDeformerToolAction",
		"EMeshSpaceDeformerToolAction",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction()
	{
		if (!Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshSpaceDeformerToolAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UMeshSpaceDeformerToolActionPropertySet::execShiftToCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftToCenter();
		P_NATIVE_END;
	}
	void UMeshSpaceDeformerToolActionPropertySet::StaticRegisterNativesUMeshSpaceDeformerToolActionPropertySet()
	{
		UClass* Class = UMeshSpaceDeformerToolActionPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShiftToCenter", &UMeshSpaceDeformerToolActionPropertySet::execShiftToCenter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Gizmo" },
		{ "Comment", "/** Move the gizmo to the center of the object without changing the orientation. */" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Move the gizmo to the center of the object without changing the orientation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet, nullptr, "ShiftToCenter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerToolActionPropertySet);
	UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_NoRegister()
	{
		return UMeshSpaceDeformerToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshSpaceDeformerToolActionPropertySet_ShiftToCenter, "ShiftToCenter" }, // 884964982
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::ClassParams = {
		&UMeshSpaceDeformerToolActionPropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerToolActionPropertySet>()
	{
		return UMeshSpaceDeformerToolActionPropertySet::StaticClass();
	}
	UMeshSpaceDeformerToolActionPropertySet::UMeshSpaceDeformerToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerToolActionPropertySet);
	UMeshSpaceDeformerToolActionPropertySet::~UMeshSpaceDeformerToolActionPropertySet() {}
	void USpaceDeformerOperatorFactory::StaticRegisterNativesUSpaceDeformerOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpaceDeformerOperatorFactory);
	UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory_NoRegister()
	{
		return USpaceDeformerOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceDeformerTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpaceDeformerTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool = { "SpaceDeformerTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpaceDeformerOperatorFactory, SpaceDeformerTool), Z_Construct_UClass_UMeshSpaceDeformerTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::NewProp_SpaceDeformerTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpaceDeformerOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::ClassParams = {
		&USpaceDeformerOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpaceDeformerOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.OuterSingleton, Z_Construct_UClass_USpaceDeformerOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpaceDeformerOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USpaceDeformerOperatorFactory>()
	{
		return USpaceDeformerOperatorFactory::StaticClass();
	}
	USpaceDeformerOperatorFactory::USpaceDeformerOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpaceDeformerOperatorFactory);
	USpaceDeformerOperatorFactory::~USpaceDeformerOperatorFactory() {}
	void UMeshSpaceDeformerTool::StaticRegisterNativesUMeshSpaceDeformerTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSpaceDeformerTool);
	UClass* Z_Construct_UClass_UMeshSpaceDeformerTool_NoRegister()
	{
		return UMeshSpaceDeformerTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSpaceDeformerTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragAlignmentMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMeshPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalMeshPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntervalGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntervalGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpIntervalSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpIntervalSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownIntervalSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DownIntervalSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardIntervalSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ForwardIntervalSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies non-linear deformations to a mesh \n */" },
		{ "IncludePath", "MeshSpaceDeformerTool.h" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Applies non-linear deformations to a mesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, Settings), Z_Construct_UClass_UMeshSpaceDeformerToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, ToolActions), Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, StateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic = { "DragAlignmentMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, DragAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview = { "OriginalMeshPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, OriginalMeshPreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo = { "IntervalGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, IntervalGizmo), Z_Construct_UClass_UIntervalGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource_MetaData[] = {
		{ "Comment", "/** Interval Parameter sources that reflect UI settings. */" },
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
		{ "ToolTip", "Interval Parameter sources that reflect UI settings." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource = { "UpIntervalSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, UpIntervalSource), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource = { "DownIntervalSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, DownIntervalSource), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshSpaceDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource = { "ForwardIntervalSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSpaceDeformerTool, ForwardIntervalSource), Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_StateTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DragAlignmentMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_OriginalMeshPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_IntervalGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_UpIntervalSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_DownIntervalSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::NewProp_ForwardIntervalSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSpaceDeformerTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::ClassParams = {
		&UMeshSpaceDeformerTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSpaceDeformerTool()
	{
		if (!Z_Registration_Info_UClass_UMeshSpaceDeformerTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSpaceDeformerTool.OuterSingleton, Z_Construct_UClass_UMeshSpaceDeformerTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSpaceDeformerTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSpaceDeformerTool>()
	{
		return UMeshSpaceDeformerTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSpaceDeformerTool);
	UMeshSpaceDeformerTool::~UMeshSpaceDeformerTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::EnumInfo[] = {
		{ ENonlinearOperationType_StaticEnum, TEXT("ENonlinearOperationType"), &Z_Registration_Info_UEnum_ENonlinearOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 247901586U) },
		{ EFlareProfileType_StaticEnum, TEXT("EFlareProfileType"), &Z_Registration_Info_UEnum_EFlareProfileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4164735505U) },
		{ EMeshSpaceDeformerToolAction_StaticEnum, TEXT("EMeshSpaceDeformerToolAction"), &Z_Registration_Info_UEnum_EMeshSpaceDeformerToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2903621723U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSpaceDeformerToolBuilder, UMeshSpaceDeformerToolBuilder::StaticClass, TEXT("UMeshSpaceDeformerToolBuilder"), &Z_Registration_Info_UClass_UMeshSpaceDeformerToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerToolBuilder), 3020508967U) },
		{ Z_Construct_UClass_UMeshSpaceDeformerToolProperties, UMeshSpaceDeformerToolProperties::StaticClass, TEXT("UMeshSpaceDeformerToolProperties"), &Z_Registration_Info_UClass_UMeshSpaceDeformerToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerToolProperties), 1192670805U) },
		{ Z_Construct_UClass_UMeshSpaceDeformerToolActionPropertySet, UMeshSpaceDeformerToolActionPropertySet::StaticClass, TEXT("UMeshSpaceDeformerToolActionPropertySet"), &Z_Registration_Info_UClass_UMeshSpaceDeformerToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerToolActionPropertySet), 2497778183U) },
		{ Z_Construct_UClass_USpaceDeformerOperatorFactory, USpaceDeformerOperatorFactory::StaticClass, TEXT("USpaceDeformerOperatorFactory"), &Z_Registration_Info_UClass_USpaceDeformerOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpaceDeformerOperatorFactory), 3911962393U) },
		{ Z_Construct_UClass_UMeshSpaceDeformerTool, UMeshSpaceDeformerTool::StaticClass, TEXT("UMeshSpaceDeformerTool"), &Z_Registration_Info_UClass_UMeshSpaceDeformerTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSpaceDeformerTool), 697168097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_3651711910(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshSpaceDeformerTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
