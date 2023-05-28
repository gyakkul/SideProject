// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sensors/MLAdapterSensor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLADAPTER_MLAdapterSensor_generated_h
#error "MLAdapterSensor.generated.h already included, missing '#pragma once' in MLAdapterSensor.h"
#endif
#define MLADAPTER_MLAdapterSensor_generated_h

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_SPARSE_DATA
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_RPC_WRAPPERS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_ACCESSORS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterSensor(); \
	friend struct Z_Construct_UClass_UMLAdapterSensor_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterSensor, UMLAdapterAgentElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterSensor)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMLAdapterSensor(); \
	friend struct Z_Construct_UClass_UMLAdapterSensor_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterSensor, UMLAdapterAgentElement, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterSensor)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterSensor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterSensor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterSensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterSensor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLAdapterSensor(UMLAdapterSensor&&); \
	NO_API UMLAdapterSensor(const UMLAdapterSensor&); \
public: \
	NO_API virtual ~UMLAdapterSensor();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLAdapterSensor(UMLAdapterSensor&&); \
	NO_API UMLAdapterSensor(const UMLAdapterSensor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterSensor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterSensor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterSensor) \
	NO_API virtual ~UMLAdapterSensor();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_24_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_SPARSE_DATA \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_ACCESSORS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_INCLASS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_SPARSE_DATA \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_ACCESSORS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLADAPTER_API UClass* StaticClass<class UMLAdapterSensor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_h


#define FOREACH_ENUM_EMLADAPTERTICKPOLICY(op) \
	op(EMLAdapterTickPolicy::EveryTick) \
	op(EMLAdapterTickPolicy::EveryXSeconds) \
	op(EMLAdapterTickPolicy::EveryNTicks) \
	op(EMLAdapterTickPolicy::Never) 

enum class EMLAdapterTickPolicy : uint8;
template<> struct TIsUEnumClass<EMLAdapterTickPolicy> { enum { Value = true }; };
template<> MLADAPTER_API UEnum* StaticEnum<EMLAdapterTickPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
