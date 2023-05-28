// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/EditorEngine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorEngine_generated_h
#error "EditorEngine.generated.h already included, missing '#pragma once' in EditorEngine.h"
#endif
#define UNREALED_EditorEngine_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCopySelectedInfo_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FCopySelectedInfo>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSelectionStateOfLevel_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


template<> UNREALED_API UScriptStruct* StaticStruct<struct FSelectionStateOfLevel>();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend struct Z_Construct_UClass_UEditorEngine_Statics; \
public: \
	DECLARE_CLASS(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorEngine)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_INCLASS \
private: \
	static void StaticRegisterNativesUEditorEngine(); \
	friend struct Z_Construct_UClass_UEditorEngine_Statics; \
public: \
	DECLARE_CLASS(UEditorEngine, UEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorEngine)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorEngine(UEditorEngine&&); \
	NO_API UEditorEngine(const UEditorEngine&); \
public: \
	NO_API virtual ~UEditorEngine();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorEngine(UEditorEngine&&); \
	NO_API UEditorEngine(const UEditorEngine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEngine) \
	NO_API virtual ~UEditorEngine();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_290_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h_294_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorEngine_h


#define FOREACH_ENUM_EMAPSETBRUSHFLAGS(op) \
	op(MSB_BrushColor) \
	op(MSB_Group) \
	op(MSB_PolyFlags) \
	op(MSB_BrushType) 

enum EMapSetBrushFlags : int;
template<> UNREALED_API UEnum* StaticEnum<EMapSetBrushFlags>();

#define FOREACH_ENUM_EPASTETO(op) \
	op(PT_OriginalLocation) \
	op(PT_Here) \
	op(PT_WorldOrigin) 

enum EPasteTo : int;
template<> UNREALED_API UEnum* StaticEnum<EPasteTo>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
