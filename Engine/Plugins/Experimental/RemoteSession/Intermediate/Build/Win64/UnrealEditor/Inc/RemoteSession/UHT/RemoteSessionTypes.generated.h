// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteSessionTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REMOTESESSION_RemoteSessionTypes_generated_h
#error "RemoteSessionTypes.generated.h already included, missing '#pragma once' in RemoteSessionTypes.h"
#endif
#define REMOTESESSION_RemoteSessionTypes_generated_h

#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteSessionChannelInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> REMOTESESSION_API UScriptStruct* StaticStruct<struct FRemoteSessionChannelInfo>();

#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ACCESSORS
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteSessionSettings(); \
	friend struct Z_Construct_UClass_URemoteSessionSettings_Statics; \
public: \
	DECLARE_CLASS(URemoteSessionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteSession"), NO_API) \
	DECLARE_SERIALIZER(URemoteSessionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_INCLASS \
private: \
	static void StaticRegisterNativesURemoteSessionSettings(); \
	friend struct Z_Construct_UClass_URemoteSessionSettings_Statics; \
public: \
	DECLARE_CLASS(URemoteSessionSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RemoteSession"), NO_API) \
	DECLARE_SERIALIZER(URemoteSessionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteSessionSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteSessionSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteSessionSettings(URemoteSessionSettings&&); \
	NO_API URemoteSessionSettings(const URemoteSessionSettings&); \
public: \
	NO_API virtual ~URemoteSessionSettings();


#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteSessionSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteSessionSettings(URemoteSessionSettings&&); \
	NO_API URemoteSessionSettings(const URemoteSessionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteSessionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteSessionSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteSessionSettings) \
	NO_API virtual ~URemoteSessionSettings();


#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_62_PROLOG
#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ACCESSORS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_INCLASS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ACCESSORS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTESESSION_API UClass* StaticClass<class URemoteSessionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSession_Public_RemoteSessionTypes_h


#define FOREACH_ENUM_EREMOTESESSIONCHANNELMODE(op) \
	op(ERemoteSessionChannelMode::Unknown) \
	op(ERemoteSessionChannelMode::Read) \
	op(ERemoteSessionChannelMode::Write) \
	op(ERemoteSessionChannelMode::MaxValue) 

enum class ERemoteSessionChannelMode : int32;
template<> struct TIsUEnumClass<ERemoteSessionChannelMode> { enum { Value = true }; };
template<> REMOTESESSION_API UEnum* StaticEnum<ERemoteSessionChannelMode>();

#define FOREACH_ENUM_EREMOTESESSIONCHANNELCHANGE(op) \
	op(ERemoteSessionChannelChange::Created) \
	op(ERemoteSessionChannelChange::Destroyed) 

enum class ERemoteSessionChannelChange : int32;
template<> struct TIsUEnumClass<ERemoteSessionChannelChange> { enum { Value = true }; };
template<> REMOTESESSION_API UEnum* StaticEnum<ERemoteSessionChannelChange>();

#define FOREACH_ENUM_EREMOTESESSIONCONNECTIONCHANGE(op) \
	op(ERemoteSessionConnectionChange::Connected) \
	op(ERemoteSessionConnectionChange::Disconnected) 

enum class ERemoteSessionConnectionChange : int32;
template<> struct TIsUEnumClass<ERemoteSessionConnectionChange> { enum { Value = true }; };
template<> REMOTESESSION_API UEnum* StaticEnum<ERemoteSessionConnectionChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
