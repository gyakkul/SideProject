// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraOutliner.h"
#include "../Public/NiagaraDebuggerCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraOutliner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraOutliner();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraOutliner_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes;
	static UEnum* ENiagaraOutlinerViewModes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraOutlinerViewModes"));
		}
		return Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraOutlinerViewModes>()
	{
		return ENiagaraOutlinerViewModes_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::Enumerators[] = {
		{ "ENiagaraOutlinerViewModes::State", (int64)ENiagaraOutlinerViewModes::State },
		{ "ENiagaraOutlinerViewModes::Performance", (int64)ENiagaraOutlinerViewModes::Performance },
		{ "ENiagaraOutlinerViewModes::Debug", (int64)ENiagaraOutlinerViewModes::Debug },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::Enum_MetaDataParams[] = {
		{ "Debug.Comment", "/** Outliner displays debugging controls for each item. */" },
		{ "Debug.Name", "ENiagaraOutlinerViewModes::Debug" },
		{ "Debug.ToolTip", "Outliner displays debugging controls for each item." },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "Performance.Comment", "/** Outliner displays performance data for each item. */" },
		{ "Performance.Name", "ENiagaraOutlinerViewModes::Performance" },
		{ "Performance.ToolTip", "Outliner displays performance data for each item." },
		{ "State.Comment", "/** Outliner displays the main state data for each item. */" },
		{ "State.Name", "ENiagaraOutlinerViewModes::State" },
		{ "State.ToolTip", "Outliner displays the main state data for each item." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraOutlinerViewModes",
		"ENiagaraOutlinerViewModes",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode;
	static UEnum* ENiagaraOutlinerSortMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraOutlinerSortMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraOutlinerSortMode>()
	{
		return ENiagaraOutlinerSortMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::Enumerators[] = {
		{ "ENiagaraOutlinerSortMode::Auto", (int64)ENiagaraOutlinerSortMode::Auto },
		{ "ENiagaraOutlinerSortMode::FilterMatches", (int64)ENiagaraOutlinerSortMode::FilterMatches },
		{ "ENiagaraOutlinerSortMode::AverageTime", (int64)ENiagaraOutlinerSortMode::AverageTime },
		{ "ENiagaraOutlinerSortMode::MaxTime", (int64)ENiagaraOutlinerSortMode::MaxTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Context dependent default sorting. In State view mode this will sort by filter matches. In Performance mode this will sort by average time. */" },
		{ "Auto.Name", "ENiagaraOutlinerSortMode::Auto" },
		{ "Auto.ToolTip", "Context dependent default sorting. In State view mode this will sort by filter matches. In Performance mode this will sort by average time." },
		{ "AverageTime.Comment", "/** Sort by the average game thread time. */" },
		{ "AverageTime.Name", "ENiagaraOutlinerSortMode::AverageTime" },
		{ "AverageTime.ToolTip", "Sort by the average game thread time." },
		{ "FilterMatches.Comment", "/** Sort by the number of items matching the current filters. */" },
		{ "FilterMatches.Name", "ENiagaraOutlinerSortMode::FilterMatches" },
		{ "FilterMatches.ToolTip", "Sort by the number of items matching the current filters." },
		{ "MaxTime.Comment", "/** Sort by the maximum game thread time. */" },
		{ "MaxTime.Name", "ENiagaraOutlinerSortMode::MaxTime" },
		{ "MaxTime.ToolTip", "Sort by the maximum game thread time." },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraOutlinerSortMode",
		"ENiagaraOutlinerSortMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits;
	static UEnum* ENiagaraOutlinerTimeUnits_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraOutlinerTimeUnits"));
		}
		return Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraOutlinerTimeUnits>()
	{
		return ENiagaraOutlinerTimeUnits_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::Enumerators[] = {
		{ "ENiagaraOutlinerTimeUnits::Microseconds", (int64)ENiagaraOutlinerTimeUnits::Microseconds },
		{ "ENiagaraOutlinerTimeUnits::Milliseconds", (int64)ENiagaraOutlinerTimeUnits::Milliseconds },
		{ "ENiagaraOutlinerTimeUnits::Seconds", (int64)ENiagaraOutlinerTimeUnits::Seconds },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::Enum_MetaDataParams[] = {
		{ "Microseconds.DisplayName", "us" },
		{ "Microseconds.Name", "ENiagaraOutlinerTimeUnits::Microseconds" },
		{ "Microseconds.ToolTip", "Microseconds" },
		{ "Milliseconds.DisplayName", "ms" },
		{ "Milliseconds.Name", "ENiagaraOutlinerTimeUnits::Milliseconds" },
		{ "Milliseconds.ToolTip", "Milliseconds" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "Seconds.DisplayName", "s" },
		{ "Seconds.Name", "ENiagaraOutlinerTimeUnits::Seconds" },
		{ "Seconds.ToolTip", "Seconds" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraOutlinerTimeUnits",
		"ENiagaraOutlinerTimeUnits",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings;
class UScriptStruct* FNiagaraOutlinerFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerFilterSettings>()
{
	return FNiagaraOutlinerFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterBySystemExecutionState_MetaData[];
#endif
		static void NewProp_bFilterBySystemExecutionState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterBySystemExecutionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterByEmitterExecutionState_MetaData[];
#endif
		static void NewProp_bFilterByEmitterExecutionState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterByEmitterExecutionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterByEmitterSimTarget_MetaData[];
#endif
		static void NewProp_bFilterByEmitterSimTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterByEmitterSimTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterBySystemCullState_MetaData[];
#endif
		static void NewProp_bFilterBySystemCullState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterBySystemCullState;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SystemExecutionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemExecutionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SystemExecutionState;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_EmitterExecutionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterExecutionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmitterExecutionState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EmitterSimTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterSimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EmitterSimTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemCullState_MetaData[];
#endif
		static void NewProp_bSystemCullState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemCullState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** View settings used in the Niagara Outliner. */" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "View settings used in the Niagara Outliner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState_MetaData[] = {
		{ "Category", "Filters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState_SetBit(void* Obj)
	{
		((FNiagaraOutlinerFilterSettings*)Obj)->bFilterBySystemExecutionState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState = { "bFilterBySystemExecutionState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerFilterSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState_MetaData[] = {
		{ "Category", "Filters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState_SetBit(void* Obj)
	{
		((FNiagaraOutlinerFilterSettings*)Obj)->bFilterByEmitterExecutionState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState = { "bFilterByEmitterExecutionState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerFilterSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget_MetaData[] = {
		{ "Category", "Filters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget_SetBit(void* Obj)
	{
		((FNiagaraOutlinerFilterSettings*)Obj)->bFilterByEmitterSimTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget = { "bFilterByEmitterSimTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerFilterSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState_MetaData[] = {
		{ "Category", "Filters" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState_SetBit(void* Obj)
	{
		((FNiagaraOutlinerFilterSettings*)Obj)->bFilterBySystemCullState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState = { "bFilterBySystemCullState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraOutlinerFilterSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Only show systems with the following execution state. */" },
		{ "EditCondition", "bFilterBySystemExecutionState" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "Only show systems with the following execution state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState = { "SystemExecutionState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerFilterSettings, SystemExecutionState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState_MetaData)) }; // 2418915668
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Only show emitters with the following execution state. */" },
		{ "EditCondition", "bFilterByEmitterExecutionState" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "Only show emitters with the following execution state." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState = { "EmitterExecutionState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerFilterSettings, EmitterExecutionState), Z_Construct_UEnum_Niagara_ENiagaraExecutionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState_MetaData)) }; // 2418915668
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Only show emitters with this SimTarget. */" },
		{ "EditCondition", "bFilterByEmitterSimTarget" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "Only show emitters with this SimTarget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget = { "EmitterSimTarget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerFilterSettings, EmitterSimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget_MetaData)) }; // 348263643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Only show system instances with this cull state. */" },
		{ "EditCondition", "bFilterBySystemCullState" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "Only show system instances with this cull state." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState_SetBit(void* Obj)
	{
		((FNiagaraOutlinerFilterSettings*)Obj)->bSystemCullState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState = { "bSystemCullState", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraOutlinerFilterSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemExecutionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterExecutionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterByEmitterSimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bFilterBySystemCullState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_SystemExecutionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterExecutionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_EmitterSimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewProp_bSystemCullState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerFilterSettings",
		sizeof(FNiagaraOutlinerFilterSettings),
		alignof(FNiagaraOutlinerFilterSettings),
		Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings;
class UScriptStruct* FNiagaraOutlinerViewSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraOutlinerViewSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraOutlinerViewSettings>()
{
	return FNiagaraOutlinerViewSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSortDescending_MetaData[];
#endif
		static void NewProp_bSortDescending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortDescending;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** View settings used in the Niagara Outliner. */" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "View settings used in the Niagara Outliner." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraOutlinerViewSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerViewSettings, ViewMode), Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerViewModes, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode_MetaData)) }; // 3380900604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_FilterSettings_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_FilterSettings = { "FilterSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerViewSettings, FilterSettings), Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_FilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_FilterSettings_MetaData)) }; // 3248104005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Whether to sort ascending or descending. */" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "Whether to sort ascending or descending." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending_SetBit(void* Obj)
	{
		((FNiagaraOutlinerViewSettings*)Obj)->bSortDescending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending = { "bSortDescending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraOutlinerViewSettings), &Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerViewSettings, SortMode), Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerSortMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode_MetaData)) }; // 481689702
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Units used to display time data in performance view mode. */" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
		{ "ToolTip", "Units used to display time data in performance view mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits = { "TimeUnits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraOutlinerViewSettings, TimeUnits), Z_Construct_UEnum_NiagaraEditor_ENiagaraOutlinerTimeUnits, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits_MetaData)) }; // 1689938653
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_FilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_bSortDescending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_SortMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewProp_TimeUnits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraOutlinerViewSettings",
		sizeof(FNiagaraOutlinerViewSettings),
		alignof(FNiagaraOutlinerViewSettings),
		Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings.InnerSingleton;
	}
	void UNiagaraOutliner::StaticRegisterNativesUNiagaraOutliner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraOutliner);
	UClass* Z_Construct_UClass_UNiagaraOutliner_NoRegister()
	{
		return UNiagaraOutliner::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraOutliner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemSimCaches_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SystemSimCaches_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemSimCaches_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SystemSimCaches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraOutliner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOutliner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraOutliner.h" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_CaptureSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_CaptureSettings = { "CaptureSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraOutliner, CaptureSettings), Z_Construct_UScriptStruct_FNiagaraOutlinerCaptureSettings, METADATA_PARAMS(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_CaptureSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_CaptureSettings_MetaData)) }; // 2712967502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_ViewSettings_MetaData[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_ViewSettings = { "ViewSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraOutliner, ViewSettings), Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings, METADATA_PARAMS(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_ViewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_ViewSettings_MetaData)) }; // 4105463514
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Outliner" },
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraOutliner, Data), Z_Construct_UScriptStruct_FNiagaraOutlinerData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_Data_MetaData)) }; // 320273720
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_ValueProp = { "SystemSimCaches", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UNiagaraSimCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_Key_KeyProp = { "SystemSimCaches_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraOutliner.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches = { "SystemSimCaches", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraOutliner, SystemSimCaches), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraOutliner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_CaptureSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_ViewSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOutliner_Statics::NewProp_SystemSimCaches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraOutliner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraOutliner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraOutliner_Statics::ClassParams = {
		&UNiagaraOutliner::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraOutliner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOutliner_Statics::PropPointers),
		0,
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraOutliner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOutliner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraOutliner()
	{
		if (!Z_Registration_Info_UClass_UNiagaraOutliner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraOutliner.OuterSingleton, Z_Construct_UClass_UNiagaraOutliner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraOutliner.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraOutliner>()
	{
		return UNiagaraOutliner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraOutliner);
	UNiagaraOutliner::~UNiagaraOutliner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::EnumInfo[] = {
		{ ENiagaraOutlinerViewModes_StaticEnum, TEXT("ENiagaraOutlinerViewModes"), &Z_Registration_Info_UEnum_ENiagaraOutlinerViewModes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3380900604U) },
		{ ENiagaraOutlinerSortMode_StaticEnum, TEXT("ENiagaraOutlinerSortMode"), &Z_Registration_Info_UEnum_ENiagaraOutlinerSortMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 481689702U) },
		{ ENiagaraOutlinerTimeUnits_StaticEnum, TEXT("ENiagaraOutlinerTimeUnits"), &Z_Registration_Info_UEnum_ENiagaraOutlinerTimeUnits, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1689938653U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraOutlinerFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerFilterSettings_Statics::NewStructOps, TEXT("NiagaraOutlinerFilterSettings"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerFilterSettings), 3248104005U) },
		{ FNiagaraOutlinerViewSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraOutlinerViewSettings_Statics::NewStructOps, TEXT("NiagaraOutlinerViewSettings"), &Z_Registration_Info_UScriptStruct_NiagaraOutlinerViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraOutlinerViewSettings), 4105463514U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraOutliner, UNiagaraOutliner::StaticClass, TEXT("UNiagaraOutliner"), &Z_Registration_Info_UClass_UNiagaraOutliner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraOutliner), 238348502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_879995143(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraOutliner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
