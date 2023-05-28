// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubobjectDataSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UBlueprint;
class UObject;
struct FAddNewSubobjectParams;
struct FReparentSubobjectParams;
struct FSubobjectData;
struct FSubobjectDataHandle;
#ifdef SUBOBJECTDATAINTERFACE_SubobjectDataSubsystem_generated_h
#error "SubobjectDataSubsystem.generated.h already included, missing '#pragma once' in SubobjectDataSubsystem.h"
#endif
#define SUBOBJECTDATAINTERFACE_SubobjectDataSubsystem_generated_h

#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics; \
	SUBOBJECTDATAINTERFACE_API static class UScriptStruct* StaticStruct();


template<> SUBOBJECTDATAINTERFACE_API UScriptStruct* StaticStruct<struct FAddNewSubobjectParams>();

#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics; \
	SUBOBJECTDATAINTERFACE_API static class UScriptStruct* StaticStruct();


template<> SUBOBJECTDATAINTERFACE_API UScriptStruct* StaticStruct<struct FReparentSubobjectParams>();

#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_SPARSE_DATA
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenameSubobjectMemberVariable); \
	DECLARE_FUNCTION(execCanPasteSubobjects); \
	DECLARE_FUNCTION(execCopySubobjects); \
	DECLARE_FUNCTION(execCanCopySubobjects); \
	DECLARE_FUNCTION(execIsValidRename); \
	DECLARE_FUNCTION(execAttachSubobject); \
	DECLARE_FUNCTION(execDetachSubobject); \
	DECLARE_FUNCTION(execReparentSubobjects); \
	DECLARE_FUNCTION(execMakeNewSceneRoot); \
	DECLARE_FUNCTION(execReparentSubobject); \
	DECLARE_FUNCTION(execChangeSubobjectClass); \
	DECLARE_FUNCTION(execRenameSubobject); \
	DECLARE_FUNCTION(execK2_DeleteSubobjectFromInstance); \
	DECLARE_FUNCTION(execDeleteSubobject); \
	DECLARE_FUNCTION(execK2_DeleteSubobjectsFromInstance); \
	DECLARE_FUNCTION(execDeleteSubobjects); \
	DECLARE_FUNCTION(execAddNewSubobject); \
	DECLARE_FUNCTION(execCreateNewBPComponent); \
	DECLARE_FUNCTION(execCreateNewCPPComponent); \
	DECLARE_FUNCTION(execFindHandleForObject); \
	DECLARE_FUNCTION(execK2_FindSubobjectDataFromHandle); \
	DECLARE_FUNCTION(execK2_GatherSubobjectDataForInstance); \
	DECLARE_FUNCTION(execK2_GatherSubobjectDataForBlueprint);


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenameSubobjectMemberVariable); \
	DECLARE_FUNCTION(execCanPasteSubobjects); \
	DECLARE_FUNCTION(execCopySubobjects); \
	DECLARE_FUNCTION(execCanCopySubobjects); \
	DECLARE_FUNCTION(execIsValidRename); \
	DECLARE_FUNCTION(execAttachSubobject); \
	DECLARE_FUNCTION(execDetachSubobject); \
	DECLARE_FUNCTION(execReparentSubobjects); \
	DECLARE_FUNCTION(execMakeNewSceneRoot); \
	DECLARE_FUNCTION(execReparentSubobject); \
	DECLARE_FUNCTION(execChangeSubobjectClass); \
	DECLARE_FUNCTION(execRenameSubobject); \
	DECLARE_FUNCTION(execK2_DeleteSubobjectFromInstance); \
	DECLARE_FUNCTION(execDeleteSubobject); \
	DECLARE_FUNCTION(execK2_DeleteSubobjectsFromInstance); \
	DECLARE_FUNCTION(execDeleteSubobjects); \
	DECLARE_FUNCTION(execAddNewSubobject); \
	DECLARE_FUNCTION(execCreateNewBPComponent); \
	DECLARE_FUNCTION(execCreateNewCPPComponent); \
	DECLARE_FUNCTION(execFindHandleForObject); \
	DECLARE_FUNCTION(execK2_FindSubobjectDataFromHandle); \
	DECLARE_FUNCTION(execK2_GatherSubobjectDataForInstance); \
	DECLARE_FUNCTION(execK2_GatherSubobjectDataForBlueprint);


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_ACCESSORS
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubobjectDataSubsystem(); \
	friend struct Z_Construct_UClass_USubobjectDataSubsystem_Statics; \
public: \
	DECLARE_CLASS(USubobjectDataSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubobjectDataInterface"), NO_API) \
	DECLARE_SERIALIZER(USubobjectDataSubsystem)


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_INCLASS \
private: \
	static void StaticRegisterNativesUSubobjectDataSubsystem(); \
	friend struct Z_Construct_UClass_USubobjectDataSubsystem_Statics; \
public: \
	DECLARE_CLASS(USubobjectDataSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubobjectDataInterface"), NO_API) \
	DECLARE_SERIALIZER(USubobjectDataSubsystem)


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectDataSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubobjectDataSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectDataSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubobjectDataSubsystem(USubobjectDataSubsystem&&); \
	NO_API USubobjectDataSubsystem(const USubobjectDataSubsystem&); \
public: \
	NO_API virtual ~USubobjectDataSubsystem();


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubobjectDataSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubobjectDataSubsystem(USubobjectDataSubsystem&&); \
	NO_API USubobjectDataSubsystem(const USubobjectDataSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubobjectDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubobjectDataSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USubobjectDataSubsystem) \
	NO_API virtual ~USubobjectDataSubsystem();


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_93_PROLOG
#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_SPARSE_DATA \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_RPC_WRAPPERS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_ACCESSORS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_INCLASS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_SPARSE_DATA \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_ACCESSORS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_96_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBOBJECTDATAINTERFACE_API UClass* StaticClass<class USubobjectDataSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
