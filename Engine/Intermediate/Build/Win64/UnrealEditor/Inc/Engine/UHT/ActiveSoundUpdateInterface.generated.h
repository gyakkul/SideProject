// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActiveSoundUpdateInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ActiveSoundUpdateInterface_generated_h
#error "ActiveSoundUpdateInterface.generated.h already included, missing '#pragma once' in ActiveSoundUpdateInterface.h"
#endif
#define ENGINE_ActiveSoundUpdateInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundUpdateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundUpdateInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundUpdateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundUpdateInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActiveSoundUpdateInterface(UActiveSoundUpdateInterface&&); \
	NO_API UActiveSoundUpdateInterface(const UActiveSoundUpdateInterface&); \
public: \
	NO_API virtual ~UActiveSoundUpdateInterface();


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActiveSoundUpdateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActiveSoundUpdateInterface(UActiveSoundUpdateInterface&&); \
	NO_API UActiveSoundUpdateInterface(const UActiveSoundUpdateInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActiveSoundUpdateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveSoundUpdateInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveSoundUpdateInterface) \
	NO_API virtual ~UActiveSoundUpdateInterface();


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActiveSoundUpdateInterface(); \
	friend struct Z_Construct_UClass_UActiveSoundUpdateInterface_Statics; \
public: \
	DECLARE_CLASS(UActiveSoundUpdateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActiveSoundUpdateInterface)


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActiveSoundUpdateInterface() {} \
public: \
	typedef UActiveSoundUpdateInterface UClassType; \
	typedef IActiveSoundUpdateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IActiveSoundUpdateInterface() {} \
public: \
	typedef UActiveSoundUpdateInterface UClassType; \
	typedef IActiveSoundUpdateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActiveSoundUpdateInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ActiveSoundUpdateInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
