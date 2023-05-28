// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LinearTimecodeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDropTimecode;
#ifdef LINEARTIMECODE_LinearTimecodeComponent_generated_h
#error "LinearTimecodeComponent.generated.h already included, missing '#pragma once' in LinearTimecodeComponent.h"
#endif
#define LINEARTIMECODE_LinearTimecodeComponent_generated_h

#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_21_DELEGATE \
LINEARTIMECODE_API void FOnTimecodeChange_DelegateWrapper(const FMulticastScriptDelegate& OnTimecodeChange, FDropTimecode const& Timecode);


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDropTimecodeFrameNumber); \
	DECLARE_FUNCTION(execGetDropTimeCodeFrameNumber); \
	DECLARE_FUNCTION(execGetDropFrameNumber);


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDropTimecodeFrameNumber); \
	DECLARE_FUNCTION(execGetDropTimeCodeFrameNumber); \
	DECLARE_FUNCTION(execGetDropFrameNumber);


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_ACCESSORS
#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinearTimecodeComponent(); \
	friend struct Z_Construct_UClass_ULinearTimecodeComponent_Statics; \
public: \
	DECLARE_CLASS(ULinearTimecodeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LinearTimecode"), NO_API) \
	DECLARE_SERIALIZER(ULinearTimecodeComponent)


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_INCLASS \
private: \
	static void StaticRegisterNativesULinearTimecodeComponent(); \
	friend struct Z_Construct_UClass_ULinearTimecodeComponent_Statics; \
public: \
	DECLARE_CLASS(ULinearTimecodeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LinearTimecode"), NO_API) \
	DECLARE_SERIALIZER(ULinearTimecodeComponent)


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinearTimecodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinearTimecodeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinearTimecodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinearTimecodeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinearTimecodeComponent(ULinearTimecodeComponent&&); \
	NO_API ULinearTimecodeComponent(const ULinearTimecodeComponent&); \
public: \
	NO_API virtual ~ULinearTimecodeComponent();


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinearTimecodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinearTimecodeComponent(ULinearTimecodeComponent&&); \
	NO_API ULinearTimecodeComponent(const ULinearTimecodeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinearTimecodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinearTimecodeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinearTimecodeComponent) \
	NO_API virtual ~ULinearTimecodeComponent();


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_26_PROLOG
#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_ACCESSORS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_INCLASS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_ACCESSORS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LinearTimecodeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINEARTIMECODE_API UClass* StaticClass<class ULinearTimecodeComponent>();

#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_SPARSE_DATA
#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_DropTimecodeToString);


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_DropTimecodeToString);


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_ACCESSORS
#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDropTimecodeToStringConversion(); \
	friend struct Z_Construct_UClass_UDropTimecodeToStringConversion_Statics; \
public: \
	DECLARE_CLASS(UDropTimecodeToStringConversion, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LinearTimecode"), NO_API) \
	DECLARE_SERIALIZER(UDropTimecodeToStringConversion)


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUDropTimecodeToStringConversion(); \
	friend struct Z_Construct_UClass_UDropTimecodeToStringConversion_Statics; \
public: \
	DECLARE_CLASS(UDropTimecodeToStringConversion, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LinearTimecode"), NO_API) \
	DECLARE_SERIALIZER(UDropTimecodeToStringConversion)


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropTimecodeToStringConversion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropTimecodeToStringConversion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropTimecodeToStringConversion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropTimecodeToStringConversion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDropTimecodeToStringConversion(UDropTimecodeToStringConversion&&); \
	NO_API UDropTimecodeToStringConversion(const UDropTimecodeToStringConversion&); \
public: \
	NO_API virtual ~UDropTimecodeToStringConversion();


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropTimecodeToStringConversion(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDropTimecodeToStringConversion(UDropTimecodeToStringConversion&&); \
	NO_API UDropTimecodeToStringConversion(const UDropTimecodeToStringConversion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropTimecodeToStringConversion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropTimecodeToStringConversion); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropTimecodeToStringConversion) \
	NO_API virtual ~UDropTimecodeToStringConversion();


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_98_PROLOG
#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_SPARSE_DATA \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_ACCESSORS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_INCLASS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_SPARSE_DATA \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_ACCESSORS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LINEARTIMECODE_API UClass* StaticClass<class UDropTimecodeToStringConversion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_LinearTimecodeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
