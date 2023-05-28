// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RenderGrid/RenderGrid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMoviePipelineOutputSetting;
class UMoviePipelinePrimaryConfig;
class UObject;
class URenderGridJob;
class URenderGridPropsSourceBase;
class URenderGridQueue;
enum class ERenderGridPropsSourceType : uint8;
struct FGuid;
struct FGuid; 
#ifdef RENDERGRID_RenderGrid_generated_h
#error "RenderGrid.generated.h already included, missing '#pragma once' in RenderGrid.h"
#endif
#define RENDERGRID_RenderGrid_generated_h

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RENDERGRID_API UScriptStruct* StaticStruct<struct FRenderGridRemoteControlPropertyData>();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridSettings(); \
	friend struct Z_Construct_UClass_URenderGridSettings_Statics; \
public: \
	DECLARE_CLASS(URenderGridSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridSettings)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_INCLASS \
private: \
	static void StaticRegisterNativesURenderGridSettings(); \
	friend struct Z_Construct_UClass_URenderGridSettings_Statics; \
public: \
	DECLARE_CLASS(URenderGridSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridSettings)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridSettings(URenderGridSettings&&); \
	NO_API URenderGridSettings(const URenderGridSettings&); \
public: \
	NO_API virtual ~URenderGridSettings();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridSettings(URenderGridSettings&&); \
	NO_API URenderGridSettings(const URenderGridSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridSettings) \
	NO_API virtual ~URenderGridSettings();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_INCLASS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGridSettings>();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridDefaults(); \
	friend struct Z_Construct_UClass_URenderGridDefaults_Statics; \
public: \
	DECLARE_CLASS(URenderGridDefaults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridDefaults)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_INCLASS \
private: \
	static void StaticRegisterNativesURenderGridDefaults(); \
	friend struct Z_Construct_UClass_URenderGridDefaults_Statics; \
public: \
	DECLARE_CLASS(URenderGridDefaults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridDefaults)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridDefaults(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridDefaults) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridDefaults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridDefaults); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridDefaults(URenderGridDefaults&&); \
	NO_API URenderGridDefaults(const URenderGridDefaults&); \
public: \
	NO_API virtual ~URenderGridDefaults();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridDefaults(URenderGridDefaults&&); \
	NO_API URenderGridDefaults(const URenderGridDefaults&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridDefaults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridDefaults); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridDefaults) \
	NO_API virtual ~URenderGridDefaults();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_INCLASS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGridDefaults>();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRemoteControlValues); \
	DECLARE_FUNCTION(execGetRemoteControlLabelFromFieldId); \
	DECLARE_FUNCTION(execGetRemoteControlFieldIdFromLabel); \
	DECLARE_FUNCTION(execSetRemoteControlValue); \
	DECLARE_FUNCTION(execGetRemoteControlValue); \
	DECLARE_FUNCTION(execHasRemoteControlValue); \
	DECLARE_FUNCTION(execSetRenderPreset); \
	DECLARE_FUNCTION(execGetRenderPresetOutputSettings); \
	DECLARE_FUNCTION(execGetRenderPreset); \
	DECLARE_FUNCTION(execSetOutputDirectory); \
	DECLARE_FUNCTION(execGetOutputDirectoryForDisplay); \
	DECLARE_FUNCTION(execGetOutputDirectory); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetJobName); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execSetJobId); \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execSetCustomResolution); \
	DECLARE_FUNCTION(execGetCustomResolution); \
	DECLARE_FUNCTION(execSetIsUsingCustomResolution); \
	DECLARE_FUNCTION(execGetIsUsingCustomResolution); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetIsUsingCustomEndFrame); \
	DECLARE_FUNCTION(execGetIsUsingCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetIsUsingCustomStartFrame); \
	DECLARE_FUNCTION(execGetIsUsingCustomStartFrame); \
	DECLARE_FUNCTION(execSetLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execSetWaitFramesBeforeRendering); \
	DECLARE_FUNCTION(execGetWaitFramesBeforeRendering); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execMatchesSearchTerm); \
	DECLARE_FUNCTION(execGetOutputAspectRatio); \
	DECLARE_FUNCTION(execGetOutputResolution);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRemoteControlValues); \
	DECLARE_FUNCTION(execGetRemoteControlLabelFromFieldId); \
	DECLARE_FUNCTION(execGetRemoteControlFieldIdFromLabel); \
	DECLARE_FUNCTION(execSetRemoteControlValue); \
	DECLARE_FUNCTION(execGetRemoteControlValue); \
	DECLARE_FUNCTION(execHasRemoteControlValue); \
	DECLARE_FUNCTION(execSetRenderPreset); \
	DECLARE_FUNCTION(execGetRenderPresetOutputSettings); \
	DECLARE_FUNCTION(execGetRenderPreset); \
	DECLARE_FUNCTION(execSetOutputDirectory); \
	DECLARE_FUNCTION(execGetOutputDirectoryForDisplay); \
	DECLARE_FUNCTION(execGetOutputDirectory); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execGetIsEnabled); \
	DECLARE_FUNCTION(execSetJobName); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execSetJobId); \
	DECLARE_FUNCTION(execGetJobId); \
	DECLARE_FUNCTION(execSetCustomResolution); \
	DECLARE_FUNCTION(execGetCustomResolution); \
	DECLARE_FUNCTION(execSetIsUsingCustomResolution); \
	DECLARE_FUNCTION(execGetIsUsingCustomResolution); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetIsUsingCustomEndFrame); \
	DECLARE_FUNCTION(execGetIsUsingCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetIsUsingCustomStartFrame); \
	DECLARE_FUNCTION(execGetIsUsingCustomStartFrame); \
	DECLARE_FUNCTION(execSetLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execSetWaitFramesBeforeRendering); \
	DECLARE_FUNCTION(execGetWaitFramesBeforeRendering); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execMatchesSearchTerm); \
	DECLARE_FUNCTION(execGetOutputAspectRatio); \
	DECLARE_FUNCTION(execGetOutputResolution);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGridJob(); \
	friend struct Z_Construct_UClass_URenderGridJob_Statics; \
