// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_PostProcessVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_PostProcessVolume_generated_h
#error "Interface_PostProcessVolume.generated.h already included, missing '#pragma once' in Interface_PostProcessVolume.h"
#endif
#define ENGINE_Interface_PostProcessVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_PostProcessVolume(UInterface_PostProcessVolume&&); \
	ENGINE_API UInterface_PostProcessVolume(const UInterface_PostProcessVolume&); \
public: \
	ENGINE_API virtual ~UInterface_PostProcessVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_PostProcessVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_PostProcessVolume(UInterface_PostProcessVolume&&); \
	ENGINE_API UInterface_PostProcessVolume(const UInterface_PostProcessVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_PostProcessVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_PostProcessVolume); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_PostProcessVolume) \
	ENGINE_API virtual ~UInterface_PostProcessVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_PostProcessVolume(); \
	friend struct Z_Construct_UClass_UInterface_PostProcessVolume_Statics; \
public: \
	DECLARE_CLASS(UInterface_PostProcessVolume, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_PostProcessVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	typedef IInterface_PostProcessVolume ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_PostProcessVolume() {} \
public: \
	typedef UInterface_PostProcessVolume UClassType; \
	typedef IInterface_PostProcessVolume ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_25_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_PostProcessVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_PostProcessVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
