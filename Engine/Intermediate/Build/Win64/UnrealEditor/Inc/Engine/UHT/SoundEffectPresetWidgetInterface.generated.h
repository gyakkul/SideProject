// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/SoundEffectPresetWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundEffectPreset;
#ifdef ENGINE_SoundEffectPresetWidgetInterface_generated_h
#error "SoundEffectPresetWidgetInterface.generated.h already included, missing '#pragma once' in SoundEffectPresetWidgetInterface.h"
#endif
#define ENGINE_SoundEffectPresetWidgetInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectPresetWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectPresetWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectPresetWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectPresetWidgetInterface(USoundEffectPresetWidgetInterface&&); \
	NO_API USoundEffectPresetWidgetInterface(const USoundEffectPresetWidgetInterface&); \
public: \
	NO_API virtual ~USoundEffectPresetWidgetInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundEffectPresetWidgetInterface(USoundEffectPresetWidgetInterface&&); \
	NO_API USoundEffectPresetWidgetInterface(const USoundEffectPresetWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundEffectPresetWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectPresetWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectPresetWidgetInterface) \
	NO_API virtual ~USoundEffectPresetWidgetInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSoundEffectPresetWidgetInterface(); \
	friend struct Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(USoundEffectPresetWidgetInterface, UAudioPanelWidgetInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundEffectPresetWidgetInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISoundEffectPresetWidgetInterface() {} \
public: \
	typedef USoundEffectPresetWidgetInterface UClassType; \
	typedef ISoundEffectPresetWidgetInterface ThisClass; \
	static TSubclassOf<USoundEffectPreset>  Execute_GetClass(UObject* O); \
	static void Execute_OnConstructed(UObject* O, USoundEffectPreset* Preset); \
	static void Execute_OnPropertyChanged(UObject* O, USoundEffectPreset* Preset, FName PropertyName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~ISoundEffectPresetWidgetInterface() {} \
public: \
	typedef USoundEffectPresetWidgetInterface UClassType; \
	typedef ISoundEffectPresetWidgetInterface ThisClass; \
	static TSubclassOf<USoundEffectPreset>  Execute_GetClass(UObject* O); \
	static void Execute_OnConstructed(UObject* O, USoundEffectPreset* Preset); \
	static void Execute_OnPropertyChanged(UObject* O, USoundEffectPreset* Preset, FName PropertyName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectPresetWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
