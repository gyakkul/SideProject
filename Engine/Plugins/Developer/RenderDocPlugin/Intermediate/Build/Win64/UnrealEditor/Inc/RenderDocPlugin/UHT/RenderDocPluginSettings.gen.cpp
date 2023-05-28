// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderDocPluginSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderDocPluginSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	RENDERDOCPLUGIN_API UClass* Z_Construct_UClass_URenderDocPluginSettings();
	RENDERDOCPLUGIN_API UClass* Z_Construct_UClass_URenderDocPluginSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RenderDocPlugin();
// End Cross Module References
	void URenderDocPluginSettings::StaticRegisterNativesURenderDocPluginSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderDocPluginSettings);
	UClass* Z_Construct_UClass_URenderDocPluginSettings_NoRegister()
	{
		return URenderDocPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_URenderDocPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAllActivity_MetaData[];
#endif
		static void NewProp_bCaptureAllActivity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAllActivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureAllCallstacks_MetaData[];
#endif
		static void NewProp_bCaptureAllCallstacks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureAllCallstacks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceAllResources_MetaData[];
#endif
		static void NewProp_bReferenceAllResources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceAllResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAllInitials_MetaData[];
#endif
		static void NewProp_bSaveAllInitials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAllInitials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureDelayInSeconds_MetaData[];
#endif
		static void NewProp_bCaptureDelayInSeconds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureDelayInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDelay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureFrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttach_MetaData[];
#endif
		static void NewProp_bAutoAttach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHelpOnStartup_MetaData[];
#endif
		static void NewProp_bShowHelpOnStartup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHelpOnStartup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRenderDocCrashHandler_MetaData[];
#endif
		static void NewProp_bEnableRenderDocCrashHandler_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRenderDocCrashHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderDocBinaryPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderDocBinaryPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderDocPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderDocPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "RenderDoc" },
		{ "IncludePath", "RenderDocPluginSettings.h" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureAllActivity" },
		{ "DisplayName", "Capture all activity" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will capture all activity in all viewports and editor windows for the entire frame instead of only the current viewport." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bCaptureAllActivity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity = { "bCaptureAllActivity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureCallstacks" },
		{ "DisplayName", "Capture all call stacks" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will capture callstacks for all API calls." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bCaptureAllCallstacks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks = { "bCaptureAllCallstacks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.ReferenceAllResources" },
		{ "DisplayName", "Reference all resources" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will include all rendering resources in the capture, even those that have not been used during the frame. Please note that doing this will significantly increase capture size." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bReferenceAllResources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources = { "bReferenceAllResources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.SaveAllInitials" },
		{ "DisplayName", "Save all initial states" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, RenderDoc will always capture the initial state of all rendering resources even if they are not likely to be used during the frame. Please note that doing this will significantly increase capture size." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bSaveAllInitials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials = { "bSaveAllInitials", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureDelayInSeconds" },
		{ "DisplayName", "Capture delay in seconds" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, the capture delay's unit will be in seconds instead of frames." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bCaptureDelayInSeconds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds = { "bCaptureDelayInSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ClampMin", "0" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureDelay" },
		{ "DisplayName", "Capture delay" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If > 0, RenderDoc will trigger the capture only after this amount of frames/seconds has passed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay = { "CaptureDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderDocPluginSettings, CaptureDelay), METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount_MetaData[] = {
		{ "Category", "Frame Capture Settings" },
		{ "ClampMin", "1" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "renderdoc.CaptureFrameCount" },
		{ "DisplayName", "Capture frame count" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If > 1, the RenderDoc capture will encompass more than a single frame. Note: this implies that all activity in all viewports and editor windows will be captured (i.e. same as CaptureAllActivity)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount = { "CaptureFrameCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderDocPluginSettings, CaptureFrameCount), METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConsoleVariable", "renderdoc.AutoAttach" },
		{ "DisplayName", "Auto attach on startup" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, then RenderDoc will attach on startup. Otherwise the command line argument '-AttachRenderDoc' is required." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bAutoAttach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach = { "bAutoAttach", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "renderdoc.ShowHelpOnStartup" },
		{ "DisplayName", "Show help on startup" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, a help window will be shown on startup." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bShowHelpOnStartup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup = { "bShowHelpOnStartup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "renderdoc.EnableCrashHandler" },
		{ "DisplayName", "Use the RenderDoc crash handler" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "If checked, the RenderDoc crash handler will be used if a crash occurs (Only use this if you know the problem is with RenderDoc and you want to notify the RenderDoc developers!)." },
	};
#endif
	void Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_SetBit(void* Obj)
	{
		((URenderDocPluginSettings*)Obj)->bEnableRenderDocCrashHandler = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler = { "bEnableRenderDocCrashHandler", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(URenderDocPluginSettings), &Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "renderdoc.BinaryPath" },
		{ "DisplayName", "RenderDoc executable path" },
		{ "ModuleRelativePath", "Public/RenderDocPluginSettings.h" },
		{ "ToolTip", "Path to the main RenderDoc executable to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath = { "RenderDocBinaryPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderDocPluginSettings, RenderDocBinaryPath), METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllActivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureAllCallstacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bReferenceAllResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bSaveAllInitials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bCaptureDelayInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_CaptureFrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bAutoAttach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bShowHelpOnStartup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_bEnableRenderDocCrashHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderDocPluginSettings_Statics::NewProp_RenderDocBinaryPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderDocPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderDocPluginSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderDocPluginSettings_Statics::ClassParams = {
		&URenderDocPluginSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URenderDocPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderDocPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderDocPluginSettings()
	{
		if (!Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton, Z_Construct_UClass_URenderDocPluginSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderDocPluginSettings.OuterSingleton;
	}
	template<> RENDERDOCPLUGIN_API UClass* StaticClass<URenderDocPluginSettings>()
	{
		return URenderDocPluginSettings::StaticClass();
	}
	URenderDocPluginSettings::URenderDocPluginSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderDocPluginSettings);
	URenderDocPluginSettings::~URenderDocPluginSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderDocPluginSettings, URenderDocPluginSettings::StaticClass, TEXT("URenderDocPluginSettings"), &Z_Registration_Info_UClass_URenderDocPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderDocPluginSettings), 3106237156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_136251997(TEXT("/Script/RenderDocPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_RenderDocPlugin_Source_RenderDocPlugin_Public_RenderDocPluginSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
