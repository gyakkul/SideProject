// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UTBBaseUICommandInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef USERTOOLBOXCORE_UTBBaseUICommandInterface_generated_h
#error "UTBBaseUICommandInterface.generated.h already included, missing '#pragma once' in UTBBaseUICommandInterface.h"
#endif
#define USERTOOLBOXCORE_UTBBaseUICommandInterface_generated_h

#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USERTOOLBOXCORE_API UUTBUICommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBUICommand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USERTOOLBOXCORE_API, UUTBUICommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBUICommand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USERTOOLBOXCORE_API UUTBUICommand(UUTBUICommand&&); \
	USERTOOLBOXCORE_API UUTBUICommand(const UUTBUICommand&); \
public: \
	USERTOOLBOXCORE_API virtual ~UUTBUICommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USERTOOLBOXCORE_API UUTBUICommand(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USERTOOLBOXCORE_API UUTBUICommand(UUTBUICommand&&); \
	USERTOOLBOXCORE_API UUTBUICommand(const UUTBUICommand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USERTOOLBOXCORE_API, UUTBUICommand); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUTBUICommand); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUTBUICommand) \
	USERTOOLBOXCORE_API virtual ~UUTBUICommand();


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUTBUICommand(); \
	friend struct Z_Construct_UClass_UUTBUICommand_Statics; \
public: \
	DECLARE_CLASS(UUTBUICommand, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UserToolBoxCore"), USERTOOLBOXCORE_API) \
	DECLARE_SERIALIZER(UUTBUICommand)


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUTBUICommand() {} \
public: \
	typedef UUTBUICommand UClassType; \
	typedef IUTBUICommand ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IUTBUICommand() {} \
public: \
	typedef UUTBUICommand UClassType; \
	typedef IUTBUICommand ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USERTOOLBOXCORE_API UClass* StaticClass<class UUTBUICommand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUICommandInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
