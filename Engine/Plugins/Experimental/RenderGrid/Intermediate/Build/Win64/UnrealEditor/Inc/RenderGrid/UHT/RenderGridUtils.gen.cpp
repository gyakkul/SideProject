// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderGridUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridUtils() {}
// Cross Module References
	RENDERGRID_API UScriptStruct* Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings();
	UPackage* Z_Construct_UPackage__Script_RenderGrid();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings;
class UScriptStruct* FRenderGridPreviousEngineFpsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings, (UObject*)Z_Construct_UPackage__Script_RenderGrid(), TEXT("RenderGridPreviousEngineFpsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings.OuterSingleton;
}
template<> RENDERGRID_API UScriptStruct* StaticStruct<FRenderGridPreviousEngineFpsSettings>()
{
	return FRenderGridPreviousEngineFpsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSet_MetaData[];
#endif
		static void NewProp_bHasBeenSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixedFrameRate_MetaData[];
#endif
		static void NewProp_bUseFixedFrameRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixedFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceDisableFrameRateSmoothing_MetaData[];
#endif
		static void NewProp_bForceDisableFrameRateSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceDisableFrameRateSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVSync_MetaData[];
#endif
		static void NewProp_bVSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVSyncEditor_MetaData[];
#endif
		static void NewProp_bVSyncEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVSyncEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bThrottleCPUWhenNotForeground_MetaData[];
#endif
		static void NewProp_bThrottleCPUWhenNotForeground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bThrottleCPUWhenNotForeground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This struct keeps track of the values of the GEngine framerate settings before new values were applied, so we can rollback to the previous state.\n */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "This struct keeps track of the values of the GEngine framerate settings before new values were applied, so we can rollback to the previous state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderGridPreviousEngineFpsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet_MetaData[] = {
		{ "Comment", "/** Whether the values have been set or not. */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "Whether the values have been set or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet_SetBit(void* Obj)
	{
		((FRenderGridPreviousEngineFpsSettings*)Obj)->bHasBeenSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet = { "bHasBeenSet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRenderGridPreviousEngineFpsSettings), &Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate_MetaData[] = {
		{ "Comment", "/** The previous value of GEngine->bUseFixedFrameRate. */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "The previous value of GEngine->bUseFixedFrameRate." },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate_SetBit(void* Obj)
	{
		((FRenderGridPreviousEngineFpsSettings*)Obj)->bUseFixedFrameRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate = { "bUseFixedFrameRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRenderGridPreviousEngineFpsSettings), &Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing_MetaData[] = {
		{ "Comment", "/** The previous value of GEngine->bForceDisableFrameRateSmoothing. */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "The previous value of GEngine->bForceDisableFrameRateSmoothing." },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing_SetBit(void* Obj)
	{
		((FRenderGridPreviousEngineFpsSettings*)Obj)->bForceDisableFrameRateSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing = { "bForceDisableFrameRateSmoothing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRenderGridPreviousEngineFpsSettings), &Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_MaxFps_MetaData[] = {
		{ "Comment", "/** The previous value of GEngine->GetMaxFPS(). */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "The previous value of GEngine->GetMaxFPS()." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_MaxFps = { "MaxFps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderGridPreviousEngineFpsSettings, MaxFps), METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_MaxFps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_MaxFps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync_MetaData[] = {
		{ "Comment", "/** The previous value of console variable \"r.VSync\". */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "The previous value of console variable \"r.VSync\"." },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync_SetBit(void* Obj)
	{
		((FRenderGridPreviousEngineFpsSettings*)Obj)->bVSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync = { "bVSync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRenderGridPreviousEngineFpsSettings), &Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor_MetaData[] = {
		{ "Comment", "/** The previous value of console variable \"r.VSyncEditor\". */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "The previous value of console variable \"r.VSyncEditor\"." },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor_SetBit(void* Obj)
	{
		((FRenderGridPreviousEngineFpsSettings*)Obj)->bVSyncEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor = { "bVSyncEditor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRenderGridPreviousEngineFpsSettings), &Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData[] = {
		{ "Comment", "/** The previous value of UEditorPerformanceSettings->bThrottleCPUWhenNotForeground. */" },
		{ "ModuleRelativePath", "Public/RenderGridUtils.h" },
		{ "ToolTip", "The previous value of UEditorPerformanceSettings->bThrottleCPUWhenNotForeground." },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_SetBit(void* Obj)
	{
		((FRenderGridPreviousEngineFpsSettings*)Obj)->bThrottleCPUWhenNotForeground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground = { "bThrottleCPUWhenNotForeground", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRenderGridPreviousEngineFpsSettings), &Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bHasBeenSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bUseFixedFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bForceDisableFrameRateSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_MaxFps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bVSyncEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewProp_bThrottleCPUWhenNotForeground,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
		nullptr,
		&NewStructOps,
		"RenderGridPreviousEngineFpsSettings",
		sizeof(FRenderGridPreviousEngineFpsSettings),
		alignof(FRenderGridPreviousEngineFpsSettings),
		Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings.InnerSingleton, Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGridUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGridUtils_h_Statics::ScriptStructInfo[] = {
		{ FRenderGridPreviousEngineFpsSettings::StaticStruct, Z_Construct_UScriptStruct_FRenderGridPreviousEngineFpsSettings_Statics::NewStructOps, TEXT("RenderGridPreviousEngineFpsSettings"), &Z_Registration_Info_UScriptStruct_RenderGridPreviousEngineFpsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderGridPreviousEngineFpsSettings), 1687475708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGridUtils_h_2111509401(TEXT("/Script/RenderGrid"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGridUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGridUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
