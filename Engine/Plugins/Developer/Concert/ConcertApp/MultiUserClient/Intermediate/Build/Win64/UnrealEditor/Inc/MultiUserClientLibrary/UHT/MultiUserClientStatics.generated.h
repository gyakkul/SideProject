// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiUserClientStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMultiUserClientSyncDatabase;
enum class EMultiUserConnectionStatus : uint8;
struct FGuid;
struct FMultiUserClientConfig;
struct FMultiUserClientInfo;
struct FMultiUserConnectionError;
#ifdef MULTIUSERCLIENTLIBRARY_MultiUserClientStatics_generated_h
#error "MultiUserClientStatics.generated.h already included, missing '#pragma once' in MultiUserClientStatics.h"
#endif
#define MULTIUSERCLIENTLIBRARY_MultiUserClientStatics_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_10_DELEGATE \
MULTIUSERCLIENTLIBRARY_API void FOnPackageSavedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPackageSavedSignature, FName PackageName);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserClientInfo_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserClientInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_SPARSE_DATA
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_RPC_WRAPPERS
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_ACCESSORS
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserClientSyncDatabase(); \
	friend struct Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics; \
public: \
	DECLARE_CLASS(UMultiUserClientSyncDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserClientSyncDatabase)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUMultiUserClientSyncDatabase(); \
	friend struct Z_Construct_UClass_UMultiUserClientSyncDatabase_Statics; \
public: \
	DECLARE_CLASS(UMultiUserClientSyncDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserClientSyncDatabase)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientSyncDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientSyncDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientSyncDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientSyncDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiUserClientSyncDatabase(UMultiUserClientSyncDatabase&&); \
	NO_API UMultiUserClientSyncDatabase(const UMultiUserClientSyncDatabase&); \
public: \
	NO_API virtual ~UMultiUserClientSyncDatabase();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientSyncDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiUserClientSyncDatabase(UMultiUserClientSyncDatabase&&); \
	NO_API UMultiUserClientSyncDatabase(const UMultiUserClientSyncDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientSyncDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientSyncDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientSyncDatabase) \
	NO_API virtual ~UMultiUserClientSyncDatabase();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_38_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_ACCESSORS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_ACCESSORS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UMultiUserClientSyncDatabase>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserConnectionError_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserConnectionError>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiUserClientConfig_Statics; \
	MULTIUSERCLIENTLIBRARY_API static class UScriptStruct* StaticStruct();


template<> MULTIUSERCLIENTLIBRARY_API UScriptStruct* StaticStruct<struct FMultiUserClientConfig>();

#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_SPARSE_DATA
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatus); \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatusDetail); \
	DECLARE_FUNCTION(execGetLastMultiUserConnectionError); \
	DECLARE_FUNCTION(execStartMultiUserDefaultConnection); \
	DECLARE_FUNCTION(execConfigureMultiUserClient); \
	DECLARE_FUNCTION(execGetRemoteMultiUserClientInfos); \
	DECLARE_FUNCTION(execGetMultiUserClientInfoByName); \
	DECLARE_FUNCTION(execGetLocalMultiUserClientInfo); \
	DECLARE_FUNCTION(execGetConcertSyncDatabase); \
	DECLARE_FUNCTION(execGatherSessionChanges); \
	DECLARE_FUNCTION(execPersistSpecifiedPackages); \
	DECLARE_FUNCTION(execPersistMultiUserSessionChanges); \
	DECLARE_FUNCTION(execUpdateWorkspaceModifiedPackages); \
	DECLARE_FUNCTION(execJumpToMultiUserPresence); \
	DECLARE_FUNCTION(execGetMultiUserPresenceTransform); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibilityById); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibility); \
	DECLARE_FUNCTION(execSetMultiUserPresenceEnabled);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatus); \
	DECLARE_FUNCTION(execGetMultiUserConnectionStatusDetail); \
	DECLARE_FUNCTION(execGetLastMultiUserConnectionError); \
	DECLARE_FUNCTION(execStartMultiUserDefaultConnection); \
	DECLARE_FUNCTION(execConfigureMultiUserClient); \
	DECLARE_FUNCTION(execGetRemoteMultiUserClientInfos); \
	DECLARE_FUNCTION(execGetMultiUserClientInfoByName); \
	DECLARE_FUNCTION(execGetLocalMultiUserClientInfo); \
	DECLARE_FUNCTION(execGetConcertSyncDatabase); \
	DECLARE_FUNCTION(execGatherSessionChanges); \
	DECLARE_FUNCTION(execPersistSpecifiedPackages); \
	DECLARE_FUNCTION(execPersistMultiUserSessionChanges); \
	DECLARE_FUNCTION(execUpdateWorkspaceModifiedPackages); \
	DECLARE_FUNCTION(execJumpToMultiUserPresence); \
	DECLARE_FUNCTION(execGetMultiUserPresenceTransform); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibilityById); \
	DECLARE_FUNCTION(execSetMultiUserPresenceVisibility); \
	DECLARE_FUNCTION(execSetMultiUserPresenceEnabled);


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_ACCESSORS
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiUserClientStatics(); \
	friend struct Z_Construct_UClass_UMultiUserClientStatics_Statics; \
