// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISMPartition/ISMPartitionActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ISMPartitionActor_generated_h
#error "ISMPartitionActor.generated.h already included, missing '#pragma once' in ISMPartitionActor.h"
#endif
#define ENGINE_ISMPartitionActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAISMPartitionActor(); \
	friend struct Z_Construct_UClass_AISMPartitionActor_Statics; \
public: \
	DECLARE_CLASS(AISMPartitionActor, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AISMPartitionActor) \
	virtual UObject* _getUObject() const override { return const_cast<AISMPartitionActor*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAISMPartitionActor(); \
	friend struct Z_Construct_UClass_AISMPartitionActor_Statics; \
public: \
	DECLARE_CLASS(AISMPartitionActor, APartitionActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AISMPartitionActor) \
	virtual UObject* _getUObject() const override { return const_cast<AISMPartitionActor*>(this); }


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AISMPartitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISMPartitionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISMPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISMPartitionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AISMPartitionActor(AISMPartitionActor&&); \
	NO_API AISMPartitionActor(const AISMPartitionActor&); \
public: \
	NO_API virtual ~AISMPartitionActor();


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AISMPartitionActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AISMPartitionActor(AISMPartitionActor&&); \
	NO_API AISMPartitionActor(const AISMPartitionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AISMPartitionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AISMPartitionActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AISMPartitionActor) \
	NO_API virtual ~AISMPartitionActor();


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ISMPartitionActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AISMPartitionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMPartitionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
