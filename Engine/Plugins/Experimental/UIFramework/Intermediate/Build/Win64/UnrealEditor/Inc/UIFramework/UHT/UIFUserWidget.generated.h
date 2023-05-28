// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIFUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIFrameworkWidget;
class UWidget;
#ifdef UIFRAMEWORK_UIFUserWidget_generated_h
#error "UIFUserWidget.generated.h already included, missing '#pragma once' in UIFUserWidget.h"
#endif
#define UIFRAMEWORK_UIFUserWidget_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics; \
	UIFRAMEWORK_API static class UScriptStruct* StaticStruct(); \
	typedef FUIFrameworkSlotBase Super;


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkUserWidgetSlot>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FUIFrameworkUserWidgetSlotList, Slots, );


template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<struct FUIFrameworkUserWidgetSlotList>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNamedSlot); \
	DECLARE_FUNCTION(execSetWidgetClass);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNamedSlot); \
	DECLARE_FUNCTION(execSetWidgetClass);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkUserWidget(); \
	friend struct Z_Construct_UClass_UUIFrameworkUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkUserWidget, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkUserWidget) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkUserWidget(); \
	friend struct Z_Construct_UClass_UUIFrameworkUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkUserWidget, UUIFrameworkWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkUserWidget) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedSlotList=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedSlotList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkUserWidget(UUIFrameworkUserWidget&&); \
	NO_API UUIFrameworkUserWidget(const UUIFrameworkUserWidget&); \
public: \
	NO_API virtual ~UUIFrameworkUserWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkUserWidget(UUIFrameworkUserWidget&&); \
	NO_API UUIFrameworkUserWidget(const UUIFrameworkUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIFrameworkUserWidget) \
	NO_API virtual ~UUIFrameworkUserWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_71_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
