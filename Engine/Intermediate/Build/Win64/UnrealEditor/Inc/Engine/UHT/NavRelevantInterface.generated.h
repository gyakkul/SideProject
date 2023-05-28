// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavRelevantInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavRelevantInterface_generated_h
#error "NavRelevantInterface.generated.h already included, missing '#pragma once' in NavRelevantInterface.h"
#endif
#define ENGINE_NavRelevantInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavRelevantInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavRelevantInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavRelevantInterface(UNavRelevantInterface&&); \
	ENGINE_API UNavRelevantInterface(const UNavRelevantInterface&); \
public: \
	ENGINE_API virtual ~UNavRelevantInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavRelevantInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavRelevantInterface(UNavRelevantInterface&&); \
	ENGINE_API UNavRelevantInterface(const UNavRelevantInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavRelevantInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantInterface) \
	ENGINE_API virtual ~UNavRelevantInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavRelevantInterface(); \
	friend struct Z_Construct_UClass_UNavRelevantInterface_Statics; \
public: \
	DECLARE_CLASS(UNavRelevantInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavRelevantInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavRelevantInterface() {} \
public: \
	typedef UNavRelevantInterface UClassType; \
	typedef INavRelevantInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_INCLASS_IINTERFACE \
protected: \
	virtual ~INavRelevantInterface() {} \
public: \
	typedef UNavRelevantInterface UClassType; \
	typedef INavRelevantInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_140_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h_143_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavRelevantInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavRelevantInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
