// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutputLogSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutputLogSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_ELogTimes();
	OUTPUTLOG_API UClass* Z_Construct_UClass_UOutputLogSettings();
	OUTPUTLOG_API UClass* Z_Construct_UClass_UOutputLogSettings_NoRegister();
	OUTPUTLOG_API UEnum* Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode();
	UPackage* Z_Construct_UPackage__Script_OutputLog();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELogCategoryColorizationMode;
	static UEnum* ELogCategoryColorizationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELogCategoryColorizationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELogCategoryColorizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode, (UObject*)Z_Construct_UPackage__Script_OutputLog(), TEXT("ELogCategoryColorizationMode"));
		}
		return Z_Registration_Info_UEnum_ELogCategoryColorizationMode.OuterSingleton;
	}
	template<> OUTPUTLOG_API UEnum* StaticEnum<ELogCategoryColorizationMode>()
	{
		return ELogCategoryColorizationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::Enumerators[] = {
		{ "ELogCategoryColorizationMode::None", (int64)ELogCategoryColorizationMode::None },
		{ "ELogCategoryColorizationMode::ColorizeWholeLine", (int64)ELogCategoryColorizationMode::ColorizeWholeLine },
		{ "ELogCategoryColorizationMode::ColorizeCategoryOnly", (int64)ELogCategoryColorizationMode::ColorizeCategoryOnly },
		{ "ELogCategoryColorizationMode::ColorizeCategoryAsBadge", (int64)ELogCategoryColorizationMode::ColorizeCategoryAsBadge },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::Enum_MetaDataParams[] = {
		{ "ColorizeCategoryAsBadge.Comment", "/** Colorize the background of the category name (including on warnings and errors) */" },
		{ "ColorizeCategoryAsBadge.Name", "ELogCategoryColorizationMode::ColorizeCategoryAsBadge" },
		{ "ColorizeCategoryAsBadge.ToolTip", "Colorize the background of the category name (including on warnings and errors)" },
		{ "ColorizeCategoryOnly.Comment", "/** Colorize only the category name (including on warnings and errors) */" },
		{ "ColorizeCategoryOnly.Name", "ELogCategoryColorizationMode::ColorizeCategoryOnly" },
		{ "ColorizeCategoryOnly.ToolTip", "Colorize only the category name (including on warnings and errors)" },
		{ "ColorizeWholeLine.Comment", "/** Colorize the entire log line, but not warnings or errors */" },
		{ "ColorizeWholeLine.Name", "ELogCategoryColorizationMode::ColorizeWholeLine" },
		{ "ColorizeWholeLine.ToolTip", "Colorize the entire log line, but not warnings or errors" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
		{ "None.Comment", "/** Do not colorize based on log categories */" },
		{ "None.Name", "ELogCategoryColorizationMode::None" },
		{ "None.ToolTip", "Do not colorize based on log categories" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OutputLog,
		nullptr,
		"ELogCategoryColorizationMode",
		"ELogCategoryColorizationMode",
		Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode()
	{
		if (!Z_Registration_Info_UEnum_ELogCategoryColorizationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELogCategoryColorizationMode.InnerSingleton, Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELogCategoryColorizationMode.InnerSingleton;
	}
	void UOutputLogSettings::StaticRegisterNativesUOutputLogSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutputLogSettings);
	UClass* Z_Construct_UClass_UOutputLogSettings_NoRegister()
	{
		return UOutputLogSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOutputLogSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogFontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogFontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogTimestampMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogTimestampMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CategoryColorizationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryColorizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CategoryColorizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCycleToOutputLogDrawer_MetaData[];
#endif
		static void NewProp_bCycleToOutputLogDrawer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCycleToOutputLogDrawer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOutputLogWordWrap_MetaData[];
#endif
		static void NewProp_bEnableOutputLogWordWrap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOutputLogWordWrap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOutputLogClearOnPIE_MetaData[];
#endif
		static void NewProp_bEnableOutputLogClearOnPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOutputLogClearOnPIE;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutputLogSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OutputLog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor style settings.\n */" },
		{ "IncludePath", "OutputLogSettings.h" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
		{ "ToolTip", "Implements the Editor style settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogFontSize_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "/** The font size used in the output log */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Log Font Size" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
		{ "ToolTip", "The font size used in the output log" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogFontSize = { "LogFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutputLogSettings, LogFontSize), METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogFontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogFontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogTimestampMode_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "/** The display mode for timestamps in the output log window */" },
		{ "DisplayName", "Output Log Window Timestamp Mode" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
		{ "ToolTip", "The display mode for timestamps in the output log window" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogTimestampMode = { "LogTimestampMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutputLogSettings, LogTimestampMode), Z_Construct_UEnum_CoreUObject_ELogTimes, METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogTimestampMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogTimestampMode_MetaData)) }; // 2967716447
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "/** How should categories be colorized in the output log? */" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
		{ "ToolTip", "How should categories be colorized in the output log?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode = { "CategoryColorizationMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutputLogSettings, CategoryColorizationMode), Z_Construct_UEnum_OutputLog_ELogCategoryColorizationMode, METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode_MetaData)) }; // 727045743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "/**\n\x09 * If checked pressing the console command shortcut will cycle between focusing the status bar console, opening the output log drawer, and back to the previous focus target. \n\x09 * If unchecked, the console command shortcut will only focus the status bar console\n\x09 */" },
		{ "DisplayName", "Open Output Log Drawer with Console Command Shortcut" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
		{ "ToolTip", "If checked pressing the console command shortcut will cycle between focusing the status bar console, opening the output log drawer, and back to the previous focus target.\nIf unchecked, the console command shortcut will only focus the status bar console" },
	};
#endif
	void Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer_SetBit(void* Obj)
	{
		((UOutputLogSettings*)Obj)->bCycleToOutputLogDrawer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer = { "bCycleToOutputLogDrawer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOutputLogSettings), &Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap_MetaData[] = {
		{ "Category", "Output Log" },
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap_SetBit(void* Obj)
	{
		((UOutputLogSettings*)Obj)->bEnableOutputLogWordWrap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap = { "bEnableOutputLogWordWrap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOutputLogSettings), &Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE_MetaData[] = {
		{ "ModuleRelativePath", "Public/OutputLogSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE_SetBit(void* Obj)
	{
		((UOutputLogSettings*)Obj)->bEnableOutputLogClearOnPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE = { "bEnableOutputLogClearOnPIE", nullptr, (EPropertyFlags)0x0010000800004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOutputLogSettings), &Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutputLogSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogFontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_LogTimestampMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_CategoryColorizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bCycleToOutputLogDrawer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogWordWrap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutputLogSettings_Statics::NewProp_bEnableOutputLogClearOnPIE,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutputLogSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutputLogSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutputLogSettings_Statics::ClassParams = {
		&UOutputLogSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOutputLogSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOutputLogSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutputLogSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutputLogSettings()
	{
		if (!Z_Registration_Info_UClass_UOutputLogSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutputLogSettings.OuterSingleton, Z_Construct_UClass_UOutputLogSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOutputLogSettings.OuterSingleton;
	}
	template<> OUTPUTLOG_API UClass* StaticClass<UOutputLogSettings>()
	{
		return UOutputLogSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutputLogSettings);
	UOutputLogSettings::~UOutputLogSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics::EnumInfo[] = {
		{ ELogCategoryColorizationMode_StaticEnum, TEXT("ELogCategoryColorizationMode"), &Z_Registration_Info_UEnum_ELogCategoryColorizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 727045743U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOutputLogSettings, UOutputLogSettings::StaticClass, TEXT("UOutputLogSettings"), &Z_Registration_Info_UClass_UOutputLogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutputLogSettings), 2746065209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_1060435857(TEXT("/Script/OutputLog"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
