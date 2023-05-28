// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavNodeInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavNodeInterface_generated_h
#error "NavNodeInterface.generated.h already included, missing '#pragma once' in NavNodeInterface.h"
#endif
#define NAVIGATIONSYSTEM_NavNodeInterface_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavNodeInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavNodeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavNodeInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(UNavNodeInterface&&); \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const UNavNodeInterface&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavNodeInterface();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API UNavNodeInterface(UNavNodeInterface&&); \
	NAVIGATIONSYSTEM_API UNavNodeInterface(const UNavNodeInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavNodeInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavNodeInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavNodeInterface) \
	NAVIGATIONSYSTEM_API virtual ~UNavNodeInterface();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavNodeInterface(); \
	friend struct Z_Construct_UClass_UNavNodeInterface_Statics; \
public: \
	DECLARE_CLASS(UNavNodeInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavNodeInterface)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavNodeInterface() {} \
public: \
	typedef UNavNodeInterface UClassType; \
	typedef INavNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~INavNodeInterface() {} \
public: \
	typedef UNavNodeInterface UClassType; \
	typedef INavNodeInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavNodeInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
