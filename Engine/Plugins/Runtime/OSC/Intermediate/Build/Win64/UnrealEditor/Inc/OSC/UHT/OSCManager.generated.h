// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOSCClient;
class UOSCServer;
struct FOSCAddress;
struct FOSCBundle;
struct FOSCMessage;
#ifdef OSC_OSCManager_generated_h
#error "OSCManager.generated.h already included, missing '#pragma once' in OSCManager.h"
#endif
#define OSC_OSCManager_generated_h

#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOSCAddressMethod); \
	DECLARE_FUNCTION(execClearOSCAddressContainers); \
	DECLARE_FUNCTION(execGetOSCAddressMethod); \
	DECLARE_FUNCTION(execGetOSCAddressFullPath); \
	DECLARE_FUNCTION(execGetOSCAddressContainerPath); \
	DECLARE_FUNCTION(execGetOSCAddressContainers); \
	DECLARE_FUNCTION(execGetOSCAddressContainer); \
	DECLARE_FUNCTION(execSetOSCMessageAddress); \
	DECLARE_FUNCTION(execGetOSCMessageAddress); \
	DECLARE_FUNCTION(execOSCAddressRemoveContainers); \
	DECLARE_FUNCTION(execOSCAddressPopContainers); \
	DECLARE_FUNCTION(execOSCAddressPopContainer); \
	DECLARE_FUNCTION(execOSCAddressPushContainers); \
	DECLARE_FUNCTION(execOSCAddressPushContainer); \
	DECLARE_FUNCTION(execObjectPathFromOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressFromObjectPathString); \
	DECLARE_FUNCTION(execOSCAddressFromObjectPath); \
	DECLARE_FUNCTION(execFindObjectAtOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressPathMatchesPattern); \
	DECLARE_FUNCTION(execConvertStringToOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressIsValidPattern); \
	DECLARE_FUNCTION(execOSCAddressIsValidPath); \
	DECLARE_FUNCTION(execGetBlob); \
	DECLARE_FUNCTION(execGetAllBools); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetAllStrings); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetAllInt64s); \
	DECLARE_FUNCTION(execGetInt64); \
	DECLARE_FUNCTION(execGetAllInt32s); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetAllFloats); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetAllAddresses); \
	DECLARE_FUNCTION(execGetAddress); \
	DECLARE_FUNCTION(execAddBool); \
	DECLARE_FUNCTION(execAddBlob); \
	DECLARE_FUNCTION(execAddString); \
	DECLARE_FUNCTION(execAddAddress); \
	DECLARE_FUNCTION(execAddInt64); \
	DECLARE_FUNCTION(execAddInt32); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execClearBundle); \
	DECLARE_FUNCTION(execClearMessage); \
	DECLARE_FUNCTION(execGetMessagesFromBundle); \
	DECLARE_FUNCTION(execGetMessageFromBundle); \
	DECLARE_FUNCTION(execGetBundlesFromBundle); \
	DECLARE_FUNCTION(execAddBundleToBundle); \
	DECLARE_FUNCTION(execAddMessageToBundle); \
	DECLARE_FUNCTION(execCreateOSCClient); \
	DECLARE_FUNCTION(execCreateOSCServer);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOSCAddressMethod); \
	DECLARE_FUNCTION(execClearOSCAddressContainers); \
	DECLARE_FUNCTION(execGetOSCAddressMethod); \
	DECLARE_FUNCTION(execGetOSCAddressFullPath); \
	DECLARE_FUNCTION(execGetOSCAddressContainerPath); \
	DECLARE_FUNCTION(execGetOSCAddressContainers); \
	DECLARE_FUNCTION(execGetOSCAddressContainer); \
	DECLARE_FUNCTION(execSetOSCMessageAddress); \
	DECLARE_FUNCTION(execGetOSCMessageAddress); \
	DECLARE_FUNCTION(execOSCAddressRemoveContainers); \
	DECLARE_FUNCTION(execOSCAddressPopContainers); \
	DECLARE_FUNCTION(execOSCAddressPopContainer); \
	DECLARE_FUNCTION(execOSCAddressPushContainers); \
	DECLARE_FUNCTION(execOSCAddressPushContainer); \
	DECLARE_FUNCTION(execObjectPathFromOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressFromObjectPathString); \
	DECLARE_FUNCTION(execOSCAddressFromObjectPath); \
	DECLARE_FUNCTION(execFindObjectAtOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressPathMatchesPattern); \
	DECLARE_FUNCTION(execConvertStringToOSCAddress); \
	DECLARE_FUNCTION(execOSCAddressIsValidPattern); \
	DECLARE_FUNCTION(execOSCAddressIsValidPath); \
	DECLARE_FUNCTION(execGetBlob); \
	DECLARE_FUNCTION(execGetAllBools); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetAllStrings); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetAllInt64s); \
	DECLARE_FUNCTION(execGetInt64); \
	DECLARE_FUNCTION(execGetAllInt32s); \
	DECLARE_FUNCTION(execGetInt32); \
	DECLARE_FUNCTION(execGetAllFloats); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetAllAddresses); \
	DECLARE_FUNCTION(execGetAddress); \
	DECLARE_FUNCTION(execAddBool); \
	DECLARE_FUNCTION(execAddBlob); \
	DECLARE_FUNCTION(execAddString); \
	DECLARE_FUNCTION(execAddAddress); \
	DECLARE_FUNCTION(execAddInt64); \
	DECLARE_FUNCTION(execAddInt32); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execClearBundle); \
	DECLARE_FUNCTION(execClearMessage); \
	DECLARE_FUNCTION(execGetMessagesFromBundle); \
	DECLARE_FUNCTION(execGetMessageFromBundle); \
	DECLARE_FUNCTION(execGetBundlesFromBundle); \
	DECLARE_FUNCTION(execAddBundleToBundle); \
	DECLARE_FUNCTION(execAddMessageToBundle); \
	DECLARE_FUNCTION(execCreateOSCClient); \
	DECLARE_FUNCTION(execCreateOSCServer);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_ACCESSORS
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOSCManager(); \
	friend struct Z_Construct_UClass_UOSCManager_Statics; \
public: \
	DECLARE_CLASS(UOSCManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOSCManager)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUOSCManager(); \
	friend struct Z_Construct_UClass_UOSCManager_Statics; \
public: \
	DECLARE_CLASS(UOSCManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOSCManager)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCManager(UOSCManager&&); \
	NO_API UOSCManager(const UOSCManager&); \
public: \
	NO_API virtual ~UOSCManager();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCManager(UOSCManager&&); \
	NO_API UOSCManager(const UOSCManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCManager) \
	NO_API virtual ~UOSCManager();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSC_API UClass* StaticClass<class UOSCManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
