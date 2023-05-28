// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaPlayerProxyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaPlayerProxyInterface_generated_h
#error "MediaPlayerProxyInterface.generated.h already included, missing '#pragma once' in MediaPlayerProxyInterface.h"
#endif
#define MEDIAASSETS_MediaPlayerProxyInterface_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaPlayerProxyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerProxyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaPlayerProxyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerProxyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MEDIAASSETS_API UMediaPlayerProxyInterface(UMediaPlayerProxyInterface&&); \
	MEDIAASSETS_API UMediaPlayerProxyInterface(const UMediaPlayerProxyInterface&); \
public: \
	MEDIAASSETS_API virtual ~UMediaPlayerProxyInterface();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaPlayerProxyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MEDIAASSETS_API UMediaPlayerProxyInterface(UMediaPlayerProxyInterface&&); \
	MEDIAASSETS_API UMediaPlayerProxyInterface(const UMediaPlayerProxyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaPlayerProxyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaPlayerProxyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaPlayerProxyInterface) \
	MEDIAASSETS_API virtual ~UMediaPlayerProxyInterface();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMediaPlayerProxyInterface(); \
	friend struct Z_Construct_UClass_UMediaPlayerProxyInterface_Statics; \
public: \
	DECLARE_CLASS(UMediaPlayerProxyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UMediaPlayerProxyInterface)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMediaPlayerProxyInterface() {} \
public: \
	typedef UMediaPlayerProxyInterface UClassType; \
	typedef IMediaPlayerProxyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IMediaPlayerProxyInterface() {} \
public: \
	typedef UMediaPlayerProxyInterface UClassType; \
	typedef IMediaPlayerProxyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_19_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaPlayerProxyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
