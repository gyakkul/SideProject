// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameUserSettings;
#ifdef ENGINE_GameUserSettings_generated_h
#error "GameUserSettings.generated.h already included, missing '#pragma once' in GameUserSettings.h"
#endif
#define ENGINE_GameUserSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_32_DELEGATE \
ENGINE_API void FOnGameUserSettingsUINeedsUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnGameUserSettingsUINeedsUpdate);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHDREnabled); \
	DECLARE_FUNCTION(execGetCurrentHDRDisplayNits); \
	DECLARE_FUNCTION(execEnableHDRDisplayOutput); \
	DECLARE_FUNCTION(execSupportsHDRDisplayOutput); \
	DECLARE_FUNCTION(execApplyHardwareBenchmarkResults); \
	DECLARE_FUNCTION(execRunHardwareBenchmark); \
	DECLARE_FUNCTION(execGetGameUserSettings); \
	DECLARE_FUNCTION(execGetFramePace); \
	DECLARE_FUNCTION(execGetSyncInterval); \
	DECLARE_FUNCTION(execGetDefaultWindowMode); \
	DECLARE_FUNCTION(execGetDefaultWindowPosition); \
	DECLARE_FUNCTION(execGetDefaultResolution); \
	DECLARE_FUNCTION(execGetRecommendedResolutionScale); \
	DECLARE_FUNCTION(execGetDefaultResolutionScale); \
	DECLARE_FUNCTION(execSetToDefaults); \
	DECLARE_FUNCTION(execResetToCurrentSettings); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execLoadSettings); \
	DECLARE_FUNCTION(execValidateSettings); \
	DECLARE_FUNCTION(execIsDirty); \
	DECLARE_FUNCTION(execGetShadingQuality); \
	DECLARE_FUNCTION(execSetShadingQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execGetPostProcessingQuality); \
	DECLARE_FUNCTION(execSetPostProcessingQuality); \
	DECLARE_FUNCTION(execGetVisualEffectQuality); \
	DECLARE_FUNCTION(execSetVisualEffectQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execGetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execGetReflectionQuality); \
	DECLARE_FUNCTION(execSetReflectionQuality); \
	DECLARE_FUNCTION(execGetGlobalIlluminationQuality); \
	DECLARE_FUNCTION(execSetGlobalIlluminationQuality); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execSetResolutionScaleValueEx); \
	DECLARE_FUNCTION(execSetResolutionScaleValue); \
	DECLARE_FUNCTION(execGetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execGetResolutionScaleInformationEx); \
	DECLARE_FUNCTION(execGetResolutionScaleInformation); \
	DECLARE_FUNCTION(execGetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execSetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execGetFrameRateLimit); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execGetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetBenchmarkFallbackValues); \
	DECLARE_FUNCTION(execRevertVideoMode); \
	DECLARE_FUNCTION(execConfirmVideoMode); \
	DECLARE_FUNCTION(execIsDynamicResolutionDirty); \
	DECLARE_FUNCTION(execIsVSyncDirty); \
	DECLARE_FUNCTION(execIsFullscreenModeDirty); \
	DECLARE_FUNCTION(execIsScreenResolutionDirty); \
	DECLARE_FUNCTION(execIsDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execSetDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execIsVSyncEnabled); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execGetPreferredFullscreenMode); \
	DECLARE_FUNCTION(execSetFullscreenMode); \
	DECLARE_FUNCTION(execGetLastConfirmedFullscreenMode); \
	DECLARE_FUNCTION(execGetFullscreenMode); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execGetDesktopResolution); \
	DECLARE_FUNCTION(execGetLastConfirmedScreenResolution); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execApplyResolutionSettings); \
	DECLARE_FUNCTION(execApplyNonResolutionSettings); \
	DECLARE_FUNCTION(execApplySettings);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHDREnabled); \
	DECLARE_FUNCTION(execGetCurrentHDRDisplayNits); \
	DECLARE_FUNCTION(execEnableHDRDisplayOutput); \
	DECLARE_FUNCTION(execSupportsHDRDisplayOutput); \
	DECLARE_FUNCTION(execApplyHardwareBenchmarkResults); \
	DECLARE_FUNCTION(execRunHardwareBenchmark); \
	DECLARE_FUNCTION(execGetGameUserSettings); \
	DECLARE_FUNCTION(execGetFramePace); \
	DECLARE_FUNCTION(execGetSyncInterval); \
	DECLARE_FUNCTION(execGetDefaultWindowMode); \
	DECLARE_FUNCTION(execGetDefaultWindowPosition); \
	DECLARE_FUNCTION(execGetDefaultResolution); \
	DECLARE_FUNCTION(execGetRecommendedResolutionScale); \
	DECLARE_FUNCTION(execGetDefaultResolutionScale); \
	DECLARE_FUNCTION(execSetToDefaults); \
	DECLARE_FUNCTION(execResetToCurrentSettings); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execLoadSettings); \
	DECLARE_FUNCTION(execValidateSettings); \
	DECLARE_FUNCTION(execIsDirty); \
	DECLARE_FUNCTION(execGetShadingQuality); \
	DECLARE_FUNCTION(execSetShadingQuality); \
	DECLARE_FUNCTION(execGetFoliageQuality); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execGetPostProcessingQuality); \
	DECLARE_FUNCTION(execSetPostProcessingQuality); \
	DECLARE_FUNCTION(execGetVisualEffectQuality); \
	DECLARE_FUNCTION(execSetVisualEffectQuality); \
	DECLARE_FUNCTION(execGetTextureQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execGetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execGetReflectionQuality); \
	DECLARE_FUNCTION(execSetReflectionQuality); \
	DECLARE_FUNCTION(execGetGlobalIlluminationQuality); \
	DECLARE_FUNCTION(execSetGlobalIlluminationQuality); \
	DECLARE_FUNCTION(execGetShadowQuality); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execGetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execSetResolutionScaleValueEx); \
	DECLARE_FUNCTION(execSetResolutionScaleValue); \
	DECLARE_FUNCTION(execGetResolutionScaleNormalized); \
	DECLARE_FUNCTION(execGetResolutionScaleInformationEx); \
	DECLARE_FUNCTION(execGetResolutionScaleInformation); \
	DECLARE_FUNCTION(execGetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execSetOverallScalabilityLevel); \
	DECLARE_FUNCTION(execGetFrameRateLimit); \
	DECLARE_FUNCTION(execSetFrameRateLimit); \
	DECLARE_FUNCTION(execGetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetAudioQualityLevel); \
	DECLARE_FUNCTION(execSetBenchmarkFallbackValues); \
	DECLARE_FUNCTION(execRevertVideoMode); \
	DECLARE_FUNCTION(execConfirmVideoMode); \
	DECLARE_FUNCTION(execIsDynamicResolutionDirty); \
	DECLARE_FUNCTION(execIsVSyncDirty); \
	DECLARE_FUNCTION(execIsFullscreenModeDirty); \
	DECLARE_FUNCTION(execIsScreenResolutionDirty); \
	DECLARE_FUNCTION(execIsDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execSetDynamicResolutionEnabled); \
	DECLARE_FUNCTION(execIsVSyncEnabled); \
	DECLARE_FUNCTION(execSetVSyncEnabled); \
	DECLARE_FUNCTION(execGetPreferredFullscreenMode); \
	DECLARE_FUNCTION(execSetFullscreenMode); \
	DECLARE_FUNCTION(execGetLastConfirmedFullscreenMode); \
	DECLARE_FUNCTION(execGetFullscreenMode); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execGetDesktopResolution); \
	DECLARE_FUNCTION(execGetLastConfirmedScreenResolution); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execApplyResolutionSettings); \
	DECLARE_FUNCTION(execApplyNonResolutionSettings); \
	DECLARE_FUNCTION(execApplySettings);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUserSettings(); \
	friend struct Z_Construct_UClass_UGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUGameUserSettings(); \
	friend struct Z_Construct_UClass_UGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameUserSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGameUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUserSettings(UGameUserSettings&&); \
	NO_API UGameUserSettings(const UGameUserSettings&); \
public: \
	NO_API virtual ~UGameUserSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUserSettings(UGameUserSettings&&); \
	NO_API UGameUserSettings(const UGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUserSettings) \
	NO_API virtual ~UGameUserSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameUserSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameUserSettings_h


#define FOREACH_ENUM_EWINDOWMODE(op) \
	op(EWindowMode::Fullscreen) \
	op(EWindowMode::WindowedFullscreen) \
	op(EWindowMode::Windowed) 

namespace EWindowMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EWindowMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
