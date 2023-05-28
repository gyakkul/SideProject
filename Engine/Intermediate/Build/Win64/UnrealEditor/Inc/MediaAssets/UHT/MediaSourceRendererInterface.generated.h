// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaSourceRendererInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaSourceRendererInterface_generated_h
#error "MediaSourceRendererInterface.generated.h already included, missing '#pragma once' in MediaSourceRendererInterface.h"
#endif
#define MEDIAASSETS_MediaSourceRendererInterface_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaSourceRendererInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSourceRendererInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaSourceRendererInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSourceRendererInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MEDIAASSETS_API UMediaSourceRendererInterface(UMediaSourceRendererInterface&&); \
	MEDIAASSETS_API UMediaSourceRendererInterface(const UMediaSourceRendererInterface&); \
public: \
	MEDIAASSETS_API virtual ~UMediaSourceRendererInterface();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaSourceRendererInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MEDIAASSETS_API UMediaSourceRendererInterface(UMediaSourceRendererInterface&&); \
	MEDIAASSETS_API UMediaSourceRendererInterface(const UMediaSourceRendererInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaSourceRendererInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSourceRendererInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSourceRendererInterface) \
	MEDIAASSETS_API virtual ~UMediaSourceRendererInterface();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMediaSourceRendererInterface(); \
	friend struct Z_Construct_UClass_UMediaSourceRendererInterface_Statics; \
public: \
	DECLARE_CLASS(UMediaSourceRendererInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UMediaSourceRendererInterface)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMediaSourceRendererInterface() {} \
public: \
	typedef UMediaSourceRendererInterface UClassType; \
	typedef IMediaSourceRendererInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~IMediaSourceRendererInterface() {} \
public: \
	typedef UMediaSourceRendererInterface UClassType; \
	typedef IMediaSourceRendererInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_15_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaSourceRendererInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
