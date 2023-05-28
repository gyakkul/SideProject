// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IMovieSceneCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENECAPTURE_IMovieSceneCapture_generated_h
#error "IMovieSceneCapture.generated.h already included, missing '#pragma once' in IMovieSceneCapture.h"
#endif
#define MOVIESCENECAPTURE_IMovieSceneCapture_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneCaptureInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(UMovieSceneCaptureInterface&&); \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(const UMovieSceneCaptureInterface&); \
public: \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneCaptureInterface();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(UMovieSceneCaptureInterface&&); \
	MOVIESCENECAPTURE_API UMovieSceneCaptureInterface(const UMovieSceneCaptureInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENECAPTURE_API, UMovieSceneCaptureInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureInterface) \
	MOVIESCENECAPTURE_API virtual ~UMovieSceneCaptureInterface();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureInterface(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureInterface_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), MOVIESCENECAPTURE_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureInterface)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneCaptureInterface() {} \
public: \
	typedef UMovieSceneCaptureInterface UClassType; \
	typedef IMovieSceneCaptureInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneCaptureInterface() {} \
public: \
	typedef UMovieSceneCaptureInterface UClassType; \
	typedef IMovieSceneCaptureInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneCaptureInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_IMovieSceneCapture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
