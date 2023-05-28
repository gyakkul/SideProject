// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationTypes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassCommonTypes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphNavigationTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassInt16Real();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassSnorm8Vector();
	MASSNAVIGATION_API UEnum* Z_Construct_UEnum_MassNavigation_EMassMovementAction();
	MASSZONEGRAPHNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphShortPathRequest();
	UPackage* Z_Construct_UPackage__Script_MassZoneGraphNavigation();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest;
class UScriptStruct* FZoneGraphShortPathRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest, (UObject*)Z_Construct_UPackage__Script_MassZoneGraphNavigation(), TEXT("ZoneGraphShortPathRequest"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest.OuterSingleton;
}
template<> MASSZONEGRAPHNAVIGATION_API UScriptStruct* StaticStruct<FZoneGraphShortPathRequest>()
{
	return FZoneGraphShortPathRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndOfPathPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextLaneHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextLaneHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndOfPathDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnticipationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnticipationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndOfPathOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndOfPathIntent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathIntent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EndOfPathIntent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NextExitLinkType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextExitLinkType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NextExitLinkType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoveReverse_MetaData[];
#endif
		static void NewProp_bMoveReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEndOfPathPositionSet_MetaData[];
#endif
		static void NewProp_bIsEndOfPathPositionSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEndOfPathPositionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEndOfPathDirectionSet_MetaData[];
#endif
		static void NewProp_bIsEndOfPathDirectionSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEndOfPathDirectionSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes path request along one ZoneGraph lane. If the NextLaneHandle is set, lane is changed when path finishes. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Describes path request along one ZoneGraph lane. If the NextLaneHandle is set, lane is changed when path finishes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphShortPathRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Comment", "/** Position used as the start of the path*/" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Position used as the start of the path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathPosition_MetaData[] = {
		{ "Comment", "/** Optional specific point at the end of the path. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Optional specific point at the end of the path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathPosition = { "EndOfPathPosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, EndOfPathPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextLaneHandle_MetaData[] = {
		{ "Comment", "/** If set, the lane will be switched when path finishes. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "If set, the lane will be switched when path finishes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextLaneHandle = { "NextLaneHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, NextLaneHandle), Z_Construct_UScriptStruct_FZoneGraphLaneHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextLaneHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextLaneHandle_MetaData)) }; // 439458847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_TargetDistance_MetaData[] = {
		{ "Comment", "/** Distance to move. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Distance to move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_TargetDistance = { "TargetDistance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, TargetDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_TargetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_TargetDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathDirection_MetaData[] = {
		{ "Comment", "/** Optional specific direction at the end of the path. Used only if EndOfPathPosition is set. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Optional specific direction at the end of the path. Used only if EndOfPathPosition is set." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathDirection = { "EndOfPathDirection", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, EndOfPathDirection), Z_Construct_UScriptStruct_FMassSnorm8Vector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathDirection_MetaData)) }; // 3541780626
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_AnticipationDistance_MetaData[] = {
		{ "Comment", "/** If start or end of path is off-lane, the distance along the lane is pushed forward/back along the lane to make smoother transition. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "If start or end of path is off-lane, the distance along the lane is pushed forward/back along the lane to make smoother transition." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_AnticipationDistance = { "AnticipationDistance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, AnticipationDistance), Z_Construct_UScriptStruct_FMassInt16Real, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_AnticipationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_AnticipationDistance_MetaData)) }; // 272813750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathOffset = { "EndOfPathOffset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, EndOfPathOffset), Z_Construct_UScriptStruct_FMassInt16Real, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathOffset_MetaData)) }; // 272813750
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent_MetaData[] = {
		{ "Comment", "/** Movement intent at the end of the path. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Movement intent at the end of the path." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent = { "EndOfPathIntent", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, EndOfPathIntent), Z_Construct_UEnum_MassNavigation_EMassMovementAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent_MetaData)) }; // 4189626115
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType_MetaData[] = {
		{ "Comment", "/** How the NextLaneHandle links to current lane. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "How the NextLaneHandle links to current lane." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType = { "NextExitLinkType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphShortPathRequest, NextExitLinkType), Z_Construct_UEnum_ZoneGraph_EZoneLaneLinkType, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType_MetaData)) }; // 622777819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse_MetaData[] = {
		{ "Comment", "/** If true, move backwards along the lane. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "If true, move backwards along the lane." },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse_SetBit(void* Obj)
	{
		((FZoneGraphShortPathRequest*)Obj)->bMoveReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse = { "bMoveReverse", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FZoneGraphShortPathRequest), &Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet_MetaData[] = {
		{ "Comment", "/** Indicates if the optional end of path position is set. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Indicates if the optional end of path position is set." },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet_SetBit(void* Obj)
	{
		((FZoneGraphShortPathRequest*)Obj)->bIsEndOfPathPositionSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet = { "bIsEndOfPathPositionSet", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FZoneGraphShortPathRequest), &Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet_MetaData[] = {
		{ "Comment", "/** Indicates if the optional end of path direction is set. Used only if EndOfPathPosition is set. */" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationTypes.h" },
		{ "ToolTip", "Indicates if the optional end of path direction is set. Used only if EndOfPathPosition is set." },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet_SetBit(void* Obj)
	{
		((FZoneGraphShortPathRequest*)Obj)->bIsEndOfPathDirectionSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet = { "bIsEndOfPathDirectionSet", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FZoneGraphShortPathRequest), &Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextLaneHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_TargetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_AnticipationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_EndOfPathIntent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_NextExitLinkType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bMoveReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathPositionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewProp_bIsEndOfPathDirectionSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
		nullptr,
		&NewStructOps,
		"ZoneGraphShortPathRequest",
		sizeof(FZoneGraphShortPathRequest),
		alignof(FZoneGraphShortPathRequest),
		Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphShortPathRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTypes_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphShortPathRequest::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphShortPathRequest_Statics::NewStructOps, TEXT("ZoneGraphShortPathRequest"), &Z_Registration_Info_UScriptStruct_ZoneGraphShortPathRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphShortPathRequest), 391483634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTypes_h_241187178(TEXT("/Script/MassZoneGraphNavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
