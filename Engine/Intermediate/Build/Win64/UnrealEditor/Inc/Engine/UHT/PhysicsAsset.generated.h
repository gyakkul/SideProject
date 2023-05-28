// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstraintInstanceAccessor;
#ifdef ENGINE_PhysicsAsset_generated_h
#error "PhysicsAsset.generated.h already included, missing '#pragma once' in PhysicsAsset.h"
#endif
#define ENGINE_PhysicsAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsAssetSolverSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicsAssetSolverSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSolverIterations_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSolverIterations>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConstraints); \
	DECLARE_FUNCTION(execGetConstraintByBoneNames); \
	DECLARE_FUNCTION(execGetConstraintByName);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConstraints); \
	DECLARE_FUNCTION(execGetConstraintByBoneNames); \
	DECLARE_FUNCTION(execGetConstraintByName);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPhysicsAsset, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAsset(); \
	friend struct Z_Construct_UClass_UPhysicsAsset_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAsset, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAsset(); \
	friend struct Z_Construct_UClass_UPhysicsAsset_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAsset, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UPhysicsAsset*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsAsset(UPhysicsAsset&&); \
	ENGINE_API UPhysicsAsset(const UPhysicsAsset&); \
public: \
	ENGINE_API virtual ~UPhysicsAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsAsset(UPhysicsAsset&&); \
	ENGINE_API UPhysicsAsset(const UPhysicsAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAsset) \
	ENGINE_API virtual ~UPhysicsAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_158_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_161_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsAsset>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_409_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalAnimationProfile_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalAnimationProfile>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalBodySetup(); \
	friend struct Z_Construct_UClass_USkeletalBodySetup_Statics; \
public: \
	DECLARE_CLASS(USkeletalBodySetup, UBodySetup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalBodySetup)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_INCLASS \
private: \
	static void StaticRegisterNativesUSkeletalBodySetup(); \
	friend struct Z_Construct_UClass_USkeletalBodySetup_Statics; \
public: \
	DECLARE_CLASS(USkeletalBodySetup, UBodySetup, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalBodySetup)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalBodySetup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalBodySetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalBodySetup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalBodySetup(USkeletalBodySetup&&); \
	ENGINE_API USkeletalBodySetup(const USkeletalBodySetup&); \
public: \
	ENGINE_API virtual ~USkeletalBodySetup();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeletalBodySetup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeletalBodySetup(USkeletalBodySetup&&); \
	ENGINE_API USkeletalBodySetup(const USkeletalBodySetup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalBodySetup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalBodySetup); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeletalBodySetup) \
	ENGINE_API virtual ~USkeletalBodySetup();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_420_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h_423_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalBodySetup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsAsset_h


#define FOREACH_ENUM_EPHYSICSASSETSOLVERTYPE(op) \
	op(EPhysicsAssetSolverType::RBAN) \
	op(EPhysicsAssetSolverType::World) 

enum class EPhysicsAssetSolverType : uint8;
template<> struct TIsUEnumClass<EPhysicsAssetSolverType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPhysicsAssetSolverType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
