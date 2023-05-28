// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimationSettings_generated_h
#error "AnimationSettings.generated.h already included, missing '#pragma once' in AnimationSettings.h"
#endif
#define ENGINE_AnimationSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoneCustomAttributeNamesToImport);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoneCustomAttributeNamesToImport);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSettings(); \
	friend struct Z_Construct_UClass_UAnimationSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSettings(); \
	friend struct Z_Construct_UClass_UAnimationSettings_Statics; \
public: \
	DECLARE_CLASS(UAnimationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSettings(UAnimationSettings&&); \
	NO_API UAnimationSettings(const UAnimationSettings&); \
public: \
	NO_API virtual ~UAnimationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSettings(UAnimationSettings&&); \
	NO_API UAnimationSettings(const UAnimationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSettings) \
	NO_API virtual ~UAnimationSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
