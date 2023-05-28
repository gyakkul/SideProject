// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatureStateChangeObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEFEATURES_GameFeatureStateChangeObserver_generated_h
#error "GameFeatureStateChangeObserver.generated.h already included, missing '#pragma once' in GameFeatureStateChangeObserver.h"
#endif
#define GAMEFEATURES_GameFeatureStateChangeObserver_generated_h

#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureStateChangeObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureStateChangeObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureStateChangeObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(UGameFeatureStateChangeObserver&&); \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(const UGameFeatureStateChangeObserver&); \
public: \
	GAMEFEATURES_API virtual ~UGameFeatureStateChangeObserver();


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(UGameFeatureStateChangeObserver&&); \
	GAMEFEATURES_API UGameFeatureStateChangeObserver(const UGameFeatureStateChangeObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEFEATURES_API, UGameFeatureStateChangeObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameFeatureStateChangeObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameFeatureStateChangeObserver) \
	GAMEFEATURES_API virtual ~UGameFeatureStateChangeObserver();


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameFeatureStateChangeObserver(); \
	friend struct Z_Construct_UClass_UGameFeatureStateChangeObserver_Statics; \
public: \
	DECLARE_CLASS(UGameFeatureStateChangeObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameFeatures"), GAMEFEATURES_API) \
	DECLARE_SERIALIZER(UGameFeatureStateChangeObserver)


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameFeatureStateChangeObserver() {} \
public: \
	typedef UGameFeatureStateChangeObserver UClassType; \
	typedef IGameFeatureStateChangeObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameFeatureStateChangeObserver() {} \
public: \
	typedef UGameFeatureStateChangeObserver UClassType; \
	typedef IGameFeatureStateChangeObserver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEFEATURES_API UClass* StaticClass<class UGameFeatureStateChangeObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureStateChangeObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
