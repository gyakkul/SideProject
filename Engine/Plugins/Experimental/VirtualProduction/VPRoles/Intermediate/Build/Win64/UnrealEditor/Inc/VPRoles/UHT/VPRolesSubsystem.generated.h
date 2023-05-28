// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPRolesSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VPROLES_VPRolesSubsystem_generated_h
#error "VPRolesSubsystem.generated.h already included, missing '#pragma once' in VPRolesSubsystem.h"
#endif
#define VPROLES_VPRolesSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_25_DELEGATE \
static void FOnRolesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRolesChanged, TArray<FString> const& EnabledRoles);


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllRoles); \
	DECLARE_FUNCTION(execSetActiveRoles); \
	DECLARE_FUNCTION(execGetActiveRolesString); \
	DECLARE_FUNCTION(execHasActiveRole); \
	DECLARE_FUNCTION(execGetActiveRoles);


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllRoles); \
	DECLARE_FUNCTION(execSetActiveRoles); \
	DECLARE_FUNCTION(execGetActiveRolesString); \
	DECLARE_FUNCTION(execHasActiveRole); \
	DECLARE_FUNCTION(execGetActiveRoles);


#if WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveRole); \
	DECLARE_FUNCTION(execAddRole);


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveRole); \
	DECLARE_FUNCTION(execAddRole);


#else
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualProductionRolesSubsystem(); \
	friend struct Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVirtualProductionRolesSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPRoles"), NO_API) \
	DECLARE_SERIALIZER(UVirtualProductionRolesSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualProductionRolesSubsystem(); \
	friend struct Z_Construct_UClass_UVirtualProductionRolesSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVirtualProductionRolesSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPRoles"), NO_API) \
	DECLARE_SERIALIZER(UVirtualProductionRolesSubsystem)


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualProductionRolesSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualProductionRolesSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualProductionRolesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualProductionRolesSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualProductionRolesSubsystem(UVirtualProductionRolesSubsystem&&); \
	NO_API UVirtualProductionRolesSubsystem(const UVirtualProductionRolesSubsystem&); \
public: \
	NO_API virtual ~UVirtualProductionRolesSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualProductionRolesSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualProductionRolesSubsystem(UVirtualProductionRolesSubsystem&&); \
	NO_API UVirtualProductionRolesSubsystem(const UVirtualProductionRolesSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualProductionRolesSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualProductionRolesSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVirtualProductionRolesSubsystem) \
	NO_API virtual ~UVirtualProductionRolesSubsystem();


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPROLES_API UClass* StaticClass<class UVirtualProductionRolesSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProduction_VPRoles_Source_VPRoles_Public_VPRolesSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
