// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ActorChannel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActorChannel_generated_h
#error "ActorChannel.generated.h already included, missing '#pragma once' in ActorChannel.h"
#endif
#define ENGINE_ActorChannel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorChannel, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend struct Z_Construct_UClass_UActorChannel_Statics; \
public: \
	DECLARE_CLASS(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_INCLASS \
private: \
	static void StaticRegisterNativesUActorChannel(); \
	friend struct Z_Construct_UClass_UActorChannel_Statics; \
public: \
	DECLARE_CLASS(UActorChannel, UChannel, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorChannel) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorChannel(UActorChannel&&); \
	NO_API UActorChannel(const UActorChannel&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorChannel(UActorChannel&&); \
	NO_API UActorChannel(const UActorChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorChannel)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_67_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorChannel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
