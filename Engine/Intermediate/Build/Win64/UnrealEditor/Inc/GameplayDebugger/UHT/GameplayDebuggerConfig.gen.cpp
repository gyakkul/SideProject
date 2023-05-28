// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayDebuggerConfig.h"
#include "InputCoreTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayDebuggerConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerConfig();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerUserSettings();
	GAMEPLAYDEBUGGER_API UClass* Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister();
	GAMEPLAYDEBUGGER_API UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig();
	GAMEPLAYDEBUGGER_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_GameplayDebugger();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode;
	static UEnum* EGameplayDebuggerOverrideMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("EGameplayDebuggerOverrideMode"));
		}
		return Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UEnum* StaticEnum<EGameplayDebuggerOverrideMode>()
	{
		return EGameplayDebuggerOverrideMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::Enumerators[] = {
		{ "EGameplayDebuggerOverrideMode::Enable", (int64)EGameplayDebuggerOverrideMode::Enable },
		{ "EGameplayDebuggerOverrideMode::Disable", (int64)EGameplayDebuggerOverrideMode::Disable },
		{ "EGameplayDebuggerOverrideMode::UseDefault", (int64)EGameplayDebuggerOverrideMode::UseDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::Enum_MetaDataParams[] = {
		{ "Disable.Name", "EGameplayDebuggerOverrideMode::Disable" },
		{ "Enable.Name", "EGameplayDebuggerOverrideMode::Enable" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "UseDefault.Name", "EGameplayDebuggerOverrideMode::UseDefault" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		"EGameplayDebuggerOverrideMode",
		"EGameplayDebuggerOverrideMode",
		Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode()
	{
		if (!Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.InnerSingleton, Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig;
class UScriptStruct* FGameplayDebuggerInputConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerInputConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerInputConfig>()
{
	return FGameplayDebuggerInputConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConfigName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModShift_MetaData[];
#endif
		static void NewProp_bModShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModCtrl_MetaData[];
#endif
		static void NewProp_bModCtrl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModCtrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModAlt_MetaData[];
#endif
		static void NewProp_bModAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bModCmd_MetaData[];
#endif
		static void NewProp_bModCmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bModCmd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerInputConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName = { "ConfigName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerInputConfig, ConfigName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerInputConfig, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift = { "bModShift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModCtrl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl = { "bModCtrl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt = { "bModAlt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_SetBit(void* Obj)
	{
		((FGameplayDebuggerInputConfig*)Obj)->bModCmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd = { "bModCmd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayDebuggerInputConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_ConfigName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCtrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewProp_bModCmd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerInputConfig",
		sizeof(FGameplayDebuggerInputConfig),
		alignof(FGameplayDebuggerInputConfig),
		Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig;
class UScriptStruct* FGameplayDebuggerCategoryConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerCategoryConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerCategoryConfig>()
{
	return FGameplayDebuggerCategoryConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIdx;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveInGame_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveInGame_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveInGame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveInSimulate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveInSimulate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveInSimulate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hidden_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hidden_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSlotIdx_MetaData[];
#endif
		static void NewProp_bOverrideSlotIdx_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSlotIdx;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandlers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputHandlers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerCategoryConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "9" },
		{ "ClampMin", "-1" },
		{ "EditCondition", "bOverrideSlotIdx" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "UIMax", "9" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx = { "SlotIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, SlotIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame = { "ActiveInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, ActiveInGame), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_MetaData)) }; // 2263151714
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate = { "ActiveInSimulate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, ActiveInSimulate), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_MetaData)) }; // 2263151714
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden = { "Hidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, Hidden), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_MetaData)) }; // 2263151714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_SetBit(void* Obj)
	{
		((FGameplayDebuggerCategoryConfig*)Obj)->bOverrideSlotIdx = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx = { "bOverrideSlotIdx", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FGameplayDebuggerCategoryConfig), &Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_Inner = { "InputHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, METADATA_PARAMS(nullptr, 0) }; // 998408223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers = { "InputHandlers", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerCategoryConfig, InputHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_MetaData)) }; // 998408223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_SlotIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_ActiveInSimulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_Hidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_bOverrideSlotIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewProp_InputHandlers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerCategoryConfig",
		sizeof(FGameplayDebuggerCategoryConfig),
		alignof(FGameplayDebuggerCategoryConfig),
		Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig;
class UScriptStruct* FGameplayDebuggerExtensionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig, (UObject*)Z_Construct_UPackage__Script_GameplayDebugger(), TEXT("GameplayDebuggerExtensionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig.OuterSingleton;
}
template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<FGameplayDebuggerExtensionConfig>()
{
	return FGameplayDebuggerExtensionConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtensionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UseExtension_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseExtension_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UseExtension;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandlers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputHandlers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputHandlers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayDebuggerExtensionConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName = { "ExtensionName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerExtensionConfig, ExtensionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension = { "UseExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerExtensionConfig, UseExtension), Z_Construct_UEnum_GameplayDebugger_EGameplayDebuggerOverrideMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_MetaData)) }; // 2263151714
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_Inner = { "InputHandlers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig, METADATA_PARAMS(nullptr, 0) }; // 998408223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers = { "InputHandlers", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayDebuggerExtensionConfig, InputHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_MetaData)) }; // 998408223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_ExtensionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_UseExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewProp_InputHandlers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
		nullptr,
		&NewStructOps,
		"GameplayDebuggerExtensionConfig",
		sizeof(FGameplayDebuggerExtensionConfig),
		alignof(FGameplayDebuggerExtensionConfig),
		Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig.InnerSingleton;
	}
	void UGameplayDebuggerConfig::StaticRegisterNativesUGameplayDebuggerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayDebuggerConfig);
	UClass* Z_Construct_UClass_UGameplayDebuggerConfig_NoRegister()
	{
		return UGameplayDebuggerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryRowNextKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryRowNextKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryRowPrevKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategoryRowPrevKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot5_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot6_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot7_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot8_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategorySlot9_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategorySlot9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingTop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugCanvasPaddingBottom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugCanvasPaddingBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugCanvasEnableTextShadow_MetaData[];
#endif
		static void NewProp_bDebugCanvasEnableTextShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugCanvasEnableTextShadow;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayDebuggerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayDebuggerConfig.h" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** key used to activate visual debugger tool */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "key used to activate visual debugger tool" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey = { "ActivationKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, ActivationKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select next category row */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select next category row" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey = { "CategoryRowNextKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategoryRowNextKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select previous category row */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select previous category row" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey = { "CategoryRowPrevKey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategoryRowPrevKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 0 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0 = { "CategorySlot0", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot0), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 1 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1 = { "CategorySlot1", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot1), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 2 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 2" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2 = { "CategorySlot2", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot2), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 3 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 3" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3 = { "CategorySlot3", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot3), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 4 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 4" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4 = { "CategorySlot4", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot4), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 5 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 5" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5 = { "CategorySlot5", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot5), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 6 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 6" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6 = { "CategorySlot6", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot6), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 7 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 7" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7 = { "CategorySlot7", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot7), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 8 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 8" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8 = { "CategorySlot8", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot8), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** select category slot 9 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "select category slot 9" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9 = { "CategorySlot9", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, CategorySlot9), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** additional canvas padding: left */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: left" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft = { "DebugCanvasPaddingLeft", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingLeft), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** additional canvas padding: right */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: right" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight = { "DebugCanvasPaddingRight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingRight), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** additional canvas padding: top */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: top" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop = { "DebugCanvasPaddingTop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingTop), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** additional canvas padding: bottom */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "additional canvas padding: bottom" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom = { "DebugCanvasPaddingBottom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, DebugCanvasPaddingBottom), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** enable text shadow by default */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "enable text shadow by default" },
	};
#endif
	void Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow_SetBit(void* Obj)
	{
		((UGameplayDebuggerConfig*)Obj)->bDebugCanvasEnableTextShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow = { "bDebugCanvasEnableTextShadow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayDebuggerConfig), &Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig, METADATA_PARAMS(nullptr, 0) }; // 4074807195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "AddOns" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_MetaData)) }; // 4074807195
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig, METADATA_PARAMS(nullptr, 0) }; // 3788524914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_MetaData[] = {
		{ "Category", "AddOns" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000004041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerConfig, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_MetaData)) }; // 3788524914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayDebuggerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_ActivationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowNextKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategoryRowPrevKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_CategorySlot9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_DebugCanvasPaddingBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_bDebugCanvasEnableTextShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerConfig_Statics::NewProp_Extensions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayDebuggerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerConfig_Statics::ClassParams = {
		&UGameplayDebuggerConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayDebuggerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayDebuggerConfig()
	{
		if (!Z_Registration_Info_UClass_UGameplayDebuggerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayDebuggerConfig.OuterSingleton, Z_Construct_UClass_UGameplayDebuggerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayDebuggerConfig.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<UGameplayDebuggerConfig>()
	{
		return UGameplayDebuggerConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerConfig);
	UGameplayDebuggerConfig::~UGameplayDebuggerConfig() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayDebuggerConfig)
	void UGameplayDebuggerUserSettings::StaticRegisterNativesUGameplayDebuggerUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayDebuggerUserSettings);
	UClass* Z_Construct_UClass_UGameplayDebuggerUserSettings_NoRegister()
	{
		return UGameplayDebuggerUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGameplayDebuggerInEditor_MetaData[];
#endif
		static void NewProp_bEnableGameplayDebuggerInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGameplayDebuggerInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Gameplay Debugger" },
		{ "IncludePath", "GameplayDebuggerConfig.h" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor_MetaData[] = {
		{ "Category", "GameplayDebugger" },
		{ "Comment", "/** Controls whether GameplayDebugger will be available in pure editor mode.\n\x09 *  @Note that you need to reload the map for the changes to this property to take effect */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "Controls whether GameplayDebugger will be available in pure editor mode.\n@Note that you need to reload the map for the changes to this property to take effect" },
	};
#endif
	void Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor_SetBit(void* Obj)
	{
		((UGameplayDebuggerUserSettings*)Obj)->bEnableGameplayDebuggerInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor = { "bEnableGameplayDebuggerInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGameplayDebuggerUserSettings), &Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewDistance_MetaData[] = {
		{ "Category", "GameplayDebugger" },
		{ "Comment", "/**\n\x09 * Distance from view location under which actors can be selected\n\x09 * This distance can also be used by some categories to apply culling.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "Distance from view location under which actors can be selected\nThis distance can also be used by some categories to apply culling." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewDistance = { "MaxViewDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerUserSettings, MaxViewDistance), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewAngle_MetaData[] = {
		{ "Category", "GameplayDebugger" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Angle from view direction under which actors can be selected\n\x09 * This angle can also be used by some categories to apply culling.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "Angle from view direction under which actors can be selected\nThis angle can also be used by some categories to apply culling." },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewAngle = { "MaxViewAngle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerUserSettings, MaxViewAngle), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "GameplayDebugger" },
		{ "Comment", "/** Font Size used by Gameplay Debugger */" },
		{ "ModuleRelativePath", "Public/GameplayDebuggerConfig.h" },
		{ "ToolTip", "Font Size used by Gameplay Debugger" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayDebuggerUserSettings, FontSize), METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_FontSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_bEnableGameplayDebuggerInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_MaxViewAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::NewProp_FontSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayDebuggerUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::ClassParams = {
		&UGameplayDebuggerUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayDebuggerUserSettings()
	{
		if (!Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.OuterSingleton, Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayDebuggerUserSettings.OuterSingleton;
	}
	template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<UGameplayDebuggerUserSettings>()
	{
		return UGameplayDebuggerUserSettings::StaticClass();
	}
	UGameplayDebuggerUserSettings::UGameplayDebuggerUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayDebuggerUserSettings);
	UGameplayDebuggerUserSettings::~UGameplayDebuggerUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::EnumInfo[] = {
		{ EGameplayDebuggerOverrideMode_StaticEnum, TEXT("EGameplayDebuggerOverrideMode"), &Z_Registration_Info_UEnum_EGameplayDebuggerOverrideMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2263151714U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::ScriptStructInfo[] = {
		{ FGameplayDebuggerInputConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics::NewStructOps, TEXT("GameplayDebuggerInputConfig"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerInputConfig), 998408223U) },
		{ FGameplayDebuggerCategoryConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics::NewStructOps, TEXT("GameplayDebuggerCategoryConfig"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerCategoryConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerCategoryConfig), 4074807195U) },
		{ FGameplayDebuggerExtensionConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics::NewStructOps, TEXT("GameplayDebuggerExtensionConfig"), &Z_Registration_Info_UScriptStruct_GameplayDebuggerExtensionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayDebuggerExtensionConfig), 3788524914U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayDebuggerConfig, UGameplayDebuggerConfig::StaticClass, TEXT("UGameplayDebuggerConfig"), &Z_Registration_Info_UClass_UGameplayDebuggerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayDebuggerConfig), 99822057U) },
		{ Z_Construct_UClass_UGameplayDebuggerUserSettings, UGameplayDebuggerUserSettings::StaticClass, TEXT("UGameplayDebuggerUserSettings"), &Z_Registration_Info_UClass_UGameplayDebuggerUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayDebuggerUserSettings), 2721809452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_1169026075(TEXT("/Script/GameplayDebugger"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
