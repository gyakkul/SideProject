// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/CreateWidgetToolSettings.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateWidgetToolSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WidgetEditorToolPalette();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolBuilder_NoRegister();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolSettings();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolSettings_NoRegister();
	WIDGETEDITORTOOLPALETTE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateWidgetStackInfo();
	WIDGETEDITORTOOLPALETTE_API UScriptStruct* Z_Construct_UScriptStruct_FCreateWidgetToolInfo();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo;
class UScriptStruct* FCreateWidgetToolInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateWidgetToolInfo, (UObject*)Z_Construct_UPackage__Script_WidgetEditorToolPalette(), TEXT("CreateWidgetToolInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo.OuterSingleton;
}
template<> WIDGETEDITORTOOLPALETTE_API UScriptStruct* StaticStruct<FCreateWidgetToolInfo>()
{
	return FCreateWidgetToolInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetHotkey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetHotkey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateWidgetToolBuilder_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CreateWidgetToolBuilder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Info used to populate a single create widget tool */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Info used to populate a single create widget tool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateWidgetToolInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "CreateWidgetInfo" },
		{ "Comment", "/** The widget to create when this tool is activated */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "The widget to create when this tool is activated" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateWidgetToolInfo, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CreateWidgetInfo" },
		{ "Comment", "/** Display name for this tool, if empty will use the name of the widget */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Display name for this tool, if empty will use the name of the widget" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateWidgetToolInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetHotkey_MetaData[] = {
		{ "Category", "CreateWidgetInfo" },
		{ "Comment", "/** The hotkey used to create this widget */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "The hotkey used to create this widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetHotkey = { "WidgetHotkey", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateWidgetToolInfo, WidgetHotkey), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetHotkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetHotkey_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_CreateWidgetToolBuilder_MetaData[] = {
		{ "Category", "CreateWidgetInfo" },
		{ "Comment", "/** Builder that handles creation of tool for this widget */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Builder that handles creation of tool for this widget" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_CreateWidgetToolBuilder = { "CreateWidgetToolBuilder", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateWidgetToolInfo, CreateWidgetToolBuilder), Z_Construct_UClass_UClass, Z_Construct_UClass_UCreateWidgetToolBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_CreateWidgetToolBuilder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_CreateWidgetToolBuilder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_WidgetHotkey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewProp_CreateWidgetToolBuilder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
		nullptr,
		&NewStructOps,
		"CreateWidgetToolInfo",
		sizeof(FCreateWidgetToolInfo),
		alignof(FCreateWidgetToolInfo),
		Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateWidgetToolInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo.InnerSingleton, Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo;
class UScriptStruct* FCreateWidgetStackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateWidgetStackInfo, (UObject*)Z_Construct_UPackage__Script_WidgetEditorToolPalette(), TEXT("CreateWidgetStackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo.OuterSingleton;
}
template<> WIDGETEDITORTOOLPALETTE_API UScriptStruct* StaticStruct<FCreateWidgetStackInfo>()
{
	return FCreateWidgetStackInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetToolInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToolInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetToolInfos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Info used to populate a create widget tool stack */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Info used to populate a create widget tool stack" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateWidgetStackInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CreateWidgetInfo" },
		{ "Comment", "/** Display name for this tool stack */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Display name for this tool stack" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateWidgetStackInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos_Inner = { "WidgetToolInfos", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCreateWidgetToolInfo, METADATA_PARAMS(nullptr, 0) }; // 4155035557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos_MetaData[] = {
		{ "Category", "CreateWidgetInfo" },
		{ "Comment", "/** Info for each widget that can be created by this stack */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Info for each widget that can be created by this stack" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos = { "WidgetToolInfos", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateWidgetStackInfo, WidgetToolInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos_MetaData)) }; // 4155035557
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewProp_WidgetToolInfos,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
		nullptr,
		&NewStructOps,
		"CreateWidgetStackInfo",
		sizeof(FCreateWidgetStackInfo),
		alignof(FCreateWidgetStackInfo),
		Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateWidgetStackInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo.InnerSingleton, Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo.InnerSingleton;
	}
	void UCreateWidgetToolSettings::StaticRegisterNativesUCreateWidgetToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateWidgetToolSettings);
	UClass* Z_Construct_UClass_UCreateWidgetToolSettings_NoRegister()
	{
		return UCreateWidgetToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCreateWidgetToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateWidgetStacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateWidgetStacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CreateWidgetStacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateWidgetToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWidgetToolSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Keybinds" },
		{ "Comment", "/**\n * Allows for create widget tool layout to be defined via settings.\n */" },
		{ "IncludePath", "Settings/CreateWidgetToolSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "Allows for create widget tool layout to be defined via settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks_Inner = { "CreateWidgetStacks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCreateWidgetStackInfo, METADATA_PARAMS(nullptr, 0) }; // 203044247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/** List of tool stacks to create */" },
		{ "ModuleRelativePath", "Public/Settings/CreateWidgetToolSettings.h" },
		{ "ToolTip", "List of tool stacks to create" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks = { "CreateWidgetStacks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateWidgetToolSettings, CreateWidgetStacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks_MetaData)) }; // 203044247
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateWidgetToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateWidgetToolSettings_Statics::NewProp_CreateWidgetStacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateWidgetToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateWidgetToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateWidgetToolSettings_Statics::ClassParams = {
		&UCreateWidgetToolSettings::StaticClass,
		"WidgetEditorToolPalette",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCreateWidgetToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetToolSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateWidgetToolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetToolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateWidgetToolSettings()
	{
		if (!Z_Registration_Info_UClass_UCreateWidgetToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateWidgetToolSettings.OuterSingleton, Z_Construct_UClass_UCreateWidgetToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateWidgetToolSettings.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<UCreateWidgetToolSettings>()
	{
		return UCreateWidgetToolSettings::StaticClass();
	}
	UCreateWidgetToolSettings::UCreateWidgetToolSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateWidgetToolSettings);
	UCreateWidgetToolSettings::~UCreateWidgetToolSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics::ScriptStructInfo[] = {
		{ FCreateWidgetToolInfo::StaticStruct, Z_Construct_UScriptStruct_FCreateWidgetToolInfo_Statics::NewStructOps, TEXT("CreateWidgetToolInfo"), &Z_Registration_Info_UScriptStruct_CreateWidgetToolInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateWidgetToolInfo), 4155035557U) },
		{ FCreateWidgetStackInfo::StaticStruct, Z_Construct_UScriptStruct_FCreateWidgetStackInfo_Statics::NewStructOps, TEXT("CreateWidgetStackInfo"), &Z_Registration_Info_UScriptStruct_CreateWidgetStackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateWidgetStackInfo), 203044247U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateWidgetToolSettings, UCreateWidgetToolSettings::StaticClass, TEXT("UCreateWidgetToolSettings"), &Z_Registration_Info_UClass_UCreateWidgetToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateWidgetToolSettings), 739281191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_1388259910(TEXT("/Script/WidgetEditorToolPalette"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_Settings_CreateWidgetToolSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
