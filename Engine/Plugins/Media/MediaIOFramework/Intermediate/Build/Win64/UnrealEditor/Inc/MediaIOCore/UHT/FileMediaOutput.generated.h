// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileMediaOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAIOCORE_FileMediaOutput_generated_h
#error "FileMediaOutput.generated.h already included, missing '#pragma once' in FileMediaOutput.h"
#endif
#define MEDIAIOCORE_FileMediaOutput_generated_h

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_RPC_WRAPPERS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_ACCESSORS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileMediaOutput(); \
	friend struct Z_Construct_UClass_UFileMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UFileMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UFileMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUFileMediaOutput(); \
	friend struct Z_Construct_UClass_UFileMediaOutput_Statics; \
public: \
	DECLARE_CLASS(UFileMediaOutput, UMediaOutput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UFileMediaOutput)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileMediaOutput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileMediaOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileMediaOutput(UFileMediaOutput&&); \
	NO_API UFileMediaOutput(const UFileMediaOutput&); \
public: \
	NO_API virtual ~UFileMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileMediaOutput(UFileMediaOutput&&); \
	NO_API UFileMediaOutput(const UFileMediaOutput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileMediaOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileMediaOutput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFileMediaOutput) \
	NO_API virtual ~UFileMediaOutput();


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_27_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_INCLASS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAIOCORE_API UClass* StaticClass<class UFileMediaOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaOutput_h


#define FOREACH_ENUM_EFILEMEDIAOUTPUTPIXELFORMAT(op) \
	op(EFileMediaOutputPixelFormat::B8G8R8A8) \
	op(EFileMediaOutputPixelFormat::FloatRGBA) 

enum class EFileMediaOutputPixelFormat;
template<> struct TIsUEnumClass<EFileMediaOutputPixelFormat> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EFileMediaOutputPixelFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
