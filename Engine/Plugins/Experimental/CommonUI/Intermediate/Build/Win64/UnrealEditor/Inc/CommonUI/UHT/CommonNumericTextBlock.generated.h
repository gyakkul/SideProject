// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonNumericTextBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonNumericTextBlock;
enum class ECommonNumericType : uint8;
#ifdef COMMONUI_CommonNumericTextBlock_generated_h
#error "CommonNumericTextBlock.generated.h already included, missing '#pragma once' in CommonNumericTextBlock.h"
#endif
#define COMMONUI_CommonNumericTextBlock_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonNumberFormattingOptions>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_103_DELEGATE \
static void FOnInterpolationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationStarted, UCommonNumericTextBlock* NumericTextBlock);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_108_DELEGATE \
static void FOnInterpolationUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationUpdated, UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_113_DELEGATE \
static void FOnOutro_DelegateWrapper(const FMulticastScriptDelegate& OnOutro, UCommonNumericTextBlock* NumericTextBlock);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_118_DELEGATE \
static void FOnInterpolationEnded_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationEnded, UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNumericType); \
	DECLARE_FUNCTION(execIsInterpolatingNumericValue); \
	DECLARE_FUNCTION(execInterpolateToValue); \
	DECLARE_FUNCTION(execSetCurrentValue); \
	DECLARE_FUNCTION(execGetTargetValue);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNumericType); \
	DECLARE_FUNCTION(execIsInterpolatingNumericValue); \
	DECLARE_FUNCTION(execInterpolateToValue); \
	DECLARE_FUNCTION(execSetCurrentValue); \
	DECLARE_FUNCTION(execGetTargetValue);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonNumericTextBlock, NO_API)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommonNumericTextBlock(); \
	friend struct Z_Construct_UClass_UCommonNumericTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonNumericTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonNumericTextBlock) \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUCommonNumericTextBlock(); \
	friend struct Z_Construct_UClass_UCommonNumericTextBlock_Statics; \
public: \
	DECLARE_CLASS(UCommonNumericTextBlock, UCommonTextBlock, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonNumericTextBlock) \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonNumericTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonNumericTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonNumericTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonNumericTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonNumericTextBlock(UCommonNumericTextBlock&&); \
	NO_API UCommonNumericTextBlock(const UCommonNumericTextBlock&); \
public: \
	NO_API virtual ~UCommonNumericTextBlock();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonNumericTextBlock(UCommonNumericTextBlock&&); \
	NO_API UCommonNumericTextBlock(const UCommonNumericTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonNumericTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonNumericTextBlock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonNumericTextBlock) \
	NO_API virtual ~UCommonNumericTextBlock();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_INCLASS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonNumericTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h


#define FOREACH_ENUM_ECOMMONNUMERICTYPE(op) \
	op(ECommonNumericType::Number) \
	op(ECommonNumericType::Percentage) \
	op(ECommonNumericType::Seconds) \
	op(ECommonNumericType::Distance) 

enum class ECommonNumericType : uint8;
template<> struct TIsUEnumClass<ECommonNumericType> { enum { Value = true }; };
template<> COMMONUI_API UEnum* StaticEnum<ECommonNumericType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
