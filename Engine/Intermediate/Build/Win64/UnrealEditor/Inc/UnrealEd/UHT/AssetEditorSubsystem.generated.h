// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/AssetEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EAssetTypeActivationOpenedMethod : uint8;
#ifdef UNREALED_AssetEditorSubsystem_generated_h
#error "AssetEditorSubsystem.generated.h already included, missing '#pragma once' in AssetEditorSubsystem.h"
#endif
#define UNREALED_AssetEditorSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseAllEditorsForAsset); \
	DECLARE_FUNCTION(execOpenEditorForAssets);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseAllEditorsForAsset); \
	DECLARE_FUNCTION(execOpenEditorForAssets);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetEditorSubsystem(); \
	friend struct Z_Construct_UClass_UAssetEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAssetEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetEditorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUAssetEditorSubsystem(); \
	friend struct Z_Construct_UClass_UAssetEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAssetEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetEditorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetEditorSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetEditorSubsystem(UAssetEditorSubsystem&&); \
	NO_API UAssetEditorSubsystem(const UAssetEditorSubsystem&); \
public: \
	NO_API virtual ~UAssetEditorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetEditorSubsystem(UAssetEditorSubsystem&&); \
	NO_API UAssetEditorSubsystem(const UAssetEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetEditorSubsystem) \
	NO_API virtual ~UAssetEditorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_63_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
