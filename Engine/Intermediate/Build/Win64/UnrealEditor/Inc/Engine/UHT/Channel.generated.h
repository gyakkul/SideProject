// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Channel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Channel_generated_h
#error "Channel.generated.h already included, missing '#pragma once' in Channel.h"
#endif
#define ENGINE_Channel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChannel, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChannel(); \
	friend struct Z_Construct_UClass_UChannel_Statics; \
public: \
	DECLARE_CLASS(UChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUChannel(); \
	friend struct Z_Construct_UClass_UChannel_Statics; \
public: \
	DECLARE_CLASS(UChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannel(UChannel&&); \
	NO_API UChannel(const UChannel&); \
public: \
	NO_API virtual ~UChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChannel(UChannel&&); \
	NO_API UChannel(const UChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChannel) \
	NO_API virtual ~UChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_55_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Channel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
