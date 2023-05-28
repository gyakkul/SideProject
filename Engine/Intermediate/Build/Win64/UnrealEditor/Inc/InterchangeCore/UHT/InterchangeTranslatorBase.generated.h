// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTranslatorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECORE_InterchangeTranslatorBase_generated_h
#error "InterchangeTranslatorBase.generated.h already included, missing '#pragma once' in InterchangeTranslatorBase.h"
#endif
#define INTERCHANGECORE_InterchangeTranslatorBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTranslatorBase(); \
	friend struct Z_Construct_UClass_UInterchangeTranslatorBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTranslatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeTranslatorBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeTranslatorBase(); \
	friend struct Z_Construct_UClass_UInterchangeTranslatorBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTranslatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeTranslatorBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeTranslatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTranslatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeTranslatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTranslatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeTranslatorBase(UInterchangeTranslatorBase&&); \
	NO_API UInterchangeTranslatorBase(const UInterchangeTranslatorBase&); \
public: \
	NO_API virtual ~UInterchangeTranslatorBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeTranslatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeTranslatorBase(UInterchangeTranslatorBase&&); \
	NO_API UInterchangeTranslatorBase(const UInterchangeTranslatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeTranslatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTranslatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTranslatorBase) \
	NO_API virtual ~UInterchangeTranslatorBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_43_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeTranslatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangeTranslatorBase_h


#define FOREACH_ENUM_EINTERCHANGETRANSLATORTYPE(op) \
	op(EInterchangeTranslatorType::Invalid) \
	op(EInterchangeTranslatorType::Assets) \
	op(EInterchangeTranslatorType::Actors) \
	op(EInterchangeTranslatorType::Scenes) 

enum class EInterchangeTranslatorType : uint8;
template<> struct TIsUEnumClass<EInterchangeTranslatorType> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorType>();

#define FOREACH_ENUM_EINTERCHANGETRANSLATORASSETTYPE(op) \
	op(EInterchangeTranslatorAssetType::None) \
	op(EInterchangeTranslatorAssetType::Textures) \
	op(EInterchangeTranslatorAssetType::Materials) \
	op(EInterchangeTranslatorAssetType::Meshes) \
	op(EInterchangeTranslatorAssetType::Animations) 

enum class EInterchangeTranslatorAssetType : uint8;
template<> struct TIsUEnumClass<EInterchangeTranslatorAssetType> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeTranslatorAssetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
