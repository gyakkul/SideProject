// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUserSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowMode();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWindowMode;
	static UEnum* EWindowMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWindowMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWindowMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWindowMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWindowMode"));
		}
		return Z_Registration_Info_UEnum_EWindowMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWindowMode::Type>()
	{
		return EWindowMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWindowMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWindowMode_Statics::Enumerators[] = {
		{ "EWindowMode::Fullscreen", (int64)EWindowMode::Fullscreen },
		{ "EWindowMode::WindowedFullscreen", (int64)EWindowMode::WindowedFullscreen },
		{ "EWindowMode::Windowed", (int64)EWindowMode::Windowed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWindowMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Supported windowing modes (mirrored from GenericWindow.h) */" },
		{ "Fullscreen.Comment", "/** The window is in true fullscreen mode */" },
		{ "Fullscreen.Name", "EWindowMode::Fullscreen" },
		{ "Fullscreen.ToolTip", "The window is in true fullscreen mode" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Supported windowing modes (mirrored from GenericWindow.h)" },
		{ "Windowed.Comment", "/** The window has a border and may not take up the entire screen area */" },
		{ "Windowed.Name", "EWindowMode::Windowed" },
		{ "Windowed.ToolTip", "The window has a border and may not take up the entire screen area" },
		{ "WindowedFullscreen.Comment", "/** The window has no border and takes up the entire area of the screen */" },
		{ "WindowedFullscreen.Name", "EWindowMode::WindowedFullscreen" },
		{ "WindowedFullscreen.ToolTip", "The window has no border and takes up the entire area of the screen" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWindowMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWindowMode",
		"EWindowMode::Type",
		Z_Construct_UEnum_Engine_EWindowMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWindowMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWindowMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWindowMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWindowMode()
	{
		if (!Z_Registration_Info_UEnum_EWindowMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWindowMode.InnerSingleton, Z_Construct_UEnum_Engine_EWindowMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWindowMode.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnGameUserSettingsUINeedsUpdate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGameUserSettingsUINeedsUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGameUserSettingsUINeedsUpdate)
{
	OnGameUserSettingsUINeedsUpdate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UGameUserSettings::execIsHDREnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHDREnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetCurrentHDRDisplayNits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentHDRDisplayNits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execEnableHDRDisplayOutput)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_GET_PROPERTY(FIntProperty,Z_Param_DisplayNits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableHDRDisplayOutput(Z_Param_bEnable,Z_Param_DisplayNits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSupportsHDRDisplayOutput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SupportsHDRDisplayOutput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execApplyHardwareBenchmarkResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyHardwareBenchmarkResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execRunHardwareBenchmark)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WorkScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CPUMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GPUMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunHardwareBenchmark(Z_Param_WorkScale,Z_Param_CPUMultiplier,Z_Param_GPUMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetGameUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameUserSettings**)Z_Param__Result=UGameUserSettings::GetGameUserSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetFramePace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameUserSettings::GetFramePace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetSyncInterval)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGameUserSettings::GetSyncInterval();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetDefaultWindowMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=UGameUserSettings::GetDefaultWindowMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetDefaultWindowPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UGameUserSettings::GetDefaultWindowPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetDefaultResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UGameUserSettings::GetDefaultResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetRecommendedResolutionScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRecommendedResolutionScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetDefaultResolutionScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDefaultResolutionScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetToDefaults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetToDefaults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execResetToCurrentSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToCurrentSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSaveSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execLoadSettings)
	{
		P_GET_UBOOL(Z_Param_bForceReload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSettings(Z_Param_bForceReload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execValidateSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetShadingQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetShadingQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetShadingQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadingQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetFoliageQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFoliageQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetFoliageQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFoliageQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetPostProcessingQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPostProcessingQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetPostProcessingQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessingQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetVisualEffectQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVisualEffectQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetVisualEffectQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisualEffectQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetTextureQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTextureQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetTextureQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetAntiAliasingQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAntiAliasingQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetAntiAliasingQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAntiAliasingQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetReflectionQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetReflectionQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetReflectionQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReflectionQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetGlobalIlluminationQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGlobalIlluminationQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetGlobalIlluminationQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGlobalIlluminationQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetShadowQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetShadowQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetShadowQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetViewDistanceQuality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetViewDistanceQuality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetViewDistanceQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewDistanceQuality(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetResolutionScaleNormalized)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScaleNormalized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolutionScaleNormalized(Z_Param_NewScaleNormalized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetResolutionScaleValueEx)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolutionScaleValueEx(Z_Param_NewScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetResolutionScaleValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResolutionScaleValue(Z_Param_NewScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetResolutionScaleNormalized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetResolutionScaleNormalized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetResolutionScaleInformationEx)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentScaleNormalized);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentScaleValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinScaleValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResolutionScaleInformationEx(Z_Param_Out_CurrentScaleNormalized,Z_Param_Out_CurrentScaleValue,Z_Param_Out_MinScaleValue,Z_Param_Out_MaxScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetResolutionScaleInformation)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CurrentScaleNormalized);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CurrentScaleValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinScaleValue);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetResolutionScaleInformation(Z_Param_Out_CurrentScaleNormalized,Z_Param_Out_CurrentScaleValue,Z_Param_Out_MinScaleValue,Z_Param_Out_MaxScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetOverallScalabilityLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOverallScalabilityLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetOverallScalabilityLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverallScalabilityLevel(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetFrameRateLimit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrameRateLimit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetFrameRateLimit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrameRateLimit(Z_Param_NewLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetAudioQualityLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAudioQualityLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetAudioQualityLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_QualityLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioQualityLevel(Z_Param_QualityLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetBenchmarkFallbackValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBenchmarkFallbackValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execRevertVideoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RevertVideoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execConfirmVideoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmVideoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsDynamicResolutionDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamicResolutionDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsVSyncDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVSyncDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsFullscreenModeDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFullscreenModeDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsScreenResolutionDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsScreenResolutionDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsDynamicResolutionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamicResolutionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetDynamicResolutionEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDynamicResolutionEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execIsVSyncEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVSyncEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetVSyncEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVSyncEnabled(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetPreferredFullscreenMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetPreferredFullscreenMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetFullscreenMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InFullscreenMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFullscreenMode(EWindowMode::Type(Z_Param_InFullscreenMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetLastConfirmedFullscreenMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetLastConfirmedFullscreenMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetFullscreenMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EWindowMode::Type>*)Z_Param__Result=P_THIS->GetFullscreenMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execSetScreenResolution)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenResolution(Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetDesktopResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetDesktopResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetLastConfirmedScreenResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetLastConfirmedScreenResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execGetScreenResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetScreenResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execApplyResolutionSettings)
	{
		P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyResolutionSettings(Z_Param_bCheckForCommandLineOverrides);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execApplyNonResolutionSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyNonResolutionSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameUserSettings::execApplySettings)
	{
		P_GET_UBOOL(Z_Param_bCheckForCommandLineOverrides);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySettings(Z_Param_bCheckForCommandLineOverrides);
		P_NATIVE_END;
	}
	void UGameUserSettings::StaticRegisterNativesUGameUserSettings()
	{
		UClass* Class = UGameUserSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyHardwareBenchmarkResults", &UGameUserSettings::execApplyHardwareBenchmarkResults },
			{ "ApplyNonResolutionSettings", &UGameUserSettings::execApplyNonResolutionSettings },
			{ "ApplyResolutionSettings", &UGameUserSettings::execApplyResolutionSettings },
			{ "ApplySettings", &UGameUserSettings::execApplySettings },
			{ "ConfirmVideoMode", &UGameUserSettings::execConfirmVideoMode },
			{ "EnableHDRDisplayOutput", &UGameUserSettings::execEnableHDRDisplayOutput },
			{ "GetAntiAliasingQuality", &UGameUserSettings::execGetAntiAliasingQuality },
			{ "GetAudioQualityLevel", &UGameUserSettings::execGetAudioQualityLevel },
			{ "GetCurrentHDRDisplayNits", &UGameUserSettings::execGetCurrentHDRDisplayNits },
			{ "GetDefaultResolution", &UGameUserSettings::execGetDefaultResolution },
			{ "GetDefaultResolutionScale", &UGameUserSettings::execGetDefaultResolutionScale },
			{ "GetDefaultWindowMode", &UGameUserSettings::execGetDefaultWindowMode },
			{ "GetDefaultWindowPosition", &UGameUserSettings::execGetDefaultWindowPosition },
			{ "GetDesktopResolution", &UGameUserSettings::execGetDesktopResolution },
			{ "GetFoliageQuality", &UGameUserSettings::execGetFoliageQuality },
			{ "GetFramePace", &UGameUserSettings::execGetFramePace },
			{ "GetFrameRateLimit", &UGameUserSettings::execGetFrameRateLimit },
			{ "GetFullscreenMode", &UGameUserSettings::execGetFullscreenMode },
			{ "GetGameUserSettings", &UGameUserSettings::execGetGameUserSettings },
			{ "GetGlobalIlluminationQuality", &UGameUserSettings::execGetGlobalIlluminationQuality },
			{ "GetLastConfirmedFullscreenMode", &UGameUserSettings::execGetLastConfirmedFullscreenMode },
			{ "GetLastConfirmedScreenResolution", &UGameUserSettings::execGetLastConfirmedScreenResolution },
			{ "GetOverallScalabilityLevel", &UGameUserSettings::execGetOverallScalabilityLevel },
			{ "GetPostProcessingQuality", &UGameUserSettings::execGetPostProcessingQuality },
			{ "GetPreferredFullscreenMode", &UGameUserSettings::execGetPreferredFullscreenMode },
			{ "GetRecommendedResolutionScale", &UGameUserSettings::execGetRecommendedResolutionScale },
			{ "GetReflectionQuality", &UGameUserSettings::execGetReflectionQuality },
			{ "GetResolutionScaleInformation", &UGameUserSettings::execGetResolutionScaleInformation },
			{ "GetResolutionScaleInformationEx", &UGameUserSettings::execGetResolutionScaleInformationEx },
			{ "GetResolutionScaleNormalized", &UGameUserSettings::execGetResolutionScaleNormalized },
			{ "GetScreenResolution", &UGameUserSettings::execGetScreenResolution },
			{ "GetShadingQuality", &UGameUserSettings::execGetShadingQuality },
			{ "GetShadowQuality", &UGameUserSettings::execGetShadowQuality },
			{ "GetSyncInterval", &UGameUserSettings::execGetSyncInterval },
			{ "GetTextureQuality", &UGameUserSettings::execGetTextureQuality },
			{ "GetViewDistanceQuality", &UGameUserSettings::execGetViewDistanceQuality },
			{ "GetVisualEffectQuality", &UGameUserSettings::execGetVisualEffectQuality },
			{ "IsDirty", &UGameUserSettings::execIsDirty },
			{ "IsDynamicResolutionDirty", &UGameUserSettings::execIsDynamicResolutionDirty },
			{ "IsDynamicResolutionEnabled", &UGameUserSettings::execIsDynamicResolutionEnabled },
			{ "IsFullscreenModeDirty", &UGameUserSettings::execIsFullscreenModeDirty },
			{ "IsHDREnabled", &UGameUserSettings::execIsHDREnabled },
			{ "IsScreenResolutionDirty", &UGameUserSettings::execIsScreenResolutionDirty },
			{ "IsVSyncDirty", &UGameUserSettings::execIsVSyncDirty },
			{ "IsVSyncEnabled", &UGameUserSettings::execIsVSyncEnabled },
			{ "LoadSettings", &UGameUserSettings::execLoadSettings },
			{ "ResetToCurrentSettings", &UGameUserSettings::execResetToCurrentSettings },
			{ "RevertVideoMode", &UGameUserSettings::execRevertVideoMode },
			{ "RunHardwareBenchmark", &UGameUserSettings::execRunHardwareBenchmark },
			{ "SaveSettings", &UGameUserSettings::execSaveSettings },
			{ "SetAntiAliasingQuality", &UGameUserSettings::execSetAntiAliasingQuality },
			{ "SetAudioQualityLevel", &UGameUserSettings::execSetAudioQualityLevel },
			{ "SetBenchmarkFallbackValues", &UGameUserSettings::execSetBenchmarkFallbackValues },
			{ "SetDynamicResolutionEnabled", &UGameUserSettings::execSetDynamicResolutionEnabled },
			{ "SetFoliageQuality", &UGameUserSettings::execSetFoliageQuality },
			{ "SetFrameRateLimit", &UGameUserSettings::execSetFrameRateLimit },
			{ "SetFullscreenMode", &UGameUserSettings::execSetFullscreenMode },
			{ "SetGlobalIlluminationQuality", &UGameUserSettings::execSetGlobalIlluminationQuality },
			{ "SetOverallScalabilityLevel", &UGameUserSettings::execSetOverallScalabilityLevel },
			{ "SetPostProcessingQuality", &UGameUserSettings::execSetPostProcessingQuality },
			{ "SetReflectionQuality", &UGameUserSettings::execSetReflectionQuality },
			{ "SetResolutionScaleNormalized", &UGameUserSettings::execSetResolutionScaleNormalized },
			{ "SetResolutionScaleValue", &UGameUserSettings::execSetResolutionScaleValue },
			{ "SetResolutionScaleValueEx", &UGameUserSettings::execSetResolutionScaleValueEx },
			{ "SetScreenResolution", &UGameUserSettings::execSetScreenResolution },
			{ "SetShadingQuality", &UGameUserSettings::execSetShadingQuality },
			{ "SetShadowQuality", &UGameUserSettings::execSetShadowQuality },
			{ "SetTextureQuality", &UGameUserSettings::execSetTextureQuality },
			{ "SetToDefaults", &UGameUserSettings::execSetToDefaults },
			{ "SetViewDistanceQuality", &UGameUserSettings::execSetViewDistanceQuality },
			{ "SetVisualEffectQuality", &UGameUserSettings::execSetVisualEffectQuality },
			{ "SetVSyncEnabled", &UGameUserSettings::execSetVSyncEnabled },
			{ "SupportsHDRDisplayOutput", &UGameUserSettings::execSupportsHDRDisplayOutput },
			{ "ValidateSettings", &UGameUserSettings::execValidateSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Applies the settings stored in ScalabilityQuality and saves settings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Applies the settings stored in ScalabilityQuality and saves settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ApplyHardwareBenchmarkResults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ApplyNonResolutionSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics
	{
		struct GameUserSettings_eventApplyResolutionSettings_Parms
		{
			bool bCheckForCommandLineOverrides;
		};
		static void NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForCommandLineOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj)
	{
		((GameUserSettings_eventApplyResolutionSettings_Parms*)Obj)->bCheckForCommandLineOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::NewProp_bCheckForCommandLineOverrides = { "bCheckForCommandLineOverrides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventApplyResolutionSettings_Parms), &Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::NewProp_bCheckForCommandLineOverrides_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::NewProp_bCheckForCommandLineOverrides,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ApplyResolutionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::GameUserSettings_eventApplyResolutionSettings_Parms), Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics
	{
		struct GameUserSettings_eventApplySettings_Parms
		{
			bool bCheckForCommandLineOverrides;
		};
		static void NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckForCommandLineOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::NewProp_bCheckForCommandLineOverrides_SetBit(void* Obj)
	{
		((GameUserSettings_eventApplySettings_Parms*)Obj)->bCheckForCommandLineOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::NewProp_bCheckForCommandLineOverrides = { "bCheckForCommandLineOverrides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventApplySettings_Parms), &Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::NewProp_bCheckForCommandLineOverrides_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::NewProp_bCheckForCommandLineOverrides,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::Function_MetaDataParams[] = {
		{ "bCheckForCommandLineOverrides", "TRUE" },
		{ "Category", "Settings" },
		{ "Comment", "/** Applies all current user settings to the game and saves to permanent storage (e.g. file), optionally checking for command line overrides. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Applies all current user settings to the game and saves to permanent storage (e.g. file), optionally checking for command line overrides." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ApplySettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::GameUserSettings_eventApplySettings_Parms), Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ApplySettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ApplySettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Mark current video mode settings (fullscreenmode/resolution) as being confirmed by the user */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Mark current video mode settings (fullscreenmode/resolution) as being confirmed by the user" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ConfirmVideoMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics
	{
		struct GameUserSettings_eventEnableHDRDisplayOutput_Parms
		{
			bool bEnable;
			int32 DisplayNits;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayNits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameUserSettings_eventEnableHDRDisplayOutput_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventEnableHDRDisplayOutput_Parms), &Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_DisplayNits = { "DisplayNits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventEnableHDRDisplayOutput_Parms, DisplayNits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::NewProp_DisplayNits,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enables or disables HDR display output. Can be called again to change the desired nit level */" },
		{ "CPP_Default_DisplayNits", "1000" },
		{ "DisplayName", "Enable HDR Display Output" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Enables or disables HDR display output. Can be called again to change the desired nit level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "EnableHDRDisplayOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::GameUserSettings_eventEnableHDRDisplayOutput_Parms), Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics
	{
		struct GameUserSettings_eventGetAntiAliasingQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetAntiAliasingQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the anti-aliasing quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the anti-aliasing quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetAntiAliasingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::GameUserSettings_eventGetAntiAliasingQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics
	{
		struct GameUserSettings_eventGetAudioQualityLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetAudioQualityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the user's audio quality level setting */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the user's audio quality level setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetAudioQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::GameUserSettings_eventGetAudioQualityLevel_Parms), Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics
	{
		struct GameUserSettings_eventGetCurrentHDRDisplayNits_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetCurrentHDRDisplayNits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns 0 if HDR isn't supported or is turned off */" },
		{ "DisplayName", "Get Current HDR Display Nits" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns 0 if HDR isn't supported or is turned off" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetCurrentHDRDisplayNits", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::GameUserSettings_eventGetCurrentHDRDisplayNits_Parms), Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics
	{
		struct GameUserSettings_eventGetDefaultResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetDefaultResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the default resolution when no resolution is set */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the default resolution when no resolution is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetDefaultResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::GameUserSettings_eventGetDefaultResolution_Parms), Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics
	{
		struct GameUserSettings_eventGetDefaultResolutionScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetDefaultResolutionScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Gets the desired resolution quality based on DesiredScreenWidth/Height and the current screen resolution */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Gets the desired resolution quality based on DesiredScreenWidth/Height and the current screen resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetDefaultResolutionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::GameUserSettings_eventGetDefaultResolutionScale_Parms), Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics
	{
		struct GameUserSettings_eventGetDefaultWindowMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetDefaultWindowMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the default window mode when no mode is set */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the default window mode when no mode is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetDefaultWindowMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::GameUserSettings_eventGetDefaultWindowMode_Parms), Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics
	{
		struct GameUserSettings_eventGetDefaultWindowPosition_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetDefaultWindowPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the default window position when no position is set */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the default window position when no position is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetDefaultWindowPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::GameUserSettings_eventGetDefaultWindowPosition_Parms), Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics
	{
		struct GameUserSettings_eventGetDesktopResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetDesktopResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns user's desktop resolution, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns user's desktop resolution, in pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetDesktopResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::GameUserSettings_eventGetDesktopResolution_Parms), Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics
	{
		struct GameUserSettings_eventGetFoliageQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetFoliageQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the foliage quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the foliage quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetFoliageQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::GameUserSettings_eventGetFoliageQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics
	{
		struct GameUserSettings_eventGetFramePace_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetFramePace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Gets the current frame pacing frame rate in fps, or 0 if none */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Gets the current frame pacing frame rate in fps, or 0 if none" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetFramePace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::GameUserSettings_eventGetFramePace_Parms), Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetFramePace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetFramePace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics
	{
		struct GameUserSettings_eventGetFrameRateLimit_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetFrameRateLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Gets the user's frame rate limit (0 indiciates the frame rate limit is disabled) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Gets the user's frame rate limit (0 indiciates the frame rate limit is disabled)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetFrameRateLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::GameUserSettings_eventGetFrameRateLimit_Parms), Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics
	{
		struct GameUserSettings_eventGetFullscreenMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetFullscreenMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the user setting for game window fullscreen mode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the user setting for game window fullscreen mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetFullscreenMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::GameUserSettings_eventGetFullscreenMode_Parms), Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics
	{
		struct GameUserSettings_eventGetGameUserSettings_Parms
		{
			UGameUserSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetGameUserSettings_Parms, ReturnValue), Z_Construct_UClass_UGameUserSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the game local machine settings (resolution, windowing mode, scalability settings, etc...) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the game local machine settings (resolution, windowing mode, scalability settings, etc...)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetGameUserSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::GameUserSettings_eventGetGameUserSettings_Parms), Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics
	{
		struct GameUserSettings_eventGetGlobalIlluminationQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetGlobalIlluminationQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the global illumination quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the global illumination quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetGlobalIlluminationQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::GameUserSettings_eventGetGlobalIlluminationQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics
	{
		struct GameUserSettings_eventGetLastConfirmedFullscreenMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetLastConfirmedFullscreenMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the last confirmed user setting for game window fullscreen mode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the last confirmed user setting for game window fullscreen mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetLastConfirmedFullscreenMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::GameUserSettings_eventGetLastConfirmedFullscreenMode_Parms), Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics
	{
		struct GameUserSettings_eventGetLastConfirmedScreenResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetLastConfirmedScreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the last confirmed user setting for game screen resolution, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the last confirmed user setting for game screen resolution, in pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetLastConfirmedScreenResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::GameUserSettings_eventGetLastConfirmedScreenResolution_Parms), Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics
	{
		struct GameUserSettings_eventGetOverallScalabilityLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetOverallScalabilityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the overall scalability level (can return -1 if the settings are custom)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the overall scalability level (can return -1 if the settings are custom)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetOverallScalabilityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::GameUserSettings_eventGetOverallScalabilityLevel_Parms), Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics
	{
		struct GameUserSettings_eventGetPostProcessingQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetPostProcessingQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the post-processing quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the post-processing quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetPostProcessingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::GameUserSettings_eventGetPostProcessingQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics
	{
		struct GameUserSettings_eventGetPreferredFullscreenMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetPreferredFullscreenMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the user setting for game window fullscreen mode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the user setting for game window fullscreen mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetPreferredFullscreenMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::GameUserSettings_eventGetPreferredFullscreenMode_Parms), Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics
	{
		struct GameUserSettings_eventGetRecommendedResolutionScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetRecommendedResolutionScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Gets the recommended resolution quality based on LastRecommendedScreenWidth/Height and the current screen resolution */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Gets the recommended resolution quality based on LastRecommendedScreenWidth/Height and the current screen resolution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetRecommendedResolutionScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::GameUserSettings_eventGetRecommendedResolutionScale_Parms), Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics
	{
		struct GameUserSettings_eventGetReflectionQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetReflectionQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the reflection quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the reflection quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetReflectionQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::GameUserSettings_eventGetReflectionQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics
	{
		struct GameUserSettings_eventGetResolutionScaleInformation_Parms
		{
			float CurrentScaleNormalized;
			int32 CurrentScaleValue;
			int32 MinScaleValue;
			int32 MaxScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentScaleNormalized;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScaleValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinScaleValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_CurrentScaleNormalized = { "CurrentScaleNormalized", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformation_Parms, CurrentScaleNormalized), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_CurrentScaleValue = { "CurrentScaleValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformation_Parms, CurrentScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_MinScaleValue = { "MinScaleValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformation_Parms, MinScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_MaxScaleValue = { "MaxScaleValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformation_Parms, MaxScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_CurrentScaleNormalized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_CurrentScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_MinScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::NewProp_MaxScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DeprecatedFunction", "" },
		{ "DisplayName", "GetResolutionScaleInformation_Deprecated" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetResolutionScaleInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::GameUserSettings_eventGetResolutionScaleInformation_Parms), Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics
	{
		struct GameUserSettings_eventGetResolutionScaleInformationEx_Parms
		{
			float CurrentScaleNormalized;
			float CurrentScaleValue;
			float MinScaleValue;
			float MaxScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentScaleNormalized;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentScaleValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScaleValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_CurrentScaleNormalized = { "CurrentScaleNormalized", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformationEx_Parms, CurrentScaleNormalized), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_CurrentScaleValue = { "CurrentScaleValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformationEx_Parms, CurrentScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_MinScaleValue = { "MinScaleValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformationEx_Parms, MinScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_MaxScaleValue = { "MaxScaleValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleInformationEx_Parms, MaxScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_CurrentScaleNormalized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_CurrentScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_MinScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::NewProp_MaxScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the current resolution scale and the range\n" },
		{ "DisplayName", "GetResolutionScaleInformation" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the current resolution scale and the range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetResolutionScaleInformationEx", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::GameUserSettings_eventGetResolutionScaleInformationEx_Parms), Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics
	{
		struct GameUserSettings_eventGetResolutionScaleNormalized_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetResolutionScaleNormalized_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Gets the current resolution scale as a normalized 0..1 value between MinScaleValue and MaxScaleValue\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Gets the current resolution scale as a normalized 0..1 value between MinScaleValue and MaxScaleValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetResolutionScaleNormalized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::GameUserSettings_eventGetResolutionScaleNormalized_Parms), Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics
	{
		struct GameUserSettings_eventGetScreenResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetScreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the user setting for game screen resolution, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the user setting for game screen resolution, in pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetScreenResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::GameUserSettings_eventGetScreenResolution_Parms), Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics
	{
		struct GameUserSettings_eventGetShadingQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetShadingQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the shading quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the shading quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetShadingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::GameUserSettings_eventGetShadingQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetShadingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetShadingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics
	{
		struct GameUserSettings_eventGetShadowQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetShadowQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the shadow quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the shadow quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetShadowQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::GameUserSettings_eventGetShadowQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetShadowQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetShadowQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics
	{
		struct GameUserSettings_eventGetSyncInterval_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetSyncInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetSyncInterval", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::GameUserSettings_eventGetSyncInterval_Parms), Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetSyncInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetSyncInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics
	{
		struct GameUserSettings_eventGetTextureQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetTextureQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the texture quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the texture quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetTextureQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::GameUserSettings_eventGetTextureQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetTextureQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetTextureQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics
	{
		struct GameUserSettings_eventGetViewDistanceQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetViewDistanceQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the view distance quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the view distance quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetViewDistanceQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::GameUserSettings_eventGetViewDistanceQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics
	{
		struct GameUserSettings_eventGetVisualEffectQuality_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventGetVisualEffectQuality_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Returns the visual effects quality (0..4, higher is better)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the visual effects quality (0..4, higher is better)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "GetVisualEffectQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::GameUserSettings_eventGetVisualEffectQuality_Parms), Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics
	{
		struct GameUserSettings_eventIsDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsDirty_Parms), &Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Checks if any user settings is different from current */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Checks if any user settings is different from current" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::GameUserSettings_eventIsDirty_Parms), Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics
	{
		struct GameUserSettings_eventIsDynamicResolutionDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsDynamicResolutionDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsDynamicResolutionDirty_Parms), &Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Checks if the dynamic resolution user setting is different from current system setting */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Checks if the dynamic resolution user setting is different from current system setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsDynamicResolutionDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::GameUserSettings_eventIsDynamicResolutionDirty_Parms), Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics
	{
		struct GameUserSettings_eventIsDynamicResolutionEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsDynamicResolutionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsDynamicResolutionEnabled_Parms), &Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the user setting for dynamic resolution. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the user setting for dynamic resolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsDynamicResolutionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::GameUserSettings_eventIsDynamicResolutionEnabled_Parms), Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics
	{
		struct GameUserSettings_eventIsFullscreenModeDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsFullscreenModeDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsFullscreenModeDirty_Parms), &Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Checks if the FullscreenMode user setting is different from current */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Checks if the FullscreenMode user setting is different from current" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsFullscreenModeDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::GameUserSettings_eventIsFullscreenModeDirty_Parms), Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics
	{
		struct GameUserSettings_eventIsHDREnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsHDREnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsHDREnabled_Parms), &Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Is HDR Enabled" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsHDREnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::GameUserSettings_eventIsHDREnabled_Parms), Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsHDREnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsHDREnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics
	{
		struct GameUserSettings_eventIsScreenResolutionDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsScreenResolutionDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsScreenResolutionDirty_Parms), &Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Checks if the Screen Resolution user setting is different from current */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Checks if the Screen Resolution user setting is different from current" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsScreenResolutionDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::GameUserSettings_eventIsScreenResolutionDirty_Parms), Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics
	{
		struct GameUserSettings_eventIsVSyncDirty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsVSyncDirty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsVSyncDirty_Parms), &Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Checks if the vsync user setting is different from current system setting */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Checks if the vsync user setting is different from current system setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsVSyncDirty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::GameUserSettings_eventIsVSyncDirty_Parms), Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics
	{
		struct GameUserSettings_eventIsVSyncEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventIsVSyncEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventIsVSyncEnabled_Parms), &Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Returns the user setting for vsync. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Returns the user setting for vsync." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "IsVSyncEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::GameUserSettings_eventIsVSyncEnabled_Parms), Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics
	{
		struct GameUserSettings_eventLoadSettings_Parms
		{
			bool bForceReload;
		};
		static void NewProp_bForceReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::NewProp_bForceReload_SetBit(void* Obj)
	{
		((GameUserSettings_eventLoadSettings_Parms*)Obj)->bForceReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::NewProp_bForceReload = { "bForceReload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventLoadSettings_Parms), &Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::NewProp_bForceReload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::NewProp_bForceReload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Loads the user settings from persistent storage */" },
		{ "CPP_Default_bForceReload", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Loads the user settings from persistent storage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "LoadSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::GameUserSettings_eventLoadSettings_Parms), Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_LoadSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_LoadSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** This function resets all settings to the current system settings */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "This function resets all settings to the current system settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ResetToCurrentSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Revert video mode (fullscreenmode/resolution) back to the last user confirmed values */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Revert video mode (fullscreenmode/resolution) back to the last user confirmed values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "RevertVideoMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_RevertVideoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_RevertVideoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics
	{
		struct GameUserSettings_eventRunHardwareBenchmark_Parms
		{
			int32 WorkScale;
			float CPUMultiplier;
			float GPUMultiplier;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorkScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CPUMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::NewProp_WorkScale = { "WorkScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventRunHardwareBenchmark_Parms, WorkScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::NewProp_CPUMultiplier = { "CPUMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventRunHardwareBenchmark_Parms, CPUMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::NewProp_GPUMultiplier = { "GPUMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventRunHardwareBenchmark_Parms, GPUMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::NewProp_WorkScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::NewProp_CPUMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::NewProp_GPUMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Runs the hardware benchmark and populates ScalabilityQuality as well as the last benchmark results config members, but does not apply the settings it determines. Designed to be called in conjunction with ApplyHardwareBenchmarkResults */" },
		{ "CPP_Default_CPUMultiplier", "1.000000" },
		{ "CPP_Default_GPUMultiplier", "1.000000" },
		{ "CPP_Default_WorkScale", "10" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Runs the hardware benchmark and populates ScalabilityQuality as well as the last benchmark results config members, but does not apply the settings it determines. Designed to be called in conjunction with ApplyHardwareBenchmarkResults" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "RunHardwareBenchmark", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::GameUserSettings_eventRunHardwareBenchmark_Parms), Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Save the user settings to persistent storage (automatically happens as part of ApplySettings) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Save the user settings to persistent storage (automatically happens as part of ApplySettings)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SaveSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SaveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SaveSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics
	{
		struct GameUserSettings_eventSetAntiAliasingQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetAntiAliasingQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the anti-aliasing quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the anti-aliasing quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetAntiAliasingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::GameUserSettings_eventSetAntiAliasingQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics
	{
		struct GameUserSettings_eventSetAudioQualityLevel_Parms
		{
			int32 QualityLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetAudioQualityLevel_Parms, QualityLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::NewProp_QualityLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the user's audio quality level setting */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the user's audio quality level setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetAudioQualityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::GameUserSettings_eventSetAudioQualityLevel_Parms), Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Set scalability settings to sensible fallback values, for use when the benchmark fails or potentially causes a crash */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Set scalability settings to sensible fallback values, for use when the benchmark fails or potentially causes a crash" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetBenchmarkFallbackValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics
	{
		struct GameUserSettings_eventSetDynamicResolutionEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameUserSettings_eventSetDynamicResolutionEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventSetDynamicResolutionEnabled_Parms), &Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the user setting for dynamic resolution. See UGameUserSettings::bUseDynamicResolution. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the user setting for dynamic resolution. See UGameUserSettings::bUseDynamicResolution." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetDynamicResolutionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::GameUserSettings_eventSetDynamicResolutionEnabled_Parms), Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics
	{
		struct GameUserSettings_eventSetFoliageQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetFoliageQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the foliage quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the foliage quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetFoliageQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::GameUserSettings_eventSetFoliageQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics
	{
		struct GameUserSettings_eventSetFrameRateLimit_Parms
		{
			float NewLimit;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::NewProp_NewLimit = { "NewLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetFrameRateLimit_Parms, NewLimit), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::NewProp_NewLimit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the user's frame rate limit (0 will disable frame rate limiting) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the user's frame rate limit (0 will disable frame rate limiting)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetFrameRateLimit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::GameUserSettings_eventSetFrameRateLimit_Parms), Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics
	{
		struct GameUserSettings_eventSetFullscreenMode_Parms
		{
			TEnumAsByte<EWindowMode::Type> InFullscreenMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InFullscreenMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::NewProp_InFullscreenMode = { "InFullscreenMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetFullscreenMode_Parms, InFullscreenMode), Z_Construct_UEnum_Engine_EWindowMode, METADATA_PARAMS(nullptr, 0) }; // 2666347754
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::NewProp_InFullscreenMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the user setting for the game window fullscreen mode. See UGameUserSettings::FullscreenMode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the user setting for the game window fullscreen mode. See UGameUserSettings::FullscreenMode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetFullscreenMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::GameUserSettings_eventSetFullscreenMode_Parms), Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics
	{
		struct GameUserSettings_eventSetGlobalIlluminationQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetGlobalIlluminationQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the global illumination quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the global illumination quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetGlobalIlluminationQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::GameUserSettings_eventSetGlobalIlluminationQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics
	{
		struct GameUserSettings_eventSetOverallScalabilityLevel_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetOverallScalabilityLevel_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Changes all scalability settings at once based on a single overall quality level\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Changes all scalability settings at once based on a single overall quality level\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetOverallScalabilityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::GameUserSettings_eventSetOverallScalabilityLevel_Parms), Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics
	{
		struct GameUserSettings_eventSetPostProcessingQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetPostProcessingQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the post-processing quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the post-processing quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetPostProcessingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::GameUserSettings_eventSetPostProcessingQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics
	{
		struct GameUserSettings_eventSetReflectionQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetReflectionQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the reflection quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the reflection quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetReflectionQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::GameUserSettings_eventSetReflectionQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics
	{
		struct GameUserSettings_eventSetResolutionScaleNormalized_Parms
		{
			float NewScaleNormalized;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScaleNormalized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::NewProp_NewScaleNormalized = { "NewScaleNormalized", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetResolutionScaleNormalized_Parms, NewScaleNormalized), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::NewProp_NewScaleNormalized,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the current resolution scale as a normalized 0..1 value between MinScaleValue and MaxScaleValue\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the current resolution scale as a normalized 0..1 value between MinScaleValue and MaxScaleValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetResolutionScaleNormalized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::GameUserSettings_eventSetResolutionScaleNormalized_Parms), Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics
	{
		struct GameUserSettings_eventSetResolutionScaleValue_Parms
		{
			int32 NewScaleValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::NewProp_NewScaleValue = { "NewScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetResolutionScaleValue_Parms, NewScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::NewProp_NewScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "DeprecatedFunction", "" },
		{ "DisplayName", "SetResolutionScaleValue_Deprecated" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetResolutionScaleValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::GameUserSettings_eventSetResolutionScaleValue_Parms), Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics
	{
		struct GameUserSettings_eventSetResolutionScaleValueEx_Parms
		{
			float NewScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::NewProp_NewScaleValue = { "NewScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetResolutionScaleValueEx_Parms, NewScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::NewProp_NewScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the current resolution scale\n" },
		{ "DisplayName", "SetResolutionScaleValue" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the current resolution scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetResolutionScaleValueEx", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::GameUserSettings_eventSetResolutionScaleValueEx_Parms), Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics
	{
		struct GameUserSettings_eventSetScreenResolution_Parms
		{
			FIntPoint Resolution;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetScreenResolution_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::NewProp_Resolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the user setting for game screen resolution, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the user setting for game screen resolution, in pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetScreenResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::GameUserSettings_eventSetScreenResolution_Parms), Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics
	{
		struct GameUserSettings_eventSetShadingQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetShadingQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the shading quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the shading quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetShadingQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::GameUserSettings_eventSetShadingQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetShadingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetShadingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics
	{
		struct GameUserSettings_eventSetShadowQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetShadowQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the shadow quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the shadow quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetShadowQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::GameUserSettings_eventSetShadowQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetShadowQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetShadowQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics
	{
		struct GameUserSettings_eventSetTextureQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetTextureQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the texture quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic  (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the texture quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic  (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetTextureQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::GameUserSettings_eventSetTextureQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetTextureQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetTextureQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetToDefaults", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetToDefaults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetToDefaults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics
	{
		struct GameUserSettings_eventSetViewDistanceQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetViewDistanceQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the view distance quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the view distance quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetViewDistanceQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::GameUserSettings_eventSetViewDistanceQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics
	{
		struct GameUserSettings_eventSetVisualEffectQuality_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameUserSettings_eventSetVisualEffectQuality_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sets the visual effects quality (0..4, higher is better)\n// @param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the visual effects quality (0..4, higher is better)\n@param Value 0:low, 1:medium, 2:high, 3:epic, 4:cinematic (gets clamped if needed)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetVisualEffectQuality", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::GameUserSettings_eventSetVisualEffectQuality_Parms), Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics
	{
		struct GameUserSettings_eventSetVSyncEnabled_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((GameUserSettings_eventSetVSyncEnabled_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventSetVSyncEnabled_Parms), &Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sets the user setting for vsync. See UGameUserSettings::bUseVSync. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Sets the user setting for vsync. See UGameUserSettings::bUseVSync." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SetVSyncEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::GameUserSettings_eventSetVSyncEnabled_Parms), Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics
	{
		struct GameUserSettings_eventSupportsHDRDisplayOutput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameUserSettings_eventSupportsHDRDisplayOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameUserSettings_eventSupportsHDRDisplayOutput_Parms), &Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether the curently running system supports HDR display output */" },
		{ "DisplayName", "Supports HDR Display Output" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Whether the curently running system supports HDR display output" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "SupportsHDRDisplayOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::GameUserSettings_eventSupportsHDRDisplayOutput_Parms), Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Validates and resets bad user settings to default. Deletes stale user settings file if necessary. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Validates and resets bad user settings to default. Deletes stale user settings file if necessary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUserSettings, nullptr, "ValidateSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameUserSettings_ValidateSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUserSettings_ValidateSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameUserSettings);
	UClass* Z_Construct_UClass_UGameUserSettings_NoRegister()
	{
		return UGameUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseVSync_MetaData[];
#endif
		static void NewProp_bUseVSync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVSync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicResolution_MetaData[];
#endif
		static void NewProp_bUseDynamicResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ResolutionSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ResolutionSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUserConfirmedResolutionSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastUserConfirmedResolutionSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUserConfirmedResolutionSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastUserConfirmedResolutionSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowPosX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WindowPosX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowPosY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WindowPosY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullscreenMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FullscreenMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastConfirmedFullscreenMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastConfirmedFullscreenMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredFullscreenMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredFullscreenMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioQualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioQualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastConfirmedAudioQualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastConfirmedAudioQualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRateLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredScreenWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredScreenWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDesiredScreenHeight_MetaData[];
#endif
		static void NewProp_bUseDesiredScreenHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDesiredScreenHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredScreenHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredScreenHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUserConfirmedDesiredScreenWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUserConfirmedDesiredScreenWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUserConfirmedDesiredScreenHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastUserConfirmedDesiredScreenHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRecommendedScreenWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastRecommendedScreenWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRecommendedScreenHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastRecommendedScreenHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCPUBenchmarkResult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastCPUBenchmarkResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGPUBenchmarkResult_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastGPUBenchmarkResult;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastCPUBenchmarkSteps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCPUBenchmarkSteps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastCPUBenchmarkSteps;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastGPUBenchmarkSteps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGPUBenchmarkSteps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastGPUBenchmarkSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGPUBenchmarkMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastGPUBenchmarkMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHDRDisplayOutput_MetaData[];
#endif
		static void NewProp_bUseHDRDisplayOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHDRDisplayOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HDRDisplayOutputNits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HDRDisplayOutputNits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGameUserSettingsUINeedsUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameUserSettingsUINeedsUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameUserSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameUserSettings_ApplyHardwareBenchmarkResults, "ApplyHardwareBenchmarkResults" }, // 1377205319
		{ &Z_Construct_UFunction_UGameUserSettings_ApplyNonResolutionSettings, "ApplyNonResolutionSettings" }, // 1777455837
		{ &Z_Construct_UFunction_UGameUserSettings_ApplyResolutionSettings, "ApplyResolutionSettings" }, // 4121854855
		{ &Z_Construct_UFunction_UGameUserSettings_ApplySettings, "ApplySettings" }, // 5409606
		{ &Z_Construct_UFunction_UGameUserSettings_ConfirmVideoMode, "ConfirmVideoMode" }, // 3459247163
		{ &Z_Construct_UFunction_UGameUserSettings_EnableHDRDisplayOutput, "EnableHDRDisplayOutput" }, // 1301321761
		{ &Z_Construct_UFunction_UGameUserSettings_GetAntiAliasingQuality, "GetAntiAliasingQuality" }, // 2409040935
		{ &Z_Construct_UFunction_UGameUserSettings_GetAudioQualityLevel, "GetAudioQualityLevel" }, // 937107647
		{ &Z_Construct_UFunction_UGameUserSettings_GetCurrentHDRDisplayNits, "GetCurrentHDRDisplayNits" }, // 3688553274
		{ &Z_Construct_UFunction_UGameUserSettings_GetDefaultResolution, "GetDefaultResolution" }, // 1187538857
		{ &Z_Construct_UFunction_UGameUserSettings_GetDefaultResolutionScale, "GetDefaultResolutionScale" }, // 1677930729
		{ &Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowMode, "GetDefaultWindowMode" }, // 3485211934
		{ &Z_Construct_UFunction_UGameUserSettings_GetDefaultWindowPosition, "GetDefaultWindowPosition" }, // 356846581
		{ &Z_Construct_UFunction_UGameUserSettings_GetDesktopResolution, "GetDesktopResolution" }, // 4277697327
		{ &Z_Construct_UFunction_UGameUserSettings_GetFoliageQuality, "GetFoliageQuality" }, // 2782863759
		{ &Z_Construct_UFunction_UGameUserSettings_GetFramePace, "GetFramePace" }, // 2061822122
		{ &Z_Construct_UFunction_UGameUserSettings_GetFrameRateLimit, "GetFrameRateLimit" }, // 63359907
		{ &Z_Construct_UFunction_UGameUserSettings_GetFullscreenMode, "GetFullscreenMode" }, // 3355591500
		{ &Z_Construct_UFunction_UGameUserSettings_GetGameUserSettings, "GetGameUserSettings" }, // 3116665246
		{ &Z_Construct_UFunction_UGameUserSettings_GetGlobalIlluminationQuality, "GetGlobalIlluminationQuality" }, // 2343590421
		{ &Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedFullscreenMode, "GetLastConfirmedFullscreenMode" }, // 2807694035
		{ &Z_Construct_UFunction_UGameUserSettings_GetLastConfirmedScreenResolution, "GetLastConfirmedScreenResolution" }, // 1107911139
		{ &Z_Construct_UFunction_UGameUserSettings_GetOverallScalabilityLevel, "GetOverallScalabilityLevel" }, // 756119557
		{ &Z_Construct_UFunction_UGameUserSettings_GetPostProcessingQuality, "GetPostProcessingQuality" }, // 4024106371
		{ &Z_Construct_UFunction_UGameUserSettings_GetPreferredFullscreenMode, "GetPreferredFullscreenMode" }, // 3793646516
		{ &Z_Construct_UFunction_UGameUserSettings_GetRecommendedResolutionScale, "GetRecommendedResolutionScale" }, // 4150312134
		{ &Z_Construct_UFunction_UGameUserSettings_GetReflectionQuality, "GetReflectionQuality" }, // 391776989
		{ &Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformation, "GetResolutionScaleInformation" }, // 3868524101
		{ &Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleInformationEx, "GetResolutionScaleInformationEx" }, // 1102359690
		{ &Z_Construct_UFunction_UGameUserSettings_GetResolutionScaleNormalized, "GetResolutionScaleNormalized" }, // 3431156935
		{ &Z_Construct_UFunction_UGameUserSettings_GetScreenResolution, "GetScreenResolution" }, // 1707111862
		{ &Z_Construct_UFunction_UGameUserSettings_GetShadingQuality, "GetShadingQuality" }, // 3931702175
		{ &Z_Construct_UFunction_UGameUserSettings_GetShadowQuality, "GetShadowQuality" }, // 174676903
		{ &Z_Construct_UFunction_UGameUserSettings_GetSyncInterval, "GetSyncInterval" }, // 1691026431
		{ &Z_Construct_UFunction_UGameUserSettings_GetTextureQuality, "GetTextureQuality" }, // 1042301906
		{ &Z_Construct_UFunction_UGameUserSettings_GetViewDistanceQuality, "GetViewDistanceQuality" }, // 2829407340
		{ &Z_Construct_UFunction_UGameUserSettings_GetVisualEffectQuality, "GetVisualEffectQuality" }, // 1716732278
		{ &Z_Construct_UFunction_UGameUserSettings_IsDirty, "IsDirty" }, // 1752887291
		{ &Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionDirty, "IsDynamicResolutionDirty" }, // 525952176
		{ &Z_Construct_UFunction_UGameUserSettings_IsDynamicResolutionEnabled, "IsDynamicResolutionEnabled" }, // 3142647951
		{ &Z_Construct_UFunction_UGameUserSettings_IsFullscreenModeDirty, "IsFullscreenModeDirty" }, // 208875506
		{ &Z_Construct_UFunction_UGameUserSettings_IsHDREnabled, "IsHDREnabled" }, // 3690644467
		{ &Z_Construct_UFunction_UGameUserSettings_IsScreenResolutionDirty, "IsScreenResolutionDirty" }, // 2887766956
		{ &Z_Construct_UFunction_UGameUserSettings_IsVSyncDirty, "IsVSyncDirty" }, // 952422725
		{ &Z_Construct_UFunction_UGameUserSettings_IsVSyncEnabled, "IsVSyncEnabled" }, // 2103228177
		{ &Z_Construct_UFunction_UGameUserSettings_LoadSettings, "LoadSettings" }, // 2316455750
		{ &Z_Construct_UFunction_UGameUserSettings_ResetToCurrentSettings, "ResetToCurrentSettings" }, // 3900804176
		{ &Z_Construct_UFunction_UGameUserSettings_RevertVideoMode, "RevertVideoMode" }, // 2179122083
		{ &Z_Construct_UFunction_UGameUserSettings_RunHardwareBenchmark, "RunHardwareBenchmark" }, // 644909852
		{ &Z_Construct_UFunction_UGameUserSettings_SaveSettings, "SaveSettings" }, // 3520267461
		{ &Z_Construct_UFunction_UGameUserSettings_SetAntiAliasingQuality, "SetAntiAliasingQuality" }, // 2541850780
		{ &Z_Construct_UFunction_UGameUserSettings_SetAudioQualityLevel, "SetAudioQualityLevel" }, // 410265647
		{ &Z_Construct_UFunction_UGameUserSettings_SetBenchmarkFallbackValues, "SetBenchmarkFallbackValues" }, // 2790700380
		{ &Z_Construct_UFunction_UGameUserSettings_SetDynamicResolutionEnabled, "SetDynamicResolutionEnabled" }, // 4085906072
		{ &Z_Construct_UFunction_UGameUserSettings_SetFoliageQuality, "SetFoliageQuality" }, // 1616936840
		{ &Z_Construct_UFunction_UGameUserSettings_SetFrameRateLimit, "SetFrameRateLimit" }, // 3455540015
		{ &Z_Construct_UFunction_UGameUserSettings_SetFullscreenMode, "SetFullscreenMode" }, // 2013716897
		{ &Z_Construct_UFunction_UGameUserSettings_SetGlobalIlluminationQuality, "SetGlobalIlluminationQuality" }, // 135963161
		{ &Z_Construct_UFunction_UGameUserSettings_SetOverallScalabilityLevel, "SetOverallScalabilityLevel" }, // 660377628
		{ &Z_Construct_UFunction_UGameUserSettings_SetPostProcessingQuality, "SetPostProcessingQuality" }, // 1813072604
		{ &Z_Construct_UFunction_UGameUserSettings_SetReflectionQuality, "SetReflectionQuality" }, // 793013283
		{ &Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleNormalized, "SetResolutionScaleNormalized" }, // 2038174038
		{ &Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValue, "SetResolutionScaleValue" }, // 3414885138
		{ &Z_Construct_UFunction_UGameUserSettings_SetResolutionScaleValueEx, "SetResolutionScaleValueEx" }, // 3644729891
		{ &Z_Construct_UFunction_UGameUserSettings_SetScreenResolution, "SetScreenResolution" }, // 526336015
		{ &Z_Construct_UFunction_UGameUserSettings_SetShadingQuality, "SetShadingQuality" }, // 3782492977
		{ &Z_Construct_UFunction_UGameUserSettings_SetShadowQuality, "SetShadowQuality" }, // 1854972386
		{ &Z_Construct_UFunction_UGameUserSettings_SetTextureQuality, "SetTextureQuality" }, // 1695354313
		{ &Z_Construct_UFunction_UGameUserSettings_SetToDefaults, "SetToDefaults" }, // 4156261807
		{ &Z_Construct_UFunction_UGameUserSettings_SetViewDistanceQuality, "SetViewDistanceQuality" }, // 2713333715
		{ &Z_Construct_UFunction_UGameUserSettings_SetVisualEffectQuality, "SetVisualEffectQuality" }, // 3502137321
		{ &Z_Construct_UFunction_UGameUserSettings_SetVSyncEnabled, "SetVSyncEnabled" }, // 1661924563
		{ &Z_Construct_UFunction_UGameUserSettings_SupportsHDRDisplayOutput, "SupportsHDRDisplayOutput" }, // 4105048482
		{ &Z_Construct_UFunction_UGameUserSettings_ValidateSettings, "ValidateSettings" }, // 3121889954
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores user settings for a game (for example graphics and sound settings), with the ability to save and load to and from a file.\n */" },
		{ "IncludePath", "GameFramework/GameUserSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Stores user settings for a game (for example graphics and sound settings), with the ability to save and load to and from a file." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync_MetaData[] = {
		{ "Comment", "/** Whether to use VSync or not. (public to allow UI to connect to it) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Whether to use VSync or not. (public to allow UI to connect to it)" },
	};
#endif
	void Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync_SetBit(void* Obj)
	{
		((UGameUserSettings*)Obj)->bUseVSync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync = { "bUseVSync", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameUserSettings), &Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution_MetaData[] = {
		{ "Comment", "/** Whether to use dynamic resolution or not. (public to allow UI to connect to it) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Whether to use dynamic resolution or not. (public to allow UI to connect to it)" },
	};
#endif
	void Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution_SetBit(void* Obj)
	{
		((UGameUserSettings*)Obj)->bUseDynamicResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution = { "bUseDynamicResolution", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameUserSettings), &Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeX_MetaData[] = {
		{ "Comment", "/** Game screen resolution width, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Game screen resolution width, in pixels." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeX = { "ResolutionSizeX", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, ResolutionSizeX), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeY_MetaData[] = {
		{ "Comment", "/** Game screen resolution height, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Game screen resolution height, in pixels." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeY = { "ResolutionSizeY", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, ResolutionSizeY), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeX_MetaData[] = {
		{ "Comment", "/** Game screen resolution width, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Game screen resolution width, in pixels." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeX = { "LastUserConfirmedResolutionSizeX", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedResolutionSizeX), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeY_MetaData[] = {
		{ "Comment", "/** Game screen resolution height, in pixels. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Game screen resolution height, in pixels." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeY = { "LastUserConfirmedResolutionSizeY", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedResolutionSizeY), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosX_MetaData[] = {
		{ "Comment", "/** Window PosX */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Window PosX" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosX = { "WindowPosX", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, WindowPosX), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosY_MetaData[] = {
		{ "Comment", "/** Window PosY */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Window PosY" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosY = { "WindowPosY", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, WindowPosY), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FullscreenMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Game window fullscreen mode\n\x09 *\x09""0 = Fullscreen\n\x09 *\x09""1 = Windowed fullscreen\n\x09 *\x09""2 = Windowed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Game window fullscreen mode\n     0 = Fullscreen\n     1 = Windowed fullscreen\n     2 = Windowed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FullscreenMode = { "FullscreenMode", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, FullscreenMode), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FullscreenMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FullscreenMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedFullscreenMode_MetaData[] = {
		{ "Comment", "/** Last user confirmed fullscreen mode setting. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Last user confirmed fullscreen mode setting." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedFullscreenMode = { "LastConfirmedFullscreenMode", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastConfirmedFullscreenMode), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedFullscreenMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedFullscreenMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_PreferredFullscreenMode_MetaData[] = {
		{ "Comment", "/** Fullscreen mode to use when toggling between windowed and fullscreen. Same values as r.FullScreenMode. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Fullscreen mode to use when toggling between windowed and fullscreen. Same values as r.FullScreenMode." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_PreferredFullscreenMode = { "PreferredFullscreenMode", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, PreferredFullscreenMode), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_PreferredFullscreenMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_PreferredFullscreenMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/** All settings will be wiped and set to default if the serialized version differs from UE_GAMEUSERSETTINGS_VERSION. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "All settings will be wiped and set to default if the serialized version differs from UE_GAMEUSERSETTINGS_VERSION." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, Version), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_AudioQualityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_AudioQualityLevel = { "AudioQualityLevel", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, AudioQualityLevel), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_AudioQualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_AudioQualityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedAudioQualityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedAudioQualityLevel = { "LastConfirmedAudioQualityLevel", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastConfirmedAudioQualityLevel), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedAudioQualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedAudioQualityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FrameRateLimit_MetaData[] = {
		{ "Comment", "/** Frame rate cap */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Frame rate cap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FrameRateLimit = { "FrameRateLimit", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, FrameRateLimit), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FrameRateLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FrameRateLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenWidth_MetaData[] = {
		{ "Comment", "/** Desired screen width used to calculate the resolution scale when user changes display mode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Desired screen width used to calculate the resolution scale when user changes display mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenWidth = { "DesiredScreenWidth", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, DesiredScreenWidth), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight_MetaData[] = {
		{ "Comment", "/** If true, the desired screen height will be used to scale the render resolution automatically. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "If true, the desired screen height will be used to scale the render resolution automatically." },
	};
#endif
	void Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight_SetBit(void* Obj)
	{
		((UGameUserSettings*)Obj)->bUseDesiredScreenHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight = { "bUseDesiredScreenHeight", nullptr, (EPropertyFlags)0x0020080000044000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameUserSettings), &Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenHeight_MetaData[] = {
		{ "Comment", "/** Desired screen height used to calculate the resolution scale when user changes display mode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Desired screen height used to calculate the resolution scale when user changes display mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenHeight = { "DesiredScreenHeight", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, DesiredScreenHeight), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenWidth_MetaData[] = {
		{ "Comment", "/** Desired screen width used to calculate the resolution scale when user changes display mode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Desired screen width used to calculate the resolution scale when user changes display mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenWidth = { "LastUserConfirmedDesiredScreenWidth", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedDesiredScreenWidth), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenHeight_MetaData[] = {
		{ "Comment", "/** Desired screen height used to calculate the resolution scale when user changes display mode */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Desired screen height used to calculate the resolution scale when user changes display mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenHeight = { "LastUserConfirmedDesiredScreenHeight", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastUserConfirmedDesiredScreenHeight), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenWidth_MetaData[] = {
		{ "Comment", "/** Result of the last benchmark; calculated resolution to use. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Result of the last benchmark; calculated resolution to use." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenWidth = { "LastRecommendedScreenWidth", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastRecommendedScreenWidth), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenHeight_MetaData[] = {
		{ "Comment", "/** Result of the last benchmark; calculated resolution to use. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Result of the last benchmark; calculated resolution to use." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenHeight = { "LastRecommendedScreenHeight", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastRecommendedScreenHeight), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkResult_MetaData[] = {
		{ "Comment", "/** Result of the last benchmark (CPU); -1 if there has not been a benchmark run */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Result of the last benchmark (CPU); -1 if there has not been a benchmark run" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkResult = { "LastCPUBenchmarkResult", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastCPUBenchmarkResult), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkResult_MetaData[] = {
		{ "Comment", "/** Result of the last benchmark (GPU); -1 if there has not been a benchmark run */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Result of the last benchmark (GPU); -1 if there has not been a benchmark run" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkResult = { "LastGPUBenchmarkResult", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkResult), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkResult_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps_Inner = { "LastCPUBenchmarkSteps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps_MetaData[] = {
		{ "Comment", "/** Result of each individual sub-section of the last CPU benchmark; empty if there has not been a benchmark run */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Result of each individual sub-section of the last CPU benchmark; empty if there has not been a benchmark run" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps = { "LastCPUBenchmarkSteps", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastCPUBenchmarkSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps_Inner = { "LastGPUBenchmarkSteps", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps_MetaData[] = {
		{ "Comment", "/** Result of each individual sub-section of the last GPU benchmark; empty if there has not been a benchmark run */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Result of each individual sub-section of the last GPU benchmark; empty if there has not been a benchmark run" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps = { "LastGPUBenchmarkSteps", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkMultiplier_MetaData[] = {
		{ "Comment", "/**\n\x09 * Multiplier used against the last GPU benchmark\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "Multiplier used against the last GPU benchmark" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkMultiplier = { "LastGPUBenchmarkMultiplier", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, LastGPUBenchmarkMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput_MetaData[] = {
		{ "Comment", "/** HDR */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "HDR" },
	};
#endif
	void Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput_SetBit(void* Obj)
	{
		((UGameUserSettings*)Obj)->bUseHDRDisplayOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput = { "bUseHDRDisplayOutput", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameUserSettings), &Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_HDRDisplayOutputNits_MetaData[] = {
		{ "Comment", "/** HDR */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
		{ "ToolTip", "HDR" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_HDRDisplayOutputNits = { "HDRDisplayOutputNits", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, HDRDisplayOutputNits), METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_HDRDisplayOutputNits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_HDRDisplayOutputNits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUserSettings_Statics::NewProp_OnGameUserSettingsUINeedsUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameUserSettings.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameUserSettings_Statics::NewProp_OnGameUserSettingsUINeedsUpdate = { "OnGameUserSettingsUINeedsUpdate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameUserSettings, OnGameUserSettingsUINeedsUpdate), Z_Construct_UDelegateFunction_Engine_OnGameUserSettingsUINeedsUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_OnGameUserSettingsUINeedsUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::NewProp_OnGameUserSettingsUINeedsUpdate_MetaData)) }; // 3381136316
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseVSync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDynamicResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_ResolutionSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedResolutionSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_WindowPosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FullscreenMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedFullscreenMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_PreferredFullscreenMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_AudioQualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastConfirmedAudioQualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_FrameRateLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseDesiredScreenHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_DesiredScreenHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastUserConfirmedDesiredScreenHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastRecommendedScreenHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastCPUBenchmarkSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_LastGPUBenchmarkMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_bUseHDRDisplayOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_HDRDisplayOutputNits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameUserSettings_Statics::NewProp_OnGameUserSettingsUINeedsUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameUserSettings_Statics::ClassParams = {
		&UGameUserSettings::StaticClass,
		"GameUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::PropPointers),
		0,
		0x409000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameUserSettings()
	{
		if (!Z_Registration_Info_UClass_UGameUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameUserSettings.OuterSingleton, Z_Construct_UClass_UGameUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameUserSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UGameUserSettings>()
	{
		return UGameUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUserSettings);
	UGameUserSettings::~UGameUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics::EnumInfo[] = {
		{ EWindowMode_StaticEnum, TEXT("EWindowMode"), &Z_Registration_Info_UEnum_EWindowMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2666347754U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameUserSettings, UGameUserSettings::StaticClass, TEXT("UGameUserSettings"), &Z_Registration_Info_UClass_UGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameUserSettings), 3025264204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_2248577339(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
