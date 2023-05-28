// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorActorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UObject;
class USceneComponent;
class UWorld;
#ifdef UNREALED_EditorActorSubsystem_generated_h
#error "EditorActorSubsystem.generated.h already included, missing '#pragma once' in EditorActorSubsystem.h"
#endif
#define UNREALED_EditorActorSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_15_DELEGATE \
UNREALED_API void FOnEditNewActorsDropped_DelegateWrapper(const FMulticastScriptDelegate& OnEditNewActorsDropped, TArray<UObject*> const& DroppedObjects, TArray<AActor*> const& DroppedActors);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_17_DELEGATE \
UNREALED_API void FOnEditNewActorsPlaced_DelegateWrapper(const FMulticastScriptDelegate& OnEditNewActorsPlaced, UObject* ObjToUse, TArray<AActor*> const& PlacedActors);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_19_DELEGATE \
UNREALED_API void FOnEditCutActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnEditCutActorsBegin);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_21_DELEGATE \
UNREALED_API void FOnEditCutActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnEditCutActorsEnd);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_23_DELEGATE \
UNREALED_API void FOnEditCopyActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnEditCopyActorsBegin);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_25_DELEGATE \
UNREALED_API void FOnEditCopyActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnEditCopyActorsEnd);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_27_DELEGATE \
UNREALED_API void FOnEditPasteActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnEditPasteActorsBegin);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_29_DELEGATE \
UNREALED_API void FOnEditPasteActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnEditPasteActorsEnd);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_31_DELEGATE \
UNREALED_API void FOnDuplicateActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnDuplicateActorsBegin);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_33_DELEGATE \
UNREALED_API void FOnDuplicateActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDuplicateActorsEnd);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_35_DELEGATE \
UNREALED_API void FOnDeleteActorsBegin_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteActorsBegin);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_37_DELEGATE \
UNREALED_API void FOnDeleteActorsEnd_DelegateWrapper(const FMulticastScriptDelegate& OnDeleteActorsEnd);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetComponentTransform); \
	DECLARE_FUNCTION(execSetActorTransform); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execDestroyActors); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors); \
	DECLARE_FUNCTION(execSelectAllChildren); \
	DECLARE_FUNCTION(execSelectAll); \
	DECLARE_FUNCTION(execInvertSelection); \
	DECLARE_FUNCTION(execDeleteSelectedActors); \
	DECLARE_FUNCTION(execDuplicateSelectedActors); \
	DECLARE_FUNCTION(execDuplicateActors); \
	DECLARE_FUNCTION(execDuplicateActor);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetComponentTransform); \
	DECLARE_FUNCTION(execSetActorTransform); \
	DECLARE_FUNCTION(execConvertActors); \
	DECLARE_FUNCTION(execDestroyActors); \
	DECLARE_FUNCTION(execDestroyActor); \
	DECLARE_FUNCTION(execSpawnActorFromClass); \
	DECLARE_FUNCTION(execSpawnActorFromObject); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execSetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetSelectedLevelActors); \
	DECLARE_FUNCTION(execGetAllLevelActorsComponents); \
	DECLARE_FUNCTION(execGetAllLevelActors); \
	DECLARE_FUNCTION(execSelectAllChildren); \
	DECLARE_FUNCTION(execSelectAll); \
	DECLARE_FUNCTION(execInvertSelection); \
	DECLARE_FUNCTION(execDeleteSelectedActors); \
	DECLARE_FUNCTION(execDuplicateSelectedActors); \
	DECLARE_FUNCTION(execDuplicateActors); \
	DECLARE_FUNCTION(execDuplicateActor);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorActorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorActorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorActorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorActorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUEditorActorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorActorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorActorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorActorSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorActorSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorActorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorActorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorActorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorActorSubsystem(UEditorActorSubsystem&&); \
	NO_API UEditorActorSubsystem(const UEditorActorSubsystem&); \
public: \
	NO_API virtual ~UEditorActorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorActorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorActorSubsystem(UEditorActorSubsystem&&); \
	NO_API UEditorActorSubsystem(const UEditorActorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorActorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorActorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorActorSubsystem) \
	NO_API virtual ~UEditorActorSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorActorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorActorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
