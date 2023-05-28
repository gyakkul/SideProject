// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TakeMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UTakePreset;
struct FDateTime;
struct FFrameRate;
struct FFrameTime;
struct FTimecode;
#ifdef TAKESCORE_TakeMetaData_generated_h
#error "TakeMetaData.generated.h already included, missing '#pragma once' in TakeMetaData.h"
#endif
#define TAKESCORE_TakeMetaData_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execSetLevelOrigin); \
	DECLARE_FUNCTION(execSetPresetOrigin); \
	DECLARE_FUNCTION(execSetDescription); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execSetTimecodeOut); \
	DECLARE_FUNCTION(execSetTimecodeIn); \
	DECLARE_FUNCTION(execSetTimestamp); \
	DECLARE_FUNCTION(execSetTakeNumber); \
	DECLARE_FUNCTION(execSetSlate); \
	DECLARE_FUNCTION(execGenerateAssetPath); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execGetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execGetLevelOrigin); \
	DECLARE_FUNCTION(execGetLevelPath); \
	DECLARE_FUNCTION(execGetPresetOrigin); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTimecodeOut); \
	DECLARE_FUNCTION(execGetTimecodeIn); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetTakeNumber); \
	DECLARE_FUNCTION(execGetSlate); \
	DECLARE_FUNCTION(execRecorded); \
	DECLARE_FUNCTION(execIsLocked);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execSetLevelOrigin); \
	DECLARE_FUNCTION(execSetPresetOrigin); \
	DECLARE_FUNCTION(execSetDescription); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execSetTimecodeOut); \
	DECLARE_FUNCTION(execSetTimecodeIn); \
	DECLARE_FUNCTION(execSetTimestamp); \
	DECLARE_FUNCTION(execSetTakeNumber); \
	DECLARE_FUNCTION(execSetSlate); \
	DECLARE_FUNCTION(execGenerateAssetPath); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock); \
	DECLARE_FUNCTION(execGetFrameRateFromTimecode); \
	DECLARE_FUNCTION(execGetLevelOrigin); \
	DECLARE_FUNCTION(execGetLevelPath); \
	DECLARE_FUNCTION(execGetPresetOrigin); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetTimecodeOut); \
	DECLARE_FUNCTION(execGetTimecodeIn); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execGetTakeNumber); \
	DECLARE_FUNCTION(execGetSlate); \
	DECLARE_FUNCTION(execRecorded); \
	DECLARE_FUNCTION(execIsLocked);


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeMetaData(); \
	friend struct Z_Construct_UClass_UTakeMetaData_Statics; \
public: \
	DECLARE_CLASS(UTakeMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakesCore"), NO_API) \
	DECLARE_SERIALIZER(UTakeMetaData) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UTakeMetaData*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTakeMetaData(); \
	friend struct Z_Construct_UClass_UTakeMetaData_Statics; \
public: \
	DECLARE_CLASS(UTakeMetaData, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TakesCore"), NO_API) \
	DECLARE_SERIALIZER(UTakeMetaData) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UTakeMetaData*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTakeMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeMetaData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeMetaData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeMetaData(UTakeMetaData&&); \
	NO_API UTakeMetaData(const UTakeMetaData&); \
public: \
	NO_API virtual ~UTakeMetaData();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTakeMetaData(UTakeMetaData&&); \
	NO_API UTakeMetaData(const UTakeMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTakeMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeMetaData) \
	NO_API virtual ~UTakeMetaData();


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_INCLASS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAKESCORE_API UClass* StaticClass<class UTakeMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeMetaData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
