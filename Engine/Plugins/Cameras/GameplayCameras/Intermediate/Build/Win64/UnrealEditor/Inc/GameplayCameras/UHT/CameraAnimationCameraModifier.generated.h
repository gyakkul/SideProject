// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraAnimationCameraModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerCameraManager;
class APlayerController;
class UCameraAnimationCameraModifier;
class UCameraAnimationSequence;
class UObject;
enum class ECameraAnimationPlaySpace : uint8;
enum class ECameraShakePlaySpace : uint8;
struct FCameraAnimationHandle;
struct FCameraAnimationParams;
#ifdef GAMEPLAYCAMERAS_CameraAnimationCameraModifier_generated_h
#error "CameraAnimationCameraModifier.generated.h already included, missing '#pragma once' in CameraAnimationCameraModifier.h"
#endif
#define GAMEPLAYCAMERAS_CameraAnimationCameraModifier_generated_h

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraAnimationParams_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FCameraAnimationParams>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraAnimationHandle_Statics; \
	GAMEPLAYCAMERAS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FCameraAnimationHandle>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveCameraAnimationInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<struct FActiveCameraAnimationInfo>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_SPARSE_DATA
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifierFromPlayerController); \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifierFromID); \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifier); \
	DECLARE_FUNCTION(execStopAllCameraAnimations); \
	DECLARE_FUNCTION(execStopAllCameraAnimationsOf); \
	DECLARE_FUNCTION(execStopCameraAnimation); \
	DECLARE_FUNCTION(execIsCameraAnimationActive); \
	DECLARE_FUNCTION(execPlayCameraAnimation);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifierFromPlayerController); \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifierFromID); \
	DECLARE_FUNCTION(execGetCameraAnimationCameraModifier); \
	DECLARE_FUNCTION(execStopAllCameraAnimations); \
	DECLARE_FUNCTION(execStopAllCameraAnimationsOf); \
	DECLARE_FUNCTION(execStopCameraAnimation); \
	DECLARE_FUNCTION(execIsCameraAnimationActive); \
	DECLARE_FUNCTION(execPlayCameraAnimation);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_ACCESSORS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraAnimationCameraModifier(); \
	friend struct Z_Construct_UClass_UCameraAnimationCameraModifier_Statics; \
public: \
	DECLARE_CLASS(UCameraAnimationCameraModifier, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UCameraAnimationCameraModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUCameraAnimationCameraModifier(); \
	friend struct Z_Construct_UClass_UCameraAnimationCameraModifier_Statics; \
public: \
	DECLARE_CLASS(UCameraAnimationCameraModifier, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UCameraAnimationCameraModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraAnimationCameraModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimationCameraModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimationCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimationCameraModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAnimationCameraModifier(UCameraAnimationCameraModifier&&); \
	NO_API UCameraAnimationCameraModifier(const UCameraAnimationCameraModifier&); \
public: \
	NO_API virtual ~UCameraAnimationCameraModifier();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraAnimationCameraModifier(UCameraAnimationCameraModifier&&); \
	NO_API UCameraAnimationCameraModifier(const UCameraAnimationCameraModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraAnimationCameraModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraAnimationCameraModifier); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraAnimationCameraModifier) \
	NO_API virtual ~UCameraAnimationCameraModifier();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_178_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_ACCESSORS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_ACCESSORS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UCameraAnimationCameraModifier>();

#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_SPARSE_DATA
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_CameraAnimationPlaySpace); \
	DECLARE_FUNCTION(execConv_CameraShakePlaySpace); \
	DECLARE_FUNCTION(execConv_CameraAnimationCameraModifier);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_CameraAnimationPlaySpace); \
	DECLARE_FUNCTION(execConv_CameraShakePlaySpace); \
	DECLARE_FUNCTION(execConv_CameraAnimationCameraModifier);


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_ACCESSORS
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayCamerasFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayCamerasFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayCamerasFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UGameplayCamerasFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayCamerasFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayCamerasFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayCamerasFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayCameras"), NO_API) \
	DECLARE_SERIALIZER(UGameplayCamerasFunctionLibrary)


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayCamerasFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCamerasFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCamerasFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCamerasFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayCamerasFunctionLibrary(UGameplayCamerasFunctionLibrary&&); \
	NO_API UGameplayCamerasFunctionLibrary(const UGameplayCamerasFunctionLibrary&); \
public: \
	NO_API virtual ~UGameplayCamerasFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayCamerasFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayCamerasFunctionLibrary(UGameplayCamerasFunctionLibrary&&); \
	NO_API UGameplayCamerasFunctionLibrary(const UGameplayCamerasFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayCamerasFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayCamerasFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayCamerasFunctionLibrary) \
	NO_API virtual ~UGameplayCamerasFunctionLibrary();


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_267_PROLOG
#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_RPC_WRAPPERS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_ACCESSORS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_INCLASS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_SPARSE_DATA \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_ACCESSORS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h_270_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYCAMERAS_API UClass* StaticClass<class UGameplayCamerasFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_CameraAnimationCameraModifier_h


#define FOREACH_ENUM_ECAMERAANIMATIONPLAYSPACE(op) \
	op(ECameraAnimationPlaySpace::CameraLocal) \
	op(ECameraAnimationPlaySpace::World) \
	op(ECameraAnimationPlaySpace::UserDefined) 

enum class ECameraAnimationPlaySpace : uint8;
template<> struct TIsUEnumClass<ECameraAnimationPlaySpace> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraAnimationPlaySpace>();

#define FOREACH_ENUM_ECAMERAANIMATIONEASINGTYPE(op) \
	op(ECameraAnimationEasingType::Linear) \
	op(ECameraAnimationEasingType::Sinusoidal) \
	op(ECameraAnimationEasingType::Quadratic) \
	op(ECameraAnimationEasingType::Cubic) \
	op(ECameraAnimationEasingType::Quartic) \
	op(ECameraAnimationEasingType::Quintic) \
	op(ECameraAnimationEasingType::Exponential) \
	op(ECameraAnimationEasingType::Circular) 

enum class ECameraAnimationEasingType : uint8;
template<> struct TIsUEnumClass<ECameraAnimationEasingType> { enum { Value = true }; };
template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<ECameraAnimationEasingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
