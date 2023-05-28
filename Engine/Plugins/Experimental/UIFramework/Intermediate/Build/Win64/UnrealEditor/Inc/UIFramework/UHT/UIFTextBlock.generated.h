// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFTextBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETextOverflowPolicy : uint8;
struct FLinearColor;
#ifdef UIFRAMEWORK_UIFTextBlock_generated_h
#error "UIFTextBlock.generated.h already included, missing '#pragma once' in UIFTextBlock.h"
#endif
#define UIFRAMEWORK_UIFTextBlock_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_OverflowPolicy); \
	DECLARE_FUNCTION(execOnRep_Justification); \
	DECLARE_FUNCTION(execOnRep_TextColor); \
	DECLARE_FUNCTION(execOnRep_Text); \
	DECLARE_FUNCTION(execGetOverflowPolicy); \
	DECLARE_FUNCTION(execSetOverflowPolicy); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execGetTextColor); \
	DECLARE_FUNCTION(execSetTextColor); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execSetText);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_OverflowPolicy); \
	DECLARE_FUNCTION(execOnRep_Justification); \
	DECLARE_FUNCTION(execOnRep_TextColor); \
	DECLARE_FUNCTION(execOnRep_Text); \
	DECLARE_FUNCTION(execGetOverflowPolicy); \
	DECLARE_FUNCTION(execSetOverflowPolicy); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execGetTextColor); \
	DECLARE_FUNCTION(execSetTextColor); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execSetText);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkTextBase(); \
	friend struct Z_Construct_UClass_UUIFrameworkTextBase_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkTextBase, UUIFrameworkWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkTextBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Text=NETFIELD_REP_START, \
		TextColor, \
		Justification, \
		OverflowPolicy, \
		NETFIELD_REP_END=OverflowPolicy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkTextBase(); \
	friend struct Z_Construct_UClass_UUIFrameworkTextBase_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkTextBase, UUIFrameworkWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkTextBase) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Text=NETFIELD_REP_START, \
		TextColor, \
		Justification, \
		OverflowPolicy, \
		NETFIELD_REP_END=OverflowPolicy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkTextBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkTextBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkTextBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkTextBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkTextBase(UUIFrameworkTextBase&&); \
	NO_API UUIFrameworkTextBase(const UUIFrameworkTextBase&); \
public: \
	NO_API virtual ~UUIFrameworkTextBase();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkTextBase(UUIFrameworkTextBase&&); \
	NO_API UUIFrameworkTextBase(const UUIFrameworkTextBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkTextBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkTextBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkTextBase) \
	NO_API virtual ~UUIFrameworkTextBase();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkTextBase>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ShadowColor); \
	DECLARE_FUNCTION(execOnRep_ShadowOffset); \
	DECLARE_FUNCTION(execGetShadowColor); \
	DECLARE_FUNCTION(execSetShadowColor); \
	DECLARE_FUNCTION(execGetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowOffset);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ShadowColor); \
	DECLARE_FUNCTION(execOnRep_ShadowOffset); \
	DECLARE_FUNCTION(execGetShadowColor); \
	DECLARE_FUNCTION(execSetShadowColor); \
	DECLARE_FUNCTION(execGetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowOffset);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkTextBlock(); \
	friend struct Z_Construct_UClass_UUIFrameworkTextBlock_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkTextBlock, UUIFrameworkTextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkTextBlock) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ShadowOffset=NETFIELD_REP_START, \
		ShadowColor, \
		NETFIELD_REP_END=ShadowColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkTextBlock(); \
	friend struct Z_Construct_UClass_UUIFrameworkTextBlock_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkTextBlock, UUIFrameworkTextBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkTextBlock) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ShadowOffset=NETFIELD_REP_START, \
		ShadowColor, \
		NETFIELD_REP_END=ShadowColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkTextBlock(UUIFrameworkTextBlock&&); \
	NO_API UUIFrameworkTextBlock(const UUIFrameworkTextBlock&); \
public: \
	NO_API virtual ~UUIFrameworkTextBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkTextBlock(UUIFrameworkTextBlock&&); \
	NO_API UUIFrameworkTextBlock(const UUIFrameworkTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkTextBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkTextBlock) \
	NO_API virtual ~UUIFrameworkTextBlock();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_107_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
