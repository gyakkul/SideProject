// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ARLifeCycleComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AARActor;
class UObject;
struct FGuid;
#ifdef AUGMENTEDREALITY_ARLifeCycleComponent_generated_h
#error "ARLifeCycleComponent.generated.h already included, missing '#pragma once' in ARLifeCycleComponent.h"
#endif
#define AUGMENTEDREALITY_ARLifeCycleComponent_generated_h

#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_33_DELEGATE \
static void FInstanceARActorSpawnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorSpawnedDelegate, UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_38_DELEGATE \
static void FInstanceARActorToBeDestroyedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InstanceARActorToBeDestroyedDelegate, AARActor* Actor);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS \
	virtual bool ServerDestroyARActor_Validate(AARActor* ); \
	virtual void ServerDestroyARActor_Implementation(AARActor* Actor); \
	virtual bool ServerSpawnARActor_Validate(UClass* , FGuid ); \
	virtual void ServerSpawnARActor_Implementation(UClass* ComponentClass, FGuid NativeID); \
 \
	DECLARE_FUNCTION(execServerDestroyARActor); \
	DECLARE_FUNCTION(execServerSpawnARActor);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDestroyARActor_Validate(AARActor* ); \
	virtual void ServerDestroyARActor_Implementation(AARActor* Actor); \
	virtual bool ServerSpawnARActor_Validate(UClass* , FGuid ); \
	virtual void ServerSpawnARActor_Implementation(UClass* ComponentClass, FGuid NativeID); \
 \
	DECLARE_FUNCTION(execServerDestroyARActor); \
	DECLARE_FUNCTION(execServerSpawnARActor);


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARLifeCycleComponent(); \
	friend struct Z_Construct_UClass_UARLifeCycleComponent_Statics; \
public: \
	DECLARE_CLASS(UARLifeCycleComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLifeCycleComponent)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUARLifeCycleComponent(); \
	friend struct Z_Construct_UClass_UARLifeCycleComponent_Statics; \
public: \
	DECLARE_CLASS(UARLifeCycleComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(UARLifeCycleComponent)


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLifeCycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLifeCycleComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLifeCycleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLifeCycleComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLifeCycleComponent(UARLifeCycleComponent&&); \
	NO_API UARLifeCycleComponent(const UARLifeCycleComponent&); \
public: \
	NO_API virtual ~UARLifeCycleComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UARLifeCycleComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UARLifeCycleComponent(UARLifeCycleComponent&&); \
	NO_API UARLifeCycleComponent(const UARLifeCycleComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARLifeCycleComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARLifeCycleComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UARLifeCycleComponent) \
	NO_API virtual ~UARLifeCycleComponent();


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class UARLifeCycleComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
