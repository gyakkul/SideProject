// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGDataFromActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_PCGDataFromActor_generated_h
#error "PCGDataFromActor.generated.h already included, missing '#pragma once' in PCGDataFromActor.h"
#endif
#define PCG_PCGDataFromActor_generated_h

#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_ACCESSORS
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataFromActorSettings(); \
	friend struct Z_Construct_UClass_UPCGDataFromActorSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGDataFromActorSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGDataFromActorSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPCGDataFromActorSettings(); \
	friend struct Z_Construct_UClass_UPCGDataFromActorSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGDataFromActorSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), NO_API) \
	DECLARE_SERIALIZER(UPCGDataFromActorSettings)


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataFromActorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataFromActorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataFromActorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataFromActorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGDataFromActorSettings(UPCGDataFromActorSettings&&); \
	NO_API UPCGDataFromActorSettings(const UPCGDataFromActorSettings&); \
public: \
	NO_API virtual ~UPCGDataFromActorSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataFromActorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPCGDataFromActorSettings(UPCGDataFromActorSettings&&); \
	NO_API UPCGDataFromActorSettings(const UPCGDataFromActorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataFromActorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataFromActorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataFromActorSettings) \
	NO_API virtual ~UPCGDataFromActorSettings();


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_INCLASS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_API UClass* StaticClass<class UPCGDataFromActorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PCG_Source_PCG_Public_Elements_PCGDataFromActor_h


#define FOREACH_ENUM_EPCGGETDATAFROMACTORMODE(op) \
	op(EPCGGetDataFromActorMode::ParseActorComponents) \
	op(EPCGGetDataFromActorMode::GetSinglePoint) \
	op(EPCGGetDataFromActorMode::GetDataFromProperty) \
	op(EPCGGetDataFromActorMode::GetDataFromPCGComponent) \
	op(EPCGGetDataFromActorMode::GetDataFromPCGComponentOrParseComponents) 

enum class EPCGGetDataFromActorMode : uint8;
template<> struct TIsUEnumClass<EPCGGetDataFromActorMode> { enum { Value = true }; };
template<> PCG_API UEnum* StaticEnum<EPCGGetDataFromActorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
