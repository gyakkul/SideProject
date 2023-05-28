// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonInputSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONINPUT_CommonInputSettings_generated_h
#error "CommonInputSettings.generated.h already included, missing '#pragma once' in CommonInputSettings.h"
#endif
#define COMMONINPUT_CommonInputSettings_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnhancedInputSupportEnabled);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnhancedInputSupportEnabled);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonInputSettings(); \
	friend struct Z_Construct_UClass_UCommonInputSettings_Statics; \
public: \
	DECLARE_CLASS(UCommonInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonInput"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUCommonInputSettings(); \
	friend struct Z_Construct_UClass_UCommonInputSettings_Statics; \
public: \
	DECLARE_CLASS(UCommonInputSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonInput"), NO_API) \
	DECLARE_SERIALIZER(UCommonInputSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonInputSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputSettings(UCommonInputSettings&&); \
	NO_API UCommonInputSettings(const UCommonInputSettings&); \
public: \
	NO_API virtual ~UCommonInputSettings();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonInputSettings(UCommonInputSettings&&); \
	NO_API UCommonInputSettings(const UCommonInputSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonInputSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonInputSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonInputSettings) \
	NO_API virtual ~UCommonInputSettings();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONINPUT_API UClass* StaticClass<class UCommonInputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
