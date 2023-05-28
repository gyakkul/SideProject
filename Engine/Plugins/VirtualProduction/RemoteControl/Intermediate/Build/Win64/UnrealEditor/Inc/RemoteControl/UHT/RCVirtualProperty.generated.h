// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCVirtualProperty.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
#ifdef REMOTECONTROL_RCVirtualProperty_generated_h
#error "RCVirtualProperty.generated.h already included, missing '#pragma once' in RCVirtualProperty.h"
#endif
#define REMOTECONTROL_RCVirtualProperty_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execSetValueNumericInteger); \
	DECLARE_FUNCTION(execSetValueText); \
	DECLARE_FUNCTION(execSetValueName); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execSetValueDouble); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execSetValueUint64); \
	DECLARE_FUNCTION(execSetValueInt64); \
	DECLARE_FUNCTION(execSetValueUInt32); \
	DECLARE_FUNCTION(execSetValueInt32); \
	DECLARE_FUNCTION(execSetValueUint16); \
	DECLARE_FUNCTION(execSetValueInt16); \
	DECLARE_FUNCTION(execSetValueByte); \
	DECLARE_FUNCTION(execSetValueInt8); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetDisplayValueAsString); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execGetValueNumericInteger); \
	DECLARE_FUNCTION(execGetValueText); \
	DECLARE_FUNCTION(execGetValueName); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execGetValueDouble); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execGetValueUint64); \
	DECLARE_FUNCTION(execGetValueInt64); \
	DECLARE_FUNCTION(execGetValueUInt32); \
	DECLARE_FUNCTION(execGetValueInt32); \
	DECLARE_FUNCTION(execGetValueUint16); \
	DECLARE_FUNCTION(execGetValueInt16); \
	DECLARE_FUNCTION(execGetValueByte); \
	DECLARE_FUNCTION(execGetValueInt8); \
	DECLARE_FUNCTION(execGetValueBool);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execSetValueColor); \
	DECLARE_FUNCTION(execSetValueRotator); \
	DECLARE_FUNCTION(execSetValueVector); \
	DECLARE_FUNCTION(execSetValueNumericInteger); \
	DECLARE_FUNCTION(execSetValueText); \
	DECLARE_FUNCTION(execSetValueName); \
	DECLARE_FUNCTION(execSetValueString); \
	DECLARE_FUNCTION(execSetValueDouble); \
	DECLARE_FUNCTION(execSetValueFloat); \
	DECLARE_FUNCTION(execSetValueUint64); \
	DECLARE_FUNCTION(execSetValueInt64); \
	DECLARE_FUNCTION(execSetValueUInt32); \
	DECLARE_FUNCTION(execSetValueInt32); \
	DECLARE_FUNCTION(execSetValueUint16); \
	DECLARE_FUNCTION(execSetValueInt16); \
	DECLARE_FUNCTION(execSetValueByte); \
	DECLARE_FUNCTION(execSetValueInt8); \
	DECLARE_FUNCTION(execSetValueBool); \
	DECLARE_FUNCTION(execGetDisplayValueAsString); \
	DECLARE_FUNCTION(execGetValueColor); \
	DECLARE_FUNCTION(execGetValueRotator); \
	DECLARE_FUNCTION(execGetValueVector); \
	DECLARE_FUNCTION(execGetValueNumericInteger); \
	DECLARE_FUNCTION(execGetValueText); \
	DECLARE_FUNCTION(execGetValueName); \
	DECLARE_FUNCTION(execGetValueString); \
	DECLARE_FUNCTION(execGetValueDouble); \
	DECLARE_FUNCTION(execGetValueFloat); \
	DECLARE_FUNCTION(execGetValueUint64); \
	DECLARE_FUNCTION(execGetValueInt64); \
	DECLARE_FUNCTION(execGetValueUInt32); \
	DECLARE_FUNCTION(execGetValueInt32); \
	DECLARE_FUNCTION(execGetValueUint16); \
	DECLARE_FUNCTION(execGetValueInt16); \
	DECLARE_FUNCTION(execGetValueByte); \
	DECLARE_FUNCTION(execGetValueInt8); \
	DECLARE_FUNCTION(execGetValueBool);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyBase(); \
	friend struct Z_Construct_UClass_URCVirtualPropertyBase_Statics; \
