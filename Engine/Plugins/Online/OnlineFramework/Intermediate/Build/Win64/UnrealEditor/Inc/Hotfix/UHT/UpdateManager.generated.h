// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UpdateManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOTFIX_UpdateManager_generated_h
#error "UpdateManager.generated.h already included, missing '#pragma once' in UpdateManager.h"
#endif
#define HOTFIX_UpdateManager_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUpdateContextDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HOTFIX_API UScriptStruct* StaticStruct<struct FUpdateContextDefinition>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_RPC_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUpdateManager(); \
	friend struct Z_Construct_UClass_UUpdateManager_Statics; \
public: \
	DECLARE_CLASS(UUpdateManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hotfix"), NO_API) \
	DECLARE_SERIALIZER(UUpdateManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUUpdateManager(); \
	friend struct Z_Construct_UClass_UUpdateManager_Statics; \
public: \
	DECLARE_CLASS(UUpdateManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hotfix"), NO_API) \
	DECLARE_SERIALIZER(UUpdateManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUpdateManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUpdateManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateManager(UUpdateManager&&); \
	NO_API UUpdateManager(const UUpdateManager&); \
public:


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUpdateManager(UUpdateManager&&); \
	NO_API UUpdateManager(const UUpdateManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUpdateManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUpdateManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUpdateManager)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_145_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOTFIX_API UClass* StaticClass<class UUpdateManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Hotfix_Public_UpdateManager_h


#define FOREACH_ENUM_EUPDATESTATE(op) \
	op(EUpdateState::UpdateIdle) \
	op(EUpdateState::UpdatePending) \
	op(EUpdateState::CheckingForPatch) \
	op(EUpdateState::DetectingPlatformEnvironment) \
	op(EUpdateState::CheckingForHotfix) \
	op(EUpdateState::WaitingOnInitialLoad) \
	op(EUpdateState::InitialLoadComplete) \
	op(EUpdateState::UpdateComplete) 

enum class EUpdateState : uint8;
template<> struct TIsUEnumClass<EUpdateState> { enum { Value = true }; };
template<> HOTFIX_API UEnum* StaticEnum<EUpdateState>();

#define FOREACH_ENUM_EUPDATECOMPLETIONSTATUS(op) \
	op(EUpdateCompletionStatus::UpdateUnknown) \
	op(EUpdateCompletionStatus::UpdateSuccess) \
	op(EUpdateCompletionStatus::UpdateSuccess_NoChange) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsReload) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsRelaunch) \
	op(EUpdateCompletionStatus::UpdateSuccess_NeedsPatch) \
	op(EUpdateCompletionStatus::UpdateFailure_PatchCheck) \
	op(EUpdateCompletionStatus::UpdateFailure_HotfixCheck) \
	op(EUpdateCompletionStatus::UpdateFailure_NotLoggedIn) 

enum class EUpdateCompletionStatus : uint8;
template<> struct TIsUEnumClass<EUpdateCompletionStatus> { enum { Value = true }; };
template<> HOTFIX_API UEnum* StaticEnum<EUpdateCompletionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
