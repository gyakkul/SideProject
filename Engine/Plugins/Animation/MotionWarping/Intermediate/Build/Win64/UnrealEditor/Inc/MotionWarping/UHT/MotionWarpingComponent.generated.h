// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionWarpingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UMotionWarpingComponent;
class USceneComponent;
struct FMotionWarpingTarget;
struct FMotionWarpingWindowData;
#ifdef MOTIONWARPING_MotionWarpingComponent_generated_h
#error "MotionWarpingComponent.generated.h already included, missing '#pragma once' in MotionWarpingComponent.h"
#endif
#define MOTIONWARPING_MotionWarpingComponent_generated_h

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics; \
	MOTIONWARPING_API static class UScriptStruct* StaticStruct();


template<> MOTIONWARPING_API UScriptStruct* StaticStruct<struct FMotionWarpingWindowData>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsForWarpTargetFromAnimation); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsFromAnimation); \
	DECLARE_FUNCTION(execExtractRootMotionFromAnimation);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsForWarpTargetFromAnimation); \
	DECLARE_FUNCTION(execGetMotionWarpingWindowsFromAnimation); \
	DECLARE_FUNCTION(execExtractRootMotionFromAnimation);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_ACCESSORS
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingUtilities(); \
	friend struct Z_Construct_UClass_UMotionWarpingUtilities_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingUtilities)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUMotionWarpingUtilities(); \
	friend struct Z_Construct_UClass_UMotionWarpingUtilities_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingUtilities)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingUtilities(UMotionWarpingUtilities&&); \
	NO_API UMotionWarpingUtilities(const UMotionWarpingUtilities&); \
public: \
	NO_API virtual ~UMotionWarpingUtilities();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingUtilities(UMotionWarpingUtilities&&); \
	NO_API UMotionWarpingUtilities(const UMotionWarpingUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingUtilities) \
	NO_API virtual ~UMotionWarpingUtilities();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_45_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_INCLASS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UMotionWarpingUtilities>();

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_80_DELEGATE \
MOTIONWARPING_API void FMotionWarpingPreUpdate_DelegateWrapper(const FMulticastScriptDelegate& MotionWarpingPreUpdate, UMotionWarpingComponent* MotionWarpingComp);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveWarpTarget); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocationAndRotation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromComponent); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromTransform); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTarget); \
	DECLARE_FUNCTION(execDisableAllRootMotionModifiers);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveWarpTarget); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocationAndRotation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromLocation); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromComponent); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTargetFromTransform); \
	DECLARE_FUNCTION(execAddOrUpdateWarpTarget); \
	DECLARE_FUNCTION(execDisableAllRootMotionModifiers);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_ACCESSORS
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionWarpingComponent(); \
	friend struct Z_Construct_UClass_UMotionWarpingComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WarpTargets=NETFIELD_REP_START, \
		NETFIELD_REP_END=WarpTargets	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUMotionWarpingComponent(); \
	friend struct Z_Construct_UClass_UMotionWarpingComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionWarpingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UMotionWarpingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WarpTargets=NETFIELD_REP_START, \
		NETFIELD_REP_END=WarpTargets	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionWarpingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingComponent(UMotionWarpingComponent&&); \
	NO_API UMotionWarpingComponent(const UMotionWarpingComponent&); \
public: \
	NO_API virtual ~UMotionWarpingComponent();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionWarpingComponent(UMotionWarpingComponent&&); \
	NO_API UMotionWarpingComponent(const UMotionWarpingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionWarpingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionWarpingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionWarpingComponent) \
	NO_API virtual ~UMotionWarpingComponent();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_82_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_INCLASS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UMotionWarpingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
