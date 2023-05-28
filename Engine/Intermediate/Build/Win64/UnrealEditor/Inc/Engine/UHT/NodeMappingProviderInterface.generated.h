// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/NodeMappingProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NodeMappingProviderInterface_generated_h
#error "NodeMappingProviderInterface.generated.h already included, missing '#pragma once' in NodeMappingProviderInterface.h"
#endif
#define ENGINE_NodeMappingProviderInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNodeItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNodeItem>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingProviderInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingProviderInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingProviderInterface(UNodeMappingProviderInterface&&); \
	NO_API UNodeMappingProviderInterface(const UNodeMappingProviderInterface&); \
public: \
	NO_API virtual ~UNodeMappingProviderInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNodeMappingProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNodeMappingProviderInterface(UNodeMappingProviderInterface&&); \
	NO_API UNodeMappingProviderInterface(const UNodeMappingProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeMappingProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeMappingProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNodeMappingProviderInterface) \
	NO_API virtual ~UNodeMappingProviderInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNodeMappingProviderInterface(); \
	friend struct Z_Construct_UClass_UNodeMappingProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UNodeMappingProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNodeMappingProviderInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INodeMappingProviderInterface() {} \
public: \
	typedef UNodeMappingProviderInterface UClassType; \
	typedef INodeMappingProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_INCLASS_IINTERFACE \
protected: \
	virtual ~INodeMappingProviderInterface() {} \
public: \
	typedef UNodeMappingProviderInterface UClassType; \
	typedef INodeMappingProviderInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNodeMappingProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
