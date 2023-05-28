// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimSequencerInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimSequencerInstance_generated_h
#error "AnimSequencerInstance.generated.h already included, missing '#pragma once' in AnimSequencerInstance.h"
#endif
#define ANIMGRAPHRUNTIME_AnimSequencerInstance_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSequencerInstance(); \
	friend struct Z_Construct_UClass_UAnimSequencerInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSequencerInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequencerInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequencerInstance*>(this); }


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSequencerInstance(); \
	friend struct Z_Construct_UClass_UAnimSequencerInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSequencerInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAnimSequencerInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UAnimSequencerInstance*>(this); }


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequencerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequencerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequencerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequencerInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequencerInstance(UAnimSequencerInstance&&); \
	NO_API UAnimSequencerInstance(const UAnimSequencerInstance&); \
public: \
	NO_API virtual ~UAnimSequencerInstance();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSequencerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSequencerInstance(UAnimSequencerInstance&&); \
	NO_API UAnimSequencerInstance(const UAnimSequencerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSequencerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSequencerInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSequencerInstance) \
	NO_API virtual ~UAnimSequencerInstance();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_17_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_INCLASS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSequencerInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UAnimSequencerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimSequencerInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
