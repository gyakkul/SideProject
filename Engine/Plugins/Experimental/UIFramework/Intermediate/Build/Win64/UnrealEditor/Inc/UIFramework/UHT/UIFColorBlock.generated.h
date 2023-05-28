// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFColorBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef UIFRAMEWORK_UIFColorBlock_generated_h
#error "UIFColorBlock.generated.h already included, missing '#pragma once' in UIFColorBlock.h"
#endif
#define UIFRAMEWORK_UIFColorBlock_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_DesiredSize); \
	DECLARE_FUNCTION(execOnRep_Color); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetDesiredSize); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetColor);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_DesiredSize); \
	DECLARE_FUNCTION(execOnRep_Color); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetDesiredSize); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execSetColor);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkColorBlock(); \
	friend struct Z_Construct_UClass_UUIFrameworkColorBlock_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkColorBlock, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkColorBlock) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Color=NETFIELD_REP_START, \
		DesiredSize, \
		NETFIELD_REP_END=DesiredSize	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkColorBlock(); \
	friend struct Z_Construct_UClass_UUIFrameworkColorBlock_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkColorBlock, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkColorBlock) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Color=NETFIELD_REP_START, \
		DesiredSize, \
		NETFIELD_REP_END=DesiredSize	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkColorBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkColorBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkColorBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkColorBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkColorBlock(UUIFrameworkColorBlock&&); \
	NO_API UUIFrameworkColorBlock(const UUIFrameworkColorBlock&); \
public: \
	NO_API virtual ~UUIFrameworkColorBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkColorBlock(UUIFrameworkColorBlock&&); \
	NO_API UUIFrameworkColorBlock(const UUIFrameworkColorBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkColorBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkColorBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkColorBlock) \
	NO_API virtual ~UUIFrameworkColorBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkColorBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
