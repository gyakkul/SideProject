// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLookAtFragments.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLookAtFragments() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MASSAIBEHAVIOR_API UEnum* Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode();
	MASSAIBEHAVIOR_API UEnum* Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtFragment();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTargetTag();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassLookAtMode;
	static UEnum* EMassLookAtMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassLookAtMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassLookAtMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("EMassLookAtMode"));
		}
		return Z_Registration_Info_UEnum_EMassLookAtMode.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UEnum* StaticEnum<EMassLookAtMode>()
	{
		return EMassLookAtMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::Enumerators[] = {
		{ "EMassLookAtMode::LookForward", (int64)EMassLookAtMode::LookForward },
		{ "EMassLookAtMode::LookAlongPath", (int64)EMassLookAtMode::LookAlongPath },
		{ "EMassLookAtMode::LookAtEntity", (int64)EMassLookAtMode::LookAtEntity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Primary look at mode, gazing can be applied on top. */" },
		{ "LookAlongPath.Comment", "/** Look along the current path */" },
		{ "LookAlongPath.Name", "EMassLookAtMode::LookAlongPath" },
		{ "LookAlongPath.ToolTip", "Look along the current path" },
		{ "LookAtEntity.Comment", "/** Track specified entity */" },
		{ "LookAtEntity.Name", "EMassLookAtMode::LookAtEntity" },
		{ "LookAtEntity.ToolTip", "Track specified entity" },
		{ "LookForward.Comment", "/** Look forward */" },
		{ "LookForward.Name", "EMassLookAtMode::LookForward" },
		{ "LookForward.ToolTip", "Look forward" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Primary look at mode, gazing can be applied on top." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		"EMassLookAtMode",
		"EMassLookAtMode",
		Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode()
	{
		if (!Z_Registration_Info_UEnum_EMassLookAtMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassLookAtMode.InnerSingleton, Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassLookAtMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassLookAtGazeMode;
	static UEnum* EMassLookAtGazeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassLookAtGazeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassLookAtGazeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("EMassLookAtGazeMode"));
		}
		return Z_Registration_Info_UEnum_EMassLookAtGazeMode.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UEnum* StaticEnum<EMassLookAtGazeMode>()
	{
		return EMassLookAtGazeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::Enumerators[] = {
		{ "EMassLookAtGazeMode::None", (int64)EMassLookAtGazeMode::None },
		{ "EMassLookAtGazeMode::Constant", (int64)EMassLookAtGazeMode::Constant },
		{ "EMassLookAtGazeMode::Glance", (int64)EMassLookAtGazeMode::Glance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Gifferent gaze modes applied on top of the look at mode. */" },
		{ "Constant.Comment", "/** Look constantly in gaze direction until next gaze target is picked. */" },
		{ "Constant.Name", "EMassLookAtGazeMode::Constant" },
		{ "Constant.ToolTip", "Look constantly in gaze direction until next gaze target is picked." },
		{ "Glance.Comment", "/** Quick look at gaze target, ease in back to main look direction. */" },
		{ "Glance.Name", "EMassLookAtGazeMode::Glance" },
		{ "Glance.ToolTip", "Quick look at gaze target, ease in back to main look direction." },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "None.Comment", "/** No gazing */" },
		{ "None.Name", "EMassLookAtGazeMode::None" },
		{ "None.ToolTip", "No gazing" },
		{ "ToolTip", "Gifferent gaze modes applied on top of the look at mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		"EMassLookAtGazeMode",
		"EMassLookAtGazeMode",
		Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode()
	{
		if (!Z_Registration_Info_UEnum_EMassLookAtGazeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassLookAtGazeMode.InnerSingleton, Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassLookAtGazeMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassLookAtFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassLookAtFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLookAtFragment;
class UScriptStruct* FMassLookAtFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLookAtFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLookAtFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLookAtFragment, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassLookAtFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassLookAtFragment.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassLookAtFragment>()
{
	return FMassLookAtFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLookAtFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GazeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GazeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GazeTrackedEntity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GazeTrackedEntity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GazeStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_GazeStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GazeDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GazeDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSeenActionID_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_LastSeenActionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LookAtMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGazeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGazeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RandomGazeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGazeYawVariation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGazeYawVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomGazePitchVariation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RandomGazePitchVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomGazeEntities_MetaData[];
#endif
		static void NewProp_bRandomGazeEntities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomGazeEntities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that holds all parameters of the current entity look at \n */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Struct that holds all parameters of the current entity look at" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLookAtFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "/** Current look at direction (with gaze applied). */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Current look at direction (with gaze applied)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDirection_MetaData[] = {
		{ "Comment", "/** Current gaze direction, applied on top of look at direction based on gaze mode. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Current gaze direction, applied on top of look at direction based on gaze mode." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDirection = { "GazeDirection", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, GazeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_TrackedEntity_MetaData[] = {
		{ "Comment", "/** Specific entity that is being tracked as primary look at. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Specific entity that is being tracked as primary look at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_TrackedEntity = { "TrackedEntity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, TrackedEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_TrackedEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_TrackedEntity_MetaData)) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeTrackedEntity_MetaData[] = {
		{ "Comment", "/** Entity that is tracked as part of gazing. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Entity that is tracked as part of gazing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeTrackedEntity = { "GazeTrackedEntity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, GazeTrackedEntity), Z_Construct_UScriptStruct_FMassEntityHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeTrackedEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeTrackedEntity_MetaData)) }; // 2284468209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeStartTime_MetaData[] = {
		{ "Comment", "/** Start time of the current gaze. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Start time of the current gaze." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeStartTime = { "GazeStartTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, GazeStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDuration_MetaData[] = {
		{ "Comment", "/** Duration of the current gaze. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Duration of the current gaze." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDuration = { "GazeDuration", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, GazeDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LastSeenActionID_MetaData[] = {
		{ "Comment", "/** Last seen action ID, used to check when look at trajectory needs to be updated. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Last seen action ID, used to check when look at trajectory needs to be updated." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LastSeenActionID = { "LastSeenActionID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, LastSeenActionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LastSeenActionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LastSeenActionID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode_MetaData[] = {
		{ "Comment", "/** Primary look at mode. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Primary look at mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode = { "LookAtMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, LookAtMode), Z_Construct_UEnum_MassAIBehavior_EMassLookAtMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode_MetaData)) }; // 1706356185
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode_MetaData[] = {
		{ "Comment", "/** Gaze look at mode. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Gaze look at mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode = { "RandomGazeMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, RandomGazeMode), Z_Construct_UEnum_MassAIBehavior_EMassLookAtGazeMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode_MetaData)) }; // 2681389148
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeYawVariation_MetaData[] = {
		{ "Comment", "/** Random gaze angle yaw variation (in degrees). */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Random gaze angle yaw variation (in degrees)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeYawVariation = { "RandomGazeYawVariation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, RandomGazeYawVariation), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeYawVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeYawVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazePitchVariation_MetaData[] = {
		{ "Comment", "/** Random gaze angle pitch variation (in degrees). */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Random gaze angle pitch variation (in degrees)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazePitchVariation = { "RandomGazePitchVariation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassLookAtFragment, RandomGazePitchVariation), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazePitchVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazePitchVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities_MetaData[] = {
		{ "Comment", "/** Tru if random gaze can also pick interesting entities to look at. */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Tru if random gaze can also pick interesting entities to look at." },
	};
#endif
	void Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities_SetBit(void* Obj)
	{
		((FMassLookAtFragment*)Obj)->bRandomGazeEntities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities = { "bRandomGazeEntities", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMassLookAtFragment), &Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_TrackedEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeTrackedEntity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_GazeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LastSeenActionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_LookAtMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazeYawVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_RandomGazePitchVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewProp_bRandomGazeEntities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassLookAtFragment",
		sizeof(FMassLookAtFragment),
		alignof(FMassLookAtFragment),
		Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLookAtFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLookAtFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLookAtFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassLookAtTargetTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassLookAtTargetTag cannot be polymorphic unless super FMassTag is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLookAtTargetTag;
class UScriptStruct* FMassLookAtTargetTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLookAtTargetTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLookAtTargetTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLookAtTargetTag, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassLookAtTargetTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassLookAtTargetTag.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassLookAtTargetTag>()
{
	return FMassLookAtTargetTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Special tag to mark an entity that could be tracked by the LookAt\n */" },
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
		{ "ToolTip", "Special tag to mark an entity that could be tracked by the LookAt" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLookAtTargetTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassTag,
		&NewStructOps,
		"MassLookAtTargetTag",
		sizeof(FMassLookAtTargetTag),
		alignof(FMassLookAtTargetTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTargetTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLookAtTargetTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLookAtTargetTag.InnerSingleton, Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLookAtTargetTag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint;
class UScriptStruct* FMassLookAtTrajectoryPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassLookAtTrajectoryPoint"));
	}
	return Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassLookAtTrajectoryPoint>()
{
	return FMassLookAtTrajectoryPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLookAtTrajectoryPoint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassLookAtTrajectoryPoint",
		sizeof(FMassLookAtTrajectoryPoint),
		alignof(FMassLookAtTrajectoryPoint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint.InnerSingleton, Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassLookAtTrajectoryFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassLookAtTrajectoryFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment;
class UScriptStruct* FMassLookAtTrajectoryFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassLookAtTrajectoryFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassLookAtTrajectoryFragment>()
{
	return FMassLookAtTrajectoryFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLookAtFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassLookAtTrajectoryFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassLookAtTrajectoryFragment",
		sizeof(FMassLookAtTrajectoryFragment),
		alignof(FMassLookAtTrajectoryFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics::EnumInfo[] = {
		{ EMassLookAtMode_StaticEnum, TEXT("EMassLookAtMode"), &Z_Registration_Info_UEnum_EMassLookAtMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1706356185U) },
		{ EMassLookAtGazeMode_StaticEnum, TEXT("EMassLookAtGazeMode"), &Z_Registration_Info_UEnum_EMassLookAtGazeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2681389148U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassLookAtFragment::StaticStruct, Z_Construct_UScriptStruct_FMassLookAtFragment_Statics::NewStructOps, TEXT("MassLookAtFragment"), &Z_Registration_Info_UScriptStruct_MassLookAtFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLookAtFragment), 659934150U) },
		{ FMassLookAtTargetTag::StaticStruct, Z_Construct_UScriptStruct_FMassLookAtTargetTag_Statics::NewStructOps, TEXT("MassLookAtTargetTag"), &Z_Registration_Info_UScriptStruct_MassLookAtTargetTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLookAtTargetTag), 2818292465U) },
		{ FMassLookAtTrajectoryPoint::StaticStruct, Z_Construct_UScriptStruct_FMassLookAtTrajectoryPoint_Statics::NewStructOps, TEXT("MassLookAtTrajectoryPoint"), &Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLookAtTrajectoryPoint), 659306586U) },
		{ FMassLookAtTrajectoryFragment::StaticStruct, Z_Construct_UScriptStruct_FMassLookAtTrajectoryFragment_Statics::NewStructOps, TEXT("MassLookAtTrajectoryFragment"), &Z_Registration_Info_UScriptStruct_MassLookAtTrajectoryFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassLookAtTrajectoryFragment), 2760504998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_3166535176(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtFragments_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
