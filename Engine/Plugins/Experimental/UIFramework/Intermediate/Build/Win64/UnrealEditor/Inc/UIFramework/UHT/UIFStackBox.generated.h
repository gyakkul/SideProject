// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFStackBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
struct FUIFrameworkStackBoxSlot;
#ifdef UIFRAMEWORK_UIFStackBox_generated_h
#error "UIFStackBox.generated.h already included, missing '#pragma once' in UIFStackBox.h"
#endif
#define UIFRAMEWORK_UIFStackBox_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkStackBoxSlot>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkStackBoxSlotList, Slots, );


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkStackBoxSlotList>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Orientation); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Orientation); \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execAddWidget);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_ACCESSORS \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientation_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkStackBox(); \
	friend struct Z_Construct_UClass_UUIFrameworkStackBox_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkStackBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkStackBox) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Orientation=NETFIELD_REP_START, \
		ReplicatedSlotList, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkStackBox(); \
	friend struct Z_Construct_UClass_UUIFrameworkStackBox_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkStackBox, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkStackBox) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Orientation=NETFIELD_REP_START, \
		ReplicatedSlotList, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkStackBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkStackBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkStackBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkStackBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkStackBox(UUIFrameworkStackBox&&); \
	NO_API UUIFrameworkStackBox(const UUIFrameworkStackBox&); \
public: \
	NO_API virtual ~UUIFrameworkStackBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkStackBox(UUIFrameworkStackBox&&); \
	NO_API UUIFrameworkStackBox(const UUIFrameworkStackBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkStackBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkStackBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkStackBox) \
	NO_API virtual ~UUIFrameworkStackBox();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_93_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkStackBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
