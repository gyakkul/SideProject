// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Retargeter/IKRetargeter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
struct FRetargetGlobalSettings;
struct FRetargetProfile;
struct FTargetChainFKSettings;
struct FTargetChainIKSettings;
struct FTargetChainSettings;
struct FTargetChainSpeedPlantSettings;
struct FTargetRootSettings;
#ifdef IKRIG_IKRetargeter_generated_h
#error "IKRetargeter.generated.h already included, missing '#pragma once' in IKRetargeter.h"
#endif
#define IKRIG_IKRetargeter_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRetargetChainMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FRetargetChainMap>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetChainSettings, NO_API)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetChainSettings(); \
	friend struct Z_Construct_UClass_URetargetChainSettings_Statics; \
public: \
	DECLARE_CLASS(URetargetChainSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(URetargetChainSettings) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_INCLASS \
private: \
	static void StaticRegisterNativesURetargetChainSettings(); \
	friend struct Z_Construct_UClass_URetargetChainSettings_Statics; \
public: \
	DECLARE_CLASS(URetargetChainSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(URetargetChainSettings) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetargetChainSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetChainSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetargetChainSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetChainSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetargetChainSettings(URetargetChainSettings&&); \
	NO_API URetargetChainSettings(const URetargetChainSettings&); \
public: \
	NO_API virtual ~URetargetChainSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetargetChainSettings(URetargetChainSettings&&); \
	NO_API URetargetChainSettings(const URetargetChainSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetargetChainSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetChainSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URetargetChainSettings) \
	NO_API virtual ~URetargetChainSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_34_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class URetargetChainSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetRootSettings, NO_API)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURetargetRootSettings(); \
	friend struct Z_Construct_UClass_URetargetRootSettings_Statics; \
public: \
	DECLARE_CLASS(URetargetRootSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(URetargetRootSettings) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_INCLASS \
private: \
	static void StaticRegisterNativesURetargetRootSettings(); \
	friend struct Z_Construct_UClass_URetargetRootSettings_Statics; \
public: \
	DECLARE_CLASS(URetargetRootSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(URetargetRootSettings) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetargetRootSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetRootSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetargetRootSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetRootSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetargetRootSettings(URetargetRootSettings&&); \
	NO_API URetargetRootSettings(const URetargetRootSettings&); \
public: \
	NO_API virtual ~URetargetRootSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URetargetRootSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URetargetRootSettings(URetargetRootSettings&&); \
	NO_API URetargetRootSettings(const URetargetRootSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URetargetRootSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URetargetRootSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URetargetRootSettings) \
	NO_API virtual ~URetargetRootSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_106_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class URetargetRootSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetGlobalSettings(); \
	friend struct Z_Construct_UClass_UIKRetargetGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UIKRetargetGlobalSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargetGlobalSettings)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_INCLASS \
private: \
	static void StaticRegisterNativesUIKRetargetGlobalSettings(); \
	friend struct Z_Construct_UClass_UIKRetargetGlobalSettings_Statics; \
public: \
	DECLARE_CLASS(UIKRetargetGlobalSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargetGlobalSettings)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetGlobalSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetGlobalSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargetGlobalSettings(UIKRetargetGlobalSettings&&); \
	NO_API UIKRetargetGlobalSettings(const UIKRetargetGlobalSettings&); \
public: \
	NO_API virtual ~UIKRetargetGlobalSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetGlobalSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargetGlobalSettings(UIKRetargetGlobalSettings&&); \
	NO_API UIKRetargetGlobalSettings(const UIKRetargetGlobalSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetGlobalSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetGlobalSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetGlobalSettings) \
	NO_API virtual ~UIKRetargetGlobalSettings();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_146_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRetargetGlobalSettings>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIKRetargetPose_Statics; \
	static class UScriptStruct* StaticStruct();


template<> IKRIG_API UScriptStruct* StaticStruct<struct FIKRetargetPose>();

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChainSpeedPlantSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainIKSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainFKSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetRootSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetGlobalSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execGetGlobalSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetGlobalSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetRootSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetRootSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetChainSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetChainSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetChainUsingGoalFromRetargetAsset);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChainSpeedPlantSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainIKSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainFKSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetChainSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetRootSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execSetGlobalSettingsInRetargetProfile); \
	DECLARE_FUNCTION(execGetGlobalSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetGlobalSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetRootSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetRootSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetChainSettingsFromRetargetProfile); \
	DECLARE_FUNCTION(execGetChainSettingsFromRetargetAsset); \
	DECLARE_FUNCTION(execGetChainUsingGoalFromRetargetAsset);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRetargeter, NO_API)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargeter(); \
	friend struct Z_Construct_UClass_UIKRetargeter_Statics; \
public: \
	DECLARE_CLASS(UIKRetargeter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargeter) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_INCLASS \
private: \
	static void StaticRegisterNativesUIKRetargeter(); \
	friend struct Z_Construct_UClass_UIKRetargeter_Statics; \
public: \
	DECLARE_CLASS(UIKRetargeter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargeter) \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargeter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargeter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargeter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargeter(UIKRetargeter&&); \
	NO_API UIKRetargeter(const UIKRetargeter&); \
public: \
	NO_API virtual ~UIKRetargeter();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargeter(UIKRetargeter&&); \
	NO_API UIKRetargeter(const UIKRetargeter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargeter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargeter) \
	NO_API virtual ~UIKRetargeter();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_203_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_206_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRetargeter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h


#define FOREACH_ENUM_ERETARGETSOURCEORTARGET(op) \
	op(ERetargetSourceOrTarget::Source) \
	op(ERetargetSourceOrTarget::Target) 

enum class ERetargetSourceOrTarget : uint8;
template<> struct TIsUEnumClass<ERetargetSourceOrTarget> { enum { Value = true }; };
template<> IKRIG_API UEnum* StaticEnum<ERetargetSourceOrTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
