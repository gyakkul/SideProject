// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RootMotionModifier_SkewWarp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class UMotionWarpingComponent;
class URootMotionModifier_SkewWarp;
enum class EMotionWarpRotationType : uint8;
enum class EWarpPointAnimProvider : uint8;
#ifdef MOTIONWARPING_RootMotionModifier_SkewWarp_generated_h
#error "RootMotionModifier_SkewWarp.generated.h already included, missing '#pragma once' in RootMotionModifier_SkewWarp.h"
#endif
#define MOTIONWARPING_RootMotionModifier_SkewWarp_generated_h

#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_SPARSE_DATA
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRootMotionModifierSkewWarp);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRootMotionModifierSkewWarp);


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_ACCESSORS
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMotionModifier_SkewWarp(); \
	friend struct Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_SkewWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_SkewWarp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_INCLASS \
private: \
	static void StaticRegisterNativesURootMotionModifier_SkewWarp(); \
	friend struct Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics; \
public: \
	DECLARE_CLASS(URootMotionModifier_SkewWarp, URootMotionModifier_Warp, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionWarping"), NO_API) \
	DECLARE_SERIALIZER(URootMotionModifier_SkewWarp)


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMotionModifier_SkewWarp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_SkewWarp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_SkewWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_SkewWarp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier_SkewWarp(URootMotionModifier_SkewWarp&&); \
	NO_API URootMotionModifier_SkewWarp(const URootMotionModifier_SkewWarp&); \
public: \
	NO_API virtual ~URootMotionModifier_SkewWarp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMotionModifier_SkewWarp(URootMotionModifier_SkewWarp&&); \
	NO_API URootMotionModifier_SkewWarp(const URootMotionModifier_SkewWarp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMotionModifier_SkewWarp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMotionModifier_SkewWarp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMotionModifier_SkewWarp) \
	NO_API virtual ~URootMotionModifier_SkewWarp();


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_8_PROLOG
#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_INCLASS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_SPARSE_DATA \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_ACCESSORS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONWARPING_API UClass* StaticClass<class URootMotionModifier_SkewWarp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
