// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFOverlay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkOverlaySlot;
#ifdef UIFRAMEWORK_UIFOverlay_generated_h
#error "UIFOverlay.generated.h already included, missing '#pragma once' in UIFOverlay.h"
#endif
#define UIFRAMEWORK_UIFOverlay_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkOverlaySlot>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkOverlaySlotList, Slots, );


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkOverlaySlotList>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkOverlay(); \
	friend struct Z_Construct_UClass_UUIFrameworkOverlay_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkOverlay, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkOverlay) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkOverlay(); \
	friend struct Z_Construct_UClass_UUIFrameworkOverlay_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkOverlay, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkOverlay) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkOverlay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkOverlay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkOverlay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkOverlay(UUIFrameworkOverlay&&); \
	NO_API UUIFrameworkOverlay(const UUIFrameworkOverlay&); \
public: \
	NO_API virtual ~UUIFrameworkOverlay();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkOverlay(UUIFrameworkOverlay&&); \
	NO_API UUIFrameworkOverlay(const UUIFrameworkOverlay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkOverlay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkOverlay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkOverlay) \
	NO_API virtual ~UUIFrameworkOverlay();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_89_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkOverlay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
