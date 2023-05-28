// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraPerfBaseline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
struct FNiagaraPerfBaselineStats;
#ifdef NIAGARA_NiagaraPerfBaseline_generated_h
#error "NiagaraPerfBaseline.generated.h already included, missing '#pragma once' in NiagaraPerfBaseline.h"
#endif
#define NIAGARA_NiagaraPerfBaseline_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPerfBaselineStats>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_RPC_WRAPPERS \
	virtual void OnOwnerTick_Implementation(float DeltaTime); \
	virtual void OnEndTest_Implementation(FNiagaraPerfBaselineStats Stats); \
	virtual bool OnTickTest_Implementation(); \
	virtual void OnBeginTest_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSystem); \
	DECLARE_FUNCTION(execOnOwnerTick); \
	DECLARE_FUNCTION(execOnEndTest); \
	DECLARE_FUNCTION(execOnTickTest); \
	DECLARE_FUNCTION(execOnBeginTest);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOwnerTick_Implementation(float DeltaTime); \
	virtual void OnEndTest_Implementation(FNiagaraPerfBaselineStats Stats); \
	virtual bool OnTickTest_Implementation(); \
	virtual void OnBeginTest_Implementation(); \
 \
	DECLARE_FUNCTION(execGetSystem); \
	DECLARE_FUNCTION(execOnOwnerTick); \
	DECLARE_FUNCTION(execOnEndTest); \
	DECLARE_FUNCTION(execOnTickTest); \
	DECLARE_FUNCTION(execOnBeginTest);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBaselineController(); \
	friend struct Z_Construct_UClass_UNiagaraBaselineController_Statics; \
public: \
	DECLARE_CLASS(UNiagaraBaselineController, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraBaselineController)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraBaselineController(); \
	friend struct Z_Construct_UClass_UNiagaraBaselineController_Statics; \
public: \
	DECLARE_CLASS(UNiagaraBaselineController, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraBaselineController)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraBaselineController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBaselineController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraBaselineController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBaselineController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraBaselineController(UNiagaraBaselineController&&); \
	NO_API UNiagaraBaselineController(const UNiagaraBaselineController&); \
public: \
	NO_API virtual ~UNiagaraBaselineController();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraBaselineController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraBaselineController(UNiagaraBaselineController&&); \
	NO_API UNiagaraBaselineController(const UNiagaraBaselineController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraBaselineController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBaselineController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBaselineController) \
	NO_API virtual ~UNiagaraBaselineController();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_71_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraBaselineController>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraBaselineController_Basic(); \
	friend struct Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics; \
public: \
	DECLARE_CLASS(UNiagaraBaselineController_Basic, UNiagaraBaselineController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraBaselineController_Basic)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraBaselineController_Basic(); \
	friend struct Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics; \
public: \
	DECLARE_CLASS(UNiagaraBaselineController_Basic, UNiagaraBaselineController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraBaselineController_Basic)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraBaselineController_Basic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBaselineController_Basic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraBaselineController_Basic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBaselineController_Basic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraBaselineController_Basic(UNiagaraBaselineController_Basic&&); \
	NO_API UNiagaraBaselineController_Basic(const UNiagaraBaselineController_Basic&); \
public: \
	NO_API virtual ~UNiagaraBaselineController_Basic();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraBaselineController_Basic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraBaselineController_Basic(UNiagaraBaselineController_Basic&&); \
	NO_API UNiagaraBaselineController_Basic(const UNiagaraBaselineController_Basic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraBaselineController_Basic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraBaselineController_Basic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraBaselineController_Basic) \
	NO_API virtual ~UNiagaraBaselineController_Basic();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_120_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraBaselineController_Basic>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANiagaraPerfBaselineActor(); \
	friend struct Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics; \
public: \
	DECLARE_CLASS(ANiagaraPerfBaselineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(ANiagaraPerfBaselineActor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_INCLASS \
private: \
	static void StaticRegisterNativesANiagaraPerfBaselineActor(); \
	friend struct Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics; \
public: \
	DECLARE_CLASS(ANiagaraPerfBaselineActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(ANiagaraPerfBaselineActor)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPerfBaselineActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPerfBaselineActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPerfBaselineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPerfBaselineActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANiagaraPerfBaselineActor(ANiagaraPerfBaselineActor&&); \
	NO_API ANiagaraPerfBaselineActor(const ANiagaraPerfBaselineActor&); \
public: \
	NO_API virtual ~ANiagaraPerfBaselineActor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANiagaraPerfBaselineActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANiagaraPerfBaselineActor(ANiagaraPerfBaselineActor&&); \
	NO_API ANiagaraPerfBaselineActor(const ANiagaraPerfBaselineActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANiagaraPerfBaselineActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANiagaraPerfBaselineActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANiagaraPerfBaselineActor) \
	NO_API virtual ~ANiagaraPerfBaselineActor();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_138_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_141_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraPerfBaselineActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class ANiagaraPerfBaselineActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
