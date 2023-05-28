// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EntitySystem/IMovieSceneEntityProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_IMovieSceneEntityProvider_generated_h
#error "IMovieSceneEntityProvider.generated.h already included, missing '#pragma once' in IMovieSceneEntityProvider.h"
#endif
#define MOVIESCENE_IMovieSceneEntityProvider_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_ACCESSORS
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEntityProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEntityProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEntityProvider(UMovieSceneEntityProvider&&); \
	NO_API UMovieSceneEntityProvider(const UMovieSceneEntityProvider&); \
public: \
	NO_API virtual ~UMovieSceneEntityProvider();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneEntityProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneEntityProvider(UMovieSceneEntityProvider&&); \
	NO_API UMovieSceneEntityProvider(const UMovieSceneEntityProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneEntityProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEntityProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEntityProvider) \
	NO_API virtual ~UMovieSceneEntityProvider();


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneEntityProvider(); \
	friend struct Z_Construct_UClass_UMovieSceneEntityProvider_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEntityProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneEntityProvider)


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneEntityProvider() {} \
public: \
	typedef UMovieSceneEntityProvider UClassType; \
	typedef IMovieSceneEntityProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneEntityProvider() {} \
public: \
	typedef UMovieSceneEntityProvider UClassType; \
	typedef IMovieSceneEntityProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_108_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h_112_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneEntityProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_IMovieSceneEntityProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
