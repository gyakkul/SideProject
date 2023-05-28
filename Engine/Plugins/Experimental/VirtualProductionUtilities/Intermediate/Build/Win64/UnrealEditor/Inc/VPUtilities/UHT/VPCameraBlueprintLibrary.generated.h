// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPCameraBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACameraRig_Rail;
class UObject;
struct FVPCameraRigSpawnParams;
#ifdef VPUTILITIES_VPCameraBlueprintLibrary_generated_h
#error "VPCameraBlueprintLibrary.generated.h already included, missing '#pragma once' in VPCameraBlueprintLibrary.h"
#endif
#define VPUTILITIES_VPCameraBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics; \
	VPUTILITIES_API static class UScriptStruct* StaticStruct();


template<> VPUTILITIES_API UScriptStruct* StaticStruct<struct FVPCameraRigSpawnParams>();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnCameraRigFromSelectedActors); \
	DECLARE_FUNCTION(execSpawnCameraRigFromPoints); \
	DECLARE_FUNCTION(execSpawnCameraRigFromActors); \
	DECLARE_FUNCTION(execSpawnDollyTrackFromPointsSmooth); \
	DECLARE_FUNCTION(execSpawnDollyTrackFromPoints);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnCameraRigFromSelectedActors); \
	DECLARE_FUNCTION(execSpawnCameraRigFromPoints); \
	DECLARE_FUNCTION(execSpawnCameraRigFromActors); \
	DECLARE_FUNCTION(execSpawnDollyTrackFromPointsSmooth); \
	DECLARE_FUNCTION(execSpawnDollyTrackFromPoints);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPCameraBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPCameraBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(UVPCameraBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUVPCameraBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPCameraBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPUtilities"), NO_API) \
	DECLARE_SERIALIZER(UVPCameraBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPCameraBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPCameraBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPCameraBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPCameraBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPCameraBlueprintLibrary(UVPCameraBlueprintLibrary&&); \
	NO_API UVPCameraBlueprintLibrary(const UVPCameraBlueprintLibrary&); \
public: \
	NO_API virtual ~UVPCameraBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPCameraBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPCameraBlueprintLibrary(UVPCameraBlueprintLibrary&&); \
	NO_API UVPCameraBlueprintLibrary(const UVPCameraBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPCameraBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPCameraBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPCameraBlueprintLibrary) \
	NO_API virtual ~UVPCameraBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_64_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPUTILITIES_API UClass* StaticClass<class UVPCameraBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h


#define FOREACH_ENUM_EVPCAMERARIGSPAWNLINEARAPPROXIMATIONMODE(op) \
	op(EVPCameraRigSpawnLinearApproximationMode::None) \
	op(EVPCameraRigSpawnLinearApproximationMode::Density) \
	op(EVPCameraRigSpawnLinearApproximationMode::IntegrationStep) 

enum class EVPCameraRigSpawnLinearApproximationMode : uint8;
template<> struct TIsUEnumClass<EVPCameraRigSpawnLinearApproximationMode> { enum { Value = true }; };
template<> VPUTILITIES_API UEnum* StaticEnum<EVPCameraRigSpawnLinearApproximationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
