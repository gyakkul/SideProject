// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/RevolveProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolveProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties_NoRegister();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode;
	static UEnum* ERevolvePropertiesCapFillMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("ERevolvePropertiesCapFillMode"));
		}
		return Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ERevolvePropertiesCapFillMode>()
	{
		return ERevolvePropertiesCapFillMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::Enumerators[] = {
		{ "ERevolvePropertiesCapFillMode::None", (int64)ERevolvePropertiesCapFillMode::None },
		{ "ERevolvePropertiesCapFillMode::CenterFan", (int64)ERevolvePropertiesCapFillMode::CenterFan },
		{ "ERevolvePropertiesCapFillMode::Delaunay", (int64)ERevolvePropertiesCapFillMode::Delaunay },
		{ "ERevolvePropertiesCapFillMode::EarClipping", (int64)ERevolvePropertiesCapFillMode::EarClipping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::Enum_MetaDataParams[] = {
		{ "CenterFan.Comment", "/** Caps are triangulated by placing a vertex in the center and creating a fan to the boundary. This works well if the path is convex,\n\x09  * but can create invalid geometry if it is concave. */" },
		{ "CenterFan.Name", "ERevolvePropertiesCapFillMode::CenterFan" },
		{ "CenterFan.ToolTip", "Caps are triangulated by placing a vertex in the center and creating a fan to the boundary. This works well if the path is convex,\nbut can create invalid geometry if it is concave." },
		{ "Delaunay.Comment", "/** Caps are triangulated to maximize the minimal angle in the triangles using Delaunay triangulation. */" },
		{ "Delaunay.Name", "ERevolvePropertiesCapFillMode::Delaunay" },
		{ "Delaunay.ToolTip", "Caps are triangulated to maximize the minimal angle in the triangles using Delaunay triangulation." },
		{ "EarClipping.Comment", "/** Caps are triangulated using a standard ear clipping approach. This could result in some very thin triangles. */" },
		{ "EarClipping.Name", "ERevolvePropertiesCapFillMode::EarClipping" },
		{ "EarClipping.ToolTip", "Caps are triangulated using a standard ear clipping approach. This could result in some very thin triangles." },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "None.Comment", "/** No caps will be generated. */" },
		{ "None.Name", "ERevolvePropertiesCapFillMode::None" },
		{ "None.ToolTip", "No caps will be generated." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"ERevolvePropertiesCapFillMode",
		"ERevolvePropertiesCapFillMode",
		Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode()
	{
		if (!Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode;
	static UEnum* ERevolvePropertiesPolygroupMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("ERevolvePropertiesPolygroupMode"));
		}
		return Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ERevolvePropertiesPolygroupMode>()
	{
		return ERevolvePropertiesPolygroupMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::Enumerators[] = {
		{ "ERevolvePropertiesPolygroupMode::PerShape", (int64)ERevolvePropertiesPolygroupMode::PerShape },
		{ "ERevolvePropertiesPolygroupMode::PerFace", (int64)ERevolvePropertiesPolygroupMode::PerFace },
		{ "ERevolvePropertiesPolygroupMode::PerRevolveStep", (int64)ERevolvePropertiesPolygroupMode::PerRevolveStep },
		{ "ERevolvePropertiesPolygroupMode::PerPathSegment", (int64)ERevolvePropertiesPolygroupMode::PerPathSegment },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "PerFace.Comment", "/** One Polygroup for each geometric face */" },
		{ "PerFace.Name", "ERevolvePropertiesPolygroupMode::PerFace" },
		{ "PerFace.ToolTip", "One Polygroup for each geometric face" },
		{ "PerPathSegment.Comment", "/** One PolyGroup along the revolution steps for each path segment */" },
		{ "PerPathSegment.Name", "ERevolvePropertiesPolygroupMode::PerPathSegment" },
		{ "PerPathSegment.ToolTip", "One PolyGroup along the revolution steps for each path segment" },
		{ "PerRevolveStep.Comment", "/** One PolyGroup along the path for each revolution step */" },
		{ "PerRevolveStep.Name", "ERevolvePropertiesPolygroupMode::PerRevolveStep" },
		{ "PerRevolveStep.ToolTip", "One PolyGroup along the path for each revolution step" },
		{ "PerShape.Comment", "/** One Polygroup for the entire shape */" },
		{ "PerShape.Name", "ERevolvePropertiesPolygroupMode::PerShape" },
		{ "PerShape.ToolTip", "One Polygroup for the entire shape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"ERevolvePropertiesPolygroupMode",
		"ERevolvePropertiesPolygroupMode",
		Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode()
	{
		if (!Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit;
	static UEnum* ERevolvePropertiesQuadSplit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("ERevolvePropertiesQuadSplit"));
		}
		return Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ERevolvePropertiesQuadSplit>()
	{
		return ERevolvePropertiesQuadSplit_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::Enumerators[] = {
		{ "ERevolvePropertiesQuadSplit::Uniform", (int64)ERevolvePropertiesQuadSplit::Uniform },
		{ "ERevolvePropertiesQuadSplit::Compact", (int64)ERevolvePropertiesQuadSplit::Compact },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::Enum_MetaDataParams[] = {
		{ "Compact.Comment", "/** Quads will be split into triangles by connecting the shortest diagonal. */" },
		{ "Compact.Name", "ERevolvePropertiesQuadSplit::Compact" },
		{ "Compact.ToolTip", "Quads will be split into triangles by connecting the shortest diagonal." },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "Uniform.Comment", "/** Quads will always be split into triangles the same way regardless of quad shape. */" },
		{ "Uniform.Name", "ERevolvePropertiesQuadSplit::Uniform" },
		{ "Uniform.ToolTip", "Quads will always be split into triangles the same way regardless of quad shape." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"ERevolvePropertiesQuadSplit",
		"ERevolvePropertiesQuadSplit",
		Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit()
	{
		if (!Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit.InnerSingleton;
	}
	void URevolveProperties::StaticRegisterNativesURevolveProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveProperties);
	UClass* Z_Construct_UClass_URevolveProperties_NoRegister()
	{
		return URevolveProperties::StaticClass();
	}
	struct Z_Construct_UClass_URevolveProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevolveDegreesClamped_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RevolveDegreesClamped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevolveDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RevolveDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevolveDegreesOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RevolveDegreesOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepsMaxDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepsMaxDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitSteps_MetaData[];
#endif
		static void NewProp_bExplicitSteps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumExplicitSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumExplicitSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffsetPerDegree_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightOffsetPerDegree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverseRevolutionDirection_MetaData[];
#endif
		static void NewProp_bReverseRevolutionDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseRevolutionDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipMesh_MetaData[];
#endif
		static void NewProp_bFlipMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSharpNormals_MetaData[];
#endif
		static void NewProp_bSharpNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharpNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharpNormalsDegreeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SharpNormalsDegreeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPathAtMidpointOfStep_MetaData[];
#endif
		static void NewProp_bPathAtMidpointOfStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPathAtMidpointOfStep;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PolygroupMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PolygroupMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuadSplitMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadSplitMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QuadSplitMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Common properties for revolving a PolyPath to create a mesh.\n */" },
		{ "IncludePath", "Properties/RevolveProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "Common properties for revolving a PolyPath to create a mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesClamped_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Revolution extent in degrees. Clamped to a maximum of 360 if Height Offset Per Degree is set to 0. */" },
		{ "DisplayName", "Degrees" },
		{ "EditCondition", "HeightOffsetPerDegree == 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "Revolution extent in degrees. Clamped to a maximum of 360 if Height Offset Per Degree is set to 0." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesClamped = { "RevolveDegreesClamped", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, RevolveDegreesClamped), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesClamped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesClamped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegrees_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "360000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Revolution extent in degrees. Clamped to a maximum of 360 if Height Offset Per Degree is set to 0. */" },
		{ "DisplayName", "Degrees" },
		{ "EditCondition", "HeightOffsetPerDegree != 0" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "Revolution extent in degrees. Clamped to a maximum of 360 if Height Offset Per Degree is set to 0." },
		{ "UIMax", "3600" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegrees = { "RevolveDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, RevolveDegrees), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesOffset_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "36000" },
		{ "ClampMin", "-36000" },
		{ "Comment", "/** The angle by which to rotate the path around the axis before beginning the revolve. */" },
		{ "DisplayName", "Degrees Offset" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "The angle by which to rotate the path around the axis before beginning the revolve." },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesOffset = { "RevolveDegreesOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, RevolveDegreesOffset), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_StepsMaxDegrees_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "180" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Implicitly defines the number of steps in the revolution such that each step moves the revolution no more than the given number of degrees. This is only available if Explicit Steps is disabled. */" },
		{ "EditCondition", "!bExplicitSteps" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "Implicitly defines the number of steps in the revolution such that each step moves the revolution no more than the given number of degrees. This is only available if Explicit Steps is disabled." },
		{ "UIMax", "120" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_StepsMaxDegrees = { "StepsMaxDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, StepsMaxDegrees), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_StepsMaxDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_StepsMaxDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** If true, the number of steps can be specified explicitly via Steps. If false, the number of steps is adjusted automatically based on Steps Max Degrees. */" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "If true, the number of steps can be specified explicitly via Steps. If false, the number of steps is adjusted automatically based on Steps Max Degrees." },
	};
#endif
	void Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps_SetBit(void* Obj)
	{
		((URevolveProperties*)Obj)->bExplicitSteps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps = { "bExplicitSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveProperties), &Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_NumExplicitSteps_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of steps in the revolution. This is only available if Explicit Steps is enabled. */" },
		{ "DisplayName", "Steps" },
		{ "EditCondition", "bExplicitSteps" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "Number of steps in the revolution. This is only available if Explicit Steps is enabled." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_NumExplicitSteps = { "NumExplicitSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, NumExplicitSteps), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_NumExplicitSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_NumExplicitSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_HeightOffsetPerDegree_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "-100000" },
		{ "Comment", "/** How far to move each step along the revolution axis per degree. Non-zero values are useful for creating spirals. */" },
		{ "DisplayName", "Height Offset" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "How far to move each step along the revolution axis per degree. Non-zero values are useful for creating spirals." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_HeightOffsetPerDegree = { "HeightOffsetPerDegree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, HeightOffsetPerDegree), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_HeightOffsetPerDegree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_HeightOffsetPerDegree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** By default, revolution is done counterclockwise if looking down the revolution axis. This reverses the revolution direction to clockwise.*/" },
		{ "DisplayName", "Reverse" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "By default, revolution is done counterclockwise if looking down the revolution axis. This reverses the revolution direction to clockwise." },
	};
#endif
	void Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection_SetBit(void* Obj)
	{
		((URevolveProperties*)Obj)->bReverseRevolutionDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection = { "bReverseRevolutionDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveProperties), &Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Flips the mesh inside out. */" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "Flips the mesh inside out." },
	};
#endif
	void Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh_SetBit(void* Obj)
	{
		((URevolveProperties*)Obj)->bFlipMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh = { "bFlipMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveProperties), &Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** If true, normals are not averaged or shared between triangles beyond the Sharp Normals Degree Threshold. */" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "If true, normals are not averaged or shared between triangles beyond the Sharp Normals Degree Threshold." },
	};
#endif
	void Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals_SetBit(void* Obj)
	{
		((URevolveProperties*)Obj)->bSharpNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals = { "bSharpNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveProperties), &Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_SharpNormalsDegreeThreshold_MetaData[] = {
		{ "Category", "Revolve" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The threshold in degrees beyond which normals are not averaged or shared between triangles anymore. This is only available if Sharp Normals is enabled. */" },
		{ "DisplayName", "Sharp Normals Threshold" },
		{ "EditCondition", "bSharpNormals" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "The threshold in degrees beyond which normals are not averaged or shared between triangles anymore. This is only available if Sharp Normals is enabled." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_SharpNormalsDegreeThreshold = { "SharpNormalsDegreeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, SharpNormalsDegreeThreshold), METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_SharpNormalsDegreeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_SharpNormalsDegreeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** If true, the path is placed at the midpoint of each step instead of at the start and/or end of a step. For example, this is useful for creating square columns. */" },
		{ "DisplayName", "Path at Midpoint" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "If true, the path is placed at the midpoint of each step instead of at the start and/or end of a step. For example, this is useful for creating square columns." },
	};
#endif
	void Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep_SetBit(void* Obj)
	{
		((URevolveProperties*)Obj)->bPathAtMidpointOfStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep = { "bPathAtMidpointOfStep", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveProperties), &Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** How PolyGroups are assigned to shape primitives. If caps are generated, they will always be in separate groups. */" },
		{ "DisplayName", "PolyGroup Mode" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "How PolyGroups are assigned to shape primitives. If caps are generated, they will always be in separate groups." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode = { "PolygroupMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, PolygroupMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesPolygroupMode, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode_MetaData)) }; // 1812963645
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** How generated quads are split into triangles. */" },
		{ "ModuleRelativePath", "Public/Properties/RevolveProperties.h" },
		{ "ToolTip", "How generated quads are split into triangles." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode = { "QuadSplitMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveProperties, QuadSplitMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesQuadSplit, METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode_MetaData)) }; // 2591816356
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesClamped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_RevolveDegreesOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_StepsMaxDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_bExplicitSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_NumExplicitSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_HeightOffsetPerDegree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_bReverseRevolutionDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_bFlipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_bSharpNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_SharpNormalsDegreeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_bPathAtMidpointOfStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_PolygroupMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveProperties_Statics::NewProp_QuadSplitMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveProperties_Statics::ClassParams = {
		&URevolveProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevolveProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URevolveProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveProperties()
	{
		if (!Z_Registration_Info_UClass_URevolveProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveProperties.OuterSingleton, Z_Construct_UClass_URevolveProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<URevolveProperties>()
	{
		return URevolveProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveProperties);
	URevolveProperties::~URevolveProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics::EnumInfo[] = {
		{ ERevolvePropertiesCapFillMode_StaticEnum, TEXT("ERevolvePropertiesCapFillMode"), &Z_Registration_Info_UEnum_ERevolvePropertiesCapFillMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3493575265U) },
		{ ERevolvePropertiesPolygroupMode_StaticEnum, TEXT("ERevolvePropertiesPolygroupMode"), &Z_Registration_Info_UEnum_ERevolvePropertiesPolygroupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1812963645U) },
		{ ERevolvePropertiesQuadSplit_StaticEnum, TEXT("ERevolvePropertiesQuadSplit"), &Z_Registration_Info_UEnum_ERevolvePropertiesQuadSplit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2591816356U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URevolveProperties, URevolveProperties::StaticClass, TEXT("URevolveProperties"), &Z_Registration_Info_UClass_URevolveProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveProperties), 4203215210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_3948044839(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
