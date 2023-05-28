// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperFlipbookComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperFlipbook;
struct FLinearColor;
#ifdef PAPER2D_PaperFlipbookComponent_generated_h
#error "PaperFlipbookComponent.generated.h already included, missing '#pragma once' in PaperFlipbookComponent.h"
#endif
#define PAPER2D_PaperFlipbookComponent_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_19_DELEGATE \
PAPER2D_API void FFlipbookFinishedPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& FlipbookFinishedPlaySignature);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_SPARSE_DATA
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SourceFlipbook); \
	DECLARE_FUNCTION(execGetFlipbookFramerate); \
	DECLARE_FUNCTION(execGetFlipbookLengthInFrames); \
	DECLARE_FUNCTION(execGetFlipbookLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execGetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execSetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetSpriteColor); \
	DECLARE_FUNCTION(execGetSpriteColor); \
	DECLARE_FUNCTION(execGetFlipbook); \
	DECLARE_FUNCTION(execSetFlipbook);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SourceFlipbook); \
	DECLARE_FUNCTION(execGetFlipbookFramerate); \
	DECLARE_FUNCTION(execGetFlipbookLengthInFrames); \
	DECLARE_FUNCTION(execGetFlipbookLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execGetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execSetPlaybackPositionInFrames); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetSpriteColor); \
	DECLARE_FUNCTION(execGetSpriteColor); \
	DECLARE_FUNCTION(execGetFlipbook); \
	DECLARE_FUNCTION(execSetFlipbook);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ACCESSORS
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbookComponent, NO_API)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperFlipbookComponent(); \
	friend struct Z_Construct_UClass_UPaperFlipbookComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbookComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbookComponent) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SourceFlipbook=NETFIELD_REP_START, \
		NETFIELD_REP_END=SourceFlipbook	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPaperFlipbookComponent(); \
	friend struct Z_Construct_UClass_UPaperFlipbookComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperFlipbookComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperFlipbookComponent) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SourceFlipbook=NETFIELD_REP_START, \
		NETFIELD_REP_END=SourceFlipbook	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbookComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbookComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbookComponent(UPaperFlipbookComponent&&); \
	NO_API UPaperFlipbookComponent(const UPaperFlipbookComponent&); \
public: \
	NO_API virtual ~UPaperFlipbookComponent();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperFlipbookComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperFlipbookComponent(UPaperFlipbookComponent&&); \
	NO_API UPaperFlipbookComponent(const UPaperFlipbookComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperFlipbookComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperFlipbookComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperFlipbookComponent) \
	NO_API virtual ~UPaperFlipbookComponent();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_21_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ACCESSORS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ACCESSORS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperFlipbookComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperFlipbookComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
