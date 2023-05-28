// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shared/MediaPlayerEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAPLAYEREDITOR_MediaPlayerEditorSettings_generated_h
#error "MediaPlayerEditorSettings.generated.h already included, missing '#pragma once' in MediaPlayerEditorSettings.h"
#endif
#define MEDIAPLAYEREDITOR_MediaPlayerEditorSettings_generated_h

#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_ACCESSORS
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlayerEditorSettings(); \
	friend struct Z_Construct_UClass_UMediaPlayerEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayerEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayerEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlayerEditorSettings(); \
	friend struct Z_Construct_UClass_UMediaPlayerEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayerEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlayerEditor"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlayerEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayerEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayerEditorSettings(UMediaPlayerEditorSettings&&); \
	NO_API UMediaPlayerEditorSettings(const UMediaPlayerEditorSettings&); \
public: \
	NO_API virtual ~UMediaPlayerEditorSettings();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlayerEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlayerEditorSettings(UMediaPlayerEditorSettings&&); \
	NO_API UMediaPlayerEditorSettings(const UMediaPlayerEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlayerEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerEditorSettings) \
	NO_API virtual ~UMediaPlayerEditorSettings();


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_26_PROLOG
#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_ACCESSORS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_INCLASS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_ACCESSORS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlayerEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<class UMediaPlayerEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorSettings_h


#define FOREACH_ENUM_EMEDIAPLAYEREDITORSCALE(op) \
	op(EMediaPlayerEditorScale::Fill) \
	op(EMediaPlayerEditorScale::Fit) \
	op(EMediaPlayerEditorScale::Original) 

enum class EMediaPlayerEditorScale : uint8;
template<> struct TIsUEnumClass<EMediaPlayerEditorScale> { enum { Value = true }; };
template<> MEDIAPLAYEREDITOR_API UEnum* StaticEnum<EMediaPlayerEditorScale>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
