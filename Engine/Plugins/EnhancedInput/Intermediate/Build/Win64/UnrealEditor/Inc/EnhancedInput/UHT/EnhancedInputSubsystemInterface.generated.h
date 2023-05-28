// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedInputSubsystemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UInputMappingContext;
class UInputModifier;
class UInputTrigger;
class UPlayerMappableInputConfig;
enum class EInputMappingRebuildType : uint8;
enum class EMappingQueryIssue : uint8;
enum class EMappingQueryResult : uint8;
struct FEnhancedActionKeyMapping;
struct FInputActionValue;
struct FKey;
struct FMappingQueryIssue;
struct FModifyContextOptions;
struct FPlayerMappableKeySlot;
#ifdef ENHANCEDINPUT_EnhancedInputSubsystemInterface_generated_h
#error "EnhancedInputSubsystemInterface.generated.h already included, missing '#pragma once' in EnhancedInputSubsystemInterface.h"
#endif
#define ENHANCEDINPUT_EnhancedInputSubsystemInterface_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifyContextOptions_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FModifyContextOptions>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemovePlayerMappableConfig); \
	DECLARE_FUNCTION(execAddPlayerMappableConfig); \
	DECLARE_FUNCTION(execRemoveAllPlayerMappedKeys); \
	DECLARE_FUNCTION(execGetAllPlayerMappedKeys); \
	DECLARE_FUNCTION(execK2_GetPlayerMappedKeyInSlot); \
	DECLARE_FUNCTION(execRemoveAllPlayerMappedKeysForMapping); \
	DECLARE_FUNCTION(execK2_RemovePlayerMappedKeyInSlot); \
	DECLARE_FUNCTION(execK2_AddPlayerMappedKeyInSlot); \
	DECLARE_FUNCTION(execGetAllPlayerMappableActionKeyMappings); \
	DECLARE_FUNCTION(execQueryKeysMappedToAction); \
	DECLARE_FUNCTION(execHasMappingContext); \
	DECLARE_FUNCTION(execQueryMapKeyInContextSet); \
	DECLARE_FUNCTION(execQueryMapKeyInActiveContextSet); \
	DECLARE_FUNCTION(execRequestRebuildControlMappings); \
	DECLARE_FUNCTION(execRemoveMappingContext); \
	DECLARE_FUNCTION(execAddMappingContext); \
	DECLARE_FUNCTION(execClearAllMappings); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemovePlayerMappableConfig); \
	DECLARE_FUNCTION(execAddPlayerMappableConfig); \
	DECLARE_FUNCTION(execRemoveAllPlayerMappedKeys); \
	DECLARE_FUNCTION(execGetAllPlayerMappedKeys); \
	DECLARE_FUNCTION(execK2_GetPlayerMappedKeyInSlot); \
	DECLARE_FUNCTION(execRemoveAllPlayerMappedKeysForMapping); \
	DECLARE_FUNCTION(execK2_RemovePlayerMappedKeyInSlot); \
	DECLARE_FUNCTION(execK2_AddPlayerMappedKeyInSlot); \
	DECLARE_FUNCTION(execGetAllPlayerMappableActionKeyMappings); \
	DECLARE_FUNCTION(execQueryKeysMappedToAction); \
	DECLARE_FUNCTION(execHasMappingContext); \
	DECLARE_FUNCTION(execQueryMapKeyInContextSet); \
	DECLARE_FUNCTION(execQueryMapKeyInActiveContextSet); \
	DECLARE_FUNCTION(execRequestRebuildControlMappings); \
	DECLARE_FUNCTION(execRemoveMappingContext); \
	DECLARE_FUNCTION(execAddMappingContext); \
	DECLARE_FUNCTION(execClearAllMappings); \
	DECLARE_FUNCTION(execInjectInputVectorForAction); \
	DECLARE_FUNCTION(execInjectInputForAction);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputSubsystemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputSubsystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputSubsystemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(UEnhancedInputSubsystemInterface&&); \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const UEnhancedInputSubsystemInterface&); \
public: \
	ENHANCEDINPUT_API virtual ~UEnhancedInputSubsystemInterface();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(UEnhancedInputSubsystemInterface&&); \
	ENHANCEDINPUT_API UEnhancedInputSubsystemInterface(const UEnhancedInputSubsystemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedInputSubsystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputSubsystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputSubsystemInterface) \
	ENHANCEDINPUT_API virtual ~UEnhancedInputSubsystemInterface();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnhancedInputSubsystemInterface(); \
	friend struct Z_Construct_UClass_UEnhancedInputSubsystemInterface_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputSubsystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UEnhancedInputSubsystemInterface)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnhancedInputSubsystemInterface() {} \
public: \
	typedef UEnhancedInputSubsystemInterface UClassType; \
	typedef IEnhancedInputSubsystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_INCLASS_IINTERFACE \
protected: \
	virtual ~IEnhancedInputSubsystemInterface() {} \
public: \
	typedef UEnhancedInputSubsystemInterface UClassType; \
	typedef IEnhancedInputSubsystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_26_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h_29_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputSubsystemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedInputSubsystemInterface_h


#define FOREACH_ENUM_EINPUTMAPPINGREBUILDTYPE(op) \
	op(EInputMappingRebuildType::None) \
	op(EInputMappingRebuildType::Rebuild) \
	op(EInputMappingRebuildType::RebuildWithFlush) 

enum class EInputMappingRebuildType : uint8;
template<> struct TIsUEnumClass<EInputMappingRebuildType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputMappingRebuildType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
