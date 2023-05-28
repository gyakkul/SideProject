// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
#ifdef ANIMATIONMODIFIERS_AnimationModifier_generated_h
#error "AnimationModifier.generated.h already included, missing '#pragma once' in AnimationModifier.h"
#endif
#define ANIMATIONMODIFIERS_AnimationModifier_generated_h

#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_RPC_WRAPPERS \
	virtual void OnRevert_Implementation(UAnimSequence* AnimationSequence); \
	virtual void OnApply_Implementation(UAnimSequence* AnimationSequence); \
 \
	DECLARE_FUNCTION(execOnRevert); \
	DECLARE_FUNCTION(execOnApply);


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRevert); \
	DECLARE_FUNCTION(execOnApply);


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ACCESSORS
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimationModifier, NO_API)


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationModifier(); \
	friend struct Z_Construct_UClass_UAnimationModifier_Statics; \
public: \
	DECLARE_CLASS(UAnimationModifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAnimationModifier) \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationModifier(); \
	friend struct Z_Construct_UClass_UAnimationModifier_Statics; \
public: \
	DECLARE_CLASS(UAnimationModifier, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationModifiers"), NO_API) \
	DECLARE_SERIALIZER(UAnimationModifier) \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationModifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationModifier(UAnimationModifier&&); \
	NO_API UAnimationModifier(const UAnimationModifier&); \
public: \
	NO_API virtual ~UAnimationModifier();


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationModifier(UAnimationModifier&&); \
	NO_API UAnimationModifier(const UAnimationModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationModifier) \
	NO_API virtual ~UAnimationModifier();


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_31_PROLOG
#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ACCESSORS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_INCLASS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ACCESSORS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONMODIFIERS_API UClass* StaticClass<class UAnimationModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationModifiers_Public_AnimationModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
