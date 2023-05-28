// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutomationTestExcludelist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationTestExcludelist() {}
// Cross Module References
	AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelist();
	AUTOMATIONTEST_API UClass* Z_Construct_UClass_UAutomationTestExcludelist_NoRegister();
	AUTOMATIONTEST_API UEnum* Z_Construct_UEnum_AutomationTest_ERHI_Flags();
	AUTOMATIONTEST_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry();
	AUTOMATIONTEST_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludeOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutomationTest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERHI_Flags;
	static UEnum* ERHI_Flags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERHI_Flags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERHI_Flags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AutomationTest_ERHI_Flags, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("ERHI_Flags"));
		}
		return Z_Registration_Info_UEnum_ERHI_Flags.OuterSingleton;
	}
	template<> AUTOMATIONTEST_API UEnum* StaticEnum<ERHI_Flags>()
	{
		return ERHI_Flags_StaticEnum();
	}
	struct Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::Enumerators[] = {
		{ "ERHI_Flags::DirectX11", (int64)ERHI_Flags::DirectX11 },
		{ "ERHI_Flags::DirectX12", (int64)ERHI_Flags::DirectX12 },
		{ "ERHI_Flags::Vulkan", (int64)ERHI_Flags::Vulkan },
		{ "ERHI_Flags::Metal", (int64)ERHI_Flags::Metal },
		{ "ERHI_Flags::NUM", (int64)ERHI_Flags::NUM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "DirectX11.DisplayName", "DirectX 11" },
		{ "DirectX11.Name", "ERHI_Flags::DirectX11" },
		{ "DirectX12.DisplayName", "DirectX 12" },
		{ "DirectX12.Name", "ERHI_Flags::DirectX12" },
		{ "Metal.DisplayName", "Metal" },
		{ "Metal.Name", "ERHI_Flags::Metal" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "NUM.Hidden", "" },
		{ "NUM.Name", "ERHI_Flags::NUM" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Vulkan.DisplayName", "Vulkan" },
		{ "Vulkan.Name", "ERHI_Flags::Vulkan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AutomationTest,
		nullptr,
		"ERHI_Flags",
		"ERHI_Flags",
		Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AutomationTest_ERHI_Flags()
	{
		if (!Z_Registration_Info_UEnum_ERHI_Flags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERHI_Flags.InnerSingleton, Z_Construct_UEnum_AutomationTest_ERHI_Flags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERHI_Flags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions;
class UScriptStruct* FAutomationTestExcludeOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("AutomationTestExcludeOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.OuterSingleton;
}
template<> AUTOMATIONTEST_API UScriptStruct* StaticStruct<FAutomationTestExcludeOptions>()
{
	return FAutomationTestExcludeOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Test;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Reason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHIs_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_RHIs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warn_MetaData[];
#endif
		static void NewProp_Warn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Warn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationTestExcludeOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Name of the target test */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Name of the target test" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludeOptions, Test), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Reason to why the test is excluded */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Reason to why the test is excluded" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludeOptions, Reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/AutomationTest.ERHI_Flags" },
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Option to target specific RHI. No option means it should be applied to all RHI */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Option to target specific RHI. No option means it should be applied to all RHI" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs = { "RHIs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludeOptions, RHIs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_MetaData[] = {
		{ "Category", "ExcludeTestOptions" },
		{ "Comment", "/* Should the Reason be reported as a warning in the log */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Should the Reason be reported as a warning in the log" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_SetBit(void* Obj)
	{
		((FAutomationTestExcludeOptions*)Obj)->Warn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn = { "Warn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationTestExcludeOptions), &Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_RHIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewProp_Warn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
		nullptr,
		&NewStructOps,
		"AutomationTestExcludeOptions",
		sizeof(FAutomationTestExcludeOptions),
		alignof(FAutomationTestExcludeOptions),
		Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludeOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.InnerSingleton, Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry;
class UScriptStruct* FAutomationTestExcludelistEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry, (UObject*)Z_Construct_UPackage__Script_AutomationTest(), TEXT("AutomationTestExcludelistEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.OuterSingleton;
}
template<> AUTOMATIONTEST_API UScriptStruct* StaticStruct<FAutomationTestExcludelistEntry>()
{
	return FAutomationTestExcludelistEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Test;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Reason;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RHIs_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHIs_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_RHIs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warn_MetaData[];
#endif
		static void NewProp_Warn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Warn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationTestExcludelistEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "AutomationTestExcludelist" },
		{ "Comment", "/* Hold the name of the target functional test map */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Hold the name of the target functional test map" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludelistEntry, Map), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test_MetaData[] = {
		{ "Category", "AutomationTestExcludelist" },
		{ "Comment", "/* Hold the name of the target test - full test name is require here unless for functional tests */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Hold the name of the target test - full test name is require here unless for functional tests" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludelistEntry, Test), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "AutomationTestExcludelist" },
		{ "Comment", "/* Reason to why the test is excluded */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Reason to why the test is excluded" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludelistEntry, Reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_ElementProp = { "RHIs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_MetaData[] = {
		{ "Category", "AutomationTestExcludelist" },
		{ "Comment", "/* Option to target specific RHI. Empty array means it should be applied to all RHI */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Option to target specific RHI. Empty array means it should be applied to all RHI" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs = { "RHIs", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestExcludelistEntry, RHIs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_MetaData[] = {
		{ "Category", "AutomationTestExcludelist" },
		{ "Comment", "/* Should the Reason be reported as a warning in the log */" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
		{ "ToolTip", "Should the Reason be reported as a warning in the log" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_SetBit(void* Obj)
	{
		((FAutomationTestExcludelistEntry*)Obj)->Warn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn = { "Warn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationTestExcludelistEntry), &Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_RHIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewProp_Warn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
		nullptr,
		&NewStructOps,
		"AutomationTestExcludelistEntry",
		sizeof(FAutomationTestExcludelistEntry),
		alignof(FAutomationTestExcludelistEntry),
		Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.InnerSingleton, Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry.InnerSingleton;
	}
	void UAutomationTestExcludelist::StaticRegisterNativesUAutomationTestExcludelist()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationTestExcludelist);
	UClass* Z_Construct_UClass_UAutomationTestExcludelist_NoRegister()
	{
		return UAutomationTestExcludelist::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationTestExcludelist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeTest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeTest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationTestExcludelist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestExcludelist_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutomationTestExcludelist.h" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest_Inner = { "ExcludeTest", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry, METADATA_PARAMS(nullptr, 0) }; // 1846297075
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest_MetaData[] = {
		{ "Category", "AutomationTestExcludelist" },
		{ "ModuleRelativePath", "Public/AutomationTestExcludelist.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest = { "ExcludeTest", nullptr, (EPropertyFlags)0x0040000000054001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAutomationTestExcludelist, ExcludeTest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest_MetaData)) }; // 1846297075
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationTestExcludelist_Statics::NewProp_ExcludeTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationTestExcludelist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationTestExcludelist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationTestExcludelist_Statics::ClassParams = {
		&UAutomationTestExcludelist::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationTestExcludelist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationTestExcludelist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationTestExcludelist()
	{
		if (!Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton, Z_Construct_UClass_UAutomationTestExcludelist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationTestExcludelist.OuterSingleton;
	}
	template<> AUTOMATIONTEST_API UClass* StaticClass<UAutomationTestExcludelist>()
	{
		return UAutomationTestExcludelist::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationTestExcludelist);
	UAutomationTestExcludelist::~UAutomationTestExcludelist() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::EnumInfo[] = {
		{ ERHI_Flags_StaticEnum, TEXT("ERHI_Flags"), &Z_Registration_Info_UEnum_ERHI_Flags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1060812089U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ScriptStructInfo[] = {
		{ FAutomationTestExcludeOptions::StaticStruct, Z_Construct_UScriptStruct_FAutomationTestExcludeOptions_Statics::NewStructOps, TEXT("AutomationTestExcludeOptions"), &Z_Registration_Info_UScriptStruct_AutomationTestExcludeOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationTestExcludeOptions), 833573128U) },
		{ FAutomationTestExcludelistEntry::StaticStruct, Z_Construct_UScriptStruct_FAutomationTestExcludelistEntry_Statics::NewStructOps, TEXT("AutomationTestExcludelistEntry"), &Z_Registration_Info_UScriptStruct_AutomationTestExcludelistEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationTestExcludelistEntry), 1846297075U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationTestExcludelist, UAutomationTestExcludelist::StaticClass, TEXT("UAutomationTestExcludelist"), &Z_Registration_Info_UClass_UAutomationTestExcludelist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationTestExcludelist), 2651494699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_3707794003(TEXT("/Script/AutomationTest"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AutomationTest_Public_AutomationTestExcludelist_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
