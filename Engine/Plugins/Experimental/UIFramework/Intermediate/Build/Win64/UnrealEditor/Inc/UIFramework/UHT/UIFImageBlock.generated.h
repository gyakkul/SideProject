// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFImageBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UObject;
class UTexture2D;
struct FLinearColor;
#ifdef UIFRAMEWORK_UIFImageBlock_generated_h
#error "UIFImageBlock.generated.h already included, missing '#pragma once' in UIFImageBlock.h"
#endif
#define UIFRAMEWORK_UIFImageBlock_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkImageBlockData>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Data); \
	DECLARE_FUNCTION(execGetTiling); \
	DECLARE_FUNCTION(execSetTiling); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetDesiredSize); \
	DECLARE_FUNCTION(execGetTint); \
	DECLARE_FUNCTION(execSetTint); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGeResourceObject); \
	DECLARE_FUNCTION(execSetMaterial);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Data); \
	DECLARE_FUNCTION(execGetTiling); \
	DECLARE_FUNCTION(execSetTiling); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetDesiredSize); \
	DECLARE_FUNCTION(execGetTint); \
	DECLARE_FUNCTION(execSetTint); \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGeResourceObject); \
	DECLARE_FUNCTION(execSetMaterial);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkImageBlock(); \
	friend struct Z_Construct_UClass_UUIFrameworkImageBlock_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkImageBlock, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkImageBlock) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		NETFIELD_REP_END=Data	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkImageBlock(); \
	friend struct Z_Construct_UClass_UUIFrameworkImageBlock_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkImageBlock, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkImageBlock) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Data=NETFIELD_REP_START, \
		NETFIELD_REP_END=Data	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkImageBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkImageBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkImageBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkImageBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkImageBlock(UUIFrameworkImageBlock&&); \
	NO_API UUIFrameworkImageBlock(const UUIFrameworkImageBlock&); \
public: \
	NO_API virtual ~UUIFrameworkImageBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkImageBlock(UUIFrameworkImageBlock&&); \
	NO_API UUIFrameworkImageBlock(const UUIFrameworkImageBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkImageBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkImageBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkImageBlock) \
	NO_API virtual ~UUIFrameworkImageBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_48_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkImageBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
