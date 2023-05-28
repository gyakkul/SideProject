// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ControlChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ControlChannel_generated_h
#error "ControlChannel.generated.h already included, missing '#pragma once' in ControlChannel.h"
#endif
#define ENGINE_ControlChannel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlChannel(); \
	friend struct Z_Construct_UClass_UControlChannel_Statics; \
public: \
	DECLARE_CLASS(UControlChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UControlChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUControlChannel(); \
	friend struct Z_Construct_UClass_UControlChannel_Statics; \
public: \
	DECLARE_CLASS(UControlChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UControlChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlChannel(UControlChannel&&); \
	NO_API UControlChannel(const UControlChannel&); \
public: \
	NO_API virtual ~UControlChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlChannel(UControlChannel&&); \
	NO_API UControlChannel(const UControlChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlChannel) \
	NO_API virtual ~UControlChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_42_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ControlChannel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UControlChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ControlChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
