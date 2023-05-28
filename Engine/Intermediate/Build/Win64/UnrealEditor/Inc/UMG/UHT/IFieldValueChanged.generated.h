// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FieldNotification/IFieldValueChanged.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFieldNotificationId;
#ifdef UMG_IFieldValueChanged_generated_h
#error "IFieldValueChanged.generated.h already included, missing '#pragma once' in IFieldValueChanged.h"
#endif
#define UMG_IFieldValueChanged_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_13_DELEGATE \
UMG_API void FFieldValueChangedDynamicDelegate_DelegateWrapper(const FScriptDelegate& FieldValueChangedDynamicDelegate, UObject* Object, FFieldNotificationId Field);


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UNotifyFieldValueChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyFieldValueChanged) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UNotifyFieldValueChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyFieldValueChanged); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMG_API UNotifyFieldValueChanged(UNotifyFieldValueChanged&&); \
	UMG_API UNotifyFieldValueChanged(const UNotifyFieldValueChanged&); \
public: \
	UMG_API virtual ~UNotifyFieldValueChanged();


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UNotifyFieldValueChanged(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMG_API UNotifyFieldValueChanged(UNotifyFieldValueChanged&&); \
	UMG_API UNotifyFieldValueChanged(const UNotifyFieldValueChanged&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UNotifyFieldValueChanged); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotifyFieldValueChanged); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotifyFieldValueChanged) \
	UMG_API virtual ~UNotifyFieldValueChanged();


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNotifyFieldValueChanged(); \
	friend struct Z_Construct_UClass_UNotifyFieldValueChanged_Statics; \
public: \
	DECLARE_CLASS(UNotifyFieldValueChanged, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UNotifyFieldValueChanged)


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INotifyFieldValueChanged() {} \
public: \
	typedef UNotifyFieldValueChanged UClassType; \
	typedef INotifyFieldValueChanged ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~INotifyFieldValueChanged() {} \
public: \
	typedef UNotifyFieldValueChanged UClassType; \
	typedef INotifyFieldValueChanged ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UNotifyFieldValueChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_FieldNotification_IFieldValueChanged_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
