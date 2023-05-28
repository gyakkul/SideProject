// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LODSyncInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LODSyncInterface_generated_h
#error "LODSyncInterface.generated.h already included, missing '#pragma once' in LODSyncInterface.h"
#endif
#define ENGINE_LODSyncInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODSyncInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODSyncInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODSyncInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODSyncInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULODSyncInterface(ULODSyncInterface&&); \
	NO_API ULODSyncInterface(const ULODSyncInterface&); \
public: \
	NO_API virtual ~ULODSyncInterface();


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULODSyncInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULODSyncInterface(ULODSyncInterface&&); \
	NO_API ULODSyncInterface(const ULODSyncInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULODSyncInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULODSyncInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULODSyncInterface) \
	NO_API virtual ~ULODSyncInterface();


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULODSyncInterface(); \
	friend struct Z_Construct_UClass_ULODSyncInterface_Statics; \
public: \
	DECLARE_CLASS(ULODSyncInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULODSyncInterface)


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILODSyncInterface() {} \
public: \
	typedef ULODSyncInterface UClassType; \
	typedef ILODSyncInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ILODSyncInterface() {} \
public: \
	typedef ULODSyncInterface UClassType; \
	typedef ILODSyncInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULODSyncInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LODSyncInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
