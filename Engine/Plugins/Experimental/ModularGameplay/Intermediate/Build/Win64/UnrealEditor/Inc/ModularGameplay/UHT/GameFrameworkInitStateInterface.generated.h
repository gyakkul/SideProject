// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GameFrameworkInitStateInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef MODULARGAMEPLAY_GameFrameworkInitStateInterface_generated_h
#error "GameFrameworkInitStateInterface.generated.h already included, missing '#pragma once' in GameFrameworkInitStateInterface.h"
#endif
#define MODULARGAMEPLAY_GameFrameworkInitStateInterface_generated_h

#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterInitStateDelegate); \
	DECLARE_FUNCTION(execRegisterAndCallForInitStateChange); \
	DECLARE_FUNCTION(execHasReachedInitState); \
	DECLARE_FUNCTION(execGetInitState); \
	DECLARE_FUNCTION(execGetFeatureName);


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterInitStateDelegate); \
	DECLARE_FUNCTION(execRegisterAndCallForInitStateChange); \
	DECLARE_FUNCTION(execHasReachedInitState); \
	DECLARE_FUNCTION(execGetInitState); \
	DECLARE_FUNCTION(execGetFeatureName);


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFrameworkInitStateInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UGameFrameworkInitStateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFrameworkInitStateInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(UGameFrameworkInitStateInterface&&); \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(const UGameFrameworkInitStateInterface&); \
public: \
	MODULARGAMEPLAY_API virtual ~UGameFrameworkInitStateInterface();


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(UGameFrameworkInitStateInterface&&); \
	MODULARGAMEPLAY_API UGameFrameworkInitStateInterface(const UGameFrameworkInitStateInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODULARGAMEPLAY_API, UGameFrameworkInitStateInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFrameworkInitStateInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFrameworkInitStateInterface) \
	MODULARGAMEPLAY_API virtual ~UGameFrameworkInitStateInterface();


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameFrameworkInitStateInterface(); \
	friend struct Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics; \
public: \
	DECLARE_CLASS(UGameFrameworkInitStateInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularGameplay"), MODULARGAMEPLAY_API) \
	DECLARE_SERIALIZER(UGameFrameworkInitStateInterface)


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameFrameworkInitStateInterface() {} \
public: \
	typedef UGameFrameworkInitStateInterface UClassType; \
	typedef IGameFrameworkInitStateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameFrameworkInitStateInterface() {} \
public: \
	typedef UGameFrameworkInitStateInterface UClassType; \
	typedef IGameFrameworkInitStateInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAY_API UClass* StaticClass<class UGameFrameworkInitStateInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
