// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APEXDESTRUCTION_DestructibleActor_generated_h
#error "DestructibleActor.generated.h already included, missing '#pragma once' in DestructibleActor.h"
#endif
#define APEXDESTRUCTION_DestructibleActor_generated_h

#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_15_DELEGATE \
APEXDESTRUCTION_API void FActorFractureSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorFractureSignature, FVector const& HitPoint, FVector const& HitDirection);


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructibleActor(); \
	friend struct Z_Construct_UClass_ADestructibleActor_Statics; \
public: \
	DECLARE_CLASS(ADestructibleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestruction"), NO_API) \
	DECLARE_SERIALIZER(ADestructibleActor)


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesADestructibleActor(); \
	friend struct Z_Construct_UClass_ADestructibleActor_Statics; \
public: \
	DECLARE_CLASS(ADestructibleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ApexDestruction"), NO_API) \
	DECLARE_SERIALIZER(ADestructibleActor)


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestructibleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestructibleActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructibleActor(ADestructibleActor&&); \
	NO_API ADestructibleActor(const ADestructibleActor&); \
public: \
	NO_API virtual ~ADestructibleActor();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestructibleActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructibleActor(ADestructibleActor&&); \
	NO_API ADestructibleActor(const ADestructibleActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestructibleActor) \
	NO_API virtual ~ADestructibleActor();


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DestructibleActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APEXDESTRUCTION_API UClass* StaticClass<class ADestructibleActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ApexDestruction_Source_ApexDestruction_Public_DestructibleActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
