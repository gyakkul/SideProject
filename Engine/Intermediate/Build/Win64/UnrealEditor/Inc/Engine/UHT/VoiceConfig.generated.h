// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/VoiceConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UAudioComponent;
class UVOIPTalker;
#ifdef ENGINE_VoiceConfig_generated_h
#error "VoiceConfig.generated.h already included, missing '#pragma once' in VoiceConfig.h"
#endif
#define ENGINE_VoiceConfig_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVoiceSettings>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS \
	virtual void BPOnTalkingEnd_Implementation(); \
	virtual void BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent); \
 \
	DECLARE_FUNCTION(execBPOnTalkingEnd); \
	DECLARE_FUNCTION(execBPOnTalkingBegin); \
	DECLARE_FUNCTION(execGetVoiceLevel); \
	DECLARE_FUNCTION(execRegisterWithPlayerState); \
	DECLARE_FUNCTION(execCreateTalkerForPlayer);


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPOnTalkingEnd_Implementation(); \
	virtual void BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent); \
 \
	DECLARE_FUNCTION(execBPOnTalkingEnd); \
	DECLARE_FUNCTION(execBPOnTalkingBegin); \
	DECLARE_FUNCTION(execGetVoiceLevel); \
	DECLARE_FUNCTION(execRegisterWithPlayerState); \
	DECLARE_FUNCTION(execCreateTalkerForPlayer);


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIPTalker(); \
	friend struct Z_Construct_UClass_UVOIPTalker_Statics; \
public: \
	DECLARE_CLASS(UVOIPTalker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPTalker)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUVOIPTalker(); \
	friend struct Z_Construct_UClass_UVOIPTalker_Statics; \
public: \
	DECLARE_CLASS(UVOIPTalker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPTalker)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIPTalker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPTalker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPTalker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPTalker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPTalker(UVOIPTalker&&); \
	NO_API UVOIPTalker(const UVOIPTalker&); \
public:


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPTalker(UVOIPTalker&&); \
	NO_API UVOIPTalker(const UVOIPTalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPTalker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPTalker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPTalker)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVOIPTalker>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMicThreshold);


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMicThreshold);


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIPStatics(); \
	friend struct Z_Construct_UClass_UVOIPStatics_Statics; \
public: \
	DECLARE_CLASS(UVOIPStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPStatics)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUVOIPStatics(); \
	friend struct Z_Construct_UClass_UVOIPStatics_Statics; \
public: \
	DECLARE_CLASS(UVOIPStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UVOIPStatics)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIPStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPStatics(UVOIPStatics&&); \
	NO_API UVOIPStatics(const UVOIPStatics&); \
public: \
	NO_API virtual ~UVOIPStatics();


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVOIPStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVOIPStatics(UVOIPStatics&&); \
	NO_API UVOIPStatics(const UVOIPStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVOIPStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPStatics) \
	NO_API virtual ~UVOIPStatics();


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_143_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVOIPStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
