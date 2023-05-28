// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicMeshSculptTool.h"
#include "Sculpting/MeshSculptToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshSculptTool() {}
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
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBrushRemeshProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBrushRemeshProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushSculptProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshBrushSculptProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshSculptTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshSculptTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshSculptToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicMeshSculptToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicSculptToolActions();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDynamicSculptToolActions_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UFixedPlaneBrushProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UFixedPlaneBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UKelvinBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USculptMaxBrushProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FBrushToolRadius();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType;
	static UEnum* EDynamicMeshSculptBrushType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDynamicMeshSculptBrushType"));
		}
		return Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDynamicMeshSculptBrushType>()
	{
		return EDynamicMeshSculptBrushType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::Enumerators[] = {
		{ "EDynamicMeshSculptBrushType::Move", (int64)EDynamicMeshSculptBrushType::Move },
		{ "EDynamicMeshSculptBrushType::PullKelvin", (int64)EDynamicMeshSculptBrushType::PullKelvin },
		{ "EDynamicMeshSculptBrushType::PullSharpKelvin", (int64)EDynamicMeshSculptBrushType::PullSharpKelvin },
		{ "EDynamicMeshSculptBrushType::Smooth", (int64)EDynamicMeshSculptBrushType::Smooth },
		{ "EDynamicMeshSculptBrushType::Offset", (int64)EDynamicMeshSculptBrushType::Offset },
		{ "EDynamicMeshSculptBrushType::SculptView", (int64)EDynamicMeshSculptBrushType::SculptView },
		{ "EDynamicMeshSculptBrushType::SculptMax", (int64)EDynamicMeshSculptBrushType::SculptMax },
		{ "EDynamicMeshSculptBrushType::Inflate", (int64)EDynamicMeshSculptBrushType::Inflate },
		{ "EDynamicMeshSculptBrushType::ScaleKelvin", (int64)EDynamicMeshSculptBrushType::ScaleKelvin },
		{ "EDynamicMeshSculptBrushType::Pinch", (int64)EDynamicMeshSculptBrushType::Pinch },
		{ "EDynamicMeshSculptBrushType::TwistKelvin", (int64)EDynamicMeshSculptBrushType::TwistKelvin },
		{ "EDynamicMeshSculptBrushType::Flatten", (int64)EDynamicMeshSculptBrushType::Flatten },
		{ "EDynamicMeshSculptBrushType::Plane", (int64)EDynamicMeshSculptBrushType::Plane },
		{ "EDynamicMeshSculptBrushType::PlaneViewAligned", (int64)EDynamicMeshSculptBrushType::PlaneViewAligned },
		{ "EDynamicMeshSculptBrushType::FixedPlane", (int64)EDynamicMeshSculptBrushType::FixedPlane },
		{ "EDynamicMeshSculptBrushType::Resample", (int64)EDynamicMeshSculptBrushType::Resample },
		{ "EDynamicMeshSculptBrushType::LastValue", (int64)EDynamicMeshSculptBrushType::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "FixedPlane.Comment", "/** Move vertices towards a fixed plane in world space, positioned with a 3D gizmo */" },
		{ "FixedPlane.DisplayName", "FixedPlane" },
		{ "FixedPlane.Name", "EDynamicMeshSculptBrushType::FixedPlane" },
		{ "FixedPlane.ToolTip", "Move vertices towards a fixed plane in world space, positioned with a 3D gizmo" },
		{ "Flatten.Comment", "/** Move vertices towards the average plane of the brush stamp region */" },
		{ "Flatten.DisplayName", "Flatten" },
		{ "Flatten.Name", "EDynamicMeshSculptBrushType::Flatten" },
		{ "Flatten.ToolTip", "Move vertices towards the average plane of the brush stamp region" },
		{ "Inflate.Comment", "/** Displace vertices along their vertex normals */" },
		{ "Inflate.DisplayName", "Inflate" },
		{ "Inflate.Name", "EDynamicMeshSculptBrushType::Inflate" },
		{ "Inflate.ToolTip", "Displace vertices along their vertex normals" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EDynamicMeshSculptBrushType::LastValue" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "Move.Comment", "/** Move vertices parallel to the view plane  */" },
		{ "Move.DisplayName", "Move" },
		{ "Move.Name", "EDynamicMeshSculptBrushType::Move" },
		{ "Move.ToolTip", "Move vertices parallel to the view plane" },
		{ "Offset.Comment", "/** Displace vertices along the average surface normal (Ctrl to invert) */" },
		{ "Offset.DisplayName", "Sculpt (Normal)" },
		{ "Offset.Name", "EDynamicMeshSculptBrushType::Offset" },
		{ "Offset.ToolTip", "Displace vertices along the average surface normal (Ctrl to invert)" },
		{ "Pinch.Comment", "/** Move vertices towards the center of the brush (Ctrl to push away)*/" },
		{ "Pinch.DisplayName", "Pinch" },
		{ "Pinch.Name", "EDynamicMeshSculptBrushType::Pinch" },
		{ "Pinch.ToolTip", "Move vertices towards the center of the brush (Ctrl to push away)" },
		{ "Plane.Comment", "/** Move vertices towards a plane defined by the initial brush position  */" },
		{ "Plane.DisplayName", "Plane (Normal)" },
		{ "Plane.Name", "EDynamicMeshSculptBrushType::Plane" },
		{ "Plane.ToolTip", "Move vertices towards a plane defined by the initial brush position" },
		{ "PlaneViewAligned.Comment", "/** Move vertices towards a view-facing plane defined at the initial brush position */" },
		{ "PlaneViewAligned.DisplayName", "Plane (Viewpoint)" },
		{ "PlaneViewAligned.Name", "EDynamicMeshSculptBrushType::PlaneViewAligned" },
		{ "PlaneViewAligned.ToolTip", "Move vertices towards a view-facing plane defined at the initial brush position" },
		{ "PullKelvin.Comment", "/** Grab Brush, fall-off alters the influence of the grab */" },
		{ "PullKelvin.DisplayName", "Kelvin Grab" },
		{ "PullKelvin.Name", "EDynamicMeshSculptBrushType::PullKelvin" },
		{ "PullKelvin.ToolTip", "Grab Brush, fall-off alters the influence of the grab" },
		{ "PullSharpKelvin.Comment", "/** Grab Brush that may generate cusps, fall-off alters the influence of the grab */" },
		{ "PullSharpKelvin.DisplayName", "Sharp Kelvin Grab" },
		{ "PullSharpKelvin.Name", "EDynamicMeshSculptBrushType::PullSharpKelvin" },
		{ "PullSharpKelvin.ToolTip", "Grab Brush that may generate cusps, fall-off alters the influence of the grab" },
		{ "Resample.Comment", "/** Remesh the brushed region but do not otherwise deform it */" },
		{ "Resample.DisplayName", "Resample" },
		{ "Resample.Name", "EDynamicMeshSculptBrushType::Resample" },
		{ "Resample.ToolTip", "Remesh the brushed region but do not otherwise deform it" },
		{ "ScaleKelvin.Comment", "/** Scale Brush will inflate or pinch radially from the center of the brush */" },
		{ "ScaleKelvin.DisplayName", "Kelvin Scale" },
		{ "ScaleKelvin.Name", "EDynamicMeshSculptBrushType::ScaleKelvin" },
		{ "ScaleKelvin.ToolTip", "Scale Brush will inflate or pinch radially from the center of the brush" },
		{ "SculptMax.Comment", "/** Displaces vertices along the average surface normal to a maximum height based on the brush size (Ctrl to invert) */" },
		{ "SculptMax.DisplayName", "Sculpt Max" },
		{ "SculptMax.Name", "EDynamicMeshSculptBrushType::SculptMax" },
		{ "SculptMax.ToolTip", "Displaces vertices along the average surface normal to a maximum height based on the brush size (Ctrl to invert)" },
		{ "SculptView.Comment", "/** Displace vertices towards the camera viewpoint (Ctrl to invert) */" },
		{ "SculptView.DisplayName", "Sculpt (Viewpoint)" },
		{ "SculptView.Name", "EDynamicMeshSculptBrushType::SculptView" },
		{ "SculptView.ToolTip", "Displace vertices towards the camera viewpoint (Ctrl to invert)" },
		{ "Smooth.Comment", "/** Smooth mesh vertices  */" },
		{ "Smooth.DisplayName", "Smooth" },
		{ "Smooth.Name", "EDynamicMeshSculptBrushType::Smooth" },
		{ "Smooth.ToolTip", "Smooth mesh vertices" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
		{ "TwistKelvin.Comment", "/** Twist Brush moves vertices in the plane perpendicular to the local mesh normal */" },
		{ "TwistKelvin.DisplayName", "Kelvin Twist" },
		{ "TwistKelvin.Name", "EDynamicMeshSculptBrushType::TwistKelvin" },
		{ "TwistKelvin.ToolTip", "Twist Brush moves vertices in the plane perpendicular to the local mesh normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDynamicMeshSculptBrushType",
		"EDynamicMeshSculptBrushType",
		Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType.InnerSingleton;
	}
	void UDynamicMeshSculptToolBuilder::StaticRegisterNativesUDynamicMeshSculptToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshSculptToolBuilder);
	UClass* Z_Construct_UClass_UDynamicMeshSculptToolBuilder_NoRegister()
	{
		return UDynamicMeshSculptToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshSculptToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::ClassParams = {
		&UDynamicMeshSculptToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshSculptToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshSculptToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshSculptToolBuilder.OuterSingleton, Z_Construct_UClass_UDynamicMeshSculptToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshSculptToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicMeshSculptToolBuilder>()
	{
		return UDynamicMeshSculptToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshSculptToolBuilder);
	UDynamicMeshSculptToolBuilder::~UDynamicMeshSculptToolBuilder() {}
	void UDynamicMeshBrushProperties::StaticRegisterNativesUDynamicMeshBrushProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshBrushProperties);
	UClass* Z_Construct_UClass_UDynamicMeshBrushProperties_NoRegister()
	{
		return UDynamicMeshBrushProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshBrushProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[];
#endif
		static void NewProp_bHitBackFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushSize_MetaData[] = {
		{ "Category", "Brush" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushProperties, BrushSize), Z_Construct_UScriptStruct_FBrushToolRadius, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushSize_MetaData)) }; // 934615550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushFalloffAmount_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of falloff to apply (0.0 - 1.0) */" },
		{ "DisplayName", "Falloff" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Amount of falloff to apply (0.0 - 1.0)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushFalloffAmount = { "BrushFalloffAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushProperties, BrushFalloffAmount), METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushFalloffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushFalloffAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Brush" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** Depth of Brush into surface along view ray or surface normal, depending on the Active Brush Type */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Depth of Brush into surface along view ray or surface normal, depending on the Active Brush Type" },
		{ "UIMax", "0.5" },
		{ "UIMin", "-0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushProperties, Depth), METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Allow the Brush to hit the back-side of the mesh */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Allow the Brush to hit the back-side of the mesh" },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
	{
		((UDynamicMeshBrushProperties*)Obj)->bHitBackFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshBrushProperties), &Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_BrushFalloffAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::NewProp_bHitBackFaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshBrushProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::ClassParams = {
		&UDynamicMeshBrushProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshBrushProperties()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshBrushProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshBrushProperties.OuterSingleton, Z_Construct_UClass_UDynamicMeshBrushProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshBrushProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicMeshBrushProperties>()
	{
		return UDynamicMeshBrushProperties::StaticClass();
	}
	UDynamicMeshBrushProperties::UDynamicMeshBrushProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshBrushProperties);
	UDynamicMeshBrushProperties::~UDynamicMeshBrushProperties() {}
	void UDynamicMeshBrushSculptProperties::StaticRegisterNativesUDynamicMeshBrushSculptProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshBrushSculptProperties);
	UClass* Z_Construct_UClass_UDynamicMeshBrushSculptProperties_NoRegister()
	{
		return UDynamicMeshBrushSculptProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRemeshingEnabled_MetaData[];
#endif
		static void NewProp_bIsRemeshingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRemeshingEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryBrushType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBrushType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryBrushType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBrushSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrimaryBrushSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveUVFlow_MetaData[];
#endif
		static void NewProp_bPreserveUVFlow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveUVFlow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeTarget_MetaData[];
#endif
		static void NewProp_bFreezeTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothBrushSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothBrushSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetailPreservingSmooth_MetaData[];
#endif
		static void NewProp_bDetailPreservingSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetailPreservingSmooth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled_MetaData[] = {
		{ "Comment", "/* This is a dupe of the bool in the tool class.  I needed it here so it could be checked as an EditCondition */" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "This is a dupe of the bool in the tool class.  I needed it here so it could be checked as an EditCondition" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled_SetBit(void* Obj)
	{
		((UDynamicMeshBrushSculptProperties*)Obj)->bIsRemeshingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled = { "bIsRemeshingEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshBrushSculptProperties), &Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Primary Brush Mode */" },
		{ "DisplayName", "Brush Type" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Primary Brush Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType = { "PrimaryBrushType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushSculptProperties, PrimaryBrushType), Z_Construct_UEnum_MeshModelingToolsExp_EDynamicMeshSculptBrushType, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType_MetaData)) }; // 522874544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushSpeed_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of the Primary Brush */" },
		{ "DisplayName", "Strength" },
		{ "EditCondition", "PrimaryBrushType != EDynamicMeshSculptBrushType::Pull" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Strength of the Primary Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushSpeed = { "PrimaryBrushSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushSculptProperties, PrimaryBrushSpeed), METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases. */" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "If true, try to preserve the shape of the UV/3D mapping. This will limit Smoothing and Remeshing in some cases." },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow_SetBit(void* Obj)
	{
		((UDynamicMeshBrushSculptProperties*)Obj)->bPreserveUVFlow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow = { "bPreserveUVFlow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshBrushSculptProperties), &Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes */" },
		{ "EditCondition", "PrimaryBrushType == EDynamicMeshSculptBrushType::Sculpt || PrimaryBrushType == EDynamicMeshSculptBrushType::SculptMax || PrimaryBrushType == EDynamicMeshSculptBrushType::SculptView || PrimaryBrushType == EDynamicMeshSculptBrushType::Pinch || PrimaryBrushType == EDynamicMeshSculptBrushType::Resample" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes" },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget_SetBit(void* Obj)
	{
		((UDynamicMeshBrushSculptProperties*)Obj)->bFreezeTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget = { "bFreezeTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshBrushSculptProperties), &Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_SmoothBrushSpeed_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of Shift-to-Smooth Brushing and Smoothing Brush */" },
		{ "DisplayName", "Smoothing Strength" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Strength of Shift-to-Smooth Brushing and Smoothing Brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_SmoothBrushSpeed = { "SmoothBrushSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshBrushSculptProperties, SmoothBrushSpeed), METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_SmoothBrushSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_SmoothBrushSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** If enabled, Remeshing is limited during Smoothing to avoid wiping out higher-density triangle areas */" },
		{ "DisplayName", "Preserve Tri Density" },
		{ "EditCondition", "bIsRemeshingEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "If enabled, Remeshing is limited during Smoothing to avoid wiping out higher-density triangle areas" },
	};
#endif
	void Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth_SetBit(void* Obj)
	{
		((UDynamicMeshBrushSculptProperties*)Obj)->bDetailPreservingSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth = { "bDetailPreservingSmooth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMeshBrushSculptProperties), &Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bIsRemeshingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_PrimaryBrushSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bPreserveUVFlow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bFreezeTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_SmoothBrushSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::NewProp_bDetailPreservingSmooth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshBrushSculptProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::ClassParams = {
		&UDynamicMeshBrushSculptProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshBrushSculptProperties()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.OuterSingleton, Z_Construct_UClass_UDynamicMeshBrushSculptProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicMeshBrushSculptProperties>()
	{
		return UDynamicMeshBrushSculptProperties::StaticClass();
	}
	UDynamicMeshBrushSculptProperties::UDynamicMeshBrushSculptProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshBrushSculptProperties);
	UDynamicMeshBrushSculptProperties::~UDynamicMeshBrushSculptProperties() {}
	DEFINE_FUNCTION(UDynamicSculptToolActions::execDiscardAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DiscardAttributes();
		P_NATIVE_END;
	}
	void UDynamicSculptToolActions::StaticRegisterNativesUDynamicSculptToolActions()
	{
		UClass* Class = UDynamicSculptToolActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DiscardAttributes", &UDynamicSculptToolActions::execDiscardAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "MeshEdits" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicSculptToolActions, nullptr, "DiscardAttributes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicSculptToolActions);
	UClass* Z_Construct_UClass_UDynamicSculptToolActions_NoRegister()
	{
		return UDynamicSculptToolActions::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicSculptToolActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicSculptToolActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicSculptToolActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicSculptToolActions_DiscardAttributes, "DiscardAttributes" }, // 3059724930
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicSculptToolActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicSculptToolActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicSculptToolActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicSculptToolActions_Statics::ClassParams = {
		&UDynamicSculptToolActions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicSculptToolActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicSculptToolActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicSculptToolActions()
	{
		if (!Z_Registration_Info_UClass_UDynamicSculptToolActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicSculptToolActions.OuterSingleton, Z_Construct_UClass_UDynamicSculptToolActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicSculptToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicSculptToolActions>()
	{
		return UDynamicSculptToolActions::StaticClass();
	}
	UDynamicSculptToolActions::UDynamicSculptToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicSculptToolActions);
	UDynamicSculptToolActions::~UDynamicSculptToolActions() {}
	void UBrushRemeshProperties::StaticRegisterNativesUBrushRemeshProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushRemeshProperties);
	UClass* Z_Construct_UClass_UBrushRemeshProperties_NoRegister()
	{
		return UBrushRemeshProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBrushRemeshProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRemeshing_MetaData[];
#endif
		static void NewProp_bEnableRemeshing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRemeshing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriangleSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TriangleSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreserveDetail_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PreserveDetail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Iterations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushRemeshProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemeshProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushRemeshProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Toggle remeshing on/off */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Toggle remeshing on/off" },
	};
#endif
	void Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing_SetBit(void* Obj)
	{
		((UBrushRemeshProperties*)Obj)->bEnableRemeshing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing = { "bEnableRemeshing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBrushRemeshProperties), &Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_TriangleSize_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "5" },
		{ "ClampMin", "-5" },
		{ "Comment", "/** Desired size of triangles after Remeshing, relative to average initial triangle size. Larger value results in larger triangles. */" },
		{ "DisplayName", "Relative Tri Size" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Desired size of triangles after Remeshing, relative to average initial triangle size. Larger value results in larger triangles." },
		{ "UIMax", "5" },
		{ "UIMin", "-5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_TriangleSize = { "TriangleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushRemeshProperties, TriangleSize), METADATA_PARAMS(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_TriangleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_TriangleSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_PreserveDetail_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Control the amount of simplification during sculpting. Higher values will avoid wiping out fine details on the mesh. */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Control the amount of simplification during sculpting. Higher values will avoid wiping out fine details on the mesh." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_PreserveDetail = { "PreserveDetail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushRemeshProperties, PreserveDetail), METADATA_PARAMS(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_PreserveDetail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_PreserveDetail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBrushRemeshProperties, Iterations), METADATA_PARAMS(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_Iterations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushRemeshProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_bEnableRemeshing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_TriangleSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_PreserveDetail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushRemeshProperties_Statics::NewProp_Iterations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushRemeshProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushRemeshProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushRemeshProperties_Statics::ClassParams = {
		&UBrushRemeshProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBrushRemeshProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBrushRemeshProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushRemeshProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushRemeshProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushRemeshProperties()
	{
		if (!Z_Registration_Info_UClass_UBrushRemeshProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushRemeshProperties.OuterSingleton, Z_Construct_UClass_UBrushRemeshProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushRemeshProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBrushRemeshProperties>()
	{
		return UBrushRemeshProperties::StaticClass();
	}
	UBrushRemeshProperties::UBrushRemeshProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushRemeshProperties);
	UBrushRemeshProperties::~UBrushRemeshProperties() {}
	void UFixedPlaneBrushProperties::StaticRegisterNativesUFixedPlaneBrushProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFixedPlaneBrushProperties);
	UClass* Z_Construct_UClass_UFixedPlaneBrushProperties_NoRegister()
	{
		return UFixedPlaneBrushProperties::StaticClass();
	}
	struct Z_Construct_UClass_UFixedPlaneBrushProperties_Statics
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
	UObject* (*const Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled_SetBit(void* Obj)
	{
		((UFixedPlaneBrushProperties*)Obj)->bPropertySetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled = { "bPropertySetEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFixedPlaneBrushProperties), &Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo_MetaData[] = {
		{ "Category", "TargetPlane" },
		{ "Comment", "/** Toggle whether Work Plane Positioning Gizmo is visible */" },
		{ "EditCondition", "bPropertySetEnabled == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Toggle whether Work Plane Positioning Gizmo is visible" },
	};
#endif
	void Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo_SetBit(void* Obj)
	{
		((UFixedPlaneBrushProperties*)Obj)->bShowGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo = { "bShowGizmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFixedPlaneBrushProperties), &Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "TargetPlane" },
		{ "EditCondition", "bPropertySetEnabled == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFixedPlaneBrushProperties, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "TargetPlane" },
		{ "EditCondition", "bPropertySetEnabled == true" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFixedPlaneBrushProperties, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bPropertySetEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_bShowGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::NewProp_Rotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixedPlaneBrushProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::ClassParams = {
		&UFixedPlaneBrushProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixedPlaneBrushProperties()
	{
		if (!Z_Registration_Info_UClass_UFixedPlaneBrushProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFixedPlaneBrushProperties.OuterSingleton, Z_Construct_UClass_UFixedPlaneBrushProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFixedPlaneBrushProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UFixedPlaneBrushProperties>()
	{
		return UFixedPlaneBrushProperties::StaticClass();
	}
	UFixedPlaneBrushProperties::UFixedPlaneBrushProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixedPlaneBrushProperties);
	UFixedPlaneBrushProperties::~UFixedPlaneBrushProperties() {}
	void UDynamicMeshSculptTool::StaticRegisterNativesUDynamicMeshSculptTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshSculptTool);
	UClass* Z_Construct_UClass_UDynamicMeshSculptTool_NoRegister()
	{
		return UDynamicMeshSculptTool::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshSculptTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SculptProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SculptProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SculptMaxBrushProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SculptMaxBrushProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KelvinBrushProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KelvinBrushProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemeshProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SculptToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SculptToolActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushIndicatorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushIndicatorMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushIndicatorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushIndicatorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveOverrideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveOverrideMaterial;
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
	UObject* (*const Z_Construct_UClass_UDynamicMeshSculptTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Dynamic Mesh Sculpt Tool Class\n */" },
		{ "IncludePath", "DynamicMeshSculptTool.h" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Dynamic Mesh Sculpt Tool Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushProperties_MetaData[] = {
		{ "Comment", "/** Properties that control brush size/etc*/" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Properties that control brush size/etc" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushProperties = { "BrushProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, BrushProperties), Z_Construct_UClass_UDynamicMeshBrushProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptProperties_MetaData[] = {
		{ "Comment", "/** Properties that control sculpting*/" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Properties that control sculpting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptProperties = { "SculptProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, SculptProperties), Z_Construct_UClass_UDynamicMeshBrushSculptProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptMaxBrushProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptMaxBrushProperties = { "SculptMaxBrushProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, SculptMaxBrushProperties), Z_Construct_UClass_USculptMaxBrushProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptMaxBrushProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptMaxBrushProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_KelvinBrushProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_KelvinBrushProperties = { "KelvinBrushProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, KelvinBrushProperties), Z_Construct_UClass_UKelvinBrushProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_KelvinBrushProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_KelvinBrushProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_RemeshProperties_MetaData[] = {
		{ "Comment", "/** Properties that control dynamic remeshing */" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "Properties that control dynamic remeshing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_RemeshProperties = { "RemeshProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, RemeshProperties), Z_Construct_UClass_UBrushRemeshProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_RemeshProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_RemeshProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_GizmoProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_GizmoProperties = { "GizmoProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, GizmoProperties), Z_Construct_UClass_UFixedPlaneBrushProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_GizmoProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_GizmoProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ViewProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ViewProperties = { "ViewProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, ViewProperties), Z_Construct_UClass_UMeshEditingViewProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ViewProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ViewProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptToolActions = { "SculptToolActions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, SculptToolActions), Z_Construct_UClass_UDynamicSculptToolActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptToolActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicator = { "BrushIndicator", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, BrushIndicator), Z_Construct_UClass_UBrushStampIndicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMaterial = { "BrushIndicatorMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, BrushIndicatorMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMesh = { "BrushIndicatorMesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, BrushIndicatorMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, DynamicMeshComponent), Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_DynamicMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ActiveOverrideMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ActiveOverrideMaterial = { "ActiveOverrideMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, ActiveOverrideMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ActiveOverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ActiveOverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformGizmo_MetaData[] = {
		{ "Comment", "// plane gizmo\n" },
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
		{ "ToolTip", "plane gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformGizmo = { "PlaneTransformGizmo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, PlaneTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicMeshSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformProxy = { "PlaneTransformProxy", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshSculptTool, PlaneTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshSculptTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptMaxBrushProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_KelvinBrushProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_RemeshProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_GizmoProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ViewProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_SculptToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_BrushIndicatorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_DynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_ActiveOverrideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshSculptTool_Statics::NewProp_PlaneTransformProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshSculptTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshSculptTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshSculptTool_Statics::ClassParams = {
		&UDynamicMeshSculptTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDynamicMeshSculptTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshSculptTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshSculptTool()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshSculptTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshSculptTool.OuterSingleton, Z_Construct_UClass_UDynamicMeshSculptTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshSculptTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDynamicMeshSculptTool>()
	{
		return UDynamicMeshSculptTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshSculptTool);
	UDynamicMeshSculptTool::~UDynamicMeshSculptTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics::EnumInfo[] = {
		{ EDynamicMeshSculptBrushType_StaticEnum, TEXT("EDynamicMeshSculptBrushType"), &Z_Registration_Info_UEnum_EDynamicMeshSculptBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 522874544U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshSculptToolBuilder, UDynamicMeshSculptToolBuilder::StaticClass, TEXT("UDynamicMeshSculptToolBuilder"), &Z_Registration_Info_UClass_UDynamicMeshSculptToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshSculptToolBuilder), 2297560954U) },
		{ Z_Construct_UClass_UDynamicMeshBrushProperties, UDynamicMeshBrushProperties::StaticClass, TEXT("UDynamicMeshBrushProperties"), &Z_Registration_Info_UClass_UDynamicMeshBrushProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshBrushProperties), 2504635829U) },
		{ Z_Construct_UClass_UDynamicMeshBrushSculptProperties, UDynamicMeshBrushSculptProperties::StaticClass, TEXT("UDynamicMeshBrushSculptProperties"), &Z_Registration_Info_UClass_UDynamicMeshBrushSculptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshBrushSculptProperties), 747921094U) },
		{ Z_Construct_UClass_UDynamicSculptToolActions, UDynamicSculptToolActions::StaticClass, TEXT("UDynamicSculptToolActions"), &Z_Registration_Info_UClass_UDynamicSculptToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicSculptToolActions), 4081051833U) },
		{ Z_Construct_UClass_UBrushRemeshProperties, UBrushRemeshProperties::StaticClass, TEXT("UBrushRemeshProperties"), &Z_Registration_Info_UClass_UBrushRemeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushRemeshProperties), 3556487778U) },
		{ Z_Construct_UClass_UFixedPlaneBrushProperties, UFixedPlaneBrushProperties::StaticClass, TEXT("UFixedPlaneBrushProperties"), &Z_Registration_Info_UClass_UFixedPlaneBrushProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFixedPlaneBrushProperties), 2686425731U) },
		{ Z_Construct_UClass_UDynamicMeshSculptTool, UDynamicMeshSculptTool::StaticClass, TEXT("UDynamicMeshSculptTool"), &Z_Registration_Info_UClass_UDynamicMeshSculptTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshSculptTool), 111623062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_3088557548(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DynamicMeshSculptTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
