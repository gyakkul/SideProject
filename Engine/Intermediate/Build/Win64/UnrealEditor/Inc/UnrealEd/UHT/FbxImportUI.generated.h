// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/FbxImportUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_FbxImportUI_generated_h
#error "FbxImportUI.generated.h already included, missing '#pragma once' in FbxImportUI.h"
#endif
#define UNREALED_FbxImportUI_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetToDefault);


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetToDefault);


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFbxImportUI(); \
	friend struct Z_Construct_UClass_UFbxImportUI_Statics; \
public: \
	DECLARE_CLASS(UFbxImportUI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxImportUI) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUFbxImportUI(); \
	friend struct Z_Construct_UClass_UFbxImportUI_Statics; \
public: \
	DECLARE_CLASS(UFbxImportUI, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UFbxImportUI) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxImportUI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxImportUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxImportUI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxImportUI(UFbxImportUI&&); \
	UNREALED_API UFbxImportUI(const UFbxImportUI&); \
public: \
	UNREALED_API virtual ~UFbxImportUI();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UFbxImportUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UFbxImportUI(UFbxImportUI&&); \
	UNREALED_API UFbxImportUI(const UFbxImportUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UFbxImportUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFbxImportUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFbxImportUI) \
	UNREALED_API virtual ~UFbxImportUI();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_97_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FbxImportUI."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UFbxImportUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxImportUI_h


#define FOREACH_ENUM_EFBXIMPORTTYPE(op) \
	op(FBXIT_StaticMesh) \
	op(FBXIT_SkeletalMesh) \
	op(FBXIT_Animation) 

enum EFBXImportType : int;
template<> UNREALED_API UEnum* StaticEnum<EFBXImportType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
