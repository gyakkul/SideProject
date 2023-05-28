// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataChannelAccessor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FLinearColor;
struct FNiagaraSpawnInfo;
#ifdef NIAGARA_NiagaraDataChannelAccessor_generated_h
#error "NiagaraDataChannelAccessor.generated.h already included, missing '#pragma once' in NiagaraDataChannelAccessor.h"
#endif
#define NIAGARA_NiagaraDataChannelAccessor_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReadBool); \
	DECLARE_FUNCTION(execReadInt); \
	DECLARE_FUNCTION(execReadLinearColor); \
	DECLARE_FUNCTION(execReadQuat); \
	DECLARE_FUNCTION(execReadVector4); \
	DECLARE_FUNCTION(execReadVector); \
	DECLARE_FUNCTION(execReadVector2D); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitAccess);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReadBool); \
	DECLARE_FUNCTION(execReadInt); \
	DECLARE_FUNCTION(execReadLinearColor); \
	DECLARE_FUNCTION(execReadQuat); \
	DECLARE_FUNCTION(execReadVector4); \
	DECLARE_FUNCTION(execReadVector); \
	DECLARE_FUNCTION(execReadVector2D); \
	DECLARE_FUNCTION(execReadFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitAccess);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelReader(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelReader_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelReader(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelReader_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataChannelReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataChannelReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataChannelReader(UNiagaraDataChannelReader&&); \
	NO_API UNiagaraDataChannelReader(const UNiagaraDataChannelReader&); \
public: \
	NO_API virtual ~UNiagaraDataChannelReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataChannelReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataChannelReader(UNiagaraDataChannelReader&&); \
	NO_API UNiagaraDataChannelReader(const UNiagaraDataChannelReader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataChannelReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelReader) \
	NO_API virtual ~UNiagaraDataChannelReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_15_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelReader>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteSpawnInfo); \
	DECLARE_FUNCTION(execWriteBool); \
	DECLARE_FUNCTION(execWriteInt); \
	DECLARE_FUNCTION(execWriteLinearColor); \
	DECLARE_FUNCTION(execWriteQuat); \
	DECLARE_FUNCTION(execWriteVector4); \
	DECLARE_FUNCTION(execWriteVector); \
	DECLARE_FUNCTION(execWriteVector2D); \
	DECLARE_FUNCTION(execWriteFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitWrite);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteSpawnInfo); \
	DECLARE_FUNCTION(execWriteBool); \
	DECLARE_FUNCTION(execWriteInt); \
	DECLARE_FUNCTION(execWriteLinearColor); \
	DECLARE_FUNCTION(execWriteQuat); \
	DECLARE_FUNCTION(execWriteVector4); \
	DECLARE_FUNCTION(execWriteVector); \
	DECLARE_FUNCTION(execWriteVector2D); \
	DECLARE_FUNCTION(execWriteFloat); \
	DECLARE_FUNCTION(execNum); \
	DECLARE_FUNCTION(execInitWrite);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelWriter(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelWriter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelWriter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelWriter)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataChannelWriter(); \
	friend struct Z_Construct_UClass_UNiagaraDataChannelWriter_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataChannelWriter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataChannelWriter)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataChannelWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelWriter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataChannelWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelWriter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataChannelWriter(UNiagaraDataChannelWriter&&); \
	NO_API UNiagaraDataChannelWriter(const UNiagaraDataChannelWriter&); \
public: \
	NO_API virtual ~UNiagaraDataChannelWriter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataChannelWriter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraDataChannelWriter(UNiagaraDataChannelWriter&&); \
	NO_API UNiagaraDataChannelWriter(const UNiagaraDataChannelWriter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataChannelWriter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataChannelWriter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataChannelWriter) \
	NO_API virtual ~UNiagaraDataChannelWriter();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_63_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataChannelWriter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
