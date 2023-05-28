// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorSequenceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSEQUENCE_ActorSequenceComponent_generated_h
#error "ActorSequenceComponent.generated.h already included, missing '#pragma once' in ActorSequenceComponent.h"
#endif
#define ACTORSEQUENCE_ActorSequenceComponent_generated_h

#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopSequence); \
	DECLARE_FUNCTION(execPauseSequence); \
	DECLARE_FUNCTION(execPlaySequence);


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopSequence); \
	DECLARE_FUNCTION(execPauseSequence); \
	DECLARE_FUNCTION(execPlaySequence);


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_ACCESSORS
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorSequenceComponent(); \
	friend struct Z_Construct_UClass_UActorSequenceComponent_Statics; \
public: \
	DECLARE_CLASS(UActorSequenceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorSequence"), NO_API) \
	DECLARE_SERIALIZER(UActorSequenceComponent)


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUActorSequenceComponent(); \
	friend struct Z_Construct_UClass_UActorSequenceComponent_Statics; \
public: \
	DECLARE_CLASS(UActorSequenceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorSequence"), NO_API) \
	DECLARE_SERIALIZER(UActorSequenceComponent)


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorSequenceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequenceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSequenceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequenceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSequenceComponent(UActorSequenceComponent&&); \
	NO_API UActorSequenceComponent(const UActorSequenceComponent&); \
public: \
	NO_API virtual ~UActorSequenceComponent();


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorSequenceComponent(UActorSequenceComponent&&); \
	NO_API UActorSequenceComponent(const UActorSequenceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorSequenceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorSequenceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorSequenceComponent) \
	NO_API virtual ~UActorSequenceComponent();


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_17_PROLOG
#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_ACCESSORS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_ACCESSORS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORSEQUENCE_API UClass* StaticClass<class UActorSequenceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
