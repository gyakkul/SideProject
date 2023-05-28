// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AutomationPresetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationPresetManager() {}
// Cross Module References
	AUTOMATIONWINDOW_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestPreset();
	UPackage* Z_Construct_UPackage__Script_AutomationWindow();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationTestPreset;
class UScriptStruct* FAutomationTestPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationTestPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationTestPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationTestPreset, (UObject*)Z_Construct_UPackage__Script_AutomationWindow(), TEXT("AutomationTestPreset"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationTestPreset.OuterSingleton;
}
template<> AUTOMATIONWINDOW_API UScriptStruct* StaticStruct<FAutomationTestPreset>()
{
	return FAutomationTestPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationTestPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EnabledTests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledTests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledTests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Class that holds preset data for the automation window\n */" },
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "Class that holds preset data for the automation window" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationTestPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** The unique name for this preset. */" },
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "The unique name for this preset." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestPreset, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of this preset. */" },
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "The name of this preset." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_Inner = { "EnabledTests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_MetaData[] = {
		{ "Comment", "/** The list of enabled test names. */" },
		{ "ModuleRelativePath", "Private/AutomationPresetManager.h" },
		{ "ToolTip", "The list of enabled test names." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests = { "EnabledTests", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationTestPreset, EnabledTests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewProp_EnabledTests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationWindow,
		nullptr,
		&NewStructOps,
		"AutomationTestPreset",
		sizeof(FAutomationTestPreset),
		alignof(FAutomationTestPreset),
		Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationTestPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationTestPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationTestPreset.InnerSingleton, Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationTestPreset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationWindow_Private_AutomationPresetManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationWindow_Private_AutomationPresetManager_h_Statics::ScriptStructInfo[] = {
		{ FAutomationTestPreset::StaticStruct, Z_Construct_UScriptStruct_FAutomationTestPreset_Statics::NewStructOps, TEXT("AutomationTestPreset"), &Z_Registration_Info_UScriptStruct_AutomationTestPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationTestPreset), 1836922703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationWindow_Private_AutomationPresetManager_h_336607687(TEXT("/Script/AutomationWindow"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationWindow_Private_AutomationPresetManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationWindow_Private_AutomationPresetManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
