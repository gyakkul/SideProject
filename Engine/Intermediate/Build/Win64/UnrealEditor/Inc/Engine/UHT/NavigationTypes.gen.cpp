// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationOptionFlag;
	static UEnum* ENavigationOptionFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationOptionFlag, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationOptionFlag"));
		}
		return Z_Registration_Info_UEnum_ENavigationOptionFlag.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavigationOptionFlag::Type>()
	{
		return ENavigationOptionFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enumerators[] = {
		{ "ENavigationOptionFlag::Default", (int64)ENavigationOptionFlag::Default },
		{ "ENavigationOptionFlag::Enable", (int64)ENavigationOptionFlag::Enable },
		{ "ENavigationOptionFlag::Disable", (int64)ENavigationOptionFlag::Disable },
		{ "ENavigationOptionFlag::MAX", (int64)ENavigationOptionFlag::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "ENavigationOptionFlag::Default" },
		{ "Disable.Comment", "// UHT was complaining when tried to use True as value instead of Enable\n" },
		{ "Disable.DisplayName", "No" },
		{ "Disable.Name", "ENavigationOptionFlag::Disable" },
		{ "Disable.ToolTip", "UHT was complaining when tried to use True as value instead of Enable" },
		{ "Enable.DisplayName", "Yes" },
		{ "Enable.Name", "ENavigationOptionFlag::Enable" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ENavigationOptionFlag::MAX" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavigationOptionFlag",
		"ENavigationOptionFlag::Type",
		Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag()
	{
		if (!Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationOptionFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavigationOptionFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavDataGatheringMode;
	static UEnum* ENavDataGatheringMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavDataGatheringMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavDataGatheringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavDataGatheringMode"));
		}
		return Z_Registration_Info_UEnum_ENavDataGatheringMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringMode>()
	{
		return ENavDataGatheringMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enumerators[] = {
		{ "ENavDataGatheringMode::Default", (int64)ENavDataGatheringMode::Default },
		{ "ENavDataGatheringMode::Instant", (int64)ENavDataGatheringMode::Instant },
		{ "ENavDataGatheringMode::Lazy", (int64)ENavDataGatheringMode::Lazy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "ENavDataGatheringMode::Default" },
		{ "Instant.Name", "ENavDataGatheringMode::Instant" },
		{ "Lazy.Name", "ENavDataGatheringMode::Lazy" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavDataGatheringMode",
		"ENavDataGatheringMode",
		Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode()
	{
		if (!Z_Registration_Info_UEnum_ENavDataGatheringMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavDataGatheringMode.InnerSingleton, Z_Construct_UEnum_Engine_ENavDataGatheringMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavDataGatheringMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavDataGatheringModeConfig;
	static UEnum* ENavDataGatheringModeConfig_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavDataGatheringModeConfig"));
		}
		return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavDataGatheringModeConfig>()
	{
		return ENavDataGatheringModeConfig_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enumerators[] = {
		{ "ENavDataGatheringModeConfig::Invalid", (int64)ENavDataGatheringModeConfig::Invalid },
		{ "ENavDataGatheringModeConfig::Instant", (int64)ENavDataGatheringModeConfig::Instant },
		{ "ENavDataGatheringModeConfig::Lazy", (int64)ENavDataGatheringModeConfig::Lazy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enum_MetaDataParams[] = {
		{ "Instant.Name", "ENavDataGatheringModeConfig::Instant" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ENavDataGatheringModeConfig::Invalid" },
		{ "Lazy.Name", "ENavDataGatheringModeConfig::Lazy" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavDataGatheringModeConfig",
		"ENavDataGatheringModeConfig",
		Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig()
	{
		if (!Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton, Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavDataGatheringModeConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavPathEvent;
	static UEnum* ENavPathEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavPathEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavPathEvent"));
		}
		return Z_Registration_Info_UEnum_ENavPathEvent.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavPathEvent::Type>()
	{
		return ENavPathEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavPathEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enumerators[] = {
		{ "ENavPathEvent::Cleared", (int64)ENavPathEvent::Cleared },
		{ "ENavPathEvent::NewPath", (int64)ENavPathEvent::NewPath },
		{ "ENavPathEvent::UpdatedDueToGoalMoved", (int64)ENavPathEvent::UpdatedDueToGoalMoved },
		{ "ENavPathEvent::UpdatedDueToNavigationChanged", (int64)ENavPathEvent::UpdatedDueToNavigationChanged },
		{ "ENavPathEvent::Invalidated", (int64)ENavPathEvent::Invalidated },
		{ "ENavPathEvent::RePathFailed", (int64)ENavPathEvent::RePathFailed },
		{ "ENavPathEvent::MetaPathUpdate", (int64)ENavPathEvent::MetaPathUpdate },
		{ "ENavPathEvent::Custom", (int64)ENavPathEvent::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enum_MetaDataParams[] = {
		{ "Cleared.Name", "ENavPathEvent::Cleared" },
		{ "Custom.Name", "ENavPathEvent::Custom" },
		{ "Invalidated.Name", "ENavPathEvent::Invalidated" },
		{ "MetaPathUpdate.Name", "ENavPathEvent::MetaPathUpdate" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "NewPath.Name", "ENavPathEvent::NewPath" },
		{ "RePathFailed.Name", "ENavPathEvent::RePathFailed" },
		{ "UpdatedDueToGoalMoved.Name", "ENavPathEvent::UpdatedDueToGoalMoved" },
		{ "UpdatedDueToNavigationChanged.Name", "ENavPathEvent::UpdatedDueToNavigationChanged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavPathEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavPathEvent",
		"ENavPathEvent::Type",
		Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavPathEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavPathEvent()
	{
		if (!Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton, Z_Construct_UEnum_Engine_ENavPathEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavPathEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovementProperties;
class UScriptStruct* FMovementProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovementProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovementProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MovementProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MovementProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMovementProperties>()
{
	return FMovementProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovementProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCrouch_MetaData[];
#endif
		static void NewProp_bCanCrouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCrouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanWalk_MetaData[];
#endif
		static void NewProp_bCanWalk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWalk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanSwim_MetaData[];
#endif
		static void NewProp_bCanSwim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanSwim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanFly_MetaData[];
#endif
		static void NewProp_bCanFly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanFly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Movement capabilities, determining available movement options for Pawns and used by AI for reachability tests. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Movement capabilities, determining available movement options for Pawns and used by AI for reachability tests." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovementProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of crouching. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of crouching." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanCrouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch = { "bCanCrouch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of jumping. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of jumping." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of walking or moving on the ground. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of walking or moving on the ground." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanWalk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk = { "bCanWalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of swimming or moving through fluid volumes. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of swimming or moving through fluid volumes." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanSwim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim = { "bCanSwim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** If true, this Pawn is capable of flying. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "If true, this Pawn is capable of flying." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit(void* Obj)
	{
		((FMovementProperties*)Obj)->bCanFly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly = { "bCanFly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovementProperties), &Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanCrouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanWalk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanSwim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementProperties_Statics::NewProp_bCanFly,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MovementProperties",
		sizeof(FMovementProperties),
		alignof(FMovementProperties),
		Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovementProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_MovementProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovementProperties.InnerSingleton, Z_Construct_UScriptStruct_FMovementProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovementProperties.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNavAgentProperties>() == std::is_polymorphic<FMovementProperties>(), "USTRUCT FNavAgentProperties cannot be polymorphic unless super FMovementProperties is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavAgentProperties;
class UScriptStruct* FNavAgentProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavAgentProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavAgentProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAgentProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavAgentProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NavAgentProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAgentProperties>()
{
	return FNavAgentProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavAgentProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentStepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentStepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavWalkingSearchHeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NavWalkingSearchHeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredNavData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredNavData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Properties of representation of an 'agent' (or Pawn) used by AI navigation/pathfinding. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Properties of representation of an 'agent' (or Pawn) used by AI navigation/pathfinding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAgentProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Radius of the capsule used for navigation/pathfinding. */" },
		{ "DisplayName", "Nav Agent Radius" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Radius of the capsule used for navigation/pathfinding." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavAgentProperties, AgentRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Total height of the capsule used for navigation/pathfinding. */" },
		{ "DisplayName", "Nav Agent Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Total height of the capsule used for navigation/pathfinding." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight = { "AgentHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavAgentProperties, AgentHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Step height to use, or -1 for default value from navdata's config. */" },
		{ "DisplayName", "Nav Agent Step Height" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Step height to use, or -1 for default value from navdata's config." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight = { "AgentStepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavAgentProperties, AgentStepHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Scale factor to apply to height of bounds when searching for navmesh to project to when nav walking */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Scale factor to apply to height of bounds when searching for navmesh to project to when nav walking" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale = { "NavWalkingSearchHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavAgentProperties, NavWalkingSearchHeightScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData_MetaData[] = {
		{ "Category", "MovementProperties" },
		{ "Comment", "/** Type of navigation data used by agent, null means \"any\" */" },
		{ "MetaClass", "/Script/NavigationSystem.NavigationData" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Type of navigation data used by agent, null means \"any\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData = { "PreferredNavData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavAgentProperties, PreferredNavData), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_AgentStepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_NavWalkingSearchHeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewProp_PreferredNavData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAgentProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FMovementProperties,
		&NewStructOps,
		"NavAgentProperties",
		sizeof(FNavAgentProperties),
		alignof(FNavAgentProperties),
		Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAgentProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavAgentProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NavAgentProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavAgentProperties.InnerSingleton, Z_Construct_UScriptStruct_FNavAgentProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavAgentProperties.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNavDataConfig>() == std::is_polymorphic<FNavAgentProperties>(), "USTRUCT FNavDataConfig cannot be polymorphic unless super FNavAgentProperties is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavDataConfig;
class UScriptStruct* FNavDataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavDataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavDataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavDataConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavDataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NavDataConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavDataConfig>()
{
	return FNavDataConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavDataConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQueryExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultQueryExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NavigationDataClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NavDataClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavDataConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Internal/debug name of this agent */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Internal/debug name of this agent" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavDataConfig, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Color used to represent this agent in the editor and for debugging */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Color used to represent this agent in the editor and for debugging" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavDataConfig, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent_MetaData[] = {
		{ "Category", "Querying" },
		{ "Comment", "/** Rough size of this agent, used when projecting unto navigation mesh */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Rough size of this agent, used when projecting unto navigation mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent = { "DefaultQueryExtent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavDataConfig, DefaultQueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass = { "NavigationDataClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavDataConfig, NavigationDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Class to use when spawning navigation data instance */" },
		{ "MetaClass", "/Script/NavigationSystem.NavigationData" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "ToolTip", "Class to use when spawning navigation data instance" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass = { "NavDataClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavDataConfig, NavDataClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_DefaultQueryExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavigationDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewProp_NavDataClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavDataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNavAgentProperties,
		&NewStructOps,
		"NavDataConfig",
		sizeof(FNavDataConfig),
		alignof(FNavDataConfig),
		Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavDataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NavDataConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavDataConfig.InnerSingleton, Z_Construct_UScriptStruct_FNavDataConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavDataConfig.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationQueryResult;
	static UEnum* ENavigationQueryResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationQueryResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationQueryResult"));
		}
		return Z_Registration_Info_UEnum_ENavigationQueryResult.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavigationQueryResult::Type>()
	{
		return ENavigationQueryResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enumerators[] = {
		{ "ENavigationQueryResult::Invalid", (int64)ENavigationQueryResult::Invalid },
		{ "ENavigationQueryResult::Error", (int64)ENavigationQueryResult::Error },
		{ "ENavigationQueryResult::Fail", (int64)ENavigationQueryResult::Fail },
		{ "ENavigationQueryResult::Success", (int64)ENavigationQueryResult::Success },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "ENavigationQueryResult::Error" },
		{ "Fail.Name", "ENavigationQueryResult::Fail" },
		{ "Invalid.Name", "ENavigationQueryResult::Invalid" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationTypes.h" },
		{ "Success.Name", "ENavigationQueryResult::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavigationQueryResult",
		"ENavigationQueryResult::Type",
		Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult()
	{
		if (!Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationQueryResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavigationQueryResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::EnumInfo[] = {
		{ ENavigationOptionFlag_StaticEnum, TEXT("ENavigationOptionFlag"), &Z_Registration_Info_UEnum_ENavigationOptionFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 106111109U) },
		{ ENavDataGatheringMode_StaticEnum, TEXT("ENavDataGatheringMode"), &Z_Registration_Info_UEnum_ENavDataGatheringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4270589261U) },
		{ ENavDataGatheringModeConfig_StaticEnum, TEXT("ENavDataGatheringModeConfig"), &Z_Registration_Info_UEnum_ENavDataGatheringModeConfig, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 278082669U) },
		{ ENavPathEvent_StaticEnum, TEXT("ENavPathEvent"), &Z_Registration_Info_UEnum_ENavPathEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2492601347U) },
		{ ENavigationQueryResult_StaticEnum, TEXT("ENavigationQueryResult"), &Z_Registration_Info_UEnum_ENavigationQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2048118916U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::ScriptStructInfo[] = {
		{ FMovementProperties::StaticStruct, Z_Construct_UScriptStruct_FMovementProperties_Statics::NewStructOps, TEXT("MovementProperties"), &Z_Registration_Info_UScriptStruct_MovementProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementProperties), 3820037984U) },
		{ FNavAgentProperties::StaticStruct, Z_Construct_UScriptStruct_FNavAgentProperties_Statics::NewStructOps, TEXT("NavAgentProperties"), &Z_Registration_Info_UScriptStruct_NavAgentProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavAgentProperties), 54026142U) },
		{ FNavDataConfig::StaticStruct, Z_Construct_UScriptStruct_FNavDataConfig_Statics::NewStructOps, TEXT("NavDataConfig"), &Z_Registration_Info_UScriptStruct_NavDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavDataConfig), 3162828895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_3615430921(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
