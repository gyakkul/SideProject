// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolActivities/PolyEditInsertEdgeLoopActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyEditInsertEdgeLoopActivity() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UInteractiveToolActivity();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdgeLoopPositioningMode;
	static UEnum* EEdgeLoopPositioningMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EEdgeLoopPositioningMode"));
		}
		return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EEdgeLoopPositioningMode>()
	{
		return EEdgeLoopPositioningMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enumerators[] = {
		{ "EEdgeLoopPositioningMode::Even", (int64)EEdgeLoopPositioningMode::Even },
		{ "EEdgeLoopPositioningMode::ProportionOffset", (int64)EEdgeLoopPositioningMode::ProportionOffset },
		{ "EEdgeLoopPositioningMode::DistanceOffset", (int64)EEdgeLoopPositioningMode::DistanceOffset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enum_MetaDataParams[] = {
		{ "DistanceOffset.Comment", "/** Edge loops will fall a constant distance away from the start of each edge they intersect\n\x09 (e.g., 20 units down). Clamps to end if edge is too short. */" },
		{ "DistanceOffset.Name", "EEdgeLoopPositioningMode::DistanceOffset" },
		{ "DistanceOffset.ToolTip", "Edge loops will fall a constant distance away from the start of each edge they intersect\n       (e.g., 20 units down). Clamps to end if edge is too short." },
		{ "Even.Comment", "/** Edge loops will be evenly centered within a group. Allows for multiple insertions at a time. */" },
		{ "Even.Name", "EEdgeLoopPositioningMode::Even" },
		{ "Even.ToolTip", "Edge loops will be evenly centered within a group. Allows for multiple insertions at a time." },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ProportionOffset.Comment", "/** Edge loops will fall at the same length proportion at each edge they intersect (e.g., a quarter way down). */" },
		{ "ProportionOffset.Name", "EEdgeLoopPositioningMode::ProportionOffset" },
		{ "ProportionOffset.ToolTip", "Edge loops will fall at the same length proportion at each edge they intersect (e.g., a quarter way down)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"EEdgeLoopPositioningMode",
		"EEdgeLoopPositioningMode",
		Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode()
	{
		if (!Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEdgeLoopPositioningMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdgeLoopInsertionMode;
	static UEnum* EEdgeLoopInsertionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingTools(), TEXT("EEdgeLoopInsertionMode"));
		}
		return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EEdgeLoopInsertionMode>()
	{
		return EEdgeLoopInsertionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enumerators[] = {
		{ "EEdgeLoopInsertionMode::Retriangulate", (int64)EEdgeLoopInsertionMode::Retriangulate },
		{ "EEdgeLoopInsertionMode::PlaneCut", (int64)EEdgeLoopInsertionMode::PlaneCut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "PlaneCut.Comment", "/** Keeps existing triangles and cuts them to create a new path. May result in fragmented triangles over time.*/" },
		{ "PlaneCut.Name", "EEdgeLoopInsertionMode::PlaneCut" },
		{ "PlaneCut.ToolTip", "Keeps existing triangles and cuts them to create a new path. May result in fragmented triangles over time." },
		{ "Retriangulate.Comment", "/** Existing groups will be deleted and new triangles will be created for the new groups.\n\x09 Keeps topology simple but breaks non-planar groups. */" },
		{ "Retriangulate.Name", "EEdgeLoopInsertionMode::Retriangulate" },
		{ "Retriangulate.ToolTip", "Existing groups will be deleted and new triangles will be created for the new groups.\n       Keeps topology simple but breaks non-planar groups." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingTools,
		nullptr,
		"EEdgeLoopInsertionMode",
		"EEdgeLoopInsertionMode",
		Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode()
	{
		if (!Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEdgeLoopInsertionMode.InnerSingleton;
	}
	void UEdgeLoopInsertionProperties::StaticRegisterNativesUEdgeLoopInsertionProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdgeLoopInsertionProperties);
	UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister()
	{
		return UEdgeLoopInsertionProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PositionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_InsertionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InsertionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProportionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ProportionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractive_MetaData[];
#endif
		static void NewProp_bInteractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOffsetDirection_MetaData[];
#endif
		static void NewProp_bFlipOffsetDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOffsetDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighlightProblemGroups_MetaData[];
#endif
		static void NewProp_bHighlightProblemGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighlightProblemGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_VertexTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** Determines how edge loops position themselves vertically relative to loop direction. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Determines how edge loops position themselves vertically relative to loop direction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode = { "PositionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdgeLoopInsertionProperties, PositionMode), Z_Construct_UEnum_MeshModelingTools_EEdgeLoopPositioningMode, METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_MetaData)) }; // 2624461480
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** Determines how edge loops are added to the geometry */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Determines how edge loops are added to the geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode = { "InsertionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdgeLoopInsertionProperties, InsertionMode), Z_Construct_UEnum_MeshModelingTools_EEdgeLoopInsertionMode, METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_MetaData)) }; // 504764901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMax", "500" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many loops to insert at a time. Only used with \"even\" positioning mode. */" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::Even" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "How many loops to insert at a time. Only used with \"even\" positioning mode." },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdgeLoopInsertionProperties, NumLoops), METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::ProportionOffset && !bInteractive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset = { "ProportionOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdgeLoopInsertionProperties, ProportionOffset), METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMin", "0" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::DistanceOffset && !bInteractive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdgeLoopInsertionProperties, DistanceOffset), METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** When false, the distance/proportion offset is numerically specified, and mouse clicks just choose the edge. */" },
		{ "EditCondition", "PositionMode != EEdgeLoopPositioningMode::Even" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "When false, the distance/proportion offset is numerically specified, and mouse clicks just choose the edge." },
	};
#endif
	void Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_SetBit(void* Obj)
	{
		((UEdgeLoopInsertionProperties*)Obj)->bInteractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive = { "bInteractive", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEdgeLoopInsertionProperties), &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** Measure the distance offset from the opposite side of the edges. */" },
		{ "EditCondition", "PositionMode == EEdgeLoopPositioningMode::DistanceOffset" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Measure the distance offset from the opposite side of the edges." },
	};
#endif
	void Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_SetBit(void* Obj)
	{
		((UEdgeLoopInsertionProperties*)Obj)->bFlipOffsetDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection = { "bFlipOffsetDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEdgeLoopInsertionProperties), &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "Comment", "/** When true, non-quad-like groups that stop the loop will be highlighted, with X's marking the corners. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "When true, non-quad-like groups that stop the loop will be highlighted, with X's marking the corners." },
	};
#endif
	void Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_SetBit(void* Obj)
	{
		((UEdgeLoopInsertionProperties*)Obj)->bHighlightProblemGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups = { "bHighlightProblemGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEdgeLoopInsertionProperties), &Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance_MetaData[] = {
		{ "Category", "InsertEdgeLoop" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one. */" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "How close a new loop edge needs to pass next to an existing vertex to use that vertex rather than creating a new one." },
		{ "UIMax", "0.01" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance = { "VertexTolerance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdgeLoopInsertionProperties, VertexTolerance), METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_PositionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_InsertionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_NumLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_ProportionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_DistanceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bInteractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bFlipOffsetDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_bHighlightProblemGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::NewProp_VertexTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdgeLoopInsertionProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::ClassParams = {
		&UEdgeLoopInsertionProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdgeLoopInsertionProperties()
	{
		if (!Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton, Z_Construct_UClass_UEdgeLoopInsertionProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UEdgeLoopInsertionProperties>()
	{
		return UEdgeLoopInsertionProperties::StaticClass();
	}
	UEdgeLoopInsertionProperties::UEdgeLoopInsertionProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdgeLoopInsertionProperties);
	UEdgeLoopInsertionProperties::~UEdgeLoopInsertionProperties() {}
	void UPolyEditInsertEdgeLoopActivity::StaticRegisterNativesUPolyEditInsertEdgeLoopActivity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolyEditInsertEdgeLoopActivity);
	UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister()
	{
		return UPolyEditInsertEdgeLoopActivity::StaticClass();
	}
	struct Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivityContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivityContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolActivity,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Interactive activity for inserting (group) edge loops into a mesh. */" },
		{ "IncludePath", "ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
		{ "ToolTip", "Interactive activity for inserting (group) edge loops into a mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsertEdgeLoopActivity, Settings), Z_Construct_UClass_UEdgeLoopInsertionProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolActivities/PolyEditInsertEdgeLoopActivity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext = { "ActivityContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPolyEditInsertEdgeLoopActivity, ActivityContext), Z_Construct_UClass_UPolyEditActivityContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::NewProp_ActivityContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolyEditInsertEdgeLoopActivity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::ClassParams = {
		&UPolyEditInsertEdgeLoopActivity::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity()
	{
		if (!Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton, Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UPolyEditInsertEdgeLoopActivity>()
	{
		return UPolyEditInsertEdgeLoopActivity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolyEditInsertEdgeLoopActivity);
	UPolyEditInsertEdgeLoopActivity::~UPolyEditInsertEdgeLoopActivity() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::EnumInfo[] = {
		{ EEdgeLoopPositioningMode_StaticEnum, TEXT("EEdgeLoopPositioningMode"), &Z_Registration_Info_UEnum_EEdgeLoopPositioningMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2624461480U) },
		{ EEdgeLoopInsertionMode_StaticEnum, TEXT("EEdgeLoopInsertionMode"), &Z_Registration_Info_UEnum_EEdgeLoopInsertionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 504764901U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdgeLoopInsertionProperties, UEdgeLoopInsertionProperties::StaticClass, TEXT("UEdgeLoopInsertionProperties"), &Z_Registration_Info_UClass_UEdgeLoopInsertionProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdgeLoopInsertionProperties), 4216477818U) },
		{ Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity, UPolyEditInsertEdgeLoopActivity::StaticClass, TEXT("UPolyEditInsertEdgeLoopActivity"), &Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolyEditInsertEdgeLoopActivity), 3430409469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_2849673719(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_ToolActivities_PolyEditInsertEdgeLoopActivity_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
