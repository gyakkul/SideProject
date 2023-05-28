// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPRootActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACineCameraActor;
#ifdef VPUTILITIES_VPRootActor_generated_h
#error "VPRootActor.generated.h already included, missing '#pragma once' in VPRootActor.h"
#endif
#define VPUTILITIES_VPRootActor_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_RPC_WRAPPERS \
	virtual ACineCameraActor* GetCineCameraActor_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetCineCameraActor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ACineCameraActor* GetCineCameraActor_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetCineCameraActor);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveLevelToRootActor); \
	DECLARE_FUNCTION(execToggleComponentsVisibility);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveLevelToRootActor); \
	DECLARE_FUNCTION(execToggleComponentsVisibility);


#else
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVPRootActor(); \
	friend struct Z_Construct_UClass_AVPRootActor_Statics; \
public: \
	DECLARE_CLASS(AVPRootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(AVPRootActor)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAVPRootActor(); \
	friend struct Z_Construct_UClass_AVPRootActor_Statics; \
public: \
	DECLARE_CLASS(AVPRootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(AVPRootActor)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVPRootActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPRootActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPRootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPRootActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPRootActor(AVPRootActor&&); \
	NO_API AVPRootActor(const AVPRootActor&); \
public: \
	NO_API virtual ~AVPRootActor();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVPRootActor(AVPRootActor&&); \
	NO_API AVPRootActor(const AVPRootActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVPRootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVPRootActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVPRootActor) \
	NO_API virtual ~AVPRootActor();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class AVPRootActor>();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPWorldAssetUserData(); \
	friend struct Z_Construct_UClass_UVPWorldAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UVPWorldAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), VPUTILITIES_API) \
	DECLARE_SERIALIZER(UVPWorldAssetUserData)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUVPWorldAssetUserData(); \
	friend struct Z_Construct_UClass_UVPWorldAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UVPWorldAssetUserData, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), VPUTILITIES_API) \
	DECLARE_SERIALIZER(UVPWorldAssetUserData)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VPUTILITIES_API UVPWorldAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPWorldAssetUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VPUTILITIES_API, UVPWorldAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPWorldAssetUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VPUTILITIES_API UVPWorldAssetUserData(UVPWorldAssetUserData&&); \
	VPUTILITIES_API UVPWorldAssetUserData(const UVPWorldAssetUserData&); \
public: \
	VPUTILITIES_API virtual ~UVPWorldAssetUserData();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VPUTILITIES_API UVPWorldAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VPUTILITIES_API UVPWorldAssetUserData(UVPWorldAssetUserData&&); \
	VPUTILITIES_API UVPWorldAssetUserData(const UVPWorldAssetUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VPUTILITIES_API, UVPWorldAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPWorldAssetUserData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPWorldAssetUserData) \
	VPUTILITIES_API virtual ~UVPWorldAssetUserData();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_87_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_90_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class UVPWorldAssetUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
