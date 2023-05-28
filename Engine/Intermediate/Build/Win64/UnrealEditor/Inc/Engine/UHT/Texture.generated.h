// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_Texture_generated_h
#error "Texture.generated.h already included, missing '#pragma once' in Texture.h"
#endif
#define ENGINE_Texture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceBlock>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSource>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_726_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTexturePlatformData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_995_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureFormatSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1029_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureSourceColorSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execComputeTextureSourceChannelMinMax); \
	DECLARE_FUNCTION(execBlueprint_GetTextureSourceDiskAndMemorySize); \
	DECLARE_FUNCTION(execBlueprint_GetMemorySize);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execComputeTextureSourceChannelMinMax); \
	DECLARE_FUNCTION(execBlueprint_GetTextureSourceDiskAndMemorySize); \
	DECLARE_FUNCTION(execBlueprint_GetMemorySize);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_INCLASS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct Z_Construct_UClass_UTexture_Statics; \
public: \
	DECLARE_CLASS(UTexture, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture(UTexture&&); \
	ENGINE_API UTexture(const UTexture&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture(UTexture&&); \
	ENGINE_API UTexture(const UTexture&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1070_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1073_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Texture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
