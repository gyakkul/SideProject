// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaCapture;
#ifdef MEDIAIOCORE_MediaOutput_generated_h
#error "MediaOutput.generated.h already included, missing '#pragma once' in MediaOutput.h"
#endif
#define MEDIAIOCORE_MediaOutput_generated_h

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execCreateMediaCapture);


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execCreateMediaCapture);


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_ACCESSORS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaOutput(); \
	friend struct Z_Construct_UClass_UMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UMediaOutput, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMediaOutput(); \
	friend struct Z_Construct_UClass_UMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UMediaOutput, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaOutput(UMediaOutput&&); \
	NO_API UMediaOutput(const UMediaOutput&); \
public: \
	NO_API virtual ~UMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaOutput(UMediaOutput&&); \
	NO_API UMediaOutput(const UMediaOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaOutput); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaOutput) \
	NO_API virtual ~UMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_40_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_INCLASS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaOutput."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAIOCORE_API UClass* StaticClass<class UMediaOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaOutput_h


#define FOREACH_ENUM_EMEDIACAPTURESOURCETYPE(op) \
	op(EMediaCaptureSourceType::RENDER_TARGET) \
	op(EMediaCaptureSourceType::SCENE_VIEWPORT) \
	op(EMediaCaptureSourceType::RHI_RESOURCE) 

enum class EMediaCaptureSourceType : int8;
template<> struct TIsUEnumClass<EMediaCaptureSourceType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
