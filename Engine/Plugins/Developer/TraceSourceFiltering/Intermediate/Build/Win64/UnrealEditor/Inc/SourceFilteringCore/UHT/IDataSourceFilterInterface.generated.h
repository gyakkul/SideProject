// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDataSourceFilterInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCEFILTERINGCORE_IDataSourceFilterInterface_generated_h
#error "IDataSourceFilterInterface.generated.h already included, missing '#pragma once' in IDataSourceFilterInterface.h"
#endif
#define SOURCEFILTERINGCORE_IDataSourceFilterInterface_generated_h

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataSourceFilterConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SOURCEFILTERINGCORE_API UScriptStruct* StaticStruct<struct FDataSourceFilterConfiguration>();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_RPC_WRAPPERS \
	virtual void GetToolTipText_Implementation(FText& OutDisplayText) const {}; \
	virtual void GetDisplayText_Implementation(FText& OutDisplayText) const {}; \
 \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetDisplayText);


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_ACCESSORS
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilterInterface(UDataSourceFilterInterface&&); \
	NO_API UDataSourceFilterInterface(const UDataSourceFilterInterface&); \
public: \
	NO_API virtual ~UDataSourceFilterInterface();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataSourceFilterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataSourceFilterInterface(UDataSourceFilterInterface&&); \
	NO_API UDataSourceFilterInterface(const UDataSourceFilterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataSourceFilterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataSourceFilterInterface) \
	NO_API virtual ~UDataSourceFilterInterface();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDataSourceFilterInterface(); \
	friend struct Z_Construct_UClass_UDataSourceFilterInterface_Statics; \
public: \
	DECLARE_CLASS(UDataSourceFilterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SourceFilteringCore"), NO_API) \
	DECLARE_SERIALIZER(UDataSourceFilterInterface)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDataSourceFilterInterface() {} \
public: \
	typedef UDataSourceFilterInterface UClassType; \
	typedef IDataSourceFilterInterface ThisClass; \
	static void Execute_GetDisplayText(const UObject* O, FText& OutDisplayText); \
	static void Execute_GetToolTipText(const UObject* O, FText& OutDisplayText); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~IDataSourceFilterInterface() {} \
public: \
	typedef UDataSourceFilterInterface UClassType; \
	typedef IDataSourceFilterInterface ThisClass; \
	static void Execute_GetDisplayText(const UObject* O, FText& OutDisplayText); \
	static void Execute_GetToolTipText(const UObject* O, FText& OutDisplayText); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_28_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_ACCESSORS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_ACCESSORS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGCORE_API UClass* StaticClass<class UDataSourceFilterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_IDataSourceFilterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
