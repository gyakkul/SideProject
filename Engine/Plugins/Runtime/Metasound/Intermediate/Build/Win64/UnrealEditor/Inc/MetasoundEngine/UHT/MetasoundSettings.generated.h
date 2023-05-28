// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDENGINE_MetasoundSettings_generated_h
#error "MetasoundSettings.generated.h already included, missing '#pragma once' in MetasoundSettings.h"
#endif
#define METASOUNDENGINE_MetasoundSettings_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultMetaSoundAssetAutoUpdateSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FDefaultMetaSoundAssetAutoUpdateSettings>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundSettings(); \
	friend struct Z_Construct_UClass_UMetaSoundSettings_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MetaSound");} \



#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMetaSoundSettings(); \
	friend struct Z_Construct_UClass_UMetaSoundSettings_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MetaSound");} \



#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundSettings(UMetaSoundSettings&&); \
	NO_API UMetaSoundSettings(const UMetaSoundSettings&); \
public: \
	NO_API virtual ~UMetaSoundSettings();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundSettings(UMetaSoundSettings&&); \
	NO_API UMetaSoundSettings(const UMetaSoundSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundSettings) \
	NO_API virtual ~UMetaSoundSettings();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundSettings_h


#define FOREACH_ENUM_EMETASOUNDMESSAGELEVEL(op) \
	op(EMetaSoundMessageLevel::Error) \
	op(EMetaSoundMessageLevel::Warning) \
	op(EMetaSoundMessageLevel::Info) 

enum class EMetaSoundMessageLevel : uint8;
template<> struct TIsUEnumClass<EMetaSoundMessageLevel> { enum { Value = true }; };
template<> METASOUNDENGINE_API UEnum* StaticEnum<EMetaSoundMessageLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
