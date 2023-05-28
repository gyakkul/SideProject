// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Settings/WidgetDesignerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetDesignerSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FUintVector2();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetDesignerSettings();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetDesignerSettings_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister();
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EDisplayOnCompile();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayOnCompile;
	static UEnum* EDisplayOnCompile_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayOnCompile.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayOnCompile.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EDisplayOnCompile, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EDisplayOnCompile"));
		}
		return Z_Registration_Info_UEnum_EDisplayOnCompile.OuterSingleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EDisplayOnCompile>()
	{
		return EDisplayOnCompile_StaticEnum();
	}
	struct Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::Enumerators[] = {
		{ "DoC_ErrorsOrWarnings", (int64)DoC_ErrorsOrWarnings },
		{ "DoC_ErrorsOnly", (int64)DoC_ErrorsOnly },
		{ "DoC_WarningsOnly", (int64)DoC_WarningsOnly },
		{ "DoC_Never", (int64)DoC_Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::Enum_MetaDataParams[] = {
		{ "DoC_ErrorsOnly.Name", "DoC_ErrorsOnly" },
		{ "DoC_ErrorsOrWarnings.Name", "DoC_ErrorsOrWarnings" },
		{ "DoC_Never.Name", "DoC_Never" },
		{ "DoC_WarningsOnly.Name", "DoC_WarningsOnly" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		"EDisplayOnCompile",
		"EDisplayOnCompile",
		Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMGEditor_EDisplayOnCompile()
	{
		if (!Z_Registration_Info_UEnum_EDisplayOnCompile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayOnCompile.InnerSingleton, Z_Construct_UEnum_UMGEditor_EDisplayOnCompile_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayOnCompile.InnerSingleton;
	}
	void UWidgetDesignerSettings::StaticRegisterNativesUWidgetDesignerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetDesignerSettings);
	UClass* Z_Construct_UClass_UWidgetDesignerSettings_NoRegister()
	{
		return UWidgetDesignerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetDesignerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSnapEnabled_MetaData[];
#endif
		static void NewProp_GridSnapEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GridSnapEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSnapSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridSnapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockToPanelOnDragByDefault_MetaData[];
#endif
		static void NewProp_bLockToPanelOnDragByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockToPanelOnDragByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPreviewResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPreviewResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutlines_MetaData[];
#endif
		static void NewProp_bShowOutlines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutlines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecutePreConstructEvent_MetaData[];
#endif
		static void NewProp_bExecutePreConstructEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecutePreConstructEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespectLocks_MetaData[];
#endif
		static void NewProp_bRespectLocks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectLocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateOnCompile_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CreateOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismissOnCompile_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DismissOnCompile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Favorites_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Favorites;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetDesignerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Widget Blueprint Designer.\n */" },
		{ "IncludePath", "Settings/WidgetDesignerSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Implements the settings for the Widget Blueprint Designer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_MetaData[] = {
		{ "Category", "GridSnapping" },
		{ "Comment", "/** If enabled, actor positions will snap to the grid. */" },
		{ "DisplayName", "Enable Grid Snapping" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "If enabled, actor positions will snap to the grid." },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->GridSnapEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled = { "GridSnapEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize_MetaData[] = {
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize = { "GridSnapSize", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetDesignerSettings, GridSnapSize), METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_MetaData[] = {
		{ "Category", "Dragging" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bLockToPanelOnDragByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault = { "bLockToPanelOnDragByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DefaultPreviewResolution_MetaData[] = {
		{ "Category", "Visuals" },
		{ "Comment", "/** The default preview resolution in the designer.*/" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "The default preview resolution in the designer." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DefaultPreviewResolution = { "DefaultPreviewResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetDesignerSettings, DefaultPreviewResolution), Z_Construct_UScriptStruct_FUintVector2, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DefaultPreviewResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DefaultPreviewResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_MetaData[] = {
		{ "Category", "Visuals" },
		{ "Comment", "/**\n\x09 * Should the designer show outlines by default?\n\x09 */" },
		{ "DisplayName", "Show Dashed Outlines By Default" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Should the designer show outlines by default?" },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bShowOutlines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines = { "bShowOutlines", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_MetaData[] = {
		{ "Category", "Visuals" },
		{ "Comment", "/**\n\x09 * Should the designer run the design event?  Disable this if you're seeing crashes in the designer,\n\x09 * you may have some unsafe code running in the designer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Should the designer run the design event?  Disable this if you're seeing crashes in the designer,\nyou may have some unsafe code running in the designer." },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bExecutePreConstructEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent = { "bExecutePreConstructEvent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Should the designer respect locked widgets?  If true, the designer by default\n\x09 * will not allow you to select locked widgets in the designer view.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Should the designer respect locked widgets?  If true, the designer by default\nwill not allow you to select locked widgets in the designer view." },
	};
#endif
	void Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_SetBit(void* Obj)
	{
		((UWidgetDesignerSettings*)Obj)->bRespectLocks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks = { "bRespectLocks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetDesignerSettings), &Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_CreateOnCompile_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Setting to automatically create compile tab based on compile results */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Setting to automatically create compile tab based on compile results" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_CreateOnCompile = { "CreateOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetDesignerSettings, CreateOnCompile), Z_Construct_UEnum_UMGEditor_EDisplayOnCompile, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_CreateOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_CreateOnCompile_MetaData)) }; // 2911172644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DismissOnCompile_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Setting to automatically dismiss compile tab based on compile results */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "Setting to automatically dismiss compile tab based on compile results" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DismissOnCompile = { "DismissOnCompile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetDesignerSettings, DismissOnCompile), Z_Construct_UEnum_UMGEditor_EDisplayOnCompile, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DismissOnCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DismissOnCompile_MetaData)) }; // 2911172644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_Favorites_MetaData[] = {
		{ "Comment", "/**\n\x09 * List of Favorites widgets used to populate the Favorites Palette\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/WidgetDesignerSettings.h" },
		{ "ToolTip", "List of Favorites widgets used to populate the Favorites Palette" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_Favorites = { "Favorites", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetDesignerSettings, Favorites), Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_Favorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_Favorites_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetDesignerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_GridSnapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bLockToPanelOnDragByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DefaultPreviewResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bShowOutlines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bExecutePreConstructEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_bRespectLocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_CreateOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_DismissOnCompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetDesignerSettings_Statics::NewProp_Favorites,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetDesignerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetDesignerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetDesignerSettings_Statics::ClassParams = {
		&UWidgetDesignerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetDesignerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetDesignerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetDesignerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetDesignerSettings()
	{
		if (!Z_Registration_Info_UClass_UWidgetDesignerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetDesignerSettings.OuterSingleton, Z_Construct_UClass_UWidgetDesignerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetDesignerSettings.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetDesignerSettings>()
	{
		return UWidgetDesignerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetDesignerSettings);
	UWidgetDesignerSettings::~UWidgetDesignerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics::EnumInfo[] = {
		{ EDisplayOnCompile_StaticEnum, TEXT("EDisplayOnCompile"), &Z_Registration_Info_UEnum_EDisplayOnCompile, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2911172644U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetDesignerSettings, UWidgetDesignerSettings::StaticClass, TEXT("UWidgetDesignerSettings"), &Z_Registration_Info_UClass_UWidgetDesignerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetDesignerSettings), 2781976328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_1316655749(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