public: \
	DECLARE_CLASS(UMultiUserClientStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserClientStatics)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUMultiUserClientStatics(); \
	friend struct Z_Construct_UClass_UMultiUserClientStatics_Statics; \
public: \
	DECLARE_CLASS(UMultiUserClientStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiUserClientLibrary"), NO_API) \
	DECLARE_SERIALIZER(UMultiUserClientStatics)


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiUserClientStatics(UMultiUserClientStatics&&); \
	NO_API UMultiUserClientStatics(const UMultiUserClientStatics&); \
public: \
	NO_API virtual ~UMultiUserClientStatics();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiUserClientStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiUserClientStatics(UMultiUserClientStatics&&); \
	NO_API UMultiUserClientStatics(const UMultiUserClientStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiUserClientStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiUserClientStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiUserClientStatics) \
	NO_API virtual ~UMultiUserClientStatics();


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_126_PROLOG
#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_SPARSE_DATA \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_ACCESSORS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_INCLASS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_SPARSE_DATA \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_ACCESSORS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h_129_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiUserClientStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIUSERCLIENTLIBRARY_API UClass* StaticClass<class UMultiUserClientStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertApp_MultiUserClient_Source_MultiUserClientLibrary_Public_MultiUserClientStatics_h


#define FOREACH_ENUM_EMULTIUSERCONNECTIONERROR(op) \
	op(EMultiUserConnectionError::None) \
	op(EMultiUserConnectionError::Canceled) \
	op(EMultiUserConnectionError::ConnectionAttemptAborted) \
	op(EMultiUserConnectionError::ServerNotResponding) \
	op(EMultiUserConnectionError::ServerError) \
	op(EMultiUserConnectionError::WorkspaceValidationUnknown) \
	op(EMultiUserConnectionError::SourceControlValidationUnknown) \
	op(EMultiUserConnectionError::SourceControlValidationCanceled) \
	op(EMultiUserConnectionError::SourceControlValidationError) \
	op(EMultiUserConnectionError::DirtyPackageValidationError) 

enum class EMultiUserConnectionError;
template<> struct TIsUEnumClass<EMultiUserConnectionError> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserConnectionError>();

#define FOREACH_ENUM_EMULTIUSERSOURCEVALIDATIONMODE(op) \
	op(EMultiUserSourceValidationMode::Hard) \
	op(EMultiUserSourceValidationMode::Soft) \
	op(EMultiUserSourceValidationMode::SoftAutoProceed) 

enum class EMultiUserSourceValidationMode : uint8;
template<> struct TIsUEnumClass<EMultiUserSourceValidationMode> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserSourceValidationMode>();

#define FOREACH_ENUM_EMULTIUSERCONNECTIONSTATUS(op) \
	op(EMultiUserConnectionStatus::Connecting) \
	op(EMultiUserConnectionStatus::Connected) \
	op(EMultiUserConnectionStatus::Disconnecting) \
	op(EMultiUserConnectionStatus::Disconnected) 

enum class EMultiUserConnectionStatus : uint8;
template<> struct TIsUEnumClass<EMultiUserConnectionStatus> { enum { Value = true }; };
template<> MULTIUSERCLIENTLIBRARY_API UEnum* StaticEnum<EMultiUserConnectionStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
