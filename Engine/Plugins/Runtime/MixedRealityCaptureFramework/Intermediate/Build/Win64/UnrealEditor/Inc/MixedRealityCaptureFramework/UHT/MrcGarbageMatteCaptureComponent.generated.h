// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MrcGarbageMatteCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMrcGarbageMatteActor;
class IMrcFocalDriver;
class UMrcCalibrationData;
class UPrimitiveComponent;
class USceneComponent;
struct FMrcGarbageMatteSaveData;
#ifdef MIXEDREALITYCAPTUREFRAMEWORK_MrcGarbageMatteCaptureComponent_generated_h
#error "MrcGarbageMatteCaptureComponent.generated.h already included, missing '#pragma once' in MrcGarbageMatteCaptureComponent.h"
#endif
#define MIXEDREALITYCAPTUREFRAMEWORK_MrcGarbageMatteCaptureComponent_generated_h

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_RPC_WRAPPERS \
	virtual AMrcGarbageMatteActor* SpawnNewGarbageMatteActor_Implementation(USceneComponent* TrackingOrigin); \
	virtual void ApplyCalibrationData_Implementation(const UMrcCalibrationData* ConfigData); \
 \
	DECLARE_FUNCTION(execSpawnNewGarbageMatteActor); \
	DECLARE_FUNCTION(execSetFocalDriver); \
	DECLARE_FUNCTION(execGetGarbageMatteData); \
	DECLARE_FUNCTION(execSetGarbageMatteActor); \
	DECLARE_FUNCTION(execApplyCalibrationData); \
	DECLARE_FUNCTION(execSetTrackingOrigin);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual AMrcGarbageMatteActor* SpawnNewGarbageMatteActor_Implementation(USceneComponent* TrackingOrigin); \
	virtual void ApplyCalibrationData_Implementation(const UMrcCalibrationData* ConfigData); \
 \
	DECLARE_FUNCTION(execSpawnNewGarbageMatteActor); \
	DECLARE_FUNCTION(execSetFocalDriver); \
	DECLARE_FUNCTION(execGetGarbageMatteData); \
	DECLARE_FUNCTION(execSetGarbageMatteActor); \
	DECLARE_FUNCTION(execApplyCalibrationData); \
	DECLARE_FUNCTION(execSetTrackingOrigin);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMrcGarbageMatteCaptureComponent(); \
	friend struct Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UMrcGarbageMatteCaptureComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(UMrcGarbageMatteCaptureComponent)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMrcGarbageMatteCaptureComponent(); \
	friend struct Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UMrcGarbageMatteCaptureComponent, USceneCaptureComponent2D, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(UMrcGarbageMatteCaptureComponent)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcGarbageMatteCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcGarbageMatteCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcGarbageMatteCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcGarbageMatteCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMrcGarbageMatteCaptureComponent(UMrcGarbageMatteCaptureComponent&&); \
	NO_API UMrcGarbageMatteCaptureComponent(const UMrcGarbageMatteCaptureComponent&); \
public: \
	NO_API virtual ~UMrcGarbageMatteCaptureComponent();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMrcGarbageMatteCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMrcGarbageMatteCaptureComponent(UMrcGarbageMatteCaptureComponent&&); \
	NO_API UMrcGarbageMatteCaptureComponent(const UMrcGarbageMatteCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMrcGarbageMatteCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMrcGarbageMatteCaptureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMrcGarbageMatteCaptureComponent) \
	NO_API virtual ~UMrcGarbageMatteCaptureComponent();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MrcGarbageMatteCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<class UMrcGarbageMatteCaptureComponent>();

#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_RPC_WRAPPERS \
	virtual UPrimitiveComponent* CreateGarbageMatte_Implementation(FMrcGarbageMatteSaveData const& GarbageMatteData); \
 \
	DECLARE_FUNCTION(execGetGarbageMatteData); \
	DECLARE_FUNCTION(execCreateGarbageMatte); \
	DECLARE_FUNCTION(execAddNewGabageMatte); \
	DECLARE_FUNCTION(execApplyCalibrationData);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UPrimitiveComponent* CreateGarbageMatte_Implementation(FMrcGarbageMatteSaveData const& GarbageMatteData); \
 \
	DECLARE_FUNCTION(execGetGarbageMatteData); \
	DECLARE_FUNCTION(execCreateGarbageMatte); \
	DECLARE_FUNCTION(execAddNewGabageMatte); \
	DECLARE_FUNCTION(execApplyCalibrationData);


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_ACCESSORS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMrcGarbageMatteActor(); \
	friend struct Z_Construct_UClass_AMrcGarbageMatteActor_Statics; \
public: \
	DECLARE_CLASS(AMrcGarbageMatteActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(AMrcGarbageMatteActor)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_INCLASS \
private: \
	static void StaticRegisterNativesAMrcGarbageMatteActor(); \
	friend struct Z_Construct_UClass_AMrcGarbageMatteActor_Statics; \
public: \
	DECLARE_CLASS(AMrcGarbageMatteActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MixedRealityCaptureFramework"), NO_API) \
	DECLARE_SERIALIZER(AMrcGarbageMatteActor)


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMrcGarbageMatteActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMrcGarbageMatteActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMrcGarbageMatteActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMrcGarbageMatteActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMrcGarbageMatteActor(AMrcGarbageMatteActor&&); \
	NO_API AMrcGarbageMatteActor(const AMrcGarbageMatteActor&); \
public: \
	NO_API virtual ~AMrcGarbageMatteActor();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMrcGarbageMatteActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMrcGarbageMatteActor(AMrcGarbageMatteActor&&); \
	NO_API AMrcGarbageMatteActor(const AMrcGarbageMatteActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMrcGarbageMatteActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMrcGarbageMatteActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMrcGarbageMatteActor) \
	NO_API virtual ~AMrcGarbageMatteActor();


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_78_PROLOG
#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_INCLASS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_ACCESSORS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_81_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MrcGarbageMatteActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<class AMrcGarbageMatteActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
