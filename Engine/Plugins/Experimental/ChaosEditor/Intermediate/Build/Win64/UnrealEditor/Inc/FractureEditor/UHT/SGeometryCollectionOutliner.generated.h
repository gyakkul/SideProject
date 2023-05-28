// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGeometryCollectionOutliner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_SGeometryCollectionOutliner_generated_h
#error "SGeometryCollectionOutliner.generated.h already included, missing '#pragma once' in SGeometryCollectionOutliner.h"
#endif
#define FRACTUREEDITOR_SGeometryCollectionOutliner_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutlinerSettings(); \
	friend struct Z_Construct_UClass_UOutlinerSettings_Statics; \
public: \
	DECLARE_CLASS(UOutlinerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UOutlinerSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUOutlinerSettings(); \
	friend struct Z_Construct_UClass_UOutlinerSettings_Statics; \
public: \
	DECLARE_CLASS(UOutlinerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UOutlinerSettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutlinerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutlinerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlinerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlinerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutlinerSettings(UOutlinerSettings&&); \
	NO_API UOutlinerSettings(const UOutlinerSettings&); \
public: \
	NO_API virtual ~UOutlinerSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutlinerSettings(UOutlinerSettings&&); \
	NO_API UOutlinerSettings(const UOutlinerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutlinerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutlinerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutlinerSettings) \
	NO_API virtual ~UOutlinerSettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_51_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UOutlinerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h


#define FOREACH_ENUM_EOUTLINERITEMNAMEENUM(op) \
	op(EOutlinerItemNameEnum::BoneName) \
	op(EOutlinerItemNameEnum::BoneIndex) 

enum class EOutlinerItemNameEnum : uint8;
template<> struct TIsUEnumClass<EOutlinerItemNameEnum> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EOutlinerItemNameEnum>();

#define FOREACH_ENUM_EOUTLINERCOLUMNMODE(op) \
	op(EOutlinerColumnMode::State) \
	op(EOutlinerColumnMode::Damage) \
	op(EOutlinerColumnMode::Removal) \
	op(EOutlinerColumnMode::Collision) \
	op(EOutlinerColumnMode::Size) 

enum class EOutlinerColumnMode : uint8;
template<> struct TIsUEnumClass<EOutlinerColumnMode> { enum { Value = true }; };
template<> FRACTUREEDITOR_API UEnum* StaticEnum<EOutlinerColumnMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
