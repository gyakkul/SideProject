// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PolygonOnMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolygonOnMeshTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UPolygonOnMeshToolProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UPolygonOnMeshToolBuilder::StaticRegisterNativesUPolygonOnMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygonOnMeshToolBuilder);
	UClass* Z_Construct_UClass_UPolygonOnMeshToolBuilder_NoRegister()
	{
		return UPolygonOnMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PolygonOnMeshTool.h" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygonOnMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::ClassParams = {
		&UPolygonOnMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolygonOnMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPolygonOnMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygonOnMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UPolygonOnMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolygonOnMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UPolygonOnMeshToolBuilder>()
	{
		return UPolygonOnMeshToolBuilder::StaticClass();
	}
	UPolygonOnMeshToolBuilder::UPolygonOnMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygonOnMeshToolBuilder);
	UPolygonOnMeshToolBuilder::~UPolygonOnMeshToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolygonType;
	static UEnum* EPolygonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPolygonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPolygonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EPolygonType"));
		}
		return Z_Registration_Info_UEnum_EPolygonType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EPolygonType>()
	{
		return EPolygonType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::Enumerators[] = {
		{ "EPolygonType::Circle", (int64)EPolygonType::Circle },
		{ "EPolygonType::Square", (int64)EPolygonType::Square },
		{ "EPolygonType::Rectangle", (int64)EPolygonType::Rectangle },
		{ "EPolygonType::RoundRect", (int64)EPolygonType::RoundRect },
		{ "EPolygonType::Custom", (int64)EPolygonType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::Enum_MetaDataParams[] = {
		{ "Circle.Name", "EPolygonType::Circle" },
		{ "Custom.Name", "EPolygonType::Custom" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "Rectangle.Name", "EPolygonType::Rectangle" },
		{ "RoundRect.Name", "EPolygonType::RoundRect" },
		{ "Square.Name", "EPolygonType::Square" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EPolygonType",
		"EPolygonType",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType()
	{
		if (!Z_Registration_Info_UEnum_EPolygonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolygonType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPolygonType.InnerSingleton;
	}
	void UPolygonOnMeshToolProperties::StaticRegisterNativesUPolygonOnMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygonOnMeshToolProperties);
	UClass* Z_Construct_UClass_UPolygonOnMeshToolProperties_NoRegister()
	{
		return UPolygonOnMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics
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
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCutWithBoolean_MetaData[];
#endif
		static void NewProp_bCutWithBoolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCutWithBoolean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryToFixHoles_MetaData[];
#endif
		static void NewProp_bTryToFixHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToFixHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PolygonScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Subdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAcceptFailedResult_MetaData[];
#endif
		static void NewProp_bCanAcceptFailedResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAcceptFailedResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowIntermediateResultOnFailure_MetaData[];
#endif
		static void NewProp_bShowIntermediateResultOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowIntermediateResultOnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the polygon-on-mesh operations\n */" },
		{ "IncludePath", "PolygonOnMeshTool.h" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Standard properties of the polygon-on-mesh operations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** What operation to apply using the Polygon */" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "What operation to apply using the Polygon" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, Operation), Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation_MetaData)) }; // 3837643446
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Shape" },
		{ "Comment", "/** Polygon Shape to use in this Operation */" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Polygon Shape to use in this Operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, Shape), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonType, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape_MetaData)) }; // 2774854790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** Use a volumetric boolean rather than curve projection; cuts through all layers and across edges */" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Use a volumetric boolean rather than curve projection; cuts through all layers and across edges" },
	};
#endif
	void Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean_SetBit(void* Obj)
	{
		((UPolygonOnMeshToolProperties*)Obj)->bCutWithBoolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean = { "bCutWithBoolean", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolygonOnMeshToolProperties), &Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** Automatically attempt to fill any open boundaries left by CSG (e.g. due to numerical errors) */" },
		{ "EditCondition", "bCutWithBoolean && Operation == EEmbeddedPolygonOpMethod::CutThrough || bCutWithBoolean && Operation == EEmbeddedPolygonOpMethod::InsertPolygon" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Automatically attempt to fill any open boundaries left by CSG (e.g. due to numerical errors)" },
	};
#endif
	void Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles_SetBit(void* Obj)
	{
		((UPolygonOnMeshToolProperties*)Obj)->bTryToFixHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles = { "bTryToFixHoles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolygonOnMeshToolProperties), &Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_PolygonScale_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Scale of polygon to embed */" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Scale of polygon to embed" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_PolygonScale = { "PolygonScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, PolygonScale), METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_PolygonScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_PolygonScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Width of Polygon */" },
		{ "EditCondition", "Shape != EPolygonType::Custom" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Width of Polygon" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, Width), METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Height of Polygon */" },
		{ "EditCondition", "Shape == EPolygonType::Rectangle || Shape == EPolygonType::RoundRect" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Height of Polygon" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, Height), METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_CornerRatio_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Corner Ratio of RoundRect Polygon */" },
		{ "EditCondition", "Shape == EPolygonType::RoundRect" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Corner Ratio of RoundRect Polygon" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_CornerRatio = { "CornerRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, CornerRatio), METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_CornerRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_CornerRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Subdivisions_MetaData[] = {
		{ "Category", "Shape" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "3" },
		{ "Comment", "/** Number of sides in Circle or RoundRect Corner */" },
		{ "EditCondition", "Shape == EPolygonType::Circle || Shape == EPolygonType::RoundRect" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Number of sides in Circle or RoundRect Corner" },
		{ "UIMax", "20" },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshToolProperties, Subdivisions), METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Subdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Subdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/**\n\x09 * Whether the tool will allow accepting a result if the operation fails, for instance due to inability to insert the\n\x09 * polygon when not cutting with boolean, or due to unrepaired cracks in the result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Whether the tool will allow accepting a result if the operation fails, for instance due to inability to insert the\npolygon when not cutting with boolean, or due to unrepaired cracks in the result." },
	};
#endif
	void Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult_SetBit(void* Obj)
	{
		((UPolygonOnMeshToolProperties*)Obj)->bCanAcceptFailedResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult = { "bCanAcceptFailedResult", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolygonOnMeshToolProperties), &Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** \n\x09 * If an operation fails and we do not allow accepting the result, whether to show the intermediate failed result, or to\n\x09 * show the original mesh.\n\x09 */" },
		{ "EditCondition", "!bCanAcceptFailedResult" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "If an operation fails and we do not allow accepting the result, whether to show the intermediate failed result, or to\nshow the original mesh." },
	};
#endif
	void Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure_SetBit(void* Obj)
	{
		((UPolygonOnMeshToolProperties*)Obj)->bShowIntermediateResultOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure = { "bShowIntermediateResultOnFailure", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPolygonOnMeshToolProperties), &Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCutWithBoolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bTryToFixHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_PolygonScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_CornerRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_Subdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bCanAcceptFailedResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::NewProp_bShowIntermediateResultOnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygonOnMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::ClassParams = {
		&UPolygonOnMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolygonOnMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_UPolygonOnMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygonOnMeshToolProperties.OuterSingleton, Z_Construct_UClass_UPolygonOnMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolygonOnMeshToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UPolygonOnMeshToolProperties>()
	{
		return UPolygonOnMeshToolProperties::StaticClass();
	}
	UPolygonOnMeshToolProperties::UPolygonOnMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygonOnMeshToolProperties);
	UPolygonOnMeshToolProperties::~UPolygonOnMeshToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPolygonOnMeshToolActions;
	static UEnum* EPolygonOnMeshToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPolygonOnMeshToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPolygonOnMeshToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EPolygonOnMeshToolActions"));
		}
		return Z_Registration_Info_UEnum_EPolygonOnMeshToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EPolygonOnMeshToolActions>()
	{
		return EPolygonOnMeshToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::Enumerators[] = {
		{ "EPolygonOnMeshToolActions::NoAction", (int64)EPolygonOnMeshToolActions::NoAction },
		{ "EPolygonOnMeshToolActions::DrawPolygon", (int64)EPolygonOnMeshToolActions::DrawPolygon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::Enum_MetaDataParams[] = {
		{ "DrawPolygon.Name", "EPolygonOnMeshToolActions::DrawPolygon" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "NoAction.Name", "EPolygonOnMeshToolActions::NoAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EPolygonOnMeshToolActions",
		"EPolygonOnMeshToolActions",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions()
	{
		if (!Z_Registration_Info_UEnum_EPolygonOnMeshToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPolygonOnMeshToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EPolygonOnMeshToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPolygonOnMeshToolActions.InnerSingleton;
	}
	DEFINE_FUNCTION(UPolygonOnMeshToolActionPropertySet::execDrawPolygon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawPolygon();
		P_NATIVE_END;
	}
	void UPolygonOnMeshToolActionPropertySet::StaticRegisterNativesUPolygonOnMeshToolActionPropertySet()
	{
		UClass* Class = UPolygonOnMeshToolActionPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawPolygon", &UPolygonOnMeshToolActionPropertySet::execDrawPolygon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Extrude the current set of selected faces. Click in viewport to confirm extrude height. */" },
		{ "DisplayName", "Draw Polygon" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Extrude the current set of selected faces. Click in viewport to confirm extrude height." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet, nullptr, "DrawPolygon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygonOnMeshToolActionPropertySet);
	UClass* Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_NoRegister()
	{
		return UPolygonOnMeshToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPolygonOnMeshToolActionPropertySet_DrawPolygon, "DrawPolygon" }, // 611497170
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PolygonOnMeshTool.h" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygonOnMeshToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::ClassParams = {
		&UPolygonOnMeshToolActionPropertySet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UPolygonOnMeshToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygonOnMeshToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolygonOnMeshToolActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UPolygonOnMeshToolActionPropertySet>()
	{
		return UPolygonOnMeshToolActionPropertySet::StaticClass();
	}
	UPolygonOnMeshToolActionPropertySet::UPolygonOnMeshToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygonOnMeshToolActionPropertySet);
	UPolygonOnMeshToolActionPropertySet::~UPolygonOnMeshToolActionPropertySet() {}
	void UPolygonOnMeshTool::StaticRegisterNativesUPolygonOnMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolygonOnMeshTool);
	UClass* Z_Construct_UClass_UPolygonOnMeshTool_NoRegister()
	{
		return UPolygonOnMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UPolygonOnMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLineSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnLineSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawPolygonMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawPolygonMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolygonOnMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Plane Cutting Tool\n */" },
		{ "IncludePath", "PolygonOnMeshTool.h" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
		{ "ToolTip", "Simple Mesh Plane Cutting Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshTool, BasicProperties), Z_Construct_UClass_UPolygonOnMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_ActionProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_ActionProperties = { "ActionProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshTool, ActionProperties), Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_ActionProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_ActionProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawnLineSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawnLineSet = { "DrawnLineSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshTool, DrawnLineSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawnLineSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawnLineSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_PlaneMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawPolygonMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PolygonOnMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawPolygonMechanic = { "DrawPolygonMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolygonOnMeshTool, DrawPolygonMechanic), Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawPolygonMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawPolygonMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolygonOnMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_ActionProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawnLineSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_PlaneMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolygonOnMeshTool_Statics::NewProp_DrawPolygonMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolygonOnMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolygonOnMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolygonOnMeshTool_Statics::ClassParams = {
		&UPolygonOnMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolygonOnMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolygonOnMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolygonOnMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolygonOnMeshTool()
	{
		if (!Z_Registration_Info_UClass_UPolygonOnMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolygonOnMeshTool.OuterSingleton, Z_Construct_UClass_UPolygonOnMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolygonOnMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UPolygonOnMeshTool>()
	{
		return UPolygonOnMeshTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolygonOnMeshTool);
	UPolygonOnMeshTool::~UPolygonOnMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics::EnumInfo[] = {
		{ EPolygonType_StaticEnum, TEXT("EPolygonType"), &Z_Registration_Info_UEnum_EPolygonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2774854790U) },
		{ EPolygonOnMeshToolActions_StaticEnum, TEXT("EPolygonOnMeshToolActions"), &Z_Registration_Info_UEnum_EPolygonOnMeshToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1051452797U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolygonOnMeshToolBuilder, UPolygonOnMeshToolBuilder::StaticClass, TEXT("UPolygonOnMeshToolBuilder"), &Z_Registration_Info_UClass_UPolygonOnMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygonOnMeshToolBuilder), 3152673730U) },
		{ Z_Construct_UClass_UPolygonOnMeshToolProperties, UPolygonOnMeshToolProperties::StaticClass, TEXT("UPolygonOnMeshToolProperties"), &Z_Registration_Info_UClass_UPolygonOnMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygonOnMeshToolProperties), 2933503682U) },
		{ Z_Construct_UClass_UPolygonOnMeshToolActionPropertySet, UPolygonOnMeshToolActionPropertySet::StaticClass, TEXT("UPolygonOnMeshToolActionPropertySet"), &Z_Registration_Info_UClass_UPolygonOnMeshToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygonOnMeshToolActionPropertySet), 4181986821U) },
		{ Z_Construct_UClass_UPolygonOnMeshTool, UPolygonOnMeshTool::StaticClass, TEXT("UPolygonOnMeshTool"), &Z_Registration_Info_UClass_UPolygonOnMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolygonOnMeshTool), 237765501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_1063360709(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_PolygonOnMeshTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
