// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/UnrealEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef UNREALED_UnrealEditorSubsystem_generated_h
#error "UnrealEditorSubsystem.generated.h already included, missing '#pragma once' in UnrealEditorSubsystem.h"
#endif
#define UNREALED_UnrealEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGameWorld); \
	DECLARE_FUNCTION(execGetEditorWorld); \
	DECLARE_FUNCTION(execSetLevelViewportCameraInfo); \
	DECLARE_FUNCTION(execGetLevelViewportCameraInfo);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealEditorSubsystem(); \
	friend struct Z_Construct_UClass_UUnrealEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUnrealEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEditorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUnrealEditorSubsystem(); \
	friend struct Z_Construct_UClass_UUnrealEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUnrealEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEditorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEditorSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnrealEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealEditorSubsystem(UUnrealEditorSubsystem&&); \
	NO_API UUnrealEditorSubsystem(const UUnrealEditorSubsystem&); \
public: \
	NO_API virtual ~UUnrealEditorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnrealEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnrealEditorSubsystem(UUnrealEditorSubsystem&&); \
	NO_API UUnrealEditorSubsystem(const UUnrealEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnrealEditorSubsystem) \
	NO_API virtual ~UUnrealEditorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UUnrealEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_UnrealEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
