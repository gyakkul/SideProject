// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PersonaToolMenuContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UAnimBlueprint;
class UDebugSkelMeshComponent;
class USkeletalMesh;
class USkeleton;
#ifdef PERSONA_PersonaToolMenuContext_generated_h
#error "PersonaToolMenuContext.generated.h already included, missing '#pragma once' in PersonaToolMenuContext.h"
#endif
#define PERSONA_PersonaToolMenuContext_generated_h

#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_SPARSE_DATA
#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execGetAnimBlueprint); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetPreviewMeshComponent); \
	DECLARE_FUNCTION(execGetSkeleton);


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execGetAnimBlueprint); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetPreviewMeshComponent); \
	DECLARE_FUNCTION(execGetSkeleton);


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_ACCESSORS
#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaToolMenuContext(); \
	friend struct Z_Construct_UClass_UPersonaToolMenuContext_Statics; \
public: \
	DECLARE_CLASS(UPersonaToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), NO_API) \
	DECLARE_SERIALIZER(UPersonaToolMenuContext)


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPersonaToolMenuContext(); \
	friend struct Z_Construct_UClass_UPersonaToolMenuContext_Statics; \
public: \
	DECLARE_CLASS(UPersonaToolMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), NO_API) \
	DECLARE_SERIALIZER(UPersonaToolMenuContext)


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaToolMenuContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaToolMenuContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersonaToolMenuContext(UPersonaToolMenuContext&&); \
	NO_API UPersonaToolMenuContext(const UPersonaToolMenuContext&); \
public: \
	NO_API virtual ~UPersonaToolMenuContext();


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaToolMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersonaToolMenuContext(UPersonaToolMenuContext&&); \
	NO_API UPersonaToolMenuContext(const UPersonaToolMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaToolMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaToolMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaToolMenuContext) \
	NO_API virtual ~UPersonaToolMenuContext();


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_22_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_SPARSE_DATA \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_ACCESSORS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_INCLASS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_SPARSE_DATA \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_ACCESSORS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONA_API UClass* StaticClass<class UPersonaToolMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
