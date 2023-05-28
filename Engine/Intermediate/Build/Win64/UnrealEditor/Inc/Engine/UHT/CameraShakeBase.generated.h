// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraShakeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakePattern;
#ifdef ENGINE_CameraShakeBase_generated_h
#error "CameraShakeBase.generated.h already included, missing '#pragma once' in CameraShakeBase.h"
#endif
#define ENGINE_CameraShakeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeStartParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeUpdateParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeScrubParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeUpdateResult>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeStopParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeDuration>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRootShakePattern); \
	DECLARE_FUNCTION(execGetRootShakePattern);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRootShakePattern); \
	DECLARE_FUNCTION(execGetRootShakePattern);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeBase(); \
	friend struct Z_Construct_UClass_UCameraShakeBase_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_INCLASS \
private: \
	static void StaticRegisterNativesUCameraShakeBase(); \
	friend struct Z_Construct_UClass_UCameraShakeBase_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraShakeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakeBase(UCameraShakeBase&&); \
	NO_API UCameraShakeBase(const UCameraShakeBase&); \
public: \
	NO_API virtual ~UCameraShakeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakeBase(UCameraShakeBase&&); \
	NO_API UCameraShakeBase(const UCameraShakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeBase) \
	NO_API virtual ~UCameraShakeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_359_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_362_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakeBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakePattern(); \
	friend struct Z_Construct_UClass_UCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UCameraShakePattern, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakePattern)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_INCLASS \
private: \
	static void StaticRegisterNativesUCameraShakePattern(); \
	friend struct Z_Construct_UClass_UCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UCameraShakePattern, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraShakePattern)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraShakePattern(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakePattern) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakePattern); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakePattern(UCameraShakePattern&&); \
	NO_API UCameraShakePattern(const UCameraShakePattern&); \
public: \
	NO_API virtual ~UCameraShakePattern();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraShakePattern(UCameraShakePattern&&); \
	NO_API UCameraShakePattern(const UCameraShakePattern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakePattern); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakePattern) \
	NO_API virtual ~UCameraShakePattern();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_558_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_561_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakePattern>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h


#define FOREACH_ENUM_ECAMERASHAKEUPDATERESULTFLAGS(op) \
	op(ECameraShakeUpdateResultFlags::ApplyAsAbsolute) \
	op(ECameraShakeUpdateResultFlags::SkipAutoScale) \
	op(ECameraShakeUpdateResultFlags::SkipAutoPlaySpace) \
	op(ECameraShakeUpdateResultFlags::Default) 

enum class ECameraShakeUpdateResultFlags : uint8;
template<> struct TIsUEnumClass<ECameraShakeUpdateResultFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeUpdateResultFlags>();

#define FOREACH_ENUM_ECAMERASHAKEDURATIONTYPE(op) \
	op(ECameraShakeDurationType::Fixed) \
	op(ECameraShakeDurationType::Infinite) \
	op(ECameraShakeDurationType::Custom) 

enum class ECameraShakeDurationType : uint8;
template<> struct TIsUEnumClass<ECameraShakeDurationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
