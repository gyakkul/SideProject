// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
	POSESEARCH_API UEnum* Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingSettings();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingState();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionMatchingFlags;
	static UEnum* EMotionMatchingFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionMatchingFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionMatchingFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("EMotionMatchingFlags"));
		}
		return Z_Registration_Info_UEnum_EMotionMatchingFlags.OuterSingleton;
	}
	template<> POSESEARCH_API UEnum* StaticEnum<EMotionMatchingFlags>()
	{
		return EMotionMatchingFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::Enumerators[] = {
		{ "EMotionMatchingFlags::None", (int64)EMotionMatchingFlags::None },
		{ "EMotionMatchingFlags::JumpedToPose", (int64)EMotionMatchingFlags::JumpedToPose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "JumpedToPose.Name", "EMotionMatchingFlags::JumpedToPose" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EMotionMatchingFlags::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		"EMotionMatchingFlags",
		"EMotionMatchingFlags",
		Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags()
	{
		if (!Z_Registration_Info_UEnum_EMotionMatchingFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionMatchingFlags.InnerSingleton, Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionMatchingFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionMatchingSettings;
class UScriptStruct* FMotionMatchingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionMatchingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionMatchingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionMatchingSettings, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("MotionMatchingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MotionMatchingSettings.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FMotionMatchingSettings>()
{
	return FMotionMatchingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxActiveBlends_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxActiveBlends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendProfile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendProfile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorChangeBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MirrorChangeBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseJumpThresholdTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseJumpThresholdTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseReselectHistory_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseReselectHistory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchThrottleTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchThrottleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRateMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRateMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionMatchingSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Time in seconds to blend out to the new pose. Uses either inertial blending, requiring an Inertialization node after this node, or the internal blend stack, if MaxActiveBlends is greter than zero\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Time in seconds to blend out to the new pose. Uses either inertial blending, requiring an Inertialization node after this node, or the internal blend stack, if MaxActiveBlends is greter than zero" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MaxActiveBlends_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of max active blendin animation in the blend stack. If MaxActiveBlends is zero then blend stack is disabled\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Number of max active blendin animation in the blend stack. If MaxActiveBlends is zero then blend stack is disabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MaxActiveBlends = { "MaxActiveBlends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, MaxActiveBlends), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MaxActiveBlends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MaxActiveBlends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendProfile_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "UseAsBlendProfile", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendProfile = { "BlendProfile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, BlendProfile), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendProfile_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption_MetaData)) }; // 3066902676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MirrorChangeBlendTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// If the pose jump requires a mirroring change and this value is greater than 0, it will be used instead of BlendTime\n" },
		{ "DislayAfter", "BlendTime" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "If the pose jump requires a mirroring change and this value is greater than 0, it will be used instead of BlendTime" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MirrorChangeBlendTime = { "MirrorChangeBlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, MirrorChangeBlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MirrorChangeBlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MirrorChangeBlendTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseJumpThresholdTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Don't jump to poses that are less than this many seconds away\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Don't jump to poses that are less than this many seconds away" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseJumpThresholdTime = { "PoseJumpThresholdTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, PoseJumpThresholdTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseJumpThresholdTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseJumpThresholdTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseReselectHistory_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Don't jump to poses that has been selected previously within this many seconds in the past\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Don't jump to poses that has been selected previously within this many seconds in the past" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseReselectHistory = { "PoseReselectHistory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, PoseReselectHistory), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseReselectHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseReselectHistory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_SearchThrottleTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Minimum amount of time to wait between pose search queries\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Minimum amount of time to wait between pose search queries" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_SearchThrottleTime = { "SearchThrottleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, SearchThrottleTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_SearchThrottleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_SearchThrottleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.5" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMin = { "PlayRateMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, PlayRateMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMax = { "PlayRateMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingSettings, PlayRateMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MaxActiveBlends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_BlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_MirrorChangeBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseJumpThresholdTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PoseReselectHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_SearchThrottleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewProp_PlayRateMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"MotionMatchingSettings",
		sizeof(FMotionMatchingSettings),
		alignof(FMotionMatchingSettings),
		Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionMatchingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionMatchingSettings.InnerSingleton, Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionMatchingSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionMatchingState;
class UScriptStruct* FMotionMatchingState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionMatchingState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionMatchingState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionMatchingState, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("MotionMatchingState"));
	}
	return Z_Registration_Info_UScriptStruct_MotionMatchingState.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FMotionMatchingState>()
{
	return FMotionMatchingState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionMatchingState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedPoseJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedPoseJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantedPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WantedPlayRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionTransformDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionTransformDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Animation|Pose Search" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionMatchingState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseJumpTime_MetaData[] = {
		{ "Comment", "// Time since the last pose jump\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Time since the last pose jump" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseJumpTime = { "ElapsedPoseJumpTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingState, ElapsedPoseJumpTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate_MetaData[] = {
		{ "Comment", "// wanted PlayRate to have the selected animation playing at the estimated requested speed from the query\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "wanted PlayRate to have the selected animation playing at the estimated requested speed from the query" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate = { "WantedPlayRate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingState, WantedPlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// Evaluation flags relevant to the state of motion matching\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Evaluation flags relevant to the state of motion matching" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingState, Flags), Z_Construct_UEnum_PoseSearch_EMotionMatchingFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags_MetaData)) }; // 2336371961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_RootMotionTransformDelta_MetaData[] = {
		{ "Comment", "// Root motion delta for currently playing animation. Only required\n// when UE_POSE_SEARCH_TRACE_ENABLED is active\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchLibrary.h" },
		{ "ToolTip", "Root motion delta for currently playing animation. Only required\nwhen UE_POSE_SEARCH_TRACE_ENABLED is active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_RootMotionTransformDelta = { "RootMotionTransformDelta", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionMatchingState, RootMotionTransformDelta), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_RootMotionTransformDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_RootMotionTransformDelta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_ElapsedPoseJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_WantedPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewProp_RootMotionTransformDelta,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionMatchingState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		nullptr,
		&NewStructOps,
		"MotionMatchingState",
		sizeof(FMotionMatchingState),
		alignof(FMotionMatchingState),
		Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionMatchingState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionMatchingState()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionMatchingState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionMatchingState.InnerSingleton, Z_Construct_UScriptStruct_FMotionMatchingState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionMatchingState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::EnumInfo[] = {
		{ EMotionMatchingFlags_StaticEnum, TEXT("EMotionMatchingFlags"), &Z_Registration_Info_UEnum_EMotionMatchingFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2336371961U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMotionMatchingSettings::StaticStruct, Z_Construct_UScriptStruct_FMotionMatchingSettings_Statics::NewStructOps, TEXT("MotionMatchingSettings"), &Z_Registration_Info_UScriptStruct_MotionMatchingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionMatchingSettings), 961974048U) },
		{ FMotionMatchingState::StaticStruct, Z_Construct_UScriptStruct_FMotionMatchingState_Statics::NewStructOps, TEXT("MotionMatchingState"), &Z_Registration_Info_UScriptStruct_MotionMatchingState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionMatchingState), 1836423127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_3580915404(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
