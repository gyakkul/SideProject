// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncImageExport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncImageExport;
class UTexture;
#ifdef BLUTILITY_AsyncImageExport_generated_h
#error "AsyncImageExport.generated.h already included, missing '#pragma once' in AsyncImageExport.h"
#endif
#define BLUTILITY_AsyncImageExport_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_26_DELEGATE \
BLUTILITY_API void FOnExportImageAsyncComplete_DelegateWrapper(const FMulticastScriptDelegate& OnExportImageAsyncComplete, bool bSuccess);


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportImageAsync);


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportImageAsync);


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncImageExport(); \
	friend struct Z_Construct_UClass_UAsyncImageExport_Statics; \
public: \
	DECLARE_CLASS(UAsyncImageExport, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), BLUTILITY_API) \
	DECLARE_SERIALIZER(UAsyncImageExport)


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncImageExport(); \
	friend struct Z_Construct_UClass_UAsyncImageExport_Statics; \
public: \
	DECLARE_CLASS(UAsyncImageExport, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), BLUTILITY_API) \
	DECLARE_SERIALIZER(UAsyncImageExport)


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUTILITY_API UAsyncImageExport(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncImageExport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncImageExport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncImageExport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLUTILITY_API UAsyncImageExport(UAsyncImageExport&&); \
	BLUTILITY_API UAsyncImageExport(const UAsyncImageExport&); \
public: \
	BLUTILITY_API virtual ~UAsyncImageExport();


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLUTILITY_API UAsyncImageExport(UAsyncImageExport&&); \
	BLUTILITY_API UAsyncImageExport(const UAsyncImageExport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUTILITY_API, UAsyncImageExport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncImageExport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAsyncImageExport) \
	BLUTILITY_API virtual ~UAsyncImageExport();


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_28_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncImageExport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_AsyncImageExport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
