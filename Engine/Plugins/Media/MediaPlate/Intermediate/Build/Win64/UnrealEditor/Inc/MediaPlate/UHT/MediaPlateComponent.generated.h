// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
class UMediaTexture;
struct FTimespan;
#ifdef MEDIAPLATE_MediaPlateComponent_generated_h
#error "MediaPlateComponent.generated.h already included, missing '#pragma once' in MediaPlateComponent.h"
#endif
#define MEDIAPLATE_MediaPlateComponent_generated_h

#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMediaEnd); \
	DECLARE_FUNCTION(execOnMediaOpened); \
	DECLARE_FUNCTION(execSetLetterboxAspectRatio); \
	DECLARE_FUNCTION(execGetLetterboxAspectRatio); \
	DECLARE_FUNCTION(execSetIsAspectRatioAuto); \
	DECLARE_FUNCTION(execGetIsAspectRatioAuto); \
	DECLARE_FUNCTION(execSetPlayOnlyWhenVisible); \
	DECLARE_FUNCTION(execGetMeshRange); \
	DECLARE_FUNCTION(execSetMeshRange); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execIsMediaPlatePlaying); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer);


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMediaEnd); \
	DECLARE_FUNCTION(execOnMediaOpened); \
	DECLARE_FUNCTION(execSetLetterboxAspectRatio); \
	DECLARE_FUNCTION(execGetLetterboxAspectRatio); \
	DECLARE_FUNCTION(execSetIsAspectRatioAuto); \
	DECLARE_FUNCTION(execGetIsAspectRatioAuto); \
	DECLARE_FUNCTION(execSetPlayOnlyWhenVisible); \
	DECLARE_FUNCTION(execGetMeshRange); \
	DECLARE_FUNCTION(execSetMeshRange); \
	DECLARE_FUNCTION(execSetLoop); \
	DECLARE_FUNCTION(execGetLoop); \
	DECLARE_FUNCTION(execIsMediaPlatePlaying); \
	DECLARE_FUNCTION(execClose); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execRewind); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer);


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_ACCESSORS
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaPlateComponent(); \
	friend struct Z_Construct_UClass_UMediaPlateComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaPlateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlate"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMediaPlateComponent*>(this); }


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUMediaPlateComponent(); \
	friend struct Z_Construct_UClass_UMediaPlateComponent_Statics; \
public: \
	DECLARE_CLASS(UMediaPlateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MediaPlate"), NO_API) \
	DECLARE_SERIALIZER(UMediaPlateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UMediaPlateComponent*>(this); }


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlateComponent(UMediaPlateComponent&&); \
	NO_API UMediaPlateComponent(const UMediaPlateComponent&); \
public: \
	NO_API virtual ~UMediaPlateComponent();


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaPlateComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaPlateComponent(UMediaPlateComponent&&); \
	NO_API UMediaPlateComponent(const UMediaPlateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaPlateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlateComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlateComponent) \
	NO_API virtual ~UMediaPlateComponent();


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_44_PROLOG
#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_ACCESSORS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_INCLASS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_ACCESSORS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaPlateComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAPLATE_API UClass* StaticClass<class UMediaPlateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h


#define FOREACH_ENUM_EMEDIAPLATEEVENTSTATE(op) \
	op(EMediaPlateEventState::Play) \
	op(EMediaPlateEventState::Open) \
	op(EMediaPlateEventState::Close) \
	op(EMediaPlateEventState::Pause) \
	op(EMediaPlateEventState::Reverse) \
	op(EMediaPlateEventState::Forward) \
	op(EMediaPlateEventState::Rewind) 

enum class EMediaPlateEventState : uint8;
template<> struct TIsUEnumClass<EMediaPlateEventState> { enum { Value = true }; };
template<> MEDIAPLATE_API UEnum* StaticEnum<EMediaPlateEventState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
