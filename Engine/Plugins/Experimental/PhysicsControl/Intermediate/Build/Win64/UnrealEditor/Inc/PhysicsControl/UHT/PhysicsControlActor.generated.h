// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsControlComponent;
#ifdef PHYSICSCONTROL_PhysicsControlActor_generated_h
#error "PhysicsControlActor.generated.h already included, missing '#pragma once' in PhysicsControlActor.h"
#endif
#define PHYSICSCONTROL_PhysicsControlActor_generated_h

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInitialPhysicsControl_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FInitialPhysicsControl>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInitialBodyModifier_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FInitialBodyModifier>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInitialCharacterControls_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSICSCONTROL_API UScriptStruct* StaticStruct<struct FInitialCharacterControls>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateControls);


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateControls);


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_ACCESSORS
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsControlInitializerComponent(); \
	friend struct Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsControlInitializerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsControlInitializerComponent)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsControlInitializerComponent(); \
	friend struct Z_Construct_UClass_UPhysicsControlInitializerComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsControlInitializerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsControlInitializerComponent)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsControlInitializerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlInitializerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlInitializerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlInitializerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsControlInitializerComponent(UPhysicsControlInitializerComponent&&); \
	NO_API UPhysicsControlInitializerComponent(const UPhysicsControlInitializerComponent&); \
public: \
	NO_API virtual ~UPhysicsControlInitializerComponent();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsControlInitializerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsControlInitializerComponent(UPhysicsControlInitializerComponent&&); \
	NO_API UPhysicsControlInitializerComponent(const UPhysicsControlInitializerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlInitializerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlInitializerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlInitializerComponent) \
	NO_API virtual ~UPhysicsControlInitializerComponent();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_197_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_ACCESSORS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_ACCESSORS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_200_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsControlInitializerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCONTROL_API UClass* StaticClass<class UPhysicsControlInitializerComponent>();

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_ACCESSORS
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsControlActor(); \
	friend struct Z_Construct_UClass_APhysicsControlActor_Statics; \
public: \
	DECLARE_CLASS(APhysicsControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), PHYSICSCONTROL_API) \
	DECLARE_SERIALIZER(APhysicsControlActor)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsControlActor(); \
	friend struct Z_Construct_UClass_APhysicsControlActor_Statics; \
public: \
	DECLARE_CLASS(APhysicsControlActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), PHYSICSCONTROL_API) \
	DECLARE_SERIALIZER(APhysicsControlActor)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCONTROL_API APhysicsControlActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsControlActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROL_API, APhysicsControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsControlActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PHYSICSCONTROL_API APhysicsControlActor(APhysicsControlActor&&); \
	PHYSICSCONTROL_API APhysicsControlActor(const APhysicsControlActor&); \
public: \
	PHYSICSCONTROL_API virtual ~APhysicsControlActor();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PHYSICSCONTROL_API APhysicsControlActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PHYSICSCONTROL_API APhysicsControlActor(APhysicsControlActor&&); \
	PHYSICSCONTROL_API APhysicsControlActor(const APhysicsControlActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PHYSICSCONTROL_API, APhysicsControlActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsControlActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsControlActor) \
	PHYSICSCONTROL_API virtual ~APhysicsControlActor();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_252_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_ACCESSORS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_ACCESSORS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h_255_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsControlActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCONTROL_API UClass* StaticClass<class APhysicsControlActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
