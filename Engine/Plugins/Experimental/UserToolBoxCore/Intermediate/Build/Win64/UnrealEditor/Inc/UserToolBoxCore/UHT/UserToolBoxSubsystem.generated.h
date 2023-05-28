// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserToolBoxSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERTOOLBOXCORE_UserToolBoxSubsystem_generated_h
#error "UserToolBoxSubsystem.generated.h already included, missing '#pragma once' in UserToolBoxSubsystem.h"
#endif
#define USERTOOLBOXCORE_UserToolBoxSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshIcons); \
	DECLARE_FUNCTION(execPickAnIcon); \
	DECLARE_FUNCTION(execRegisterTabData);


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshIcons); \
	DECLARE_FUNCTION(execPickAnIcon); \
	DECLARE_FUNCTION(execRegisterTabData);


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserToolboxSubsystem(); \
	friend struct Z_Construct_UClass_UUserToolboxSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUserToolboxSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), NO_API) \
	DECLARE_SERIALIZER(UUserToolboxSubsystem)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUserToolboxSubsystem(); \
	friend struct Z_Construct_UClass_UUserToolboxSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUserToolboxSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), NO_API) \
	DECLARE_SERIALIZER(UUserToolboxSubsystem)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserToolboxSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserToolboxSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserToolboxSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserToolboxSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserToolboxSubsystem(UUserToolboxSubsystem&&); \
	NO_API UUserToolboxSubsystem(const UUserToolboxSubsystem&); \
public: \
	NO_API virtual ~UUserToolboxSubsystem();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserToolboxSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserToolboxSubsystem(UUserToolboxSubsystem&&); \
	NO_API UUserToolboxSubsystem(const UUserToolboxSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserToolboxSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserToolboxSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUserToolboxSubsystem) \
	NO_API virtual ~UUserToolboxSubsystem();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERTOOLBOXCORE_API UClass* StaticClass<class UUserToolboxSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UserToolBoxSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
