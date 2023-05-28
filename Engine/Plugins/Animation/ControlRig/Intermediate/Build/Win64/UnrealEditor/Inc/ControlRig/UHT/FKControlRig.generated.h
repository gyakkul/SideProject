// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/FKControlRig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTROLRIG_FKControlRig_generated_h
#error "FKControlRig.generated.h already included, missing '#pragma once' in FKControlRig.h"
#endif
#define CONTROLRIG_FKControlRig_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFKControlRig(); \
	friend struct Z_Construct_UClass_UFKControlRig_Statics; \
public: \
	DECLARE_CLASS(UFKControlRig, UControlRig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UFKControlRig)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUFKControlRig(); \
	friend struct Z_Construct_UClass_UFKControlRig_Statics; \
public: \
	DECLARE_CLASS(UFKControlRig, UControlRig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(UFKControlRig)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFKControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFKControlRig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFKControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFKControlRig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFKControlRig(UFKControlRig&&); \
	NO_API UFKControlRig(const UFKControlRig&); \
public: \
	NO_API virtual ~UFKControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFKControlRig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFKControlRig(UFKControlRig&&); \
	NO_API UFKControlRig(const UFKControlRig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFKControlRig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFKControlRig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFKControlRig) \
	NO_API virtual ~UFKControlRig();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_38_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FKControlRig."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class UFKControlRig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h


#define FOREACH_ENUM_ECONTROLRIGFKRIGEXECUTEMODE(op) \
	op(EControlRigFKRigExecuteMode::Replace) \
	op(EControlRigFKRigExecuteMode::Additive) \
	op(EControlRigFKRigExecuteMode::Direct) \
	op(EControlRigFKRigExecuteMode::Max) 

enum class EControlRigFKRigExecuteMode : uint8;
template<> struct TIsUEnumClass<EControlRigFKRigExecuteMode> { enum { Value = true }; };
template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigFKRigExecuteMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
