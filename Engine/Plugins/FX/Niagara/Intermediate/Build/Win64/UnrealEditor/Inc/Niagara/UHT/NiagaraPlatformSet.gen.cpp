// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraPlatformSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPlatformSet() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState;
	static UEnum* ENiagaraPlatformSelectionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPlatformSelectionState"));
		}
		return Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSelectionState>()
	{
		return ENiagaraPlatformSelectionState_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::Enumerators[] = {
		{ "ENiagaraPlatformSelectionState::Default", (int64)ENiagaraPlatformSelectionState::Default },
		{ "ENiagaraPlatformSelectionState::Enabled", (int64)ENiagaraPlatformSelectionState::Enabled },
		{ "ENiagaraPlatformSelectionState::Disabled", (int64)ENiagaraPlatformSelectionState::Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "ENiagaraPlatformSelectionState::Default" },
		{ "Disabled.Comment", "/** This platform is explicitly disabled. */" },
		{ "Disabled.Name", "ENiagaraPlatformSelectionState::Disabled" },
		{ "Disabled.ToolTip", "This platform is explicitly disabled." },
		{ "Enabled.Comment", "/** Neither explicitly enabled or disabled, this platform is enabled or not based on other settings in the platform set. */" },
		{ "Enabled.Name", "ENiagaraPlatformSelectionState::Enabled" },
		{ "Enabled.ToolTip", "Neither explicitly enabled or disabled, this platform is enabled or not based on other settings in the platform set." },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraPlatformSelectionState",
		"ENiagaraPlatformSelectionState",
		Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraPlatformSelectionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry;
class UScriptStruct* FNiagaraDeviceProfileStateEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDeviceProfileStateEntry"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDeviceProfileStateEntry>()
{
	return FNiagaraDeviceProfileStateEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_QualityLevelMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetQualityLevelMask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SetQualityLevelMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDeviceProfileStateEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDeviceProfileStateEntry, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** The state of each set quality level. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The state of each set quality level." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask = { "QualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDeviceProfileStateEntry, QualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask_MetaData[] = {
		{ "Category", "Profile" },
		{ "Comment", "/** Which Effects Qualities are set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Which Effects Qualities are set." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask = { "SetQualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDeviceProfileStateEntry, SetQualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_QualityLevelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewProp_SetQualityLevelMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDeviceProfileStateEntry",
		sizeof(FNiagaraDeviceProfileStateEntry),
		alignof(FNiagaraDeviceProfileStateEntry),
		Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraPlatformSetState;
	static UEnum* ENiagaraPlatformSetState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPlatformSetState"));
		}
		return Z_Registration_Info_UEnum_ENiagaraPlatformSetState.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSetState>()
	{
		return ENiagaraPlatformSetState_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::Enumerators[] = {
		{ "ENiagaraPlatformSetState::Disabled", (int64)ENiagaraPlatformSetState::Disabled },
		{ "ENiagaraPlatformSetState::Enabled", (int64)ENiagaraPlatformSetState::Enabled },
		{ "ENiagaraPlatformSetState::Active", (int64)ENiagaraPlatformSetState::Active },
		{ "ENiagaraPlatformSetState::Unknown", (int64)ENiagaraPlatformSetState::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "//This device profile is enabled but not active.\n" },
		{ "Active.Name", "ENiagaraPlatformSetState::Active" },
		{ "Active.ToolTip", "This device profile is enabled but not active." },
		{ "Disabled.Name", "ENiagaraPlatformSetState::Disabled" },
		{ "Enabled.Comment", "//This platform set is disabled.\n" },
		{ "Enabled.Name", "ENiagaraPlatformSetState::Enabled" },
		{ "Enabled.ToolTip", "This platform set is disabled." },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "Unknown.Comment", "//This device profile is enabled and active now.\n" },
		{ "Unknown.Hidden", "" },
		{ "Unknown.Name", "ENiagaraPlatformSetState::Unknown" },
		{ "Unknown.ToolTip", "This device profile is enabled and active now." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraPlatformSetState",
		"ENiagaraPlatformSetState",
		Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPlatformSetState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraPlatformSetState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraPlatformSetState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraPlatformSetState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry;
class UScriptStruct* FNiagaraPlatformSetConflictEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetConflictEntry"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetConflictEntry>()
{
	return FNiagaraPlatformSetConflictEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetConflictEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetConflictEntry, ProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask_MetaData[] = {
		{ "Comment", "/** Mask of conflicting effects qualities for this profile. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Mask of conflicting effects qualities for this profile." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask = { "QualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetConflictEntry, QualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewProp_QualityLevelMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetConflictEntry",
		sizeof(FNiagaraPlatformSetConflictEntry),
		alignof(FNiagaraPlatformSetConflictEntry),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo;
class UScriptStruct* FNiagaraPlatformSetConflictInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetConflictInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetConflictInfo>()
{
	return FNiagaraPlatformSetConflictInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetAIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SetAIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetBIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SetBIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Conflicts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Conflicts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Conflicts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetConflictInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex_MetaData[] = {
		{ "Comment", "/** Index of the first conflicting set in the checked array. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Index of the first conflicting set in the checked array." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex = { "SetAIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetConflictInfo, SetAIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex_MetaData[] = {
		{ "Comment", "/** Index of the second conflicting set in the checked array. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Index of the second conflicting set in the checked array." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex = { "SetBIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetConflictInfo, SetBIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_Inner = { "Conflicts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry, METADATA_PARAMS(nullptr, 0) }; // 108920297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_MetaData[] = {
		{ "Comment", "/** Array of all conflicts between these sets. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Array of all conflicts between these sets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts = { "Conflicts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetConflictInfo, Conflicts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_MetaData)) }; // 108920297
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetAIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_SetBIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewProp_Conflicts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetConflictInfo",
		sizeof(FNiagaraPlatformSetConflictInfo),
		alignof(FNiagaraPlatformSetConflictInfo),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse;
	static UEnum* ENiagaraCVarConditionResponse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCVarConditionResponse"));
		}
		return Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCVarConditionResponse>()
	{
		return ENiagaraCVarConditionResponse_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::Enumerators[] = {
		{ "ENiagaraCVarConditionResponse::None", (int64)ENiagaraCVarConditionResponse::None },
		{ "ENiagaraCVarConditionResponse::Enable", (int64)ENiagaraCVarConditionResponse::Enable },
		{ "ENiagaraCVarConditionResponse::Disable", (int64)ENiagaraCVarConditionResponse::Disable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::Enum_MetaDataParams[] = {
		{ "Disable.Name", "ENiagaraCVarConditionResponse::Disable" },
		{ "Enable.Name", "ENiagaraCVarConditionResponse::Enable" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "None.Name", "ENiagaraCVarConditionResponse::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraCVarConditionResponse",
		"ENiagaraCVarConditionResponse",
		Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition;
class UScriptStruct* FNiagaraPlatformSetCVarCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetCVarCondition"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetCVarCondition>()
{
	return FNiagaraPlatformSetCVarCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVarName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CVarName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PassResponse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassResponse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PassResponse;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailResponse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailResponse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FailResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinInt_MetaData[];
#endif
		static void NewProp_bUseMinInt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxInt_MetaData[];
#endif
		static void NewProp_bUseMaxInt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinFloat_MetaData[];
#endif
		static void NewProp_bUseMinFloat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaxFloat_MetaData[];
#endif
		static void NewProp_bUseMaxFloat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaxFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Imposes a condition that a CVar must contain a set value or range of values for a platform set to be enabled. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Imposes a condition that a CVar must contain a set value or range of values for a platform set to be enabled." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetCVarCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** The name of the CVar we're testing the value of. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The name of the CVar we're testing the value of." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, CVarName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If this CVar condition passes, how should this affect the state of the Platform Set? */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If this CVar condition passes, how should this affect the state of the Platform Set?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse = { "PassResponse", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, PassResponse), Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse_MetaData)) }; // 3666264258
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If this CVar condition fails, how should this affect the state of the Platform Set? */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If this CVar condition fails, how should this affect the state of the Platform Set?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse = { "FailResponse", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, FailResponse), Z_Construct_UEnum_Niagara_ENiagaraCVarConditionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse_MetaData)) }; // 3666264258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** The value this CVar must contain for this platform set to be enabled. */" },
		{ "DisplayName", "Required Value" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The value this CVar must contain for this platform set to be enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is less than this minimum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Minumum Int For Enabled" },
		{ "EditCondition", "bUseMinInt" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is less than this minimum then the PlatformSet will not be enabled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt = { "MinInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MinInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Maximum Int For Enabled" },
		{ "EditCondition", "bUseMaxInt" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt = { "MaxInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MaxInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is less than this minimum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Minumum Float For Enabled" },
		{ "EditCondition", "bUseMinFloat" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is less than this minimum then the PlatformSet will not be enabled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat = { "MinFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MinFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled. */" },
		{ "DisplayName", "Maximum Float For Enabled" },
		{ "EditCondition", "bUseMaxFloat" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "If the value of the CVar is greater than this maximum then the PlatformSet will not be enabled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat = { "MaxFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetCVarCondition, MaxFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the minimum restriction for int CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the minimum restriction for int CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMinInt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt = { "bUseMinInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the maximum restriction for int CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the maximum restriction for int CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMaxInt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt = { "bUseMaxInt", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the minimum restriction for float CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the minimum restriction for float CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMinFloat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat = { "bUseMinFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_MetaData[] = {
		{ "Category", "CVar" },
		{ "Comment", "/** True if we should apply the maximum restriction for float CVars. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "True if we should apply the maximum restriction for float CVars." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_SetBit(void* Obj)
	{
		((FNiagaraPlatformSetCVarCondition*)Obj)->bUseMaxFloat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat = { "bUseMaxFloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraPlatformSetCVarCondition), &Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_CVarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_PassResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_FailResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MinFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_MaxFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMinFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewProp_bUseMaxFloat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetCVarCondition",
		sizeof(FNiagaraPlatformSetCVarCondition),
		alignof(FNiagaraPlatformSetCVarCondition),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode;
	static UEnum* ENiagaraDeviceProfileRedirectMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDeviceProfileRedirectMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDeviceProfileRedirectMode>()
	{
		return ENiagaraDeviceProfileRedirectMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::Enumerators[] = {
		{ "ENiagaraDeviceProfileRedirectMode::CVar", (int64)ENiagaraDeviceProfileRedirectMode::CVar },
		{ "ENiagaraDeviceProfileRedirectMode::DeviceProfile", (int64)ENiagaraDeviceProfileRedirectMode::DeviceProfile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::Enum_MetaDataParams[] = {
		{ "CVar.Comment", "/** Replace Device Profile Reference with a CVar Condition. */" },
		{ "CVar.Name", "ENiagaraDeviceProfileRedirectMode::CVar" },
		{ "CVar.ToolTip", "Replace Device Profile Reference with a CVar Condition." },
		{ "DeviceProfile.Comment", "/** Replace Device Profile Reference with a different Device Profile. */" },
		{ "DeviceProfile.Name", "ENiagaraDeviceProfileRedirectMode::DeviceProfile" },
		{ "DeviceProfile.ToolTip", "Replace Device Profile Reference with a different Device Profile." },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDeviceProfileRedirectMode",
		"ENiagaraDeviceProfileRedirectMode",
		Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect;
class UScriptStruct* FNiagaraPlatformSetRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSetRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSetRedirect>()
{
	return FNiagaraPlatformSetRedirect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProfileNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfileNames;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedirectProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RedirectProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVarConditionEnabled_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CVarConditionEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVarConditionDisabled_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CVarConditionDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nAllows us to replace a specific device profile usage condition in all NiagaraPlatformSets.\nHelpful when dealing with changes to device profile structure.\n*/" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Allows us to replace a specific device profile usage condition in all NiagaraPlatformSets.\nHelpful when dealing with changes to device profile structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSetRedirect>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames_Inner = { "ProfileNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames_MetaData[] = {
		{ "Category", "Redirect" },
		{ "Comment", "/** The names of any device profile entry that will apply this redirect. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "The names of any device profile entry that will apply this redirect." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames = { "ProfileNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetRedirect, ProfileNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Redirect" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetRedirect, Mode), Z_Construct_UEnum_Niagara_ENiagaraDeviceProfileRedirectMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode_MetaData)) }; // 1964785512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_RedirectProfileName_MetaData[] = {
		{ "Category", "Redirect" },
		{ "Comment", "/** When in Device Profile mode, the name of the device profile to redirect to. */" },
		{ "EditCondition", "Mode == ENiagaraDeviceProfileRedirectMode::DeviceProfile" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "When in Device Profile mode, the name of the device profile to redirect to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_RedirectProfileName = { "RedirectProfileName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetRedirect, RedirectProfileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_RedirectProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_RedirectProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionEnabled_MetaData[] = {
		{ "Category", "Redirect" },
		{ "Comment", "/** When in CVar mode, the CVar condition to replace this device profile entry with when the profile entry is in the Enabled state. */" },
		{ "EditCondition", "Mode == ENiagaraDeviceProfileRedirectMode::CVar" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "When in CVar mode, the CVar condition to replace this device profile entry with when the profile entry is in the Enabled state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionEnabled = { "CVarConditionEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetRedirect, CVarConditionEnabled), Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionEnabled_MetaData)) }; // 3580703199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionDisabled_MetaData[] = {
		{ "Category", "Redirect" },
		{ "Comment", "/** When in CVar mode, the CVar condition to replace this device profile entry with when the profile entry is in the Disabled state. */" },
		{ "EditCondition", "Mode == ENiagaraDeviceProfileRedirectMode::CVar" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "When in CVar mode, the CVar condition to replace this device profile entry with when the profile entry is in the Disabled state." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionDisabled = { "CVarConditionDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSetRedirect, CVarConditionDisabled), Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionDisabled_MetaData)) }; // 3580703199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_ProfileNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_RedirectProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewProp_CVarConditionDisabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSetRedirect",
		sizeof(FNiagaraPlatformSetRedirect),
		alignof(FNiagaraPlatformSetRedirect),
		Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPlatformSet;
class UScriptStruct* FNiagaraPlatformSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPlatformSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPlatformSet, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPlatformSet"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPlatformSet.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPlatformSet>()
{
	return FNiagaraPlatformSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMask;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceProfileStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceProfileStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceProfileStates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CVarConditions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVarConditions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CVarConditions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPlatformSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Mask defining which effects qualities this set matches. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Mask defining which effects qualities this set matches." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask = { "QualityLevelMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSet, QualityLevelMask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_Inner = { "DeviceProfileStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry, METADATA_PARAMS(nullptr, 0) }; // 1023554015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** States of specific device profiles we've set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "States of specific device profiles we've set." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates = { "DeviceProfileStates", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSet, DeviceProfileStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_MetaData)) }; // 1023554015
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_Inner = { "CVarConditions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition, METADATA_PARAMS(nullptr, 0) }; // 3580703199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Set of CVars values we require for this platform set to be enabled. If any of the linked CVars don't have the required values then this platform set will not be enabled. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPlatformSet.h" },
		{ "ToolTip", "Set of CVars values we require for this platform set to be enabled. If any of the linked CVars don't have the required values then this platform set will not be enabled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions = { "CVarConditions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPlatformSet, CVarConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_MetaData)) }; // 3580703199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_QualityLevelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_DeviceProfileStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewProp_CVarConditions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPlatformSet",
		sizeof(FNiagaraPlatformSet),
		alignof(FNiagaraPlatformSet),
		Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSet()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPlatformSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPlatformSet.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPlatformSet.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics::EnumInfo[] = {
		{ ENiagaraPlatformSelectionState_StaticEnum, TEXT("ENiagaraPlatformSelectionState"), &Z_Registration_Info_UEnum_ENiagaraPlatformSelectionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1125347259U) },
		{ ENiagaraPlatformSetState_StaticEnum, TEXT("ENiagaraPlatformSetState"), &Z_Registration_Info_UEnum_ENiagaraPlatformSetState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2441633427U) },
		{ ENiagaraCVarConditionResponse_StaticEnum, TEXT("ENiagaraCVarConditionResponse"), &Z_Registration_Info_UEnum_ENiagaraCVarConditionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3666264258U) },
		{ ENiagaraDeviceProfileRedirectMode_StaticEnum, TEXT("ENiagaraDeviceProfileRedirectMode"), &Z_Registration_Info_UEnum_ENiagaraDeviceProfileRedirectMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1964785512U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDeviceProfileStateEntry::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics::NewStructOps, TEXT("NiagaraDeviceProfileStateEntry"), &Z_Registration_Info_UScriptStruct_NiagaraDeviceProfileStateEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDeviceProfileStateEntry), 1023554015U) },
		{ FNiagaraPlatformSetConflictEntry::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics::NewStructOps, TEXT("NiagaraPlatformSetConflictEntry"), &Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPlatformSetConflictEntry), 108920297U) },
		{ FNiagaraPlatformSetConflictInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics::NewStructOps, TEXT("NiagaraPlatformSetConflictInfo"), &Z_Registration_Info_UScriptStruct_NiagaraPlatformSetConflictInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPlatformSetConflictInfo), 217302819U) },
		{ FNiagaraPlatformSetCVarCondition::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetCVarCondition_Statics::NewStructOps, TEXT("NiagaraPlatformSetCVarCondition"), &Z_Registration_Info_UScriptStruct_NiagaraPlatformSetCVarCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPlatformSetCVarCondition), 3580703199U) },
		{ FNiagaraPlatformSetRedirect::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect_Statics::NewStructOps, TEXT("NiagaraPlatformSetRedirect"), &Z_Registration_Info_UScriptStruct_NiagaraPlatformSetRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPlatformSetRedirect), 1639586480U) },
		{ FNiagaraPlatformSet::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics::NewStructOps, TEXT("NiagaraPlatformSet"), &Z_Registration_Info_UScriptStruct_NiagaraPlatformSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPlatformSet), 2116815752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_2855338494(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
