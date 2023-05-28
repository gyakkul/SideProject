// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationEditContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONEDITMODE_AnimationEditContext_generated_h
#error "AnimationEditContext.generated.h already included, missing '#pragma once' in AnimationEditContext.h"
#endif
#define ANIMATIONEDITMODE_AnimationEditContext_generated_h

#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ACCESSORS
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONEDITMODE_API UAnimationEditContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationEditContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONEDITMODE_API, UAnimationEditContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationEditContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMATIONEDITMODE_API UAnimationEditContext(UAnimationEditContext&&); \
	ANIMATIONEDITMODE_API UAnimationEditContext(const UAnimationEditContext&); \
public: \
	ANIMATIONEDITMODE_API virtual ~UAnimationEditContext();


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONEDITMODE_API UAnimationEditContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMATIONEDITMODE_API UAnimationEditContext(UAnimationEditContext&&); \
	ANIMATIONEDITMODE_API UAnimationEditContext(const UAnimationEditContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONEDITMODE_API, UAnimationEditContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationEditContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationEditContext) \
	ANIMATIONEDITMODE_API virtual ~UAnimationEditContext();


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimationEditContext(); \
	friend struct Z_Construct_UClass_UAnimationEditContext_Statics; \
public: \
	DECLARE_CLASS(UAnimationEditContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimationEditMode"), ANIMATIONEDITMODE_API) \
	DECLARE_SERIALIZER(UAnimationEditContext)


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimationEditContext() {} \
public: \
	typedef UAnimationEditContext UClassType; \
	typedef IAnimationEditContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnimationEditContext() {} \
public: \
	typedef UAnimationEditContext UClassType; \
	typedef IAnimationEditContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_10_PROLOG
#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ACCESSORS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_ACCESSORS \
	FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONEDITMODE_API UClass* StaticClass<class UAnimationEditContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationEditMode_Public_AnimationEditContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
