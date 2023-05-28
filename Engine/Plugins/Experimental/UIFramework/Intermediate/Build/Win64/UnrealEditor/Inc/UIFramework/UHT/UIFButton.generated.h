// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FUIFrameworkSimpleSlot;
#ifdef UIFRAMEWORK_UIFButton_generated_h
#error "UIFButton.generated.h already included, missing '#pragma once' in UIFButton.h"
#endif
#define UIFRAMEWORK_UIFButton_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_RPC_WRAPPERS \
	virtual void ServerClick_Implementation(APlayerController* PlayerController); \
 \
	DECLARE_FUNCTION(execOnRep_Slot); \
	DECLARE_FUNCTION(execServerClick); \
	DECLARE_FUNCTION(execHandleClick); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerClick_Implementation(APlayerController* PlayerController); \
 \
	DECLARE_FUNCTION(execOnRep_Slot); \
	DECLARE_FUNCTION(execServerClick); \
	DECLARE_FUNCTION(execHandleClick); \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkButton(); \
	friend struct Z_Construct_UClass_UUIFrameworkButton_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkButton, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkButton) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slot=NETFIELD_REP_START, \
		NETFIELD_REP_END=Slot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkButton(); \
	friend struct Z_Construct_UClass_UUIFrameworkButton_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkButton, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkButton) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slot=NETFIELD_REP_START, \
		NETFIELD_REP_END=Slot	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkButton(UUIFrameworkButton&&); \
	NO_API UUIFrameworkButton(const UUIFrameworkButton&); \
public: \
	NO_API virtual ~UUIFrameworkButton();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkButton(UUIFrameworkButton&&); \
	NO_API UUIFrameworkButton(const UUIFrameworkButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkButton) \
	NO_API virtual ~UUIFrameworkButton();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
