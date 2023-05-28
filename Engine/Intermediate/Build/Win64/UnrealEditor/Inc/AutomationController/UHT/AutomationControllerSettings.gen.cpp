// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationControllerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationControllerSettings() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings();
	AUTOMATIONCONTROLLER_API UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilter();
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestFilter;
class UScriptStruct* FAutomatedTestFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestFilter, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestFilter"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestFilter.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestFilter>()
{
	return FAutomatedTestFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Contains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchFromStart_MetaData[];
#endif
		static void NewProp_MatchFromStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchFromStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchFromEnd_MetaData[];
#endif
		static void NewProp_MatchFromEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MatchFromEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* Describes a filter for a test group.\n*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "* Describes a filter for a test group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains_MetaData[] = {
		{ "Comment", "/** String that the test must contain */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "String that the test must contain" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestFilter, Contains), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_MetaData[] = {
		{ "Comment", "/** If true start matching from the start of the string, else anywhere */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "If true start matching from the start of the string, else anywhere" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_SetBit(void* Obj)
	{
		((FAutomatedTestFilter*)Obj)->MatchFromStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart = { "MatchFromStart", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomatedTestFilter), &Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd_MetaData[] = {
		{ "Comment", "/** If true start matching from the end of the string, else anywhere */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "If true start matching from the end of the string, else anywhere" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd_SetBit(void* Obj)
	{
		((FAutomatedTestFilter*)Obj)->MatchFromEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd = { "MatchFromEnd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomatedTestFilter), &Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_Contains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewProp_MatchFromEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestFilter",
		sizeof(FAutomatedTestFilter),
		alignof(FAutomatedTestFilter),
		Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedTestFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestFilter.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedTestFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomatedTestGroup;
class UScriptStruct* FAutomatedTestGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomatedTestGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomatedTestGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestGroup, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomatedTestGroup"));
	}
	return Z_Registration_Info_UScriptStruct_AutomatedTestGroup.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomatedTestGroup>()
{
	return FAutomatedTestGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n *\x09""Describes a group of tests. Each group has a name and a set of filters that determine group membership\n */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "*     Describes a group of tests. Each group has a name and a set of filters that determine group membership" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomatedTestGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestGroup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomatedTestFilter, METADATA_PARAMS(nullptr, 0) }; // 4185283373
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomatedTestGroup, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_MetaData)) }; // 4185283373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewProp_Filters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomatedTestGroup",
		sizeof(FAutomatedTestGroup),
		alignof(FAutomatedTestGroup),
		Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomatedTestGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomatedTestGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomatedTestGroup.InnerSingleton, Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomatedTestGroup.InnerSingleton;
	}
	void UAutomationControllerSettings::StaticRegisterNativesUAutomationControllerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationControllerSettings);
	UClass* Z_Construct_UClass_UAutomationControllerSettings_NoRegister()
	{
		return UAutomationControllerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationControllerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Groups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Groups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Groups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressLogErrors_MetaData[];
#endif
		static void NewProp_bSuppressLogErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressLogErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressLogWarnings_MetaData[];
#endif
		static void NewProp_bSuppressLogWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressLogWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bElevateLogWarningsToErrors_MetaData[];
#endif
		static void NewProp_bElevateLogWarningsToErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bElevateLogWarningsToErrors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SuppressedLogCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuppressedLogCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuppressedLogCategories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPIEOpen_MetaData[];
#endif
		static void NewProp_bKeepPIEOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPIEOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTreatLogWarningsAsTestErrors_MetaData[];
#endif
		static void NewProp_bTreatLogWarningsAsTestErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatLogWarningsAsTestErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckTestIntervalSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckTestIntervalSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInstanceLostTimerSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameInstanceLostTimerSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TelemetryDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TelemetryDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetTelemetryStorageOnNewSession_MetaData[];
#endif
		static void NewProp_bResetTelemetryStorageOnNewSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetTelemetryStorageOnNewSession;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationControllerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "AutomationControllerSettings.h" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_Inner = { "Groups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomatedTestGroup, METADATA_PARAMS(nullptr, 0) }; // 43462910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_MetaData[] = {
		{ "Comment", "/** List of user-defined test groups */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "List of user-defined test groups" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups = { "Groups", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationControllerSettings, Groups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_MetaData)) }; // 43462910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_MetaData[] = {
		{ "Comment", "/** Whether to suppress log from test results (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to suppress log from test results (default=false)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bSuppressLogErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors = { "bSuppressLogErrors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_MetaData[] = {
		{ "Comment", "/** Whether to suppress log warnings from test results (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to suppress log warnings from test results (default=false)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bSuppressLogWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings = { "bSuppressLogWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_MetaData[] = {
		{ "Comment", "/** Whether to treat log warnings as log errors (default=true) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to treat log warnings as log errors (default=true)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bElevateLogWarningsToErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors = { "bElevateLogWarningsToErrors", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_Inner = { "SuppressedLogCategories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_MetaData[] = {
		{ "Comment", "/** Log categories where warnings/errors will not affect the result of tests. A finer-grained way of preventing rogue systems from leading to test warnings/errors */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Log categories where warnings/errors will not affect the result of tests. A finer-grained way of preventing rogue systems from leading to test warnings/errors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories = { "SuppressedLogCategories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationControllerSettings, SuppressedLogCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_MetaData[] = {
		{ "Comment", "/** Whether to keep the PIE Open in the editor at the end of a test pass (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to keep the PIE Open in the editor at the end of a test pass (default=false)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bKeepPIEOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen = { "bKeepPIEOpen", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_MetaData[] = {
		{ "Comment", "/** Whether to treat log warnings as test errors (default=true) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use bElevateLogWarningsToErrors instead." },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to treat log warnings as test errors (default=true)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bTreatLogWarningsAsTestErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors = { "bTreatLogWarningsAsTestErrors", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds_MetaData[] = {
		{ "Comment", "/** How long to wait between test updates (default=1sec)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "How long to wait between test updates (default=1sec)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds = { "CheckTestIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationControllerSettings, CheckTestIntervalSeconds), METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds_MetaData[] = {
		{ "Comment", "/** The maximum response wait time for detecting a lost game instance (default=300sec)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "The maximum response wait time for detecting a lost game instance (default=300sec)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds = { "GameInstanceLostTimerSeconds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationControllerSettings, GameInstanceLostTimerSeconds), METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory_MetaData[] = {
		{ "Comment", "/** Path to where telemetry files are saved (default=<project>/Saved/Automation/Telemetry/)*/" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Path to where telemetry files are saved (default=<project>/Saved/Automation/Telemetry/)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory = { "TelemetryDirectory", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationControllerSettings, TelemetryDirectory), METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_MetaData[] = {
		{ "Comment", "/** Whether to reset data stored in telemetry file (default=false) */" },
		{ "ModuleRelativePath", "Public/AutomationControllerSettings.h" },
		{ "ToolTip", "Whether to reset data stored in telemetry file (default=false)" },
	};
#endif
	void Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_SetBit(void* Obj)
	{
		((UAutomationControllerSettings*)Obj)->bResetTelemetryStorageOnNewSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession = { "bResetTelemetryStorageOnNewSession", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationControllerSettings), &Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_Groups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bSuppressLogWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bElevateLogWarningsToErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_SuppressedLogCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bKeepPIEOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bTreatLogWarningsAsTestErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_CheckTestIntervalSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_GameInstanceLostTimerSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_TelemetryDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationControllerSettings_Statics::NewProp_bResetTelemetryStorageOnNewSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationControllerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationControllerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams = {
		&UAutomationControllerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationControllerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationControllerSettings()
	{
		if (!Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton, Z_Construct_UClass_UAutomationControllerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationControllerSettings.OuterSingleton;
	}
	template<> AUTOMATIONCONTROLLER_API UClass* StaticClass<UAutomationControllerSettings>()
	{
		return UAutomationControllerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationControllerSettings);
	UAutomationControllerSettings::~UAutomationControllerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ScriptStructInfo[] = {
		{ FAutomatedTestFilter::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics::NewStructOps, TEXT("AutomatedTestFilter"), &Z_Registration_Info_UScriptStruct_AutomatedTestFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestFilter), 4185283373U) },
		{ FAutomatedTestGroup::StaticStruct, Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics::NewStructOps, TEXT("AutomatedTestGroup"), &Z_Registration_Info_UScriptStruct_AutomatedTestGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomatedTestGroup), 43462910U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationControllerSettings, UAutomationControllerSettings::StaticClass, TEXT("UAutomationControllerSettings"), &Z_Registration_Info_UClass_UAutomationControllerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationControllerSettings), 1654726261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_1234235079(TEXT("/Script/AutomationController"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
