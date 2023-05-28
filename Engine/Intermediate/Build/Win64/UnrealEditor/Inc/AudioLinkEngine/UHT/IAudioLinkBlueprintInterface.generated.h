// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioLinkBlueprintInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
#ifdef AUDIOLINKENGINE_IAudioLinkBlueprintInterface_generated_h
#error "IAudioLinkBlueprintInterface.generated.h already included, missing '#pragma once' in IAudioLinkBlueprintInterface.h"
#endif
#define AUDIOLINKENGINE_IAudioLinkBlueprintInterface_generated_h

#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLinkPlaying); \
	DECLARE_FUNCTION(execStopLink); \
	DECLARE_FUNCTION(execPlayLink); \
	DECLARE_FUNCTION(execSetLinkSound);


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLinkPlaying); \
	DECLARE_FUNCTION(execStopLink); \
	DECLARE_FUNCTION(execPlayLink); \
	DECLARE_FUNCTION(execSetLinkSound);


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioLinkBlueprintInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioLinkBlueprintInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioLinkBlueprintInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioLinkBlueprintInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioLinkBlueprintInterface(UAudioLinkBlueprintInterface&&); \
	NO_API UAudioLinkBlueprintInterface(const UAudioLinkBlueprintInterface&); \
public: \
	NO_API virtual ~UAudioLinkBlueprintInterface();


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioLinkBlueprintInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioLinkBlueprintInterface(UAudioLinkBlueprintInterface&&); \
	NO_API UAudioLinkBlueprintInterface(const UAudioLinkBlueprintInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioLinkBlueprintInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioLinkBlueprintInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioLinkBlueprintInterface) \
	NO_API virtual ~UAudioLinkBlueprintInterface();


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioLinkBlueprintInterface(); \
	friend struct Z_Construct_UClass_UAudioLinkBlueprintInterface_Statics; \
public: \
	DECLARE_CLASS(UAudioLinkBlueprintInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioLinkEngine"), NO_API) \
	DECLARE_SERIALIZER(UAudioLinkBlueprintInterface)


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioLinkBlueprintInterface() {} \
public: \
	typedef UAudioLinkBlueprintInterface UClassType; \
	typedef IAudioLinkBlueprintInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioLinkBlueprintInterface() {} \
public: \
	typedef UAudioLinkBlueprintInterface UClassType; \
	typedef IAudioLinkBlueprintInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_15_PROLOG
#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOLINKENGINE_API UClass* StaticClass<class UAudioLinkBlueprintInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioLink_AudioLinkEngine_Public_IAudioLinkBlueprintInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
