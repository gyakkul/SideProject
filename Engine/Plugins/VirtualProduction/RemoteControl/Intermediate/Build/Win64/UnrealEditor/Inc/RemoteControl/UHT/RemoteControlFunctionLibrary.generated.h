// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RemoteControlFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class URemoteControlPreset;
struct FColorGradingWheelColor;
struct FColorWheelColor;
struct FRemoteControlOptionalExposeArgs;
#ifdef REMOTECONTROL_RemoteControlFunctionLibrary_generated_h
#error "RemoteControlFunctionLibrary.generated.h already included, missing '#pragma once' in RemoteControlFunctionLibrary.h"
#endif
#define REMOTECONTROL_RemoteControlFunctionLibrary_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FRemoteControlOptionalExposeArgs>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorWheelColorBase_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FColorWheelColorBase>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorWheelColor_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct(); \
	typedef FColorWheelColorBase Super;


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FColorWheelColor>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct(); \
	typedef FColorWheelColorBase Super;


template<> REMOTECONTROL_API UScriptStruct* StaticStruct<struct FColorGradingWheelColor>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyColorGradingWheelDelta); \
	DECLARE_FUNCTION(execApplyColorWheelDelta); \
	DECLARE_FUNCTION(execExposeActor); \
	DECLARE_FUNCTION(execExposeFunction); \
	DECLARE_FUNCTION(execExposeProperty);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyColorGradingWheelDelta); \
	DECLARE_FUNCTION(execApplyColorWheelDelta); \
	DECLARE_FUNCTION(execExposeActor); \
	DECLARE_FUNCTION(execExposeFunction); \
	DECLARE_FUNCTION(execExposeProperty);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlFunctionLibrary(); \
	friend struct Z_Construct_UClass_URemoteControlFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URemoteControlFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URemoteControlFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_INCLASS \
private: \
	static void StaticRegisterNativesURemoteControlFunctionLibrary(); \
	friend struct Z_Construct_UClass_URemoteControlFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URemoteControlFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URemoteControlFunctionLibrary)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteControlFunctionLibrary(URemoteControlFunctionLibrary&&); \
	NO_API URemoteControlFunctionLibrary(const URemoteControlFunctionLibrary&); \
public: \
	NO_API virtual ~URemoteControlFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URemoteControlFunctionLibrary(URemoteControlFunctionLibrary&&); \
	NO_API URemoteControlFunctionLibrary(const URemoteControlFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlFunctionLibrary) \
	NO_API virtual ~URemoteControlFunctionLibrary();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_77_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROL_API UClass* StaticClass<class URemoteControlFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