public: \
	DECLARE_CLASS(URenderGridJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridJob)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_INCLASS \
private: \
	static void StaticRegisterNativesURenderGridJob(); \
	friend struct Z_Construct_UClass_URenderGridJob_Statics; \
public: \
	DECLARE_CLASS(URenderGridJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGridJob)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGridJob(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGridJob) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridJob); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridJob(URenderGridJob&&); \
	NO_API URenderGridJob(const URenderGridJob&); \
public: \
	NO_API virtual ~URenderGridJob();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGridJob(URenderGridJob&&); \
	NO_API URenderGridJob(const URenderGridJob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGridJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGridJob); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGridJob) \
	NO_API virtual ~URenderGridJob();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_112_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_INCLASS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGridJob>();

#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReorderRenderGridJob); \
	DECLARE_FUNCTION(execDuplicateAndAddRenderGridJob); \
	DECLARE_FUNCTION(execCreateAndAddNewRenderGridJob); \
	DECLARE_FUNCTION(execCreateTempRenderGridJob); \
	DECLARE_FUNCTION(execDoesJobIdExist); \
	DECLARE_FUNCTION(execGenerateNextJobId); \
	DECLARE_FUNCTION(execGenerateUniqueRandomJobId); \
	DECLARE_FUNCTION(execInsertRenderGridJobAfter); \
	DECLARE_FUNCTION(execInsertRenderGridJobBefore); \
	DECLARE_FUNCTION(execGetDisabledRenderGridJobs); \
	DECLARE_FUNCTION(execGetEnabledRenderGridJobs); \
	DECLARE_FUNCTION(execGetRenderGridJobs); \
	DECLARE_FUNCTION(execGetIndexOfRenderGridJob); \
	DECLARE_FUNCTION(execHasRenderGridJob); \
	DECLARE_FUNCTION(execHasAnyRenderGridJobs); \
	DECLARE_FUNCTION(execInsertRenderGridJob); \
	DECLARE_FUNCTION(execRemoveRenderGridJob); \
	DECLARE_FUNCTION(execAddRenderGridJob); \
	DECLARE_FUNCTION(execSetRenderGridJobs); \
	DECLARE_FUNCTION(execClearRenderGridJobs); \
	DECLARE_FUNCTION(execSetDefaultOutputDirectory); \
	DECLARE_FUNCTION(execGetDefaultOutputDirectoryForDisplay); \
	DECLARE_FUNCTION(execGetDefaultOutputDirectory); \
	DECLARE_FUNCTION(execSetDefaultRenderPreset); \
	DECLARE_FUNCTION(execGetDefaultRenderPresetOutputSettings); \
	DECLARE_FUNCTION(execGetDefaultRenderPreset); \
	DECLARE_FUNCTION(execSetDefaultLevelSequence); \
	DECLARE_FUNCTION(execGetDefaultLevelSequence); \
	DECLARE_FUNCTION(execGetPropsSourceOrigin); \
	DECLARE_FUNCTION(execGetPropsSourceType); \
	DECLARE_FUNCTION(execGetPropsSource); \
	DECLARE_FUNCTION(execSetPropsSource); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execRenderJob); \
	DECLARE_FUNCTION(execRenderJobs); \
	DECLARE_FUNCTION(execRender);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReorderRenderGridJob); \
	DECLARE_FUNCTION(execDuplicateAndAddRenderGridJob); \
	DECLARE_FUNCTION(execCreateAndAddNewRenderGridJob); \
	DECLARE_FUNCTION(execCreateTempRenderGridJob); \
	DECLARE_FUNCTION(execDoesJobIdExist); \
	DECLARE_FUNCTION(execGenerateNextJobId); \
	DECLARE_FUNCTION(execGenerateUniqueRandomJobId); \
	DECLARE_FUNCTION(execInsertRenderGridJobAfter); \
	DECLARE_FUNCTION(execInsertRenderGridJobBefore); \
	DECLARE_FUNCTION(execGetDisabledRenderGridJobs); \
	DECLARE_FUNCTION(execGetEnabledRenderGridJobs); \
	DECLARE_FUNCTION(execGetRenderGridJobs); \
	DECLARE_FUNCTION(execGetIndexOfRenderGridJob); \
	DECLARE_FUNCTION(execHasRenderGridJob); \
	DECLARE_FUNCTION(execHasAnyRenderGridJobs); \
	DECLARE_FUNCTION(execInsertRenderGridJob); \
	DECLARE_FUNCTION(execRemoveRenderGridJob); \
	DECLARE_FUNCTION(execAddRenderGridJob); \
	DECLARE_FUNCTION(execSetRenderGridJobs); \
	DECLARE_FUNCTION(execClearRenderGridJobs); \
	DECLARE_FUNCTION(execSetDefaultOutputDirectory); \
	DECLARE_FUNCTION(execGetDefaultOutputDirectoryForDisplay); \
	DECLARE_FUNCTION(execGetDefaultOutputDirectory); \
	DECLARE_FUNCTION(execSetDefaultRenderPreset); \
	DECLARE_FUNCTION(execGetDefaultRenderPresetOutputSettings); \
	DECLARE_FUNCTION(execGetDefaultRenderPreset); \
	DECLARE_FUNCTION(execSetDefaultLevelSequence); \
	DECLARE_FUNCTION(execGetDefaultLevelSequence); \
	DECLARE_FUNCTION(execGetPropsSourceOrigin); \
	DECLARE_FUNCTION(execGetPropsSourceType); \
	DECLARE_FUNCTION(execGetPropsSource); \
	DECLARE_FUNCTION(execSetPropsSource); \
	DECLARE_FUNCTION(execGenerateNewGuid); \
	DECLARE_FUNCTION(execGetGuid); \
	DECLARE_FUNCTION(execRenderJob); \
	DECLARE_FUNCTION(execRenderJobs); \
	DECLARE_FUNCTION(execRender);


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_ACCESSORS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderGrid(); \
	friend struct Z_Construct_UClass_URenderGrid_Statics; \
public: \
	DECLARE_CLASS(URenderGrid, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGrid)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_INCLASS \
private: \
	static void StaticRegisterNativesURenderGrid(); \
	friend struct Z_Construct_UClass_URenderGrid_Statics; \
public: \
	DECLARE_CLASS(URenderGrid, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderGrid"), NO_API) \
	DECLARE_SERIALIZER(URenderGrid)


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGrid(URenderGrid&&); \
	NO_API URenderGrid(const URenderGrid&); \
public: \
	NO_API virtual ~URenderGrid();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderGrid(URenderGrid&&); \
	NO_API URenderGrid(const URenderGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderGrid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URenderGrid) \
	NO_API virtual ~URenderGrid();


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_369_PROLOG
#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_INCLASS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_ACCESSORS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_372_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERGRID_API UClass* StaticClass<class URenderGrid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
