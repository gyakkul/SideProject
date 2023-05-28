// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AndroidFileServerBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANDROIDFILESERVER_AndroidFileServerBPLibrary_generated_h
#error "AndroidFileServerBPLibrary.generated.h already included, missing '#pragma once' in AndroidFileServerBPLibrary.h"
#endif
#define ANDROIDFILESERVER_AndroidFileServerBPLibrary_generated_h

#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsFileServerRunning); \
	DECLARE_FUNCTION(execStopFileServer); \
	DECLARE_FUNCTION(execStartFileServer);


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsFileServerRunning); \
	DECLARE_FUNCTION(execStopFileServer); \
	DECLARE_FUNCTION(execStartFileServer);


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_ACCESSORS
#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAndroidFileServerBPLibrary(); \
	friend struct Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAndroidFileServerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidFileServer"), NO_API) \
	DECLARE_SERIALIZER(UAndroidFileServerBPLibrary)


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAndroidFileServerBPLibrary(); \
	friend struct Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UAndroidFileServerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AndroidFileServer"), NO_API) \
	DECLARE_SERIALIZER(UAndroidFileServerBPLibrary)


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidFileServerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidFileServerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidFileServerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidFileServerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidFileServerBPLibrary(UAndroidFileServerBPLibrary&&); \
	NO_API UAndroidFileServerBPLibrary(const UAndroidFileServerBPLibrary&); \
public: \
	NO_API virtual ~UAndroidFileServerBPLibrary();


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAndroidFileServerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAndroidFileServerBPLibrary(UAndroidFileServerBPLibrary&&); \
	NO_API UAndroidFileServerBPLibrary(const UAndroidFileServerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAndroidFileServerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAndroidFileServerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAndroidFileServerBPLibrary) \
	NO_API virtual ~UAndroidFileServerBPLibrary();


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANDROIDFILESERVER_API UClass* StaticClass<class UAndroidFileServerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h


#define FOREACH_ENUM_EAFSACTIVETYPE(op) \
	op(EAFSActiveType::None) \
	op(EAFSActiveType::USBOnly) \
	op(EAFSActiveType::NetworkOnly) \
	op(EAFSActiveType::Combined) 

namespace EAFSActiveType { enum Type : int; }
template<> ANDROIDFILESERVER_API UEnum* StaticEnum<EAFSActiveType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
