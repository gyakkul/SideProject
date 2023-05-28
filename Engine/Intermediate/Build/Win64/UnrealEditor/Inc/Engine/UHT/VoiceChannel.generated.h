// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/VoiceChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VoiceChannel_generated_h
#error "VoiceChannel.generated.h already included, missing '#pragma once' in VoiceChannel.h"
#endif
#define ENGINE_VoiceChannel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVoiceChannel(); \
	friend struct Z_Construct_UClass_UVoiceChannel_Statics; \
public: \
	DECLARE_CLASS(UVoiceChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUVoiceChannel(); \
	friend struct Z_Construct_UClass_UVoiceChannel_Statics; \
public: \
	DECLARE_CLASS(UVoiceChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVoiceChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChannel(UVoiceChannel&&); \
	NO_API UVoiceChannel(const UVoiceChannel&); \
public: \
	NO_API virtual ~UVoiceChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVoiceChannel(UVoiceChannel&&); \
	NO_API UVoiceChannel(const UVoiceChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVoiceChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVoiceChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVoiceChannel) \
	NO_API virtual ~UVoiceChannel();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VoiceChannel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVoiceChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_VoiceChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
