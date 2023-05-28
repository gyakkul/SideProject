// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNotifyState_MotionWarping.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier;
#ifdef MOTIONWARPING_AnimNotifyState_MotionWarping_generated_h
#error "AnimNotifyState_MotionWarping.generated.h already included, missing '#pragma once' in AnimNotifyState_MotionWarping.h"
#endif
#define MOTIONWARPING_AnimNotifyState_MotionWarping_generated_h

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS \
	virtual URootMotionModifier* AddRootMotionModifier_Implementation(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const; \
 \
	DECLARE_FUNCTION(execOnRootMotionModifierDeactivate); \
	DECLARE_FUNCTION(execOnRootMotionModifierUpdate); \
	DECLARE_FUNCTION(execOnRootMotionModifierActivate); \
	DECLARE_FUNCTION(execAddRootMotionModifier);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual URootMotionModifier* AddRootMotionModifier_Implementation(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const; \
 \
	DECLARE_FUNCTION(execOnRootMotionModifierDeactivate); \
	DECLARE_FUNCTION(execOnRootMotionModifierUpdate); \
	DECLARE_FUNCTION(execOnRootMotionModifierActivate); \
	DECLARE_FUNCTION(execAddRootMotionModifier);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ACCESSORS
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_MotionWarping(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_MotionWarping, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_MotionWarping)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_MotionWarping(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_MotionWarping, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_MotionWarping)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState_MotionWarping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_MotionWarping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_MotionWarping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_MotionWarping); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState_MotionWarping(UAnimNotifyState_MotionWarping&&); \
	NO_API UAnimNotifyState_MotionWarping(const UAnimNotifyState_MotionWarping&); \
public: \
	NO_API virtual ~UAnimNotifyState_MotionWarping();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState_MotionWarping(UAnimNotifyState_MotionWarping&&); \
	NO_API UAnimNotifyState_MotionWarping(const UAnimNotifyState_MotionWarping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_MotionWarping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_MotionWarping); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState_MotionWarping) \
	NO_API virtual ~UAnimNotifyState_MotionWarping();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_13_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class UAnimNotifyState_MotionWarping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
