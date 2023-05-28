// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayActuationState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayActuationState() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_Moving();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_Standing();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationStateBase();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayActuationStateBase;
class UScriptStruct* FGameplayActuationStateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayActuationStateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayActuationStateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayActuationStateBase, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayActuationStateBase"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayActuationStateBase.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayActuationStateBase>()
{
	return FGameplayActuationStateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActuationName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActuationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavigationLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base struct for all actuation states */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Base struct for all actuation states" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayActuationStateBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_ActuationName_MetaData[] = {
		{ "Comment", "/** Name of the actuation the state describes. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Name of the actuation the state describes." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_ActuationName = { "ActuationName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationStateBase, ActuationName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_ActuationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_ActuationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_NavigationLocation_MetaData[] = {
		{ "Comment", "/** Nearest navigable location. For movement states that go outside the navigable area, this is the nearest nav location. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Nearest navigable location. For movement states that go outside the navigable area, this is the nearest nav location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_NavigationLocation = { "NavigationLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationStateBase, NavigationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_NavigationLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_NavigationLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_ActuationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewProp_NavigationLocation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayActuationStateBase",
		sizeof(FGameplayActuationStateBase),
		alignof(FGameplayActuationStateBase),
		Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationStateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayActuationStateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayActuationStateBase.InnerSingleton, Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayActuationStateBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation;
class UScriptStruct* FGameplayActuationPredictedLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayActuationPredictedLocation"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayActuationPredictedLocation>()
{
	return FGameplayActuationPredictedLocation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Information about a predicted future location */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Information about a predicted future location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayActuationPredictedLocation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "/** Location in world space */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Location in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationPredictedLocation, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "/** Heading direction at the location */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Heading direction at the location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationPredictedLocation, Direction), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "/** Predicted location time */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Predicted location time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationPredictedLocation, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Speed_MetaData[] = {
		{ "Comment", "/** Assumed speed at predicted location. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Assumed speed at predicted location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationPredictedLocation, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewProp_Speed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		nullptr,
		&NewStructOps,
		"GameplayActuationPredictedLocation",
		sizeof(FGameplayActuationPredictedLocation),
		alignof(FGameplayActuationPredictedLocation),
		Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation.InnerSingleton, Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayActuationState_Moving>() == std::is_polymorphic<FGameplayActuationStateBase>(), "USTRUCT FGameplayActuationState_Moving cannot be polymorphic unless super FGameplayActuationStateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving;
class UScriptStruct* FGameplayActuationState_Moving::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayActuationState_Moving, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayActuationState_Moving"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayActuationState_Moving>()
{
	return FGameplayActuationState_Moving::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prediction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Prediction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes movement state. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Describes movement state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayActuationState_Moving>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_HeadingDirection_MetaData[] = {
		{ "Comment", "/** Heading direction */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Heading direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_HeadingDirection = { "HeadingDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_Moving, HeadingDirection), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_HeadingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_HeadingDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_Prediction_MetaData[] = {
		{ "Comment", "/** Predicted future location */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Predicted future location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_Prediction = { "Prediction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayActuationState_Moving, Prediction), Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_Prediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_Prediction_MetaData)) }; // 1859029993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_HeadingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewProp_Prediction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayActuationStateBase,
		&NewStructOps,
		"GameplayActuationState_Moving",
		sizeof(FGameplayActuationState_Moving),
		alignof(FGameplayActuationState_Moving),
		Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_Moving()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving.InnerSingleton, Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayActuationState_Standing>() == std::is_polymorphic<FGameplayActuationState_Moving>(), "USTRUCT FGameplayActuationState_Standing cannot be polymorphic unless super FGameplayActuationState_Moving is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing;
class UScriptStruct* FGameplayActuationState_Standing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayActuationState_Standing, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayActuationState_Standing"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayActuationState_Standing>()
{
	return FGameplayActuationState_Standing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes movement state while standing. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Describes movement state while standing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayActuationState_Standing>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayActuationState_Moving,
		&NewStructOps,
		"GameplayActuationState_Standing",
		sizeof(FGameplayActuationState_Standing),
		alignof(FGameplayActuationState_Standing),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_Standing()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing.InnerSingleton, Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGameplayActuationState_MovingTransition>() == std::is_polymorphic<FGameplayActuationState_Moving>(), "USTRUCT FGameplayActuationState_MovingTransition cannot be polymorphic unless super FGameplayActuationState_Moving is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition;
class UScriptStruct* FGameplayActuationState_MovingTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition, (UObject*)Z_Construct_UPackage__Script_GameplayInteractionsModule(), TEXT("GameplayActuationState_MovingTransition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition.OuterSingleton;
}
template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<FGameplayActuationState_MovingTransition>()
{
	return FGameplayActuationState_MovingTransition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes movement state during movement transition. */" },
		{ "ModuleRelativePath", "Public/GameplayActuationState.h" },
		{ "ToolTip", "Describes movement state during movement transition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayActuationState_MovingTransition>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
		Z_Construct_UScriptStruct_FGameplayActuationState_Moving,
		&NewStructOps,
		"GameplayActuationState_MovingTransition",
		sizeof(FGameplayActuationState_MovingTransition),
		alignof(FGameplayActuationState_MovingTransition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationState_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationState_h_Statics::ScriptStructInfo[] = {
		{ FGameplayActuationStateBase::StaticStruct, Z_Construct_UScriptStruct_FGameplayActuationStateBase_Statics::NewStructOps, TEXT("GameplayActuationStateBase"), &Z_Registration_Info_UScriptStruct_GameplayActuationStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayActuationStateBase), 2289846403U) },
		{ FGameplayActuationPredictedLocation::StaticStruct, Z_Construct_UScriptStruct_FGameplayActuationPredictedLocation_Statics::NewStructOps, TEXT("GameplayActuationPredictedLocation"), &Z_Registration_Info_UScriptStruct_GameplayActuationPredictedLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayActuationPredictedLocation), 1859029993U) },
		{ FGameplayActuationState_Moving::StaticStruct, Z_Construct_UScriptStruct_FGameplayActuationState_Moving_Statics::NewStructOps, TEXT("GameplayActuationState_Moving"), &Z_Registration_Info_UScriptStruct_GameplayActuationState_Moving, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayActuationState_Moving), 171216008U) },
		{ FGameplayActuationState_Standing::StaticStruct, Z_Construct_UScriptStruct_FGameplayActuationState_Standing_Statics::NewStructOps, TEXT("GameplayActuationState_Standing"), &Z_Registration_Info_UScriptStruct_GameplayActuationState_Standing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayActuationState_Standing), 2204451109U) },
		{ FGameplayActuationState_MovingTransition::StaticStruct, Z_Construct_UScriptStruct_FGameplayActuationState_MovingTransition_Statics::NewStructOps, TEXT("GameplayActuationState_MovingTransition"), &Z_Registration_Info_UScriptStruct_GameplayActuationState_MovingTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayActuationState_MovingTransition), 1999062236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationState_h_1588147321(TEXT("/Script/GameplayInteractionsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayActuationState_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
