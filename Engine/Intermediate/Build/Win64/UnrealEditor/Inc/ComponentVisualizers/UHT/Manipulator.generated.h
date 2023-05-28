// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Manipulator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPONENTVISUALIZERS_Manipulator_generated_h
#error "Manipulator.generated.h already included, missing '#pragma once' in Manipulator.h"
#endif
#define COMPONENTVISUALIZERS_Manipulator_generated_h

#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_SPARSE_DATA
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_ACCESSORS
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManipulator(); \
	friend struct Z_Construct_UClass_AManipulator_Statics; \
public: \
	DECLARE_CLASS(AManipulator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), NO_API) \
	DECLARE_SERIALIZER(AManipulator) \
	virtual UObject* _getUObject() const override { return const_cast<AManipulator*>(this); }


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAManipulator(); \
	friend struct Z_Construct_UClass_AManipulator_Statics; \
public: \
	DECLARE_CLASS(AManipulator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), NO_API) \
	DECLARE_SERIALIZER(AManipulator) \
	virtual UObject* _getUObject() const override { return const_cast<AManipulator*>(this); }


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManipulator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManipulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManipulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManipulator(AManipulator&&); \
	NO_API AManipulator(const AManipulator&); \
public: \
	NO_API virtual ~AManipulator();


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManipulator(AManipulator&&); \
	NO_API AManipulator(const AManipulator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManipulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManipulator) \
	NO_API virtual ~AManipulator();


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_20_PROLOG
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_SPARSE_DATA \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_ACCESSORS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_INCLASS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_SPARSE_DATA \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_ACCESSORS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPONENTVISUALIZERS_API UClass* StaticClass<class AManipulator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
