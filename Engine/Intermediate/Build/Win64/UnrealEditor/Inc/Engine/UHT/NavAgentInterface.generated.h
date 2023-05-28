// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavAgentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavAgentInterface_generated_h
#error "NavAgentInterface.generated.h already included, missing '#pragma once' in NavAgentInterface.h"
#endif
#define ENGINE_NavAgentInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavAgentInterface(UNavAgentInterface&&); \
	ENGINE_API UNavAgentInterface(const UNavAgentInterface&); \
public: \
	ENGINE_API virtual ~UNavAgentInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavAgentInterface(UNavAgentInterface&&); \
	ENGINE_API UNavAgentInterface(const UNavAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAgentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAgentInterface) \
	ENGINE_API virtual ~UNavAgentInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavAgentInterface(); \
	friend struct Z_Construct_UClass_UNavAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UNavAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavAgentInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavAgentInterface() {} \
public: \
	typedef UNavAgentInterface UClassType; \
	typedef INavAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~INavAgentInterface() {} \
public: \
	typedef UNavAgentInterface UClassType; \
	typedef INavAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
