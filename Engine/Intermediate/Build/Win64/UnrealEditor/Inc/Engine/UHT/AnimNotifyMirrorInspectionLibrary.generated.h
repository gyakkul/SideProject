// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifyMirrorInspectionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMirrorDataTable;
struct FAnimNotifyEventReference;
#ifdef ENGINE_AnimNotifyMirrorInspectionLibrary_generated_h
#error "AnimNotifyMirrorInspectionLibrary.generated.h already included, missing '#pragma once' in AnimNotifyMirrorInspectionLibrary.h"
#endif
#define ENGINE_AnimNotifyMirrorInspectionLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execIsTriggeredByMirroredAnimation);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execIsTriggeredByMirroredAnimation);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary(); \
	friend struct Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyMirrorInspectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyMirrorInspectionLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyMirrorInspectionLibrary(); \
	friend struct Z_Construct_UClass_UAnimNotifyMirrorInspectionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyMirrorInspectionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyMirrorInspectionLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyMirrorInspectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyMirrorInspectionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyMirrorInspectionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyMirrorInspectionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyMirrorInspectionLibrary(UAnimNotifyMirrorInspectionLibrary&&); \
	NO_API UAnimNotifyMirrorInspectionLibrary(const UAnimNotifyMirrorInspectionLibrary&); \
public: \
	NO_API virtual ~UAnimNotifyMirrorInspectionLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyMirrorInspectionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyMirrorInspectionLibrary(UAnimNotifyMirrorInspectionLibrary&&); \
	NO_API UAnimNotifyMirrorInspectionLibrary(const UAnimNotifyMirrorInspectionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyMirrorInspectionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyMirrorInspectionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyMirrorInspectionLibrary) \
	NO_API virtual ~UAnimNotifyMirrorInspectionLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyMirrorInspectionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyMirrorInspectionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
