// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieScene/IMovieSceneComposureExportClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneComposureExportInitializer;
#ifdef COMPOSURE_IMovieSceneComposureExportClient_generated_h
#error "IMovieSceneComposureExportClient.generated.h already included, missing '#pragma once' in IMovieSceneComposureExportClient.h"
#endif
#define COMPOSURE_IMovieSceneComposureExportClient_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ACCESSORS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneComposureExportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposureExportClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneComposureExportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposureExportClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneComposureExportClient(UMovieSceneComposureExportClient&&); \
	NO_API UMovieSceneComposureExportClient(const UMovieSceneComposureExportClient&); \
public: \
	NO_API virtual ~UMovieSceneComposureExportClient();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneComposureExportClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneComposureExportClient(UMovieSceneComposureExportClient&&); \
	NO_API UMovieSceneComposureExportClient(const UMovieSceneComposureExportClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneComposureExportClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneComposureExportClient); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneComposureExportClient) \
	NO_API virtual ~UMovieSceneComposureExportClient();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneComposureExportClient(); \
	friend struct Z_Construct_UClass_UMovieSceneComposureExportClient_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneComposureExportClient, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneComposureExportClient)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneComposureExportClient() {} \
public: \
	typedef UMovieSceneComposureExportClient UClassType; \
	typedef IMovieSceneComposureExportClient ThisClass; \
	static void Execute_InitializeForExport(UObject* O, UMovieSceneComposureExportInitializer* ExportInitializer); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneComposureExportClient() {} \
public: \
	typedef UMovieSceneComposureExportClient UClassType; \
	typedef IMovieSceneComposureExportClient ThisClass; \
	static void Execute_InitializeForExport(UObject* O, UMovieSceneComposureExportInitializer* ExportInitializer); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_15_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UMovieSceneComposureExportClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_IMovieSceneComposureExportClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
