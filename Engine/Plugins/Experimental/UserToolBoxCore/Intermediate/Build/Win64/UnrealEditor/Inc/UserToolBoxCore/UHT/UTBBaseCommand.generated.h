// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTBBaseCommand.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef USERTOOLBOXCORE_UTBBaseCommand_generated_h
#error "UTBBaseCommand.generated.h already included, missing '#pragma once' in UTBBaseCommand.h"
#endif
#define USERTOOLBOXCORE_UTBBaseCommand_generated_h

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddObjectsToTransaction); \
	DECLARE_FUNCTION(execAddObjectToTransaction); \
	DECLARE_FUNCTION(execExecuteCommand);


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddObjectsToTransaction); \
	DECLARE_FUNCTION(execAddObjectToTransaction); \
	DECLARE_FUNCTION(execExecuteCommand);


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUTBBaseCommand(); \
	friend struct Z_Construct_UClass_UUTBBaseCommand_Statics; \
public: \
	DECLARE_CLASS(UUTBBaseCommand, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), NO_API) \
	DECLARE_SERIALIZER(UUTBBaseCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUUTBBaseCommand(); \
	friend struct Z_Construct_UClass_UUTBBaseCommand_Statics; \
public: \
	DECLARE_CLASS(UUTBBaseCommand, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), NO_API) \
	DECLARE_SERIALIZER(UUTBBaseCommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUTBBaseCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBBaseCommand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTBBaseCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBBaseCommand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUTBBaseCommand(UUTBBaseCommand&&); \
	NO_API UUTBBaseCommand(const UUTBBaseCommand&); \
public: \
	NO_API virtual ~UUTBBaseCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUTBBaseCommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUTBBaseCommand(UUTBBaseCommand&&); \
	NO_API UUTBBaseCommand(const UUTBBaseCommand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUTBBaseCommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBBaseCommand); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBBaseCommand) \
	NO_API virtual ~UUTBBaseCommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERTOOLBOXCORE_API UClass* StaticClass<class UUTBBaseCommand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseCommand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
