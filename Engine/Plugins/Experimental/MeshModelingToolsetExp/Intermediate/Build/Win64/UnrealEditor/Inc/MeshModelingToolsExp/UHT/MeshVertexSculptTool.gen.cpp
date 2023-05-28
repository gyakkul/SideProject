// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshVertexSculptTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexSculptTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptToolBase();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSymmetryProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSymmetryProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushAlphaProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushAlphaProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushSculptProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UVertexBrushSculptProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMeshVertexSculptToolBuilder::StaticRegisterNativesUMeshVertexSculptToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexSculptToolBuilder);
	UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder_NoRegister()
	{
		return UMeshVertexSculptToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexSculptToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::ClassParams = {
		&UMeshVertexSculptToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshVertexSculptToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshVertexSculptToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexSculptToolBuilder>()
	{
		return UMeshVertexSculptToolBuilder::StaticClass();
	}
	UMeshVertexSculptToolBuilder::UMeshVertexSculptToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexSculptToolBuilder);
	UMeshVertexSculptToolBuilder::~UMeshVertexSculptToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexSculptBrushType;
	static UEnum* EMeshVertexSculptBrushType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexSculptBrushType"));
		}
		return Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexSculptBrushType>()
	{
		return EMeshVertexSculptBrushType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enumerators[] = {
		{ "EMeshVertexSculptBrushType::Move", (int64)EMeshVertexSculptBrushType::Move },
		{ "EMeshVertexSculptBrushType::PullKelvin", (int64)EMeshVertexSculptBrushType::PullKelvin },
		{ "EMeshVertexSculptBrushType::PullSharpKelvin", (int64)EMeshVertexSculptBrushType::PullSharpKelvin },
		{ "EMeshVertexSculptBrushType::Smooth", (int64)EMeshVertexSculptBrushType::Smooth },
		{ "EMeshVertexSculptBrushType::SmoothFill", (int64)EMeshVertexSculptBrushType::SmoothFill },
		{ "EMeshVertexSculptBrushType::Offset", (int64)EMeshVertexSculptBrushType::Offset },
		{ "EMeshVertexSculptBrushType::SculptView", (int64)EMeshVertexSculptBrushType::SculptView },
		{ "EMeshVertexSculptBrushType::SculptMax", (int64)EMeshVertexSculptBrushType::SculptMax },
		{ "EMeshVertexSculptBrushType::Inflate", (int64)EMeshVertexSculptBrushType::Inflate },
		{ "EMeshVertexSculptBrushType::ScaleKelvin", (int64)EMeshVertexSculptBrushType::ScaleKelvin },
		{ "EMeshVertexSculptBrushType::Pinch", (int64)EMeshVertexSculptBrushType::Pinch },
		{ "EMeshVertexSculptBrushType::TwistKelvin", (int64)EMeshVertexSculptBrushType::TwistKelvin },
		{ "EMeshVertexSculptBrushType::Flatten", (int64)EMeshVertexSculptBrushType::Flatten },
		{ "EMeshVertexSculptBrushType::Plane", (int64)EMeshVertexSculptBrushType::Plane },
		{ "EMeshVertexSculptBrushType::PlaneViewAligned", (int64)EMeshVertexSculptBrushType::PlaneViewAligned },
		{ "EMeshVertexSculptBrushType::FixedPlane", (int64)EMeshVertexSculptBrushType::FixedPlane },
		{ "EMeshVertexSculptBrushType::LastValue", (int64)EMeshVertexSculptBrushType::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "FixedPlane.Comment", "/** Move vertices towards a fixed plane in world space, positioned with a 3D gizmo */" },
		{ "FixedPlane.DisplayName", "FixedPlane" },
		{ "FixedPlane.Name", "EMeshVertexSculptBrushType::FixedPlane" },
		{ "FixedPlane.ToolTip", "Move vertices towards a fixed plane in world space, positioned with a 3D gizmo" },
		{ "Flatten.Comment", "/** Move vertices towards the average plane of the brush stamp region */" },
		{ "Flatten.DisplayName", "Flatten" },
		{ "Flatten.Name", "EMeshVertexSculptBrushType::Flatten" },
		{ "Flatten.ToolTip", "Move vertices towards the average plane of the brush stamp region" },
		{ "Inflate.Comment", "/** Displace vertices along their vertex normals */" },
		{ "Inflate.DisplayName", "Inflate" },
		{ "Inflate.Name", "EMeshVertexSculptBrushType::Inflate" },
		{ "Inflate.ToolTip", "Displace vertices along their vertex normals" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshVertexSculptBrushType::LastValue" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "Move.Comment", "/** Move vertices parallel to the view plane  */" },
		{ "Move.DisplayName", "Move" },
		{ "Move.Name", "EMeshVertexSculptBrushType::Move" },
		{ "Move.ToolTip", "Move vertices parallel to the view plane" },
		{ "Offset.Comment", "/** Displace vertices along the average surface normal (Ctrl to invert) */" },
		{ "Offset.DisplayName", "Sculpt (Normal)" },
		{ "Offset.Name", "EMeshVertexSculptBrushType::Offset" },
		{ "Offset.ToolTip", "Displace vertices along the average surface normal (Ctrl to invert)" },
		{ "Pinch.Comment", "/** Move vertices towards the center of the brush (Ctrl to push away)*/" },
		{ "Pinch.DisplayName", "Pinch" },
		{ "Pinch.Name", "EMeshVertexSculptBrushType::Pinch" },
		{ "Pinch.ToolTip", "Move vertices towards the center of the brush (Ctrl to push away)" },
		{ "Plane.Comment", "/** Move vertices towards a plane defined by the initial brush position  */" },
		{ "Plane.DisplayName", "Plane (Normal)" },
		{ "Plane.Name", "EMeshVertexSculptBrushType::Plane" },
		{ "Plane.ToolTip", "Move vertices towards a plane defined by the initial brush position" },
		{ "PlaneViewAligned.Comment", "/** Move vertices towards a view-facing plane defined at the initial brush position */" },
		{ "PlaneViewAligned.DisplayName", "Plane (Viewpoint)" },
		{ "PlaneViewAligned.Name", "EMeshVertexSculptBrushType::PlaneViewAligned" },
		{ "PlaneViewAligned.ToolTip", "Move vertices towards a view-facing plane defined at the initial brush position" },
		{ "PullKelvin.Comment", "/** Grab Brush, fall-off alters the influence of the grab */" },
		{ "PullKelvin.DisplayName", "Kelvin Grab" },
		{ "PullKelvin.Name", "EMeshVertexSculptBrushType::PullKelvin" },
		{ "PullKelvin.ToolTip", "Grab Brush, fall-off alters the influence of the grab" },
		{ "PullSharpKelvin.Comment", "/** Grab Brush that may generate cusps, fall-off alters the influence of the grab */" },
		{ "PullSharpKelvin.DisplayName", "Sharp Kelvin Grab" },
		{ "PullSharpKelvin.Name", "EMeshVertexSculptBrushType::PullSharpKelvin" },
		{ "PullSharpKelvin.ToolTip", "Grab Brush that may generate cusps, fall-off alters the influence of the grab" },
		{ "ScaleKelvin.Comment", "/** Scale Brush will inflate or pinch radially from the center of the brush */" },
		{ "ScaleKelvin.DisplayName", "Kelvin Scale" },
		{ "ScaleKelvin.Name", "EMeshVertexSculptBrushType::ScaleKelvin" },
		{ "ScaleKelvin.ToolTip", "Scale Brush will inflate or pinch radially from the center of the brush" },
		{ "SculptMax.Comment", "/** Displaces vertices along the average surface normal to a maximum height based on the brush size (Ctrl to invert) */" },
		{ "SculptMax.DisplayName", "Sculpt Max" },
		{ "SculptMax.Name", "EMeshVertexSculptBrushType::SculptMax" },
		{ "SculptMax.ToolTip", "Displaces vertices along the average surface normal to a maximum height based on the brush size (Ctrl to invert)" },
		{ "SculptView.Comment", "/** Displace vertices towards the camera viewpoint (Ctrl to invert) */" },
		{ "SculptView.DisplayName", "Sculpt (Viewpoint)" },
		{ "SculptView.Name", "EMeshVertexSculptBrushType::SculptView" },
		{ "SculptView.ToolTip", "Displace vertices towards the camera viewpoint (Ctrl to invert)" },
		{ "Smooth.Comment", "/** Smooth mesh vertices  */" },
		{ "Smooth.DisplayName", "Smooth" },
		{ "Smooth.Name", "EMeshVertexSculptBrushType::Smooth" },
		{ "Smooth.ToolTip", "Smooth mesh vertices" },
		{ "SmoothFill.Comment", "/** Smooth mesh vertices but only in direction of normal (Ctrl to invert) */" },
		{ "SmoothFill.DisplayName", "SmoothFill" },
		{ "SmoothFill.Name", "EMeshVertexSculptBrushType::SmoothFill" },
		{ "SmoothFill.ToolTip", "Smooth mesh vertices but only in direction of normal (Ctrl to invert)" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
		{ "TwistKelvin.Comment", "/** Twist Brush moves vertices in the plane perpendicular to the local mesh normal */" },
		{ "TwistKelvin.DisplayName", "Kelvin Twist" },
		{ "TwistKelvin.Name", "EMeshVertexSculptBrushType::TwistKelvin" },
		{ "TwistKelvin.ToolTip", "Twist Brush moves vertices in the plane perpendicular to the local mesh normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshVertexSculptBrushType",
		"EMeshVertexSculptBrushType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshVertexSculptBrushType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType;
	static UEnum* EMeshVertexSculptBrushFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshVertexSculptBrushFilterType"));
		}
		return Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshVertexSculptBrushFilterType>()
	{
		return EMeshVertexSculptBrushFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enumerators[] = {
		{ "EMeshVertexSculptBrushFilterType::None", (int64)EMeshVertexSculptBrushFilterType::None },
		{ "EMeshVertexSculptBrushFilterType::Component", (int64)EMeshVertexSculptBrushFilterType::Component },
		{ "EMeshVertexSculptBrushFilterType::PolyGroup", (int64)EMeshVertexSculptBrushFilterType::PolyGroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Brush Triangle Filter Type */" },
		{ "Component.Comment", "/** Only apply brush to triangles in the same connected mesh component/island */" },
		{ "Component.Name", "EMeshVertexSculptBrushFilterType::Component" },
		{ "Component.ToolTip", "Only apply brush to triangles in the same connected mesh component/island" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "None.Comment", "/** Do not filter brush area */" },
		{ "None.Name", "EMeshVertexSculptBrushFilterType::None" },
		{ "None.ToolTip", "Do not filter brush area" },
		{ "PolyGroup.Comment", "/** Only apply brush to triangles with the same PolyGroup */" },
		{ "PolyGroup.Name", "EMeshVertexSculptBrushFilterType::PolyGroup" },
		{ "PolyGroup.ToolTip", "Only apply brush to triangles with the same PolyGroup" },
		{ "ToolTip", "Brush Triangle Filter Type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshVertexSculptBrushFilterType",
		"EMeshVertexSculptBrushFilterType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType()
	{
		if (!Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType.InnerSingleton;
	}
	void UVertexBrushSculptProperties::StaticRegisterNativesUVertexBrushSculptProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexBrushSculptProperties);
	UClass* Z_Construct_UClass_UVertexBrushSculptProperties_NoRegister()
	{
		return UVertexBrushSculptProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVertexBrushSculptProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryBrushType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBrushType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryBrushType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryFalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryFalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryFalloffType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BrushFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BrushFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFreezeTarget_MetaData[];
#endif
		static void NewProp_bFreezeTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreezeTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Tool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexBrushSculptProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushSculptProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Primary Brush Mode */" },
		{ "DisplayName", "Brush" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Primary Brush Mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType = { "PrimaryBrushType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushSculptProperties, PrimaryBrushType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushType, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_MetaData)) }; // 3200225085
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Primary Brush Falloff Type, multiplied by Alpha Mask where applicable */" },
		{ "DisplayName", "Falloff" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Primary Brush Falloff Type, multiplied by Alpha Mask where applicable" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType = { "PrimaryFalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushSculptProperties, PrimaryFalloffType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshSculptFalloffType, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_MetaData)) }; // 1837106073
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** Filter applied to Stamp Region Triangles, based on first Stroke Stamp */" },
		{ "DisplayName", "Region" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Filter applied to Stamp Region Triangles, based on first Stroke Stamp" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter = { "BrushFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushSculptProperties, BrushFilter), Z_Construct_UEnum_MeshModelingToolsExp_EMeshVertexSculptBrushFilterType, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_MetaData)) }; // 3285982865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_MetaData[] = {
		{ "Category", "Sculpting" },
		{ "Comment", "/** When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes */" },
		{ "EditCondition", "PrimaryBrushType == EMeshVertexSculptBrushType::Offset || PrimaryBrushType == EMeshVertexSculptBrushType::SculptMax || PrimaryBrushType == EMeshVertexSculptBrushType::SculptView || PrimaryBrushType == EMeshVertexSculptBrushType::Pinch || PrimaryBrushType == EMeshVertexSculptBrushType::Resample" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "When Freeze Target is toggled on, the Brush Target Surface will be Frozen in its current state, until toggled off. Brush strokes will be applied relative to the Target Surface, for applicable Brushes" },
	};
#endif
	void Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_SetBit(void* Obj)
	{
		((UVertexBrushSculptProperties*)Obj)->bFreezeTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget = { "bFreezeTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexBrushSculptProperties), &Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool_MetaData[] = {
		{ "Comment", "// parent ref required for details customization\n" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "parent ref required for details customization" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushSculptProperties, Tool), Z_Construct_UClass_UMeshVertexSculptTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryBrushType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_PrimaryFalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_BrushFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_bFreezeTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushSculptProperties_Statics::NewProp_Tool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexBrushSculptProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexBrushSculptProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexBrushSculptProperties_Statics::ClassParams = {
		&UVertexBrushSculptProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushSculptProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexBrushSculptProperties()
	{
		if (!Z_Registration_Info_UClass_UVertexBrushSculptProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexBrushSculptProperties.OuterSingleton, Z_Construct_UClass_UVertexBrushSculptProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexBrushSculptProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexBrushSculptProperties>()
	{
		return UVertexBrushSculptProperties::StaticClass();
	}
	UVertexBrushSculptProperties::UVertexBrushSculptProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexBrushSculptProperties);
	UVertexBrushSculptProperties::~UVertexBrushSculptProperties() {}
	void UVertexBrushAlphaProperties::StaticRegisterNativesUVertexBrushAlphaProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexBrushAlphaProperties);
	UClass* Z_Construct_UClass_UVertexBrushAlphaProperties_NoRegister()
	{
		return UVertexBrushAlphaProperties::StaticClass();
	}
	struct Z_Construct_UClass_UVertexBrushAlphaProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomize_MetaData[];
#endif
		static void NewProp_bRandomize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Properties for a brush alpha mask\n */" },
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Tool Properties for a brush alpha mask" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** Alpha mask applied to brush stamp. Red channel is used. */" },
		{ "DisplayName", "Alpha Mask" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Alpha mask applied to brush stamp. Red channel is used." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushAlphaProperties, Alpha), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "-360.0" },
		{ "Comment", "/** Alpha is rotated by this angle, inside the brush stamp frame (vertically aligned) */" },
		{ "DisplayName", "Angle" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Alpha is rotated by this angle, inside the brush stamp frame (vertically aligned)" },
		{ "UIMax", "180.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushAlphaProperties, RotationAngle), METADATA_PARAMS(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** If true, a random angle in +/- RandomRange is added to Rotation angle for each stamp */" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "If true, a random angle in +/- RandomRange is added to Rotation angle for each stamp" },
	};
#endif
	void Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_SetBit(void* Obj)
	{
		((UVertexBrushAlphaProperties*)Obj)->bRandomize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize = { "bRandomize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVertexBrushAlphaProperties), &Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** Bounds of random generation (positive and negative) for randomized stamps */" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Bounds of random generation (positive and negative) for randomized stamps" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange = { "RandomRange", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexBrushAlphaProperties, RandomRange), METADATA_PARAMS(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_bRandomize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::NewProp_RandomRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexBrushAlphaProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::ClassParams = {
		&UVertexBrushAlphaProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexBrushAlphaProperties()
	{
		if (!Z_Registration_Info_UClass_UVertexBrushAlphaProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexBrushAlphaProperties.OuterSingleton, Z_Construct_UClass_UVertexBrushAlphaProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexBrushAlphaProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UVertexBrushAlphaProperties>()
	{
		return UVertexBrushAlphaProperties::StaticClass();
	}
	UVertexBrushAlphaProperties::UVertexBrushAlphaProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexBrushAlphaProperties);
	UVertexBrushAlphaProperties::~UVertexBrushAlphaProperties() {}
	void UMeshSymmetryProperties::StaticRegisterNativesUMeshSymmetryProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSymmetryProperties);
	UClass* Z_Construct_UClass_UMeshSymmetryProperties_NoRegister()
	{
		return UMeshSymmetryProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSymmetryProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSymmetry_MetaData[];
#endif
		static void NewProp_bEnableSymmetry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSymmetry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSymmetryCanBeEnabled_MetaData[];
#endif
		static void NewProp_bSymmetryCanBeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSymmetryCanBeEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSymmetryProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSymmetryProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_MetaData[] = {
		{ "Category", "Symmetry" },
		{ "Comment", "/** Enable/Disable symmetric sculpting. This option will not be available if symmetry cannot be detected, or a non-symmetric edit has been made */" },
		{ "EditCondition", "bSymmetryCanBeEnabled" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Enable/Disable symmetric sculpting. This option will not be available if symmetry cannot be detected, or a non-symmetric edit has been made" },
	};
#endif
	void Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_SetBit(void* Obj)
	{
		((UMeshSymmetryProperties*)Obj)->bEnableSymmetry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry = { "bEnableSymmetry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSymmetryProperties), &Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_MetaData[] = {
		{ "Comment", "// this flag is set/updated by the Tool to enable/disable the bEnableSymmetry toggle\n" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "this flag is set/updated by the Tool to enable/disable the bEnableSymmetry toggle" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_SetBit(void* Obj)
	{
		((UMeshSymmetryProperties*)Obj)->bSymmetryCanBeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled = { "bSymmetryCanBeEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSymmetryProperties), &Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bEnableSymmetry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSymmetryProperties_Statics::NewProp_bSymmetryCanBeEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSymmetryProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSymmetryProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSymmetryProperties_Statics::ClassParams = {
		&UMeshSymmetryProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSymmetryProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSymmetryProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSymmetryProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshSymmetryProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSymmetryProperties.OuterSingleton, Z_Construct_UClass_UMeshSymmetryProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSymmetryProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshSymmetryProperties>()
	{
		return UMeshSymmetryProperties::StaticClass();
	}
	UMeshSymmetryProperties::UMeshSymmetryProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSymmetryProperties);
	UMeshSymmetryProperties::~UMeshSymmetryProperties() {}
	void UMeshVertexSculptTool::StaticRegisterNativesUMeshVertexSculptTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexSculptTool);
	UClass* Z_Construct_UClass_UMeshVertexSculptTool_NoRegister()
	{
		return UMeshVertexSculptTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshVertexSculptTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SculptProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SculptProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlphaProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SymmetryProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SymmetryProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshVertexSculptTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Vertex Sculpt Tool Class\n */" },
		{ "IncludePath", "MeshVertexSculptTool.h" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Mesh Vertex Sculpt Tool Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties_MetaData[] = {
		{ "Comment", "/** Properties that control sculpting*/" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
		{ "ToolTip", "Properties that control sculpting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties = { "SculptProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexSculptTool, SculptProperties), Z_Construct_UClass_UVertexBrushSculptProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties = { "AlphaProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexSculptTool, AlphaProperties), Z_Construct_UClass_UVertexBrushAlphaProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha = { "BrushAlpha", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexSculptTool, BrushAlpha), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties = { "SymmetryProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexSculptTool, SymmetryProperties), Z_Construct_UClass_UMeshSymmetryProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexSculptTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshVertexSculptTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshVertexSculptTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SculptProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_AlphaProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_BrushAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_SymmetryProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_PreviewMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshVertexSculptTool_Statics::NewProp_DynamicMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshVertexSculptTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshVertexSculptTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexSculptTool_Statics::ClassParams = {
		&UMeshVertexSculptTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshVertexSculptTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexSculptTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshVertexSculptTool()
	{
		if (!Z_Registration_Info_UClass_UMeshVertexSculptTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexSculptTool.OuterSingleton, Z_Construct_UClass_UMeshVertexSculptTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshVertexSculptTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshVertexSculptTool>()
	{
		return UMeshVertexSculptTool::StaticClass();
	}
	UMeshVertexSculptTool::UMeshVertexSculptTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexSculptTool);
	UMeshVertexSculptTool::~UMeshVertexSculptTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::EnumInfo[] = {
		{ EMeshVertexSculptBrushType_StaticEnum, TEXT("EMeshVertexSculptBrushType"), &Z_Registration_Info_UEnum_EMeshVertexSculptBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3200225085U) },
		{ EMeshVertexSculptBrushFilterType_StaticEnum, TEXT("EMeshVertexSculptBrushFilterType"), &Z_Registration_Info_UEnum_EMeshVertexSculptBrushFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3285982865U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshVertexSculptToolBuilder, UMeshVertexSculptToolBuilder::StaticClass, TEXT("UMeshVertexSculptToolBuilder"), &Z_Registration_Info_UClass_UMeshVertexSculptToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexSculptToolBuilder), 1664198066U) },
		{ Z_Construct_UClass_UVertexBrushSculptProperties, UVertexBrushSculptProperties::StaticClass, TEXT("UVertexBrushSculptProperties"), &Z_Registration_Info_UClass_UVertexBrushSculptProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexBrushSculptProperties), 923594251U) },
		{ Z_Construct_UClass_UVertexBrushAlphaProperties, UVertexBrushAlphaProperties::StaticClass, TEXT("UVertexBrushAlphaProperties"), &Z_Registration_Info_UClass_UVertexBrushAlphaProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexBrushAlphaProperties), 2806518396U) },
		{ Z_Construct_UClass_UMeshSymmetryProperties, UMeshSymmetryProperties::StaticClass, TEXT("UMeshSymmetryProperties"), &Z_Registration_Info_UClass_UMeshSymmetryProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSymmetryProperties), 3822766855U) },
		{ Z_Construct_UClass_UMeshVertexSculptTool, UMeshVertexSculptTool::StaticClass, TEXT("UMeshVertexSculptTool"), &Z_Registration_Info_UClass_UMeshVertexSculptTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexSculptTool), 1796351324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_1631234033(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshVertexSculptTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
