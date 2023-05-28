// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DynamicEntryBoxBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FRadialBoxSettings;
#ifdef UMG_DynamicEntryBoxBase_generated_h
#error "DynamicEntryBoxBase.generated.h already included, missing '#pragma once' in DynamicEntryBoxBase.h"
#endif
#define UMG_DynamicEntryBoxBase_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRadialSettings); \
	DECLARE_FUNCTION(execSetEntrySpacing); \
	DECLARE_FUNCTION(execGetNumEntries); \
	DECLARE_FUNCTION(execGetAllEntries);


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRadialSettings); \
	DECLARE_FUNCTION(execSetEntrySpacing); \
	DECLARE_FUNCTION(execGetNumEntries); \
	DECLARE_FUNCTION(execGetAllEntries);


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_ACCESSORS \
static void GetEntrySpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetEntrySpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetEntryBoxType_WrapperImpl(const void* Object, void* OutValue); \
static void GetEntrySizeRule_WrapperImpl(const void* Object, void* OutValue); \
static void GetEntryHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void GetEntryVerticalAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void GetMaxElementSize_WrapperImpl(const void* Object, void* OutValue); \
static void GetRadialBoxSettings_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadialBoxSettings_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicEntryBoxBase(); \
	friend struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBoxBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBoxBase)


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicEntryBoxBase(); \
	friend struct Z_Construct_UClass_UDynamicEntryBoxBase_Statics; \
public: \
	DECLARE_CLASS(UDynamicEntryBoxBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UDynamicEntryBoxBase)


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicEntryBoxBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBoxBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBoxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBoxBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBoxBase(UDynamicEntryBoxBase&&); \
	NO_API UDynamicEntryBoxBase(const UDynamicEntryBoxBase&); \
public: \
	NO_API virtual ~UDynamicEntryBoxBase();


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicEntryBoxBase(UDynamicEntryBoxBase&&); \
	NO_API UDynamicEntryBoxBase(const UDynamicEntryBoxBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicEntryBoxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicEntryBoxBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicEntryBoxBase) \
	NO_API virtual ~UDynamicEntryBoxBase();


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_31_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UDynamicEntryBoxBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBoxBase_h


#define FOREACH_ENUM_EDYNAMICBOXTYPE(op) \
	op(EDynamicBoxType::Horizontal) \
	op(EDynamicBoxType::Vertical) \
	op(EDynamicBoxType::Wrap) \
	op(EDynamicBoxType::VerticalWrap) \
	op(EDynamicBoxType::Radial) \
	op(EDynamicBoxType::Overlay) 

enum class EDynamicBoxType : uint8;
template<> struct TIsUEnumClass<EDynamicBoxType> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EDynamicBoxType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
