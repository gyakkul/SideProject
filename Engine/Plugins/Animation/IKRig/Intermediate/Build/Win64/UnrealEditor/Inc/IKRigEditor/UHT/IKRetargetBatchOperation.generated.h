// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RetargetEditor/IKRetargetBatchOperation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRetargeter;
class USkeletalMesh;
struct FAssetData;
#ifdef IKRIGEDITOR_IKRetargetBatchOperation_generated_h
#error "IKRetargetBatchOperation.generated.h already included, missing '#pragma once' in IKRetargetBatchOperation.h"
#endif
#define IKRIGEDITOR_IKRetargetBatchOperation_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDuplicateAndRetarget);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDuplicateAndRetarget);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRetargetBatchOperation(); \
	friend struct Z_Construct_UClass_UIKRetargetBatchOperation_Statics; \
public: \
	DECLARE_CLASS(UIKRetargetBatchOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargetBatchOperation)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUIKRetargetBatchOperation(); \
	friend struct Z_Construct_UClass_UIKRetargetBatchOperation_Statics; \
public: \
	DECLARE_CLASS(UIKRetargetBatchOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRetargetBatchOperation)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetBatchOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBatchOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetBatchOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBatchOperation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargetBatchOperation(UIKRetargetBatchOperation&&); \
	NO_API UIKRetargetBatchOperation(const UIKRetargetBatchOperation&); \
public: \
	NO_API virtual ~UIKRetargetBatchOperation();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRetargetBatchOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRetargetBatchOperation(UIKRetargetBatchOperation&&); \
	NO_API UIKRetargetBatchOperation(const UIKRetargetBatchOperation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRetargetBatchOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRetargetBatchOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRetargetBatchOperation) \
	NO_API virtual ~UIKRetargetBatchOperation();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_59_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIGEDITOR_API UClass* StaticClass<class UIKRetargetBatchOperation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetBatchOperation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
