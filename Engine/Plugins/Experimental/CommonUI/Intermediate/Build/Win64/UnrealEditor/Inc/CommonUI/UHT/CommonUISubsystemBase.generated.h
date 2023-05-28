// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonUISubsystemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class ULocalPlayer;
enum class ECommonInputType : uint8;
struct FDataTableRowHandle;
struct FSlateBrush;
#ifdef COMMONUI_CommonUISubsystemBase_generated_h
#error "CommonUISubsystemBase.generated.h already included, missing '#pragma once' in CommonUISubsystemBase.h"
#endif
#define COMMONUI_CommonUISubsystemBase_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnhancedInputActionButtonIcon); \
	DECLARE_FUNCTION(execGetInputActionButtonIcon);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnhancedInputActionButtonIcon); \
	DECLARE_FUNCTION(execGetInputActionButtonIcon);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonUISubsystemBase(); \
	friend struct Z_Construct_UClass_UCommonUISubsystemBase_Statics; \
public: \
	DECLARE_CLASS(UCommonUISubsystemBase, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUISubsystemBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCommonUISubsystemBase(); \
	friend struct Z_Construct_UClass_UCommonUISubsystemBase_Statics; \
public: \
	DECLARE_CLASS(UCommonUISubsystemBase, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonUISubsystemBase)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUISubsystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonUISubsystemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUISubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUISubsystemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUISubsystemBase(UCommonUISubsystemBase&&); \
	NO_API UCommonUISubsystemBase(const UCommonUISubsystemBase&); \
public: \
	NO_API virtual ~UCommonUISubsystemBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonUISubsystemBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonUISubsystemBase(UCommonUISubsystemBase&&); \
	NO_API UCommonUISubsystemBase(const UCommonUISubsystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonUISubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonUISubsystemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommonUISubsystemBase) \
	NO_API virtual ~UCommonUISubsystemBase();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonUISubsystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISubsystemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
