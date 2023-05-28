// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavModifierVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavArea;
#ifdef NAVIGATIONSYSTEM_NavModifierVolume_generated_h
#error "NavModifierVolume.generated.h already included, missing '#pragma once' in NavModifierVolume.h"
#endif
#define NAVIGATIONSYSTEM_NavModifierVolume_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAreaClass);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAreaClass);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavModifierVolume(); \
	friend struct Z_Construct_UClass_ANavModifierVolume_Statics; \
public: \
	DECLARE_CLASS(ANavModifierVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ANavModifierVolume*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_INCLASS \
private: \
	static void StaticRegisterNativesANavModifierVolume(); \
	friend struct Z_Construct_UClass_ANavModifierVolume_Statics; \
public: \
	DECLARE_CLASS(ANavModifierVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavModifierVolume) \
	virtual UObject* _getUObject() const override { return const_cast<ANavModifierVolume*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavModifierVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavModifierVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavModifierVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavModifierVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavModifierVolume(ANavModifierVolume&&); \
	NO_API ANavModifierVolume(const ANavModifierVolume&); \
public: \
	NO_API virtual ~ANavModifierVolume();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavModifierVolume(ANavModifierVolume&&); \
	NO_API ANavModifierVolume(const ANavModifierVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavModifierVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavModifierVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavModifierVolume) \
	NO_API virtual ~ANavModifierVolume();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_19_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavModifierVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
