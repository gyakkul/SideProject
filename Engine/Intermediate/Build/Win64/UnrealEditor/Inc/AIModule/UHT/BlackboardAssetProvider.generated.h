// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BlackboardAssetProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlackboardData;
#ifdef AIMODULE_BlackboardAssetProvider_generated_h
#error "BlackboardAssetProvider.generated.h already included, missing '#pragma once' in BlackboardAssetProvider.h"
#endif
#define AIMODULE_BlackboardAssetProvider_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlackboardAsset);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlackboardAsset);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardAssetProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardAssetProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardAssetProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardAssetProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UBlackboardAssetProvider(UBlackboardAssetProvider&&); \
	AIMODULE_API UBlackboardAssetProvider(const UBlackboardAssetProvider&); \
public: \
	AIMODULE_API virtual ~UBlackboardAssetProvider();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UBlackboardAssetProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UBlackboardAssetProvider(UBlackboardAssetProvider&&); \
	AIMODULE_API UBlackboardAssetProvider(const UBlackboardAssetProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UBlackboardAssetProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardAssetProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardAssetProvider) \
	AIMODULE_API virtual ~UBlackboardAssetProvider();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBlackboardAssetProvider(); \
	friend struct Z_Construct_UClass_UBlackboardAssetProvider_Statics; \
public: \
	DECLARE_CLASS(UBlackboardAssetProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UBlackboardAssetProvider)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBlackboardAssetProvider() {} \
public: \
	typedef UBlackboardAssetProvider UClassType; \
	typedef IBlackboardAssetProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IBlackboardAssetProvider() {} \
public: \
	typedef UBlackboardAssetProvider UClassType; \
	typedef IBlackboardAssetProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_15_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardAssetProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardAssetProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
