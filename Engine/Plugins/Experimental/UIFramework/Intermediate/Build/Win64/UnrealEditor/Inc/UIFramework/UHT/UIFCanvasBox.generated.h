// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFCanvasBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkCanvasBoxSlot;
#ifdef UIFRAMEWORK_UIFCanvasBox_generated_h
#error "UIFCanvasBox.generated.h already included, missing '#pragma once' in UIFCanvasBox.h"
#endif
#define UIFRAMEWORK_UIFCanvasBox_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkCanvasBoxSlot>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkCanvasBoxSlotList, Slots, );


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkCanvasBoxSlotList>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkCanvasBox(); \
	friend struct Z_Construct_UClass_UUIFrameworkCanvasBox_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkCanvasBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkCanvasBox) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkCanvasBox(); \
	friend struct Z_Construct_UClass_UUIFrameworkCanvasBox_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkCanvasBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkCanvasBox) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkCanvasBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkCanvasBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkCanvasBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkCanvasBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkCanvasBox(UUIFrameworkCanvasBox&&); \
	NO_API UUIFrameworkCanvasBox(const UUIFrameworkCanvasBox&); \
public: \
	NO_API virtual ~UUIFrameworkCanvasBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkCanvasBox(UUIFrameworkCanvasBox&&); \
	NO_API UUIFrameworkCanvasBox(const UUIFrameworkCanvasBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkCanvasBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkCanvasBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkCanvasBox) \
	NO_API virtual ~UUIFrameworkCanvasBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_93_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkCanvasBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
