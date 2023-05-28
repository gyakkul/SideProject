// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CausticsGeneratorActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHierarchicalInstancedStaticMeshComponent;
#ifdef WATEREDITOR_CausticsGeneratorActor_generated_h
#error "CausticsGeneratorActor.generated.h already included, missing '#pragma once' in CausticsGeneratorActor.h"
#endif
#define WATEREDITOR_CausticsGeneratorActor_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_RPC_WRAPPERS \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execSpawnCausticParticleGrid); \
	DECLARE_FUNCTION(execSpawnWaterPreviewGrid); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execEditorTick);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EditorTick_Implementation(float DeltaSeconds); \
 \
	DECLARE_FUNCTION(execSpawnCausticParticleGrid); \
	DECLARE_FUNCTION(execSpawnWaterPreviewGrid); \
	DECLARE_FUNCTION(execSetEditorTickEnabled); \
	DECLARE_FUNCTION(execEditorTick);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACausticsGeneratorActor(); \
	friend struct Z_Construct_UClass_ACausticsGeneratorActor_Statics; \
public: \
	DECLARE_CLASS(ACausticsGeneratorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(ACausticsGeneratorActor)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACausticsGeneratorActor(); \
	friend struct Z_Construct_UClass_ACausticsGeneratorActor_Statics; \
public: \
	DECLARE_CLASS(ACausticsGeneratorActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(ACausticsGeneratorActor)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACausticsGeneratorActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACausticsGeneratorActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACausticsGeneratorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACausticsGeneratorActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACausticsGeneratorActor(ACausticsGeneratorActor&&); \
	NO_API ACausticsGeneratorActor(const ACausticsGeneratorActor&); \
public: \
	NO_API virtual ~ACausticsGeneratorActor();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACausticsGeneratorActor(ACausticsGeneratorActor&&); \
	NO_API ACausticsGeneratorActor(const ACausticsGeneratorActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACausticsGeneratorActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACausticsGeneratorActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACausticsGeneratorActor) \
	NO_API virtual ~ACausticsGeneratorActor();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class ACausticsGeneratorActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_CausticsGeneratorActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
