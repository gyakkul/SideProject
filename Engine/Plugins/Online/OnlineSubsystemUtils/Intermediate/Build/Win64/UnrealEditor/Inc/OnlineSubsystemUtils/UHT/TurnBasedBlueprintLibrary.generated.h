// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TurnBasedBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
#ifdef ONLINESUBSYSTEMUTILS_TurnBasedBlueprintLibrary_generated_h
#error "TurnBasedBlueprintLibrary.generated.h already included, missing '#pragma once' in TurnBasedBlueprintLibrary.h"
#endif
#define ONLINESUBSYSTEMUTILS_TurnBasedBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerDisplayName); \
	DECLARE_FUNCTION(execRegisterTurnBasedMatchInterfaceObject); \
	DECLARE_FUNCTION(execGetMyPlayerIndex); \
	DECLARE_FUNCTION(execGetIsMyTurn);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerDisplayName); \
	DECLARE_FUNCTION(execRegisterTurnBasedMatchInterfaceObject); \
	DECLARE_FUNCTION(execGetMyPlayerIndex); \
	DECLARE_FUNCTION(execGetIsMyTurn);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTurnBasedBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTurnBasedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UTurnBasedBlueprintLibrary)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUTurnBasedBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UTurnBasedBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UTurnBasedBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UTurnBasedBlueprintLibrary)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurnBasedBlueprintLibrary(UTurnBasedBlueprintLibrary&&); \
	NO_API UTurnBasedBlueprintLibrary(const UTurnBasedBlueprintLibrary&); \
public: \
	NO_API virtual ~UTurnBasedBlueprintLibrary();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTurnBasedBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTurnBasedBlueprintLibrary(UTurnBasedBlueprintLibrary&&); \
	NO_API UTurnBasedBlueprintLibrary(const UTurnBasedBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTurnBasedBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTurnBasedBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTurnBasedBlueprintLibrary) \
	NO_API virtual ~UTurnBasedBlueprintLibrary();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TurnBasedBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UTurnBasedBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TurnBasedBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
