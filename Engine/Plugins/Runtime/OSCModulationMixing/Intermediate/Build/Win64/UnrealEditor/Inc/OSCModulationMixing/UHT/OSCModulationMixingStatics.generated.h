// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCModulationMixingStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOSCClient;
class USoundControlBusMix;
enum class EOSCModulationBundle : uint8;
struct FOSCAddress;
struct FOSCBundle;
struct FSoundControlBusMixStage;
struct FSoundModulationMixValue;
#ifdef OSCMODULATIONMIXING_OSCModulationMixingStatics_generated_h
#error "OSCModulationMixingStatics.generated.h already included, missing '#pragma once' in OSCModulationMixingStatics.h"
#endif
#define OSCMODULATIONMIXING_OSCModulationMixingStatics_generated_h

#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOSCBundleToStageValues); \
	DECLARE_FUNCTION(execRequestMix); \
	DECLARE_FUNCTION(execGetOSCBundleType); \
	DECLARE_FUNCTION(execCopyMixToOSCBundle); \
	DECLARE_FUNCTION(execCopyStagesToOSCBundle); \
	DECLARE_FUNCTION(execGetProfileSavePath); \
	DECLARE_FUNCTION(execGetProfileLoadPath); \
	DECLARE_FUNCTION(execGetMixLoadPattern);


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOSCBundleToStageValues); \
	DECLARE_FUNCTION(execRequestMix); \
	DECLARE_FUNCTION(execGetOSCBundleType); \
	DECLARE_FUNCTION(execCopyMixToOSCBundle); \
	DECLARE_FUNCTION(execCopyStagesToOSCBundle); \
	DECLARE_FUNCTION(execGetProfileSavePath); \
	DECLARE_FUNCTION(execGetProfileLoadPath); \
	DECLARE_FUNCTION(execGetMixLoadPattern);


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_ACCESSORS
#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOSCModulationMixingStatics(); \
	friend struct Z_Construct_UClass_UOSCModulationMixingStatics_Statics; \
public: \
	DECLARE_CLASS(UOSCModulationMixingStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSCModulationMixing"), NO_API) \
	DECLARE_SERIALIZER(UOSCModulationMixingStatics)


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUOSCModulationMixingStatics(); \
	friend struct Z_Construct_UClass_UOSCModulationMixingStatics_Statics; \
public: \
	DECLARE_CLASS(UOSCModulationMixingStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSCModulationMixing"), NO_API) \
	DECLARE_SERIALIZER(UOSCModulationMixingStatics)


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCModulationMixingStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCModulationMixingStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCModulationMixingStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCModulationMixingStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCModulationMixingStatics(UOSCModulationMixingStatics&&); \
	NO_API UOSCModulationMixingStatics(const UOSCModulationMixingStatics&); \
public: \
	NO_API virtual ~UOSCModulationMixingStatics();


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCModulationMixingStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCModulationMixingStatics(UOSCModulationMixingStatics&&); \
	NO_API UOSCModulationMixingStatics(const UOSCModulationMixingStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCModulationMixingStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCModulationMixingStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCModulationMixingStatics) \
	NO_API virtual ~UOSCModulationMixingStatics();


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_35_PROLOG
#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_INCLASS \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OSCModulationMixingStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSCMODULATIONMIXING_API UClass* StaticClass<class UOSCModulationMixingStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSCModulationMixing_Source_OSCModulationMixing_Public_OSCModulationMixingStatics_h


#define FOREACH_ENUM_EOSCMODULATIONBUNDLE(op) \
	op(EOSCModulationBundle::Invalid) \
	op(EOSCModulationBundle::LoadMix) \
	op(EOSCModulationBundle::Count) 

enum class EOSCModulationBundle : uint8;
template<> struct TIsUEnumClass<EOSCModulationBundle> { enum { Value = true }; };
template<> OSCMODULATIONMIXING_API UEnum* StaticEnum<EOSCModulationBundle>();

#define FOREACH_ENUM_EOSCMODULATIONMESSAGE(op) \
	op(EOSCModulationMessage::Invalid) \
	op(EOSCModulationMessage::LoadProfile) \
	op(EOSCModulationMessage::SaveProfile) \
	op(EOSCModulationMessage::Count) 

enum class EOSCModulationMessage : uint8;
template<> struct TIsUEnumClass<EOSCModulationMessage> { enum { Value = true }; };
template<> OSCMODULATIONMIXING_API UEnum* StaticEnum<EOSCModulationMessage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
