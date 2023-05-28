// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IClassVariableCreator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_IClassVariableCreator_generated_h
#error "IClassVariableCreator.generated.h already included, missing '#pragma once' in IClassVariableCreator.h"
#endif
#define ANIMGRAPH_IClassVariableCreator_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UClassVariableCreator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassVariableCreator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UClassVariableCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassVariableCreator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UClassVariableCreator(UClassVariableCreator&&); \
	ANIMGRAPH_API UClassVariableCreator(const UClassVariableCreator&); \
public: \
	ANIMGRAPH_API virtual ~UClassVariableCreator();


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UClassVariableCreator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UClassVariableCreator(UClassVariableCreator&&); \
	ANIMGRAPH_API UClassVariableCreator(const UClassVariableCreator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UClassVariableCreator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassVariableCreator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassVariableCreator) \
	ANIMGRAPH_API virtual ~UClassVariableCreator();


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUClassVariableCreator(); \
	friend struct Z_Construct_UClass_UClassVariableCreator_Statics; \
public: \
	DECLARE_CLASS(UClassVariableCreator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UClassVariableCreator)


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IClassVariableCreator() {} \
public: \
	typedef UClassVariableCreator UClassType; \
	typedef IClassVariableCreator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_INCLASS_IINTERFACE \
protected: \
	virtual ~IClassVariableCreator() {} \
public: \
	typedef UClassVariableCreator UClassType; \
	typedef IClassVariableCreator ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_25_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UClassVariableCreator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_IClassVariableCreator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
