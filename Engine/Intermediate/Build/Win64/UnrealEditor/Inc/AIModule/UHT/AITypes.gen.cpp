// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITypes() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAILockSource();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EGenericAICheck();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionEventType();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FIntervalCountdown();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIOptionFlag;
	static UEnum* EAIOptionFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIOptionFlag, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAIOptionFlag"));
		}
		return Z_Registration_Info_UEnum_EAIOptionFlag.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAIOptionFlag::Type>()
	{
		return EAIOptionFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::Enumerators[] = {
		{ "EAIOptionFlag::Default", (int64)EAIOptionFlag::Default },
		{ "EAIOptionFlag::Enable", (int64)EAIOptionFlag::Enable },
		{ "EAIOptionFlag::Disable", (int64)EAIOptionFlag::Disable },
		{ "EAIOptionFlag::MAX", (int64)EAIOptionFlag::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EAIOptionFlag::Default" },
		{ "Disable.DisplayName", "No" },
		{ "Disable.Name", "EAIOptionFlag::Disable" },
		{ "Enable.DisplayName", "Yes" },
		{ "Enable.Name", "EAIOptionFlag::Enable" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EAIOptionFlag::MAX" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EAIOptionFlag",
		"EAIOptionFlag::Type",
		Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag()
	{
		if (!Z_Registration_Info_UEnum_EAIOptionFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIOptionFlag.InnerSingleton, Z_Construct_UEnum_AIModule_EAIOptionFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIOptionFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FAIDistanceType;
	static UEnum* FAIDistanceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_FAIDistanceType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("FAIDistanceType"));
		}
		return Z_Registration_Info_UEnum_FAIDistanceType.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<FAIDistanceType>()
	{
		return FAIDistanceType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_FAIDistanceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::Enumerators[] = {
		{ "FAIDistanceType::Distance3D", (int64)FAIDistanceType::Distance3D },
		{ "FAIDistanceType::Distance2D", (int64)FAIDistanceType::Distance2D },
		{ "FAIDistanceType::DistanceZ", (int64)FAIDistanceType::DistanceZ },
		{ "FAIDistanceType::MAX", (int64)FAIDistanceType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::Enum_MetaDataParams[] = {
		{ "Distance2D.Name", "FAIDistanceType::Distance2D" },
		{ "Distance3D.Name", "FAIDistanceType::Distance3D" },
		{ "DistanceZ.Name", "FAIDistanceType::DistanceZ" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "FAIDistanceType::MAX" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"FAIDistanceType",
		"FAIDistanceType",
		Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_FAIDistanceType()
	{
		if (!Z_Registration_Info_UEnum_FAIDistanceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FAIDistanceType.InnerSingleton, Z_Construct_UEnum_AIModule_FAIDistanceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FAIDistanceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnActionAbortState;
	static UEnum* EPawnActionAbortState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionAbortState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPawnActionAbortState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionAbortState, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionAbortState"));
		}
		return Z_Registration_Info_UEnum_EPawnActionAbortState.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionAbortState::Type>()
	{
		return EPawnActionAbortState_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::Enumerators[] = {
		{ "EPawnActionAbortState::NeverStarted", (int64)EPawnActionAbortState::NeverStarted },
		{ "EPawnActionAbortState::NotBeingAborted", (int64)EPawnActionAbortState::NotBeingAborted },
		{ "EPawnActionAbortState::MarkPendingAbort", (int64)EPawnActionAbortState::MarkPendingAbort },
		{ "EPawnActionAbortState::LatentAbortInProgress", (int64)EPawnActionAbortState::LatentAbortInProgress },
		{ "EPawnActionAbortState::AbortDone", (int64)EPawnActionAbortState::AbortDone },
		{ "EPawnActionAbortState::MAX", (int64)EPawnActionAbortState::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::Enum_MetaDataParams[] = {
		{ "AbortDone.Name", "EPawnActionAbortState::AbortDone" },
		{ "LatentAbortInProgress.Name", "EPawnActionAbortState::LatentAbortInProgress" },
		{ "MarkPendingAbort.Comment", "/** This means waiting for child to abort before aborting self. */" },
		{ "MarkPendingAbort.Name", "EPawnActionAbortState::MarkPendingAbort" },
		{ "MarkPendingAbort.ToolTip", "This means waiting for child to abort before aborting self." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EPawnActionAbortState::MAX" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "NeverStarted.Name", "EPawnActionAbortState::NeverStarted" },
		{ "NotBeingAborted.Name", "EPawnActionAbortState::NotBeingAborted" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPawnActionAbortState",
		"EPawnActionAbortState::Type",
		Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionAbortState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnActionAbortState.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnActionAbortState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPawnActionAbortState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnActionResult;
	static UEnum* EPawnActionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPawnActionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionResult"));
		}
		return Z_Registration_Info_UEnum_EPawnActionResult.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionResult::Type>()
	{
		return EPawnActionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPawnActionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::Enumerators[] = {
		{ "EPawnActionResult::NotStarted", (int64)EPawnActionResult::NotStarted },
		{ "EPawnActionResult::InProgress", (int64)EPawnActionResult::InProgress },
		{ "EPawnActionResult::Success", (int64)EPawnActionResult::Success },
		{ "EPawnActionResult::Failed", (int64)EPawnActionResult::Failed },
		{ "EPawnActionResult::Aborted", (int64)EPawnActionResult::Aborted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Name", "EPawnActionResult::Aborted" },
		{ "Failed.Name", "EPawnActionResult::Failed" },
		{ "InProgress.Name", "EPawnActionResult::InProgress" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "NotStarted.Name", "EPawnActionResult::NotStarted" },
		{ "Success.Name", "EPawnActionResult::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPawnActionResult",
		"EPawnActionResult::Type",
		Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnActionResult.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnActionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPawnActionResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnActionEventType;
	static UEnum* EPawnActionEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPawnActionEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionEventType, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionEventType"));
		}
		return Z_Registration_Info_UEnum_EPawnActionEventType.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPawnActionEventType::Type>()
	{
		return EPawnActionEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::Enumerators[] = {
		{ "EPawnActionEventType::Invalid", (int64)EPawnActionEventType::Invalid },
		{ "EPawnActionEventType::FailedToStart", (int64)EPawnActionEventType::FailedToStart },
		{ "EPawnActionEventType::InstantAbort", (int64)EPawnActionEventType::InstantAbort },
		{ "EPawnActionEventType::FinishedAborting", (int64)EPawnActionEventType::FinishedAborting },
		{ "EPawnActionEventType::FinishedExecution", (int64)EPawnActionEventType::FinishedExecution },
		{ "EPawnActionEventType::Push", (int64)EPawnActionEventType::Push },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::Enum_MetaDataParams[] = {
		{ "FailedToStart.Name", "EPawnActionEventType::FailedToStart" },
		{ "FinishedAborting.Name", "EPawnActionEventType::FinishedAborting" },
		{ "FinishedExecution.Name", "EPawnActionEventType::FinishedExecution" },
		{ "InstantAbort.Name", "EPawnActionEventType::InstantAbort" },
		{ "Invalid.Name", "EPawnActionEventType::Invalid" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "Push.Name", "EPawnActionEventType::Push" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPawnActionEventType",
		"EPawnActionEventType::Type",
		Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPawnActionEventType()
	{
		if (!Z_Registration_Info_UEnum_EPawnActionEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnActionEventType.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnActionEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPawnActionEventType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIRequestPriority;
	static UEnum* EAIRequestPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAIRequestPriority, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAIRequestPriority"));
		}
		return Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAIRequestPriority::Type>()
	{
		return EAIRequestPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::Enumerators[] = {
		{ "EAIRequestPriority::SoftScript", (int64)EAIRequestPriority::SoftScript },
		{ "EAIRequestPriority::Logic", (int64)EAIRequestPriority::Logic },
		{ "EAIRequestPriority::HardScript", (int64)EAIRequestPriority::HardScript },
		{ "EAIRequestPriority::Reaction", (int64)EAIRequestPriority::Reaction },
		{ "EAIRequestPriority::Ultimate", (int64)EAIRequestPriority::Ultimate },
		{ "EAIRequestPriority::MAX", (int64)EAIRequestPriority::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::Enum_MetaDataParams[] = {
		{ "HardScript.Comment", "/** Actions LDs really want AI to perform. */" },
		{ "HardScript.Name", "EAIRequestPriority::HardScript" },
		{ "HardScript.ToolTip", "Actions LDs really want AI to perform." },
		{ "Logic.Comment", "/** Actions AI wants to do due to its internal logic. */" },
		{ "Logic.Name", "EAIRequestPriority::Logic" },
		{ "Logic.ToolTip", "Actions AI wants to do due to its internal logic." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EAIRequestPriority::MAX" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "Reaction.Comment", "/** Actions being result of game-world mechanics, like hit reactions, death, falling, etc. In general things not depending on what AI's thinking. */" },
		{ "Reaction.Name", "EAIRequestPriority::Reaction" },
		{ "Reaction.ToolTip", "Actions being result of game-world mechanics, like hit reactions, death, falling, etc. In general things not depending on what AI's thinking." },
		{ "SoftScript.Comment", "/** Actions requested by Level Designers by placing AI-hinting elements on the map. */" },
		{ "SoftScript.Name", "EAIRequestPriority::SoftScript" },
		{ "SoftScript.ToolTip", "Actions requested by Level Designers by placing AI-hinting elements on the map." },
		{ "Ultimate.Comment", "/** Ultimate priority, to be used with caution, makes AI perform given action regardless of anything else (for example disabled reactions). */" },
		{ "Ultimate.Name", "EAIRequestPriority::Ultimate" },
		{ "Ultimate.ToolTip", "Ultimate priority, to be used with caution, makes AI perform given action regardless of anything else (for example disabled reactions)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EAIRequestPriority",
		"EAIRequestPriority::Type",
		Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority()
	{
		if (!Z_Registration_Info_UEnum_EAIRequestPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIRequestPriority.InnerSingleton, Z_Construct_UEnum_AIModule_EAIRequestPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIRequestPriority.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAILockSource;
	static UEnum* EAILockSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAILockSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAILockSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAILockSource, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAILockSource"));
		}
		return Z_Registration_Info_UEnum_EAILockSource.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAILockSource::Type>()
	{
		return EAILockSource_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EAILockSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EAILockSource_Statics::Enumerators[] = {
		{ "EAILockSource::Animation", (int64)EAILockSource::Animation },
		{ "EAILockSource::Logic", (int64)EAILockSource::Logic },
		{ "EAILockSource::Script", (int64)EAILockSource::Script },
		{ "EAILockSource::Gameplay", (int64)EAILockSource::Gameplay },
		{ "EAILockSource::MAX", (int64)EAILockSource::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EAILockSource_Statics::Enum_MetaDataParams[] = {
		{ "Animation.Name", "EAILockSource::Animation" },
		{ "Gameplay.Name", "EAILockSource::Gameplay" },
		{ "Logic.Name", "EAILockSource::Logic" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EAILockSource::MAX" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "Script.Name", "EAILockSource::Script" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAILockSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EAILockSource",
		"EAILockSource::Type",
		Z_Construct_UEnum_AIModule_EAILockSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAILockSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EAILockSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAILockSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EAILockSource()
	{
		if (!Z_Registration_Info_UEnum_EAILockSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAILockSource.InnerSingleton, Z_Construct_UEnum_AIModule_EAILockSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAILockSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIRequestID;
class UScriptStruct* FAIRequestID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIRequestID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIRequestID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIRequestID, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIRequestID"));
	}
	return Z_Registration_Info_UScriptStruct_AIRequestID.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIRequestID>()
{
	return FAIRequestID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIRequestID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RequestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRequestID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIRequestID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIRequestID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIRequestID, RequestID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIRequestID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRequestID_Statics::NewProp_RequestID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIRequestID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIRequestID",
		sizeof(FAIRequestID),
		alignof(FAIRequestID),
		Z_Construct_UScriptStruct_FAIRequestID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRequestID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRequestID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRequestID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID()
	{
		if (!Z_Registration_Info_UScriptStruct_AIRequestID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIRequestID.InnerSingleton, Z_Construct_UScriptStruct_FAIRequestID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIRequestID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIMoveRequest;
class UScriptStruct* FAIMoveRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIMoveRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIMoveRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIMoveRequest, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIMoveRequest"));
	}
	return Z_Registration_Info_UScriptStruct_AIMoveRequest.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIMoveRequest>()
{
	return FAIMoveRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIMoveRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GoalActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMoveRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIMoveRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor_MetaData[] = {
		{ "Comment", "/** move goal: actor */" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "ToolTip", "move goal: actor" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIMoveRequest, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIMoveRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewProp_GoalActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIMoveRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIMoveRequest",
		sizeof(FAIMoveRequest),
		alignof(FAIMoveRequest),
		Z_Construct_UScriptStruct_FAIMoveRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIMoveRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_AIMoveRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIMoveRequest.InnerSingleton, Z_Construct_UScriptStruct_FAIMoveRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIMoveRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenericAICheck;
	static UEnum* EGenericAICheck_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EGenericAICheck, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EGenericAICheck"));
		}
		return Z_Registration_Info_UEnum_EGenericAICheck.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EGenericAICheck>()
	{
		return EGenericAICheck_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EGenericAICheck_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::Enumerators[] = {
		{ "EGenericAICheck::Less", (int64)EGenericAICheck::Less },
		{ "EGenericAICheck::LessOrEqual", (int64)EGenericAICheck::LessOrEqual },
		{ "EGenericAICheck::Equal", (int64)EGenericAICheck::Equal },
		{ "EGenericAICheck::NotEqual", (int64)EGenericAICheck::NotEqual },
		{ "EGenericAICheck::GreaterOrEqual", (int64)EGenericAICheck::GreaterOrEqual },
		{ "EGenericAICheck::Greater", (int64)EGenericAICheck::Greater },
		{ "EGenericAICheck::IsTrue", (int64)EGenericAICheck::IsTrue },
		{ "EGenericAICheck::MAX", (int64)EGenericAICheck::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::Enum_MetaDataParams[] = {
		{ "Equal.Name", "EGenericAICheck::Equal" },
		{ "Greater.Name", "EGenericAICheck::Greater" },
		{ "GreaterOrEqual.Name", "EGenericAICheck::GreaterOrEqual" },
		{ "IsTrue.Name", "EGenericAICheck::IsTrue" },
		{ "Less.Name", "EGenericAICheck::Less" },
		{ "LessOrEqual.Name", "EGenericAICheck::LessOrEqual" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGenericAICheck::MAX" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
		{ "NotEqual.Name", "EGenericAICheck::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EGenericAICheck",
		"EGenericAICheck",
		Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EGenericAICheck()
	{
		if (!Z_Registration_Info_UEnum_EGenericAICheck.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenericAICheck.InnerSingleton, Z_Construct_UEnum_AIModule_EGenericAICheck_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenericAICheck.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntervalCountdown;
class UScriptStruct* FIntervalCountdown::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntervalCountdown.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntervalCountdown.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntervalCountdown, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("IntervalCountdown"));
	}
	return Z_Registration_Info_UScriptStruct_IntervalCountdown.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FIntervalCountdown>()
{
	return FIntervalCountdown::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntervalCountdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntervalCountdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntervalCountdown>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Classes/AITypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntervalCountdown, Interval), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewProp_Interval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntervalCountdown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewProp_Interval,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntervalCountdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"IntervalCountdown",
		sizeof(FIntervalCountdown),
		alignof(FIntervalCountdown),
		Z_Construct_UScriptStruct_FIntervalCountdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntervalCountdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntervalCountdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntervalCountdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntervalCountdown()
	{
		if (!Z_Registration_Info_UScriptStruct_IntervalCountdown.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntervalCountdown.InnerSingleton, Z_Construct_UScriptStruct_FIntervalCountdown_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntervalCountdown.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics::EnumInfo[] = {
		{ EAIOptionFlag_StaticEnum, TEXT("EAIOptionFlag"), &Z_Registration_Info_UEnum_EAIOptionFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1032567087U) },
		{ FAIDistanceType_StaticEnum, TEXT("FAIDistanceType"), &Z_Registration_Info_UEnum_FAIDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3902086490U) },
		{ EPawnActionAbortState_StaticEnum, TEXT("EPawnActionAbortState"), &Z_Registration_Info_UEnum_EPawnActionAbortState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1433804132U) },
		{ EPawnActionResult_StaticEnum, TEXT("EPawnActionResult"), &Z_Registration_Info_UEnum_EPawnActionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 960547352U) },
		{ EPawnActionEventType_StaticEnum, TEXT("EPawnActionEventType"), &Z_Registration_Info_UEnum_EPawnActionEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1248675398U) },
		{ EAIRequestPriority_StaticEnum, TEXT("EAIRequestPriority"), &Z_Registration_Info_UEnum_EAIRequestPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1603953104U) },
		{ EAILockSource_StaticEnum, TEXT("EAILockSource"), &Z_Registration_Info_UEnum_EAILockSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2361905610U) },
		{ EGenericAICheck_StaticEnum, TEXT("EGenericAICheck"), &Z_Registration_Info_UEnum_EGenericAICheck, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2315590199U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics::ScriptStructInfo[] = {
		{ FAIRequestID::StaticStruct, Z_Construct_UScriptStruct_FAIRequestID_Statics::NewStructOps, TEXT("AIRequestID"), &Z_Registration_Info_UScriptStruct_AIRequestID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIRequestID), 4070710876U) },
		{ FAIMoveRequest::StaticStruct, Z_Construct_UScriptStruct_FAIMoveRequest_Statics::NewStructOps, TEXT("AIMoveRequest"), &Z_Registration_Info_UScriptStruct_AIMoveRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIMoveRequest), 1768533556U) },
		{ FIntervalCountdown::StaticStruct, Z_Construct_UScriptStruct_FIntervalCountdown_Statics::NewStructOps, TEXT("IntervalCountdown"), &Z_Registration_Info_UScriptStruct_IntervalCountdown, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntervalCountdown), 1316774518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_3928185102(TEXT("/Script/AIModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