public: \
	DECLARE_CLASS(URCVirtualPropertyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URCVirtualPropertyBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_INCLASS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyBase(); \
	friend struct Z_Construct_UClass_URCVirtualPropertyBase_Statics; \
public: \
	DECLARE_CLASS(URCVirtualPropertyBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URCVirtualPropertyBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCVirtualPropertyBase(URCVirtualPropertyBase&&); \
	NO_API URCVirtualPropertyBase(const URCVirtualPropertyBase&); \
public: \
	NO_API virtual ~URCVirtualPropertyBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCVirtualPropertyBase(URCVirtualPropertyBase&&); \
	NO_API URCVirtualPropertyBase(const URCVirtualPropertyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyBase) \
	NO_API virtual ~URCVirtualPropertyBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROL_API UClass* StaticClass<class URCVirtualPropertyBase>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyInContainer(); \
	friend struct Z_Construct_UClass_URCVirtualPropertyInContainer_Statics; \
public: \
	DECLARE_CLASS(URCVirtualPropertyInContainer, URCVirtualPropertyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URCVirtualPropertyInContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_INCLASS \
private: \
	static void StaticRegisterNativesURCVirtualPropertyInContainer(); \
	friend struct Z_Construct_UClass_URCVirtualPropertyInContainer_Statics; \
public: \
	DECLARE_CLASS(URCVirtualPropertyInContainer, URCVirtualPropertyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URCVirtualPropertyInContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyInContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyInContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyInContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyInContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCVirtualPropertyInContainer(URCVirtualPropertyInContainer&&); \
	NO_API URCVirtualPropertyInContainer(const URCVirtualPropertyInContainer&); \
public: \
	NO_API virtual ~URCVirtualPropertyInContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertyInContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCVirtualPropertyInContainer(URCVirtualPropertyInContainer&&); \
	NO_API URCVirtualPropertyInContainer(const URCVirtualPropertyInContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertyInContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertyInContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertyInContainer) \
	NO_API virtual ~URCVirtualPropertyInContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_325_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_328_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROL_API UClass* StaticClass<class URCVirtualPropertyInContainer>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCVirtualPropertySelfContainer(); \
	friend struct Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics; \
public: \
	DECLARE_CLASS(URCVirtualPropertySelfContainer, URCVirtualPropertyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URCVirtualPropertySelfContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_INCLASS \
private: \
	static void StaticRegisterNativesURCVirtualPropertySelfContainer(); \
	friend struct Z_Construct_UClass_URCVirtualPropertySelfContainer_Statics; \
public: \
	DECLARE_CLASS(URCVirtualPropertySelfContainer, URCVirtualPropertyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), NO_API) \
	DECLARE_SERIALIZER(URCVirtualPropertySelfContainer)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertySelfContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertySelfContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertySelfContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertySelfContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCVirtualPropertySelfContainer(URCVirtualPropertySelfContainer&&); \
	NO_API URCVirtualPropertySelfContainer(const URCVirtualPropertySelfContainer&); \
public: \
	NO_API virtual ~URCVirtualPropertySelfContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCVirtualPropertySelfContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCVirtualPropertySelfContainer(URCVirtualPropertySelfContainer&&); \
	NO_API URCVirtualPropertySelfContainer(const URCVirtualPropertySelfContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCVirtualPropertySelfContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCVirtualPropertySelfContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCVirtualPropertySelfContainer) \
	NO_API virtual ~URCVirtualPropertySelfContainer();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_345_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h_348_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROL_API UClass* StaticClass<class URCVirtualPropertySelfContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualProperty_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
