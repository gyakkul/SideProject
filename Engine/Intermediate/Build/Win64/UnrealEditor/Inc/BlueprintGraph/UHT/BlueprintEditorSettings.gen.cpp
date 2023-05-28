// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintEditorSettings.h"
#include "../../../Editor/UnrealEd/Public/Kismet2/Breakpoint.h"
#include "../../../Editor/UnrealEd/Public/Kismet2/WatchedPin.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintEditorSettings() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEditorSettings();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintEditorSettings_NoRegister();
	BLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAdditionalBlueprintCategory();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FPerBlueprintSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPEditorBookmarkNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEditedDocumentInfo();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintBreakpoint();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWatchedPin();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESaveOnCompile;
	static UEnum* ESaveOnCompile_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESaveOnCompile.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESaveOnCompile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("ESaveOnCompile"));
		}
		return Z_Registration_Info_UEnum_ESaveOnCompile.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ESaveOnCompile>()
	{
		return ESaveOnCompile_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::Enumerators[] = {
		{ "SoC_Never", (int64)SoC_Never },
		{ "SoC_SuccessOnly", (int64)SoC_SuccessOnly },
		{ "SoC_Always", (int64)SoC_Always },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "SoC_Always.DisplayName", "Always" },
		{ "SoC_Always.Name", "SoC_Always" },
		{ "SoC_Never.DisplayName", "Never" },
		{ "SoC_Never.Name", "SoC_Never" },
		{ "SoC_SuccessOnly.DisplayName", "On Success Only" },
		{ "SoC_SuccessOnly.Name", "SoC_SuccessOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		"ESaveOnCompile",
		"ESaveOnCompile",
		Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile()
	{
		if (!Z_Registration_Info_UEnum_ESaveOnCompile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESaveOnCompile.InnerSingleton, Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESaveOnCompile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerBlueprintSettings;
class UScriptStruct* FPerBlueprintSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerBlueprintSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerBlueprintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBlueprintSettings, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("PerBlueprintSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PerBlueprintSettings.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FPerBlueprintSettings>()
{
	return FPerBlueprintSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Breakpoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Breakpoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Breakpoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WatchedPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WatchedPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WatchedPins;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Blueprint Editor settings that are different for each\n*\x09""blueprint.\n*\x09See FKismetDebugUtilities for helper functions\n*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint Editor settings that are different for each\n    blueprint.\n    See FKismetDebugUtilities for helper functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBlueprintSettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints_Inner = { "Breakpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintBreakpoint, METADATA_PARAMS(nullptr, 0) }; // 3270532364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints = { "Breakpoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBlueprintSettings, Breakpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints_MetaData)) }; // 3270532364
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins_Inner = { "WatchedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintWatchedPin, METADATA_PARAMS(nullptr, 0) }; // 3924230225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins = { "WatchedPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBlueprintSettings, WatchedPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins_MetaData)) }; // 3924230225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_Breakpoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewProp_WatchedPins,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"PerBlueprintSettings",
		sizeof(FPerBlueprintSettings),
		alignof(FPerBlueprintSettings),
		Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBlueprintSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PerBlueprintSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerBlueprintSettings.InnerSingleton, Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerBlueprintSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory;
class UScriptStruct* FAdditionalBlueprintCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory, (UObject*)Z_Construct_UPackage__Script_BlueprintGraph(), TEXT("AdditionalBlueprintCategory"));
	}
	return Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory.OuterSingleton;
}
template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<FAdditionalBlueprintCategory>()
{
	return FAdditionalBlueprintCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdditionalBlueprintCategory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdditionalBlueprintCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_ClassFilter_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAdditionalBlueprintCategory, ClassFilter), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_ClassFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_ClassFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewProp_ClassFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
		nullptr,
		&NewStructOps,
		"AdditionalBlueprintCategory",
		sizeof(FAdditionalBlueprintCategory),
		alignof(FAdditionalBlueprintCategory),
		Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdditionalBlueprintCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory.InnerSingleton, Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory.InnerSingleton;
	}
	void UBlueprintEditorSettings::StaticRegisterNativesUBlueprintEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintEditorSettings);
	UClass* Z_Construct_UClass_UBlueprintEditorSettings_NoRegister()
	{
		return UBlueprintEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMidpointArrowsInBlueprints_MetaData[];
#endif
		static void NewProp_bDrawMidpointArrowsInBlueprints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMidpointArrowsInBlueprints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGraphInstructionText_MetaData[];
#endif
		static void NewProp_bShowGraphInstructionText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGraphInstructionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnrelatedNodes_MetaData[];
#endif
		static void NewProp_bHideUnrelatedNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnrelatedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowShortTooltips_MetaData[];
#endif
		static void NewProp_bShowShortTooltips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowShortTooltips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInputTriggerSupportWarnings_MetaData[];
#endif
		static void NewProp_bEnableInputTriggerSupportWarnings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInputTriggerSupportWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitContextTargetSettings_MetaData[];
#endif
		static void NewProp_bSplitContextTargetSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitContextTargetSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeAllMemberComponentFunctions_MetaData[];
#endif
		static void NewProp_bExposeAllMemberComponentFunctions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeAllMemberComponentFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowContextualFavorites_MetaData[];
#endif
		static void NewProp_bShowContextualFavorites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowContextualFavorites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeDeprecatedFunctions_MetaData[];
#endif
		static void NewProp_bExposeDeprecatedFunctions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeDeprecatedFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompactCallOnMemberNodes_MetaData[];
#endif
		static void NewProp_bCompactCallOnMemberNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompactCallOnMemberNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenFavoritesMenus_MetaData[];
#endif
		static void NewProp_bFlattenFavoritesMenus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenFavoritesMenus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCastObjectConnections_MetaData[];
#endif
		static void NewProp_bAutoCastObjectConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCastObjectConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowViewportOnSimulate_MetaData[];
#endif
		static void NewProp_bShowViewportOnSimulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowViewportOnSimulate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnDefaultBlueprintNodes_MetaData[];
#endif
		static void NewProp_bSpawnDefaultBlueprintNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnDefaultBlueprintNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData[];
#endif
		static void NewProp_bHideConstructionScriptComponentsInDetailsView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideConstructionScriptComponentsInDetailsView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHostFindInBlueprintsInGlobalTab_MetaData[];
#endif
		static void NewProp_bHostFindInBlueprintsInGlobalTab_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHostFindInBlueprintsInGlobalTab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData[];
#endif
		static void NewProp_bNavigateToNativeFunctionsFromCallNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigateToNativeFunctionsFromCallNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoubleClickNavigatesToParent_MetaData[];
#endif
		static void NewProp_bDoubleClickNavigatesToParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoubleClickNavigatesToParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTypePromotion_MetaData[];
#endif
		static void NewProp_bEnableTypePromotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTypePromotion;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TypePromotionPinDenyList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypePromotionPinDenyList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TypePromotionPinDenyList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalBlueprintCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalBlueprintCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalBlueprintCategories;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BreakpointReloadMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakpointReloadMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BreakpointReloadMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePinValueInspectionTooltips_MetaData[];
#endif
		static void NewProp_bEnablePinValueInspectionTooltips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePinValueInspectionTooltips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNamespaceEditorFeatures_MetaData[];
#endif
		static void NewProp_bEnableNamespaceEditorFeatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNamespaceEditorFeatures;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamespacesToAlwaysInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamespacesToAlwaysInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamespacesToAlwaysInclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableContextMenuTimeSlicing_MetaData[];
#endif
		static void NewProp_bEnableContextMenuTimeSlicing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableContextMenuTimeSlicing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFavorPureCastNodes_MetaData[];
#endif
		static void NewProp_bFavorPureCastNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFavorPureCastNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveOnCompile_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SaveOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJumpToNodeErrors_MetaData[];
#endif
		static void NewProp_bJumpToNodeErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJumpToNodeErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowExplicitImpureNodeDisabling_MetaData[];
#endif
		static void NewProp_bAllowExplicitImpureNodeDisabling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowExplicitImpureNodeDisabling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowActionMenuItemSignatures_MetaData[];
#endif
		static void NewProp_bShowActionMenuItemSignatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowActionMenuItemSignatures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlueprintNodeUniqueNames_MetaData[];
#endif
		static void NewProp_bBlueprintNodeUniqueNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlueprintNodeUniqueNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDetailedCompileResults_MetaData[];
#endif
		static void NewProp_bShowDetailedCompileResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDetailedCompileResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileEventDisplayThresholdMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompileEventDisplayThresholdMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplateCacheCapMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NodeTemplateCacheCapMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInheritedVariables_MetaData[];
#endif
		static void NewProp_bShowInheritedVariables_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInheritedVariables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowInterfacesInOverrides_MetaData[];
#endif
		static void NewProp_bAlwaysShowInterfacesInOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowInterfacesInOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParentClassInOverrides_MetaData[];
#endif
		static void NewProp_bShowParentClassInOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParentClassInOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEmptySections_MetaData[];
#endif
		static void NewProp_bShowEmptySections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEmptySections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAccessSpecifier_MetaData[];
#endif
		static void NewProp_bShowAccessSpecifier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAccessSpecifier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bookmarks_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Bookmarks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BookmarkNodes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerBlueprintSettings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerBlueprintSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBlueprintSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerBlueprintSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeCommentNodesInBookmarksTab_MetaData[];
#endif
		static void NewProp_bIncludeCommentNodesInBookmarksTab_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeCommentNodesInBookmarksTab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData[];
#endif
		static void NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBookmarksForCurrentDocumentOnlyInTab;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEditorQuickJumps_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GraphEditorQuickJumps_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphEditorQuickJumps_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GraphEditorQuickJumps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNamespaceFilteringFeatures_MetaData[];
#endif
		static void NewProp_bEnableNamespaceFilteringFeatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNamespaceFilteringFeatures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNamespaceImportingFeatures_MetaData[];
#endif
		static void NewProp_bEnableNamespaceImportingFeatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNamespaceImportingFeatures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritImportedNamespacesFromParentBP_MetaData[];
#endif
		static void NewProp_bInheritImportedNamespacesFromParentBP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritImportedNamespacesFromParentBP;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintEditorSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_MetaData[] = {
		{ "Category", "VisualStyle" },
		{ "Comment", "/** Should arrows indicating data/execution flow be drawn halfway along wires? */" },
		{ "DisplayName", "Draw midpoint arrows in Blueprints" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Should arrows indicating data/execution flow be drawn halfway along wires?" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bDrawMidpointArrowsInBlueprints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints = { "bDrawMidpointArrowsInBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_MetaData[] = {
		{ "Category", "VisualStyle" },
		{ "Comment", "/** Determines if lightweight tutorial text shows up at the top of empty blueprint graphs */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Determines if lightweight tutorial text shows up at the top of empty blueprint graphs" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowGraphInstructionText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText = { "bShowGraphInstructionText", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes_MetaData[] = {
		{ "Category", "VisualStyle" },
		{ "Comment", "/** If true, fade nodes which are not connected to the selected nodes */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If true, fade nodes which are not connected to the selected nodes" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bHideUnrelatedNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes = { "bHideUnrelatedNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips_MetaData[] = {
		{ "Category", "VisualStyle" },
		{ "Comment", "/** If true, use short tooltips whenever possible */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If true, use short tooltips whenever possible" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowShortTooltips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips = { "bShowShortTooltips", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** \n\x09  * If enabled Input Action nodes will hide unsupported trigger pins and give warnings when using unsupported triggers.\n\x09  * This warning only works with triggers set up in an Input Action, not Input Mapping Contexts. \n\x09  */" },
		{ "DisplayName", "Enhanced Input: Enable Input Trigger Support Warnings" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled Input Action nodes will hide unsupported trigger pins and give warnings when using unsupported triggers.\nThis warning only works with triggers set up in an Input Action, not Input Mapping Contexts." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnableInputTriggerSupportWarnings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings = { "bEnableInputTriggerSupportWarnings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, we'll save off your chosen target setting based off of the context (allowing you to have different preferences based off what you're operating on). */" },
		{ "DisplayName", "Context Menu: Divide Context Target Preferences" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, we'll save off your chosen target setting based off of the context (allowing you to have different preferences based off what you're operating on)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bSplitContextTargetSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings = { "bSplitContextTargetSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, then ALL component functions are exposed to the context menu (when the contextual target is a component owner). Ignores \"ExposeFunctionCategories\" metadata for components. */" },
		{ "DisplayName", "Context Menu: Expose All Sub-Component Functions" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then ALL component functions are exposed to the context menu (when the contextual target is a component owner). Ignores \"ExposeFunctionCategories\" metadata for components." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bExposeAllMemberComponentFunctions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions = { "bExposeAllMemberComponentFunctions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, then a separate section with your Blueprint favorites will be pined to the top of the context menu. */" },
		{ "DisplayName", "Context Menu: Show Favorites Section" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then a separate section with your Blueprint favorites will be pined to the top of the context menu." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowContextualFavorites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites = { "bShowContextualFavorites", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, deprecated functions will be visible in the context menu and will be available for override implementation. By default, functions marked as deprecated are not exposed in either case. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, deprecated functions will be visible in the context menu and will be available for override implementation. By default, functions marked as deprecated are not exposed in either case." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bExposeDeprecatedFunctions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions = { "bExposeDeprecatedFunctions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, then call-on-member actions will be spawned as a single node (instead of a GetMember + FunctionCall node). */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then call-on-member actions will be spawned as a single node (instead of a GetMember + FunctionCall node)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bCompactCallOnMemberNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes = { "bCompactCallOnMemberNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, then your Blueprint favorites will be uncategorized, leaving you with less nested categories to sort through. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then your Blueprint favorites will be uncategorized, leaving you with less nested categories to sort through." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bFlattenFavoritesMenus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus = { "bFlattenFavoritesMenus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, then you'll be able to directly connect arbitrary object pins together (a pure cast node will be injected automatically). */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then you'll be able to directly connect arbitrary object pins together (a pure cast node will be injected automatically)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bAutoCastObjectConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections = { "bAutoCastObjectConnections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If true will show the viewport tab when simulate is clicked. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If true will show the viewport tab when simulate is clicked." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowViewportOnSimulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate = { "bShowViewportOnSimulate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If set will spawn default \"ghost\" event nodes in new Blueprints, modifiable in the [DefaultEventNodes] section of EditorPerProjectUserSettings */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set will spawn default \"ghost\" event nodes in new Blueprints, modifiable in the [DefaultEventNodes] section of EditorPerProjectUserSettings" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bSpawnDefaultBlueprintNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes = { "bSpawnDefaultBlueprintNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If set will exclude components added in a Blueprint class Construction Script from the component details view */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set will exclude components added in a Blueprint class Construction Script from the component details view" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bHideConstructionScriptComponentsInDetailsView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView = { "bHideConstructionScriptComponentsInDetailsView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bHostFindInBlueprintsInGlobalTab = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab = { "bHostFindInBlueprintsInGlobalTab", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If set, double clicking on a call function node will attempt to navigate an open C++ editor to the native source definition */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set, double clicking on a call function node will attempt to navigate an open C++ editor to the native source definition" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bNavigateToNativeFunctionsFromCallNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes = { "bNavigateToNativeFunctionsFromCallNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** Double click to navigate up to the parent graph */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Double click to navigate up to the parent graph" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bDoubleClickNavigatesToParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent = { "bDoubleClickNavigatesToParent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** Allows for pin types to be promoted to others, i.e. float to double */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Allows for pin types to be promoted to others, i.e. float to double" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnableTypePromotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion = { "bEnableTypePromotion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList_ElementProp = { "TypePromotionPinDenyList", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If a pin type is within this list, then it will never be marked as a possible promotable function. */" },
		{ "EditCondition", "bEnableTypePromotion" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If a pin type is within this list, then it will never be marked as a possible promotable function." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList = { "TypePromotionPinDenyList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, TypePromotionPinDenyList), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories_Inner = { "AdditionalBlueprintCategories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAdditionalBlueprintCategory, METADATA_PARAMS(nullptr, 0) }; // 2795357216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** List of additional category names to show in Blueprints, optionally filtered by parent class type. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "List of additional category names to show in Blueprints, optionally filtered by parent class type." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories = { "AdditionalBlueprintCategories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, AdditionalBlueprintCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories_MetaData)) }; // 2795357216
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** How to handle previously-set breakpoints on reload. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "How to handle previously-set breakpoints on reload." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod = { "BreakpointReloadMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, BreakpointReloadMethod), Z_Construct_UEnum_UnrealEd_EBlueprintBreakpointReloadMethod, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod_MetaData)) }; // 3238173322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** If enabled, pin tooltips during PIE will be interactive */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, pin tooltips during PIE will be interactive" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnablePinValueInspectionTooltips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips = { "bEnablePinValueInspectionTooltips", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "/** Whether to enable namespace importing and filtering features in the Blueprint editor */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Whether to enable namespace importing and filtering features in the Blueprint editor" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnableNamespaceEditorFeatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures = { "bEnableNamespaceEditorFeatures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude_Inner = { "NamespacesToAlwaysInclude", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude_MetaData[] = {
		{ "Category", "Workflow" },
		{ "Comment", "// A list of namespace identifiers that the Blueprint editor should always import by default. Requires Blueprint namespace features to be enabled and only applies to the current local user. Editing this list will also cause any visible Blueprint editor windows to be closed.\n" },
		{ "DisplayName", "Global Namespace Imports (Local User Only)" },
		{ "EditCondition", "bEnableNamespaceEditorFeatures" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "A list of namespace identifiers that the Blueprint editor should always import by default. Requires Blueprint namespace features to be enabled and only applies to the current local user. Editing this list will also cause any visible Blueprint editor windows to be closed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude = { "NamespacesToAlwaysInclude", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, NamespacesToAlwaysInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** If enabled, when the Blueprint graph context menu is invoked (e.g. by dragging off a pin), it will not block the UI while it populates the available actions list. */" },
		{ "DisplayName", "Enable Non-Blocking Context Menu" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, when the Blueprint graph context menu is invoked (e.g. by dragging off a pin), it will not block the UI while it populates the available actions list." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnableContextMenuTimeSlicing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing = { "bEnableContextMenuTimeSlicing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** If enabled, then placed cast nodes will default to their \"pure\" form (meaning: without execution pins). */" },
		{ "DisplayName", "Default to Using Pure Cast Nodes" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, then placed cast nodes will default to their \"pure\" form (meaning: without execution pins)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bFavorPureCastNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes = { "bFavorPureCastNodes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/** Determines when to save Blueprints post-compile */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Determines when to save Blueprints post-compile" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile = { "SaveOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, SaveOnCompile), Z_Construct_UEnum_BlueprintGraph_ESaveOnCompile, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile_MetaData)) }; // 2118935752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/** When enabled, if a blueprint has compiler errors, then the graph will jump and focus on the first node generating an error */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "When enabled, if a blueprint has compiler errors, then the graph will jump and focus on the first node generating an error" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bJumpToNodeErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors = { "bJumpToNodeErrors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** If enabled, nodes can be explicitly disabled via context menu when right-clicking on impure nodes in the Blueprint editor. Disabled nodes will not be compiled, but also will not break existing connections. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, nodes can be explicitly disabled via context menu when right-clicking on impure nodes in the Blueprint editor. Disabled nodes will not be compiled, but also will not break existing connections." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bAllowExplicitImpureNodeDisabling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling = { "bAllowExplicitImpureNodeDisabling", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "Comment", "/** If enabled, tooltips on action menu items will show the associated action's signature id (can be used to setup custom favorites menus).*/" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, tooltips on action menu items will show the associated action's signature id (can be used to setup custom favorites menus)." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowActionMenuItemSignatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures = { "bShowActionMenuItemSignatures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_MetaData[] = {
		{ "Category", "DeveloperTools" },
		{ "Comment", "/** If enabled, blueprint nodes in the event graph will display with unique names rather than their display name. */" },
		{ "DisplayName", "Display Unique Names for Blueprint Nodes" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, blueprint nodes in the event graph will display with unique names rather than their display name." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bBlueprintNodeUniqueNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames = { "bBlueprintNodeUniqueNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If enabled, additional details will be displayed in the Compiler Results tab after compiling a blueprint. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, additional details will be displayed in the Compiler Results tab after compiling a blueprint." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowDetailedCompileResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults = { "bShowDetailedCompileResults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum event time threshold used as a filter when additional details are enabled for display in the Compiler Results tab. A value of zero means that all events will be included in the final summary. */" },
		{ "DisplayName", "Compile Event Results Threshold (ms)" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Minimum event time threshold used as a filter when additional details are enabled for display in the Compiler Results tab. A value of zero means that all events will be included in the final summary." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs = { "CompileEventDisplayThresholdMs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, CompileEventDisplayThresholdMs), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The node template cache is used to speed up blueprint menuing. This determines the peak data size for that cache. */" },
		{ "DisplayName", "Node-Template Cache Cap (MB)" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "The node template cache is used to speed up blueprint menuing. This determines the peak data size for that cache." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB = { "NodeTemplateCacheCapMB", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, NodeTemplateCacheCapMB), METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_MetaData[] = {
		{ "Comment", "/** If set we'll show the inherited variables in the My Blueprint view. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set we'll show the inherited variables in the My Blueprint view." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowInheritedVariables = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables = { "bShowInheritedVariables", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides_MetaData[] = {
		{ "Comment", "/** If set interface functions will always show in the overrides menu, even if they are already shown in the interfaces menu */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set interface functions will always show in the overrides menu, even if they are already shown in the interfaces menu" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bAlwaysShowInterfacesInOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides = { "bAlwaysShowInterfacesInOverrides", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides_MetaData[] = {
		{ "Comment", "/** If set then the parent class will be listed next to the override function name in the overrides function menu */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set then the parent class will be listed next to the override function name in the overrides function menu" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowParentClassInOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides = { "bShowParentClassInOverrides", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_MetaData[] = {
		{ "Comment", "/** If set we'll show empty sections in the My Blueprint view. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set we'll show empty sections in the My Blueprint view." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowEmptySections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections = { "bShowEmptySections", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier_MetaData[] = {
		{ "Comment", "/** If set we'll show the access specifier of functions in the My Blueprint view */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If set we'll show the access specifier of functions in the My Blueprint view" },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowAccessSpecifier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier = { "bShowAccessSpecifier", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_ValueProp = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) }; // 4051615663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_Key_KeyProp = { "Bookmarks_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_MetaData[] = {
		{ "Comment", "/** Blueprint bookmark database */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint bookmark database" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, Bookmarks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_MetaData)) }; // 4051615663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_Inner = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBPEditorBookmarkNode, METADATA_PARAMS(nullptr, 0) }; // 2507682981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_MetaData[] = {
		{ "Comment", "/** Blueprint bookmark nodes (for display) */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint bookmark nodes (for display)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes = { "BookmarkNodes", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, BookmarkNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_MetaData)) }; // 2507682981
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_ValueProp = { "PerBlueprintSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPerBlueprintSettings, METADATA_PARAMS(nullptr, 0) }; // 3783326654
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_Key_KeyProp = { "PerBlueprintSettings_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_MetaData[] = {
		{ "Comment", "/** Maps Blueprint path to settings such as breakpoints */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Maps Blueprint path to settings such as breakpoints" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings = { "PerBlueprintSettings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, PerBlueprintSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_MetaData)) }; // 3783326654
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_MetaData[] = {
		{ "Comment", "/** If enabled, comment nodes will be included in the tree view display in the Bookmarks tab. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, comment nodes will be included in the tree view display in the Bookmarks tab." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bIncludeCommentNodesInBookmarksTab = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab = { "bIncludeCommentNodesInBookmarksTab", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData[] = {
		{ "Comment", "/** If enabled, only the bookmarks for the current document will be shown in the Bookmarks tab. */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "If enabled, only the bookmarks for the current document will be shown in the Bookmarks tab." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bShowBookmarksForCurrentDocumentOnlyInTab = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab = { "bShowBookmarksForCurrentDocumentOnlyInTab", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_ValueProp = { "GraphEditorQuickJumps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEditedDocumentInfo, METADATA_PARAMS(nullptr, 0) }; // 4051615663
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_Key_KeyProp = { "GraphEditorQuickJumps_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_MetaData[] = {
		{ "Comment", "/** Blueprint graph editor \"Quick Jump\" command bindings */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Blueprint graph editor \"Quick Jump\" command bindings" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps = { "GraphEditorQuickJumps", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, GraphEditorQuickJumps), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_MetaData)) }; // 4051615663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures_MetaData[] = {
		{ "Comment", "/** Whether to enable namespace filtering features in the Blueprint editor */// @todo_namespaces - Remove this if/when dependent code is changed to utilize the single setting above.\n" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Whether to enable namespace filtering features in the Blueprint editor // @todo_namespaces - Remove this if/when dependent code is changed to utilize the single setting above." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnableNamespaceFilteringFeatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures = { "bEnableNamespaceFilteringFeatures", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures_MetaData[] = {
		{ "Comment", "/** Whether to enable namespace importing features in the Blueprint editor */// @todo_namespaces - Remove this if/when dependent code is changed to utilize the single setting above.\n" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Whether to enable namespace importing features in the Blueprint editor // @todo_namespaces - Remove this if/when dependent code is changed to utilize the single setting above." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bEnableNamespaceImportingFeatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures = { "bEnableNamespaceImportingFeatures", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP_MetaData[] = {
		{ "Comment", "/** Whether to inherit the set of imported namespaces from the parent class hierarchy */// @todo_namespaces - Remove this if/when this becomes a permanent setting. For now this is experimental.\n" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Whether to inherit the set of imported namespaces from the parent class hierarchy // @todo_namespaces - Remove this if/when this becomes a permanent setting. For now this is experimental." },
	};
#endif
	void Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP_SetBit(void* Obj)
	{
		((UBlueprintEditorSettings*)Obj)->bInheritImportedNamespacesFromParentBP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP = { "bInheritImportedNamespacesFromParentBP", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintEditorSettings), &Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_Inner = { "BaseClassesToAllowRecompilingDuringPlayInEditor", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Play" },
		{ "Comment", "/**\n\x09 * Any blueprint deriving from one of these base classes will be allowed to recompile during Play-in-Editor\n\x09 * (This setting exists both as an editor preference and project setting, and will be allowed if listed in either place) \n\x09 */" },
		{ "ModuleRelativePath", "Public/BlueprintEditorSettings.h" },
		{ "ToolTip", "Any blueprint deriving from one of these base classes will be allowed to recompile during Play-in-Editor\n(This setting exists both as an editor preference and project setting, and will be allowed if listed in either place)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor = { "BaseClassesToAllowRecompilingDuringPlayInEditor", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintEditorSettings, BaseClassesToAllowRecompilingDuringPlayInEditor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDrawMidpointArrowsInBlueprints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowGraphInstructionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideUnrelatedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowShortTooltips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableInputTriggerSupportWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSplitContextTargetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeAllMemberComponentFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowContextualFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bExposeDeprecatedFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bCompactCallOnMemberNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFlattenFavoritesMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAutoCastObjectConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowViewportOnSimulate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bSpawnDefaultBlueprintNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHideConstructionScriptComponentsInDetailsView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bHostFindInBlueprintsInGlobalTab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bNavigateToNativeFunctionsFromCallNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bDoubleClickNavigatesToParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableTypePromotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_TypePromotionPinDenyList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_AdditionalBlueprintCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BreakpointReloadMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnablePinValueInspectionTooltips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceEditorFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NamespacesToAlwaysInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableContextMenuTimeSlicing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bFavorPureCastNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_SaveOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bJumpToNodeErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAllowExplicitImpureNodeDisabling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowActionMenuItemSignatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bBlueprintNodeUniqueNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowDetailedCompileResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_CompileEventDisplayThresholdMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_NodeTemplateCacheCapMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowInheritedVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bAlwaysShowInterfacesInOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowParentClassInOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowEmptySections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowAccessSpecifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_Bookmarks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BookmarkNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_PerBlueprintSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bIncludeCommentNodesInBookmarksTab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bShowBookmarksForCurrentDocumentOnlyInTab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_GraphEditorQuickJumps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceFilteringFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bEnableNamespaceImportingFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_bInheritImportedNamespacesFromParentBP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintEditorSettings_Statics::NewProp_BaseClassesToAllowRecompilingDuringPlayInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintEditorSettings_Statics::ClassParams = {
		&UBlueprintEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UBlueprintEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintEditorSettings.OuterSingleton, Z_Construct_UClass_UBlueprintEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintEditorSettings.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintEditorSettings>()
	{
		return UBlueprintEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintEditorSettings);
	UBlueprintEditorSettings::~UBlueprintEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::EnumInfo[] = {
		{ ESaveOnCompile_StaticEnum, TEXT("ESaveOnCompile"), &Z_Registration_Info_UEnum_ESaveOnCompile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2118935752U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FPerBlueprintSettings::StaticStruct, Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics::NewStructOps, TEXT("PerBlueprintSettings"), &Z_Registration_Info_UScriptStruct_PerBlueprintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerBlueprintSettings), 3783326654U) },
		{ FAdditionalBlueprintCategory::StaticStruct, Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics::NewStructOps, TEXT("AdditionalBlueprintCategory"), &Z_Registration_Info_UScriptStruct_AdditionalBlueprintCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAdditionalBlueprintCategory), 2795357216U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintEditorSettings, UBlueprintEditorSettings::StaticClass, TEXT("UBlueprintEditorSettings"), &Z_Registration_Info_UClass_UBlueprintEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintEditorSettings), 1078411621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_1331987223(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
