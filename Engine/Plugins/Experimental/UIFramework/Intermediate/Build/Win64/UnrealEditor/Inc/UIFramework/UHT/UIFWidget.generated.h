// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIFWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UIFRAMEWORK_UIFWidget_generated_h
#error "UIFWidget.generated.h already included, missing '#pragma once' in UIFWidget.h"
#endif
#define UIFRAMEWORK_UIFWidget_generated_h

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkWidgetWrapperInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkWidgetWrapperInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkWidgetWrapperInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(UUIFrameworkWidgetWrapperInterface&&); \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(const UUIFrameworkWidgetWrapperInterface&); \
public: \
	UIFRAMEWORK_API virtual ~UUIFrameworkWidgetWrapperInterface();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(UUIFrameworkWidgetWrapperInterface&&); \
	UIFRAMEWORK_API UUIFrameworkWidgetWrapperInterface(const UUIFrameworkWidgetWrapperInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIFRAMEWORK_API, UUIFrameworkWidgetWrapperInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkWidgetWrapperInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkWidgetWrapperInterface) \
	UIFRAMEWORK_API virtual ~UUIFrameworkWidgetWrapperInterface();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUIFrameworkWidgetWrapperInterface(); \
	friend struct Z_Construct_UClass_UUIFrameworkWidgetWrapperInterface_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkWidgetWrapperInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UIFramework"), UIFRAMEWORK_API) \
	DECLARE_SERIALIZER(UUIFrameworkWidgetWrapperInterface)


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUIFrameworkWidgetWrapperInterface() {} \
public: \
	typedef UUIFrameworkWidgetWrapperInterface UClassType; \
	typedef IUIFrameworkWidgetWrapperInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_INCLASS_IINTERFACE \
protected: \
	virtual ~IUIFrameworkWidgetWrapperInterface() {} \
public: \
	typedef UUIFrameworkWidgetWrapperInterface UClassType; \
	typedef IUIFrameworkWidgetWrapperInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_25_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkWidgetWrapperInterface>();

#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_IsEnabled);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_IsEnabled);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_ACCESSORS \
static void GetbIsEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetVisibility_WrapperImpl(const void* Object, void* OutValue); \
static void SetVisibility_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIFrameworkWidget(); \
	friend struct Z_Construct_UClass_UUIFrameworkWidget_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkWidget, UMVVMViewModelBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkWidget) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEnabled=NETFIELD_REP_START, \
		Visibility, \
		WidgetClass, \
		Id, \
		NETFIELD_REP_END=Id	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UUIFrameworkWidget) \
public:


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUUIFrameworkWidget(); \
	friend struct Z_Construct_UClass_UUIFrameworkWidget_Statics; \
public: \
	DECLARE_CLASS(UUIFrameworkWidget, UMVVMViewModelBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UIFramework"), NO_API) \
	DECLARE_SERIALIZER(UUIFrameworkWidget) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsEnabled=NETFIELD_REP_START, \
		Visibility, \
		WidgetClass, \
		Id, \
		NETFIELD_REP_END=Id	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UUIFrameworkWidget) \
public:


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkWidget(UUIFrameworkWidget&&); \
	NO_API UUIFrameworkWidget(const UUIFrameworkWidget&); \
public: \
	NO_API virtual ~UUIFrameworkWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIFrameworkWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIFrameworkWidget(UUIFrameworkWidget&&); \
	NO_API UUIFrameworkWidget(const UUIFrameworkWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIFrameworkWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIFrameworkWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIFrameworkWidget) \
	NO_API virtual ~UUIFrameworkWidget();


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_INCLASS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UIFRAMEWORK_API UClass* StaticClass<class UUIFrameworkWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
