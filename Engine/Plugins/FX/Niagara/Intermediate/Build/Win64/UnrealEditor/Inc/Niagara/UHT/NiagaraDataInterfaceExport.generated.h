// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceExport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraSystem;
struct FBasicParticleData;
#ifdef NIAGARA_NiagaraDataInterfaceExport_generated_h
#error "NiagaraDataInterfaceExport.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceExport.h"
#endif
#define NIAGARA_NiagaraDataInterfaceExport_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBasicParticleData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FBasicParticleData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS \
	virtual void ReceiveParticleData_Implementation(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset) {}; \
 \
	DECLARE_FUNCTION(execReceiveParticleData);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveParticleData_Implementation(TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset) {}; \
 \
	DECLARE_FUNCTION(execReceiveParticleData);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParticleCallbackHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParticleCallbackHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParticleCallbackHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParticleCallbackHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParticleCallbackHandler(UNiagaraParticleCallbackHandler&&); \
	NO_API UNiagaraParticleCallbackHandler(const UNiagaraParticleCallbackHandler&); \
public: \
	NO_API virtual ~UNiagaraParticleCallbackHandler();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraParticleCallbackHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraParticleCallbackHandler(UNiagaraParticleCallbackHandler&&); \
	NO_API UNiagaraParticleCallbackHandler(const UNiagaraParticleCallbackHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraParticleCallbackHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraParticleCallbackHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraParticleCallbackHandler) \
	NO_API virtual ~UNiagaraParticleCallbackHandler();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNiagaraParticleCallbackHandler(); \
	friend struct Z_Construct_UClass_UNiagaraParticleCallbackHandler_Statics; \
public: \
	DECLARE_CLASS(UNiagaraParticleCallbackHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraParticleCallbackHandler)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INiagaraParticleCallbackHandler() {} \
public: \
	typedef UNiagaraParticleCallbackHandler UClassType; \
	typedef INiagaraParticleCallbackHandler ThisClass; \
	static void Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE \
protected: \
	virtual ~INiagaraParticleCallbackHandler() {} \
public: \
	typedef UNiagaraParticleCallbackHandler UClassType; \
	typedef INiagaraParticleCallbackHandler ThisClass; \
	static void Execute_ReceiveParticleData(UObject* O, TArray<FBasicParticleData> const& Data, UNiagaraSystem* NiagaraSystem, FVector const& SimulationPositionOffset); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_25_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraParticleCallbackHandler>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceExport(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceExport, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceExport)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceExport(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceExport_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceExport, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceExport)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceExport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceExport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceExport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceExport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataInterfaceExport(UNiagaraDataInterfaceExport&&); \
	NO_API UNiagaraDataInterfaceExport(const UNiagaraDataInterfaceExport&); \
public: \
	NO_API virtual ~UNiagaraDataInterfaceExport();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceExport(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataInterfaceExport(UNiagaraDataInterfaceExport&&); \
	NO_API UNiagaraDataInterfaceExport(const UNiagaraDataInterfaceExport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceExport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceExport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraDataInterfaceExport) \
	NO_API virtual ~UNiagaraDataInterfaceExport();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_52_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraDataInterfaceExport."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceExport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceExport_h


#define FOREACH_ENUM_ENDIEXPORT_GPUALLOCATIONMODE(op) \
	op(ENDIExport_GPUAllocationMode::FixedSize) \
	op(ENDIExport_GPUAllocationMode::PerParticle) 

enum class ENDIExport_GPUAllocationMode : uint8;
template<> struct TIsUEnumClass<ENDIExport_GPUAllocationMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDIExport_GPUAllocationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
