// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JumpFloodComponent2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FLinearColor;
#ifdef WATEREDITOR_JumpFloodComponent2D_generated_h
#error "JumpFloodComponent2D.generated.h already included, missing '#pragma once' in JumpFloodComponent2D.h"
#endif
#define WATEREDITOR_JumpFloodComponent2D_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execFindEdges_Debug); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execJumpFlood); \
	DECLARE_FUNCTION(execAssignRenderTargets); \
	DECLARE_FUNCTION(execCreateMIDs);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execFindEdges_Debug); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execJumpFlood); \
	DECLARE_FUNCTION(execAssignRenderTargets); \
	DECLARE_FUNCTION(execCreateMIDs);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJumpFloodComponent2D(); \
	friend struct Z_Construct_UClass_UJumpFloodComponent2D_Statics; \
public: \
	DECLARE_CLASS(UJumpFloodComponent2D, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UJumpFloodComponent2D)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUJumpFloodComponent2D(); \
	friend struct Z_Construct_UClass_UJumpFloodComponent2D_Statics; \
public: \
	DECLARE_CLASS(UJumpFloodComponent2D, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UJumpFloodComponent2D)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJumpFloodComponent2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpFloodComponent2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJumpFloodComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpFloodComponent2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJumpFloodComponent2D(UJumpFloodComponent2D&&); \
	NO_API UJumpFloodComponent2D(const UJumpFloodComponent2D&); \
public: \
	NO_API virtual ~UJumpFloodComponent2D();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJumpFloodComponent2D(UJumpFloodComponent2D&&); \
	NO_API UJumpFloodComponent2D(const UJumpFloodComponent2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJumpFloodComponent2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpFloodComponent2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpFloodComponent2D) \
	NO_API virtual ~UJumpFloodComponent2D();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class UJumpFloodComponent2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_JumpFloodComponent2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
