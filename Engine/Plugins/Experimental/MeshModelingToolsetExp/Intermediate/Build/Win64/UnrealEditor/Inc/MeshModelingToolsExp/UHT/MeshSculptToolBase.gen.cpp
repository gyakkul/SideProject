// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sculpting/MeshSculptToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSculptToolBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBrushStampIndicator_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UMeshEditingViewProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UKelvinBrushProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UKelvinBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptToolBase();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptToolBase_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptBrushProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptMaxBrushProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptMaxBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWorkPlaneProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWorkPlaneProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FBrushToolRadius();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushToolSizeType;
	static UEnum* EBrushToolSizeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBrushToolSizeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBrushToolSizeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBrushToolSizeType"));
		}
		return Z_Registration_Info_UEnum_EBrushToolSizeType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBrushToolSizeType>()
	{
		return EBrushToolSizeType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::Enumerators[] = {
		{ "EBrushToolSizeType::Adaptive", (int64)EBrushToolSizeType::Adaptive },
		{ "EBrushToolSizeType::World", (int64)EBrushToolSizeType::World },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::Enum_MetaDataParams[] = {
		{ "Adaptive.Comment", "/** Brush size is a dimensionless scale relative to the target object size */" },
		{ "Adaptive.Name", "EBrushToolSizeType::Adaptive" },
		{ "Adaptive.ToolTip", "Brush size is a dimensionless scale relative to the target object size" },
		{ "Comment", "/**\n * Type of Brush Size currently active in FBrushToolRadius\n */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Type of Brush Size currently active in FBrushToolRadius" },
		{ "World.Comment", "/** Brush size is defined in world dimensions */" },
		{ "World.Name", "EBrushToolSizeType::World" },
		{ "World.ToolTip", "Brush size is defined in world dimensions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EBrushToolSizeType",
		"EBrushToolSizeType",
		Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType()
	{
		if (!Z_Registration_Info_UEnum_EBrushToolSizeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushToolSizeType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBrushToolSizeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushToolRadius;
class UScriptStruct* FBrushToolRadius::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushToolRadius.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushToolRadius.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushToolRadius, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("BrushToolRadius"));
	}
	return Z_Registration_Info_UScriptStruct_BrushToolRadius.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FBrushToolRadius>()
{
	return FBrushToolRadius::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBrushToolRadius_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdaptiveSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AdaptiveSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushToolRadius_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FBrushToolRadius is used to define the size of 3D \"brushes\" used in (eg) sculpting tools.\n * The brush size can be defined in various ways.\n */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "FBrushToolRadius is used to define the size of 3D \"brushes\" used in (eg) sculpting tools.\nThe brush size can be defined in various ways." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushToolRadius>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Specify the type of brush size currently in use */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Specify the type of brush size currently in use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType = { "SizeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushToolRadius, SizeType), Z_Construct_UEnum_MeshModelingToolsExp_EBrushToolSizeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType_MetaData)) }; // 892567517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_AdaptiveSize_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Adaptive brush size is used to interpolate between an object-specific minimum and maximum brush size */" },
		{ "DisplayName", "Size" },
		{ "EditCondition", "SizeType == EBrushToolSizeType::Adaptive" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Adaptive brush size is used to interpolate between an object-specific minimum and maximum brush size" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_AdaptiveSize = { "AdaptiveSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushToolRadius, AdaptiveSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_AdaptiveSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_AdaptiveSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_WorldRadius_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "50000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** World brush size is a dimension in world coordinates */" },
		{ "DisplayName", "World Radius" },
		{ "EditCondition", "SizeType == EBrushToolSizeType::World" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "World brush size is a dimension in world coordinates" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_WorldRadius = { "WorldRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrushToolRadius, WorldRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_WorldRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_WorldRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushToolRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_SizeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_AdaptiveSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewProp_WorldRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushToolRadius_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"BrushToolRadius",
		sizeof(FBrushToolRadius),
		alignof(FBrushToolRadius),
		Z_Construct_UScriptStruct_FBrushToolRadius_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushToolRadius_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrushToolRadius()
	{
		if (!Z_Registration_Info_UScriptStruct_BrushToolRadius.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushToolRadius.InnerSingleton, Z_Construct_UScriptStruct_FBrushToolRadius_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrushToolRadius.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshSculptFalloffType;
	static UEnum* EMeshSculptFalloffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshSculptFalloffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshSculptFalloffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshSculptFalloffType"));
		}
		return Z_Registration_Info_UEnum_EMeshSculptFalloffType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshSculptFalloffType>()
	{
		return EMeshSculptFalloffType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::Enumerators[] = {
		{ "EMeshSculptFalloffType::Smooth", (int64)EMeshSculptFalloffType::Smooth },
		{ "EMeshSculptFalloffType::Linear", (int64)EMeshSculptFalloffType::Linear },
		{ "EMeshSculptFalloffType::Inverse", (int64)EMeshSculptFalloffType::Inverse },
		{ "EMeshSculptFalloffType::Round", (int64)EMeshSculptFalloffType::Round },
		{ "EMeshSculptFalloffType::BoxSmooth", (int64)EMeshSculptFalloffType::BoxSmooth },
		{ "EMeshSculptFalloffType::BoxLinear", (int64)EMeshSculptFalloffType::BoxLinear },
		{ "EMeshSculptFalloffType::BoxInverse", (int64)EMeshSculptFalloffType::BoxInverse },
		{ "EMeshSculptFalloffType::BoxRound", (int64)EMeshSculptFalloffType::BoxRound },
		{ "EMeshSculptFalloffType::LastValue", (int64)EMeshSculptFalloffType::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::Enum_MetaDataParams[] = {
		{ "BoxInverse.Name", "EMeshSculptFalloffType::BoxInverse" },
		{ "BoxLinear.Name", "EMeshSculptFalloffType::BoxLinear" },
		{ "BoxRound.Name", "EMeshSculptFalloffType::BoxRound" },
		{ "BoxSmooth.Name", "EMeshSculptFalloffType::BoxSmooth" },
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "Inverse.Name", "EMeshSculptFalloffType::Inverse" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshSculptFalloffType::LastValue" },
		{ "Linear.Name", "EMeshSculptFalloffType::Linear" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "Round.Name", "EMeshSculptFalloffType::Round" },
		{ "Smooth.Name", "EMeshSculptFalloffType::Smooth" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshSculptFalloffType",
		"EMeshSculptFalloffType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType()
	{
		if (!Z_Registration_Info_UEnum_EMeshSculptFalloffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshSculptFalloffType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshSculptFalloffType.InnerSingleton;
	}
	void USculptBrushProperties::StaticRegisterNativesUSculptBrushProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USculptBrushProperties);
	UClass* Z_Construct_UClass_USculptBrushProperties_NoRegister()
	{
		return USculptBrushProperties::StaticClass();
	}
	struct Z_Construct_UClass_USculptBrushProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushFalloffAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushFalloffAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFalloff_MetaData[];
#endif
		static void NewProp_bShowFalloff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[];
#endif
		static void NewProp_bHitBackFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlowRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlowRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lazyness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lazyness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPerBrushProps_MetaData[];
#endif
		static void NewProp_bShowPerBrushProps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPerBrushProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLazyness_MetaData[];
#endif
		static void NewProp_bShowLazyness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLazyness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFlowRate_MetaData[];
#endif
		static void NewProp_bShowFlowRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFlowRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSpacing_MetaData[];
#endif
		static void NewProp_bShowSpacing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USculptBrushProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptToolBase.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushSize_MetaData[] = {
		{ "Category", "Brush" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptBrushProperties, BrushSize), Z_Construct_UScriptStruct_FBrushToolRadius, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushSize_MetaData)) }; // 934615550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushFalloffAmount_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bShowFalloff" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushFalloffAmount = { "BrushFalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptBrushProperties, BrushFalloffAmount), METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushFalloffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushFalloffAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff_MetaData[] = {
		{ "Comment", "/** If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect) */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "If false, then BrushFalloffAmount will not be shown in DetailsView panels (otherwise no effect)" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff_SetBit(void* Obj)
	{
		((USculptBrushProperties*)Obj)->bShowFalloff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff = { "bShowFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptBrushProperties), &Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray or surface normal, depending on the Active Brush Type */" },
		{ "DisplayPriority", "5" },
		{ "EditCondition", "bShowPerBrushProps" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray or surface normal, depending on the Active Brush Type" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptBrushProperties, Depth), METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Allow the Brush to hit the back-side of the mesh */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Allow the Brush to hit the back-side of the mesh" },
	};
#endif
	void Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
	{
		((USculptBrushProperties*)Obj)->bHitBackFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptBrushProperties), &Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_FlowRate_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Brush stamps are applied at this time interval. 0 for a single stamp, 1 for continuous stamps, 0.5 is a stamp every half-second */" },
		{ "DisplayName", "Flow" },
		{ "DisplayPriority", "7" },
		{ "EditCondition", "bShowFlowRate" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Brush stamps are applied at this time interval. 0 for a single stamp, 1 for continuous stamps, 0.5 is a stamp every half-second" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_FlowRate = { "FlowRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptBrushProperties, FlowRate), METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_FlowRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_FlowRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Space out stamp centers at distances Spacing*BrushDiameter along the stroke (so Spacing of 1 means that stamps will be adjacent but non-overlapping). Zero spacing means continuous stamps. */" },
		{ "DisplayPriority", "8" },
		{ "EditCondition", "bShowSpacing" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Space out stamp centers at distances Spacing*BrushDiameter along the stroke (so Spacing of 1 means that stamps will be adjacent but non-overlapping). Zero spacing means continuous stamps." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptBrushProperties, Spacing), METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Spacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Lazyness_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Lazy brush smooths out the brush path by averaging the cursor positions */" },
		{ "DisplayName", "Lazy" },
		{ "DisplayPriority", "9" },
		{ "EditCondition", "bShowLazyness" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Lazy brush smooths out the brush path by averaging the cursor positions" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Lazyness = { "Lazyness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptBrushProperties, Lazyness), METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Lazyness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Lazyness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps_SetBit(void* Obj)
	{
		((USculptBrushProperties*)Obj)->bShowPerBrushProps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps = { "bShowPerBrushProps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptBrushProperties), &Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness_SetBit(void* Obj)
	{
		((USculptBrushProperties*)Obj)->bShowLazyness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness = { "bShowLazyness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptBrushProperties), &Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate_SetBit(void* Obj)
	{
		((USculptBrushProperties*)Obj)->bShowFlowRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate = { "bShowFlowRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptBrushProperties), &Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing_SetBit(void* Obj)
	{
		((USculptBrushProperties*)Obj)->bShowSpacing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing = { "bShowSpacing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptBrushProperties), &Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USculptBrushProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_BrushFalloffAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bHitBackFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_FlowRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Spacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_Lazyness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowPerBrushProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowLazyness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowFlowRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptBrushProperties_Statics::NewProp_bShowSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USculptBrushProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USculptBrushProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USculptBrushProperties_Statics::ClassParams = {
		&USculptBrushProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USculptBrushProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USculptBrushProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USculptBrushProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USculptBrushProperties()
	{
		if (!Z_Registration_Info_UClass_USculptBrushProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USculptBrushProperties.OuterSingleton, Z_Construct_UClass_USculptBrushProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USculptBrushProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USculptBrushProperties>()
	{
		return USculptBrushProperties::StaticClass();
	}
	USculptBrushProperties::USculptBrushProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USculptBrushProperties);
	USculptBrushProperties::~USculptBrushProperties() {}
	void UKelvinBrushProperties::StaticRegisterNativesUKelvinBrushProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKelvinBrushProperties);
	UClass* Z_Construct_UClass_UKelvinBrushProperties_NoRegister()
	{
		return UKelvinBrushProperties::StaticClass();
	}
	struct Z_Construct_UClass_UKelvinBrushProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallOffDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallOffDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Incompressiblity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Incompressiblity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BrushSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKelvinBrushProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKelvinBrushProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptToolBase.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_FallOffDistance_MetaData[] = {
		{ "Category", "Kelvin" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Brush Fall off as fraction of brush size*/" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Brush Fall off as fraction of brush size" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_FallOffDistance = { "FallOffDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKelvinBrushProperties, FallOffDistance), METADATA_PARAMS(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_FallOffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_FallOffDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Kelvin" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much the mesh resists shear */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "How much the mesh resists shear" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKelvinBrushProperties, Stiffness), METADATA_PARAMS(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Incompressiblity_MetaData[] = {
		{ "Category", "Kelvin" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How compressible the spatial region is: 1 - 2 x Poisson ratio */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "How compressible the spatial region is: 1 - 2 x Poisson ratio" },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Incompressiblity = { "Incompressiblity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKelvinBrushProperties, Incompressiblity), METADATA_PARAMS(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Incompressiblity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Incompressiblity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_BrushSteps_MetaData[] = {
		{ "Category", "Kelvin" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Integration steps*/" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Integration steps" },
		{ "UIMax", "100" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_BrushSteps = { "BrushSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKelvinBrushProperties, BrushSteps), METADATA_PARAMS(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_BrushSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_BrushSteps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKelvinBrushProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_FallOffDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_Incompressiblity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKelvinBrushProperties_Statics::NewProp_BrushSteps,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKelvinBrushProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKelvinBrushProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKelvinBrushProperties_Statics::ClassParams = {
		&UKelvinBrushProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKelvinBrushProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKelvinBrushProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UKelvinBrushProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKelvinBrushProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKelvinBrushProperties()
	{
		if (!Z_Registration_Info_UClass_UKelvinBrushProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKelvinBrushProperties.OuterSingleton, Z_Construct_UClass_UKelvinBrushProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKelvinBrushProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UKelvinBrushProperties>()
	{
		return UKelvinBrushProperties::StaticClass();
	}
	UKelvinBrushProperties::UKelvinBrushProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKelvinBrushProperties);
	UKelvinBrushProperties::~UKelvinBrushProperties() {}
	void UWorkPlaneProperties::StaticRegisterNativesUWorkPlaneProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorkPlaneProperties);
	UClass* Z_Construct_UClass_UWorkPlaneProperties_NoRegister()
	{
		return UWorkPlaneProperties::StaticClass();
	}
	struct Z_Construct_UClass_UWorkPlaneProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropertySetEnabled_MetaData[];
#endif
		static void NewProp_bPropertySetEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropertySetEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGizmo_MetaData[];
#endif
		static void NewProp_bShowGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorkPlaneProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkPlaneProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptToolBase.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled_SetBit(void* Obj)
	{
		((UWorkPlaneProperties*)Obj)->bPropertySetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled = { "bPropertySetEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorkPlaneProperties), &Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo_MetaData[] = {
		{ "Category", "TargetPlane" },
		{ "Comment", "/** Toggle whether Work Plane Positioning Gizmo is visible */" },
		{ "EditCondition", "bPropertySetEnabled == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Toggle whether Work Plane Positioning Gizmo is visible" },
	};
#endif
	void Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo_SetBit(void* Obj)
	{
		((UWorkPlaneProperties*)Obj)->bShowGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo = { "bShowGizmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorkPlaneProperties), &Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "TargetPlane" },
		{ "EditCondition", "bPropertySetEnabled == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorkPlaneProperties, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "TargetPlane" },
		{ "EditCondition", "bPropertySetEnabled == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorkPlaneProperties, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorkPlaneProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bPropertySetEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_bShowGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorkPlaneProperties_Statics::NewProp_Rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorkPlaneProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorkPlaneProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorkPlaneProperties_Statics::ClassParams = {
		&UWorkPlaneProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorkPlaneProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorkPlaneProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWorkPlaneProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorkPlaneProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorkPlaneProperties()
	{
		if (!Z_Registration_Info_UClass_UWorkPlaneProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorkPlaneProperties.OuterSingleton, Z_Construct_UClass_UWorkPlaneProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorkPlaneProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWorkPlaneProperties>()
	{
		return UWorkPlaneProperties::StaticClass();
	}
	UWorkPlaneProperties::UWorkPlaneProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkPlaneProperties);
	UWorkPlaneProperties::~UWorkPlaneProperties() {}
	void USculptMaxBrushProperties::StaticRegisterNativesUSculptMaxBrushProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USculptMaxBrushProperties);
	UClass* Z_Construct_UClass_USculptMaxBrushProperties_NoRegister()
	{
		return USculptMaxBrushProperties::StaticClass();
	}
	struct Z_Construct_UClass_USculptMaxBrushProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeCurrentHeight_MetaData[];
#endif
		static void NewProp_bFreezeCurrentHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeCurrentHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USculptMaxBrushProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptMaxBrushProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sculpting/MeshSculptToolBase.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specify maximum displacement height (relative to brush size) */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Specify maximum displacement height (relative to brush size)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USculptMaxBrushProperties, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight_MetaData[] = {
		{ "Category", "SculptMaxBrush" },
		{ "Comment", "/** Use maximum height from last brush stroke, regardless of brush size. Note that spatial brush falloff still applies.  */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Use maximum height from last brush stroke, regardless of brush size. Note that spatial brush falloff still applies." },
	};
#endif
	void Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight_SetBit(void* Obj)
	{
		((USculptMaxBrushProperties*)Obj)->bFreezeCurrentHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight = { "bFreezeCurrentHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USculptMaxBrushProperties), &Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USculptMaxBrushProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USculptMaxBrushProperties_Statics::NewProp_bFreezeCurrentHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USculptMaxBrushProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USculptMaxBrushProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USculptMaxBrushProperties_Statics::ClassParams = {
		&USculptMaxBrushProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USculptMaxBrushProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USculptMaxBrushProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USculptMaxBrushProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USculptMaxBrushProperties()
	{
		if (!Z_Registration_Info_UClass_USculptMaxBrushProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USculptMaxBrushProperties.OuterSingleton, Z_Construct_UClass_USculptMaxBrushProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USculptMaxBrushProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USculptMaxBrushProperties>()
	{
		return USculptMaxBrushProperties::StaticClass();
	}
	USculptMaxBrushProperties::USculptMaxBrushProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USculptMaxBrushProperties);
	USculptMaxBrushProperties::~USculptMaxBrushProperties() {}
	void UMeshSculptToolBase::StaticRegisterNativesUMeshSculptToolBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSculptToolBase);
	UClass* Z_Construct_UClass_UMeshSculptToolBase_NoRegister()
	{
		return UMeshSculptToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSculptToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushOpPropSets_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BrushOpPropSets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushOpPropSets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BrushOpPropSets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SecondaryBrushOpPropSets_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondaryBrushOpPropSets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryBrushOpPropSets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SecondaryBrushOpPropSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveOverrideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveOverrideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVolumetricIndicator_MetaData[];
#endif
		static void NewProp_bIsVolumetricIndicator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVolumetricIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushIndicatorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushIndicatorMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushIndicatorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushIndicatorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneTransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneTransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSculptToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Tool for mesh sculpting tools, provides some shared functionality\n */" },
		{ "IncludePath", "Sculpting/MeshSculptToolBase.h" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Base Tool for mesh sculpting tools, provides some shared functionality" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushProperties_MetaData[] = {
		{ "Comment", "/** Properties that control brush size/etc */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Properties that control brush size/etc" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushProperties = { "BrushProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, BrushProperties), Z_Construct_UClass_USculptBrushProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_GizmoProperties_MetaData[] = {
		{ "Comment", "/** Properties for 3D workplane / gizmo */" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "Properties for 3D workplane / gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_GizmoProperties = { "GizmoProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, GizmoProperties), Z_Construct_UClass_UWorkPlaneProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_GizmoProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_GizmoProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_ValueProp = { "BrushOpPropSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_Key_KeyProp = { "BrushOpPropSets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets = { "BrushOpPropSets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, BrushOpPropSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_ValueProp = { "SecondaryBrushOpPropSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMeshSculptBrushOpProps_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_Key_KeyProp = { "SecondaryBrushOpPropSets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets = { "SecondaryBrushOpPropSets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, SecondaryBrushOpPropSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ViewProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ViewProperties = { "ViewProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, ViewProperties), Z_Construct_UClass_UMeshEditingViewProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ViewProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ViewProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ActiveOverrideMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ActiveOverrideMaterial = { "ActiveOverrideMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, ActiveOverrideMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ActiveOverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ActiveOverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicator = { "BrushIndicator", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, BrushIndicator), Z_Construct_UClass_UBrushStampIndicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	void Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator_SetBit(void* Obj)
	{
		((UMeshSculptToolBase*)Obj)->bIsVolumetricIndicator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator = { "bIsVolumetricIndicator", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSculptToolBase), &Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMaterial = { "BrushIndicatorMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, BrushIndicatorMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMesh = { "BrushIndicatorMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, BrushIndicatorMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformGizmo_MetaData[] = {
		{ "Comment", "// plane gizmo\n" },
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
		{ "ToolTip", "plane gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformGizmo = { "PlaneTransformGizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, PlaneTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sculpting/MeshSculptToolBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformProxy = { "PlaneTransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSculptToolBase, PlaneTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSculptToolBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_GizmoProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushOpPropSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_SecondaryBrushOpPropSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ViewProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_ActiveOverrideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_bIsVolumetricIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_BrushIndicatorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSculptToolBase_Statics::NewProp_PlaneTransformProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSculptToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSculptToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSculptToolBase_Statics::ClassParams = {
		&UMeshSculptToolBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSculptToolBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSculptToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSculptToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSculptToolBase()
	{
		if (!Z_Registration_Info_UClass_UMeshSculptToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSculptToolBase.OuterSingleton, Z_Construct_UClass_UMeshSculptToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSculptToolBase.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSculptToolBase>()
	{
		return UMeshSculptToolBase::StaticClass();
	}
	UMeshSculptToolBase::UMeshSculptToolBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSculptToolBase);
	UMeshSculptToolBase::~UMeshSculptToolBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::EnumInfo[] = {
		{ EBrushToolSizeType_StaticEnum, TEXT("EBrushToolSizeType"), &Z_Registration_Info_UEnum_EBrushToolSizeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 892567517U) },
		{ EMeshSculptFalloffType_StaticEnum, TEXT("EMeshSculptFalloffType"), &Z_Registration_Info_UEnum_EMeshSculptFalloffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1837106073U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::ScriptStructInfo[] = {
		{ FBrushToolRadius::StaticStruct, Z_Construct_UScriptStruct_FBrushToolRadius_Statics::NewStructOps, TEXT("BrushToolRadius"), &Z_Registration_Info_UScriptStruct_BrushToolRadius, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushToolRadius), 934615550U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USculptBrushProperties, USculptBrushProperties::StaticClass, TEXT("USculptBrushProperties"), &Z_Registration_Info_UClass_USculptBrushProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USculptBrushProperties), 127890371U) },
		{ Z_Construct_UClass_UKelvinBrushProperties, UKelvinBrushProperties::StaticClass, TEXT("UKelvinBrushProperties"), &Z_Registration_Info_UClass_UKelvinBrushProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKelvinBrushProperties), 266133739U) },
		{ Z_Construct_UClass_UWorkPlaneProperties, UWorkPlaneProperties::StaticClass, TEXT("UWorkPlaneProperties"), &Z_Registration_Info_UClass_UWorkPlaneProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorkPlaneProperties), 1767460980U) },
		{ Z_Construct_UClass_USculptMaxBrushProperties, USculptMaxBrushProperties::StaticClass, TEXT("USculptMaxBrushProperties"), &Z_Registration_Info_UClass_USculptMaxBrushProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USculptMaxBrushProperties), 4036455546U) },
		{ Z_Construct_UClass_UMeshSculptToolBase, UMeshSculptToolBase::StaticClass, TEXT("UMeshSculptToolBase"), &Z_Registration_Info_UClass_UMeshSculptToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSculptToolBase), 1427815111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_3665062727(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Sculpting_MeshSculptToolBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
