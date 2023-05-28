// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
class UControlRigBlueprint;
class UEdGraph;
class UObject;
class URigHierarchyController;
class URigVMController;
class URigVMFunctionLibrary;
class URigVMGraph;
class USkeletalMesh;
class UStruct;
struct FRigVMGraphVariableDescription;
#ifdef CONTROLRIGDEVELOPER_ControlRigBlueprint_generated_h
#error "ControlRigBlueprint.generated.h already included, missing '#pragma once' in ControlRigBlueprint.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigBlueprint_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigPublicFunctionArg_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<struct FControlRigPublicFunctionArg>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigPublicFunctionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<struct FControlRigPublicFunctionData>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigGraphDisplaySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<struct FRigGraphDisplaySettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigPythonSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTROLRIGDEVELOPER_API UScriptStruct* StaticStruct<struct FControlRigPythonSettings>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHierarchyController); \
	DECLARE_FUNCTION(execGetAvailableRigUnits); \
	DECLARE_FUNCTION(execCreateControlRig); \
	DECLARE_FUNCTION(execGetControlRigClass); \
	DECLARE_FUNCTION(execGetCurrentlyOpenRigBlueprints); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execGetOrCreateController); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execRemoveModel); \
	DECLARE_FUNCTION(execAddModel); \
	DECLARE_FUNCTION(execGetLocalFunctionLibrary); \
	DECLARE_FUNCTION(execGetAllModels); \
	DECLARE_FUNCTION(execGetDefaultModel); \
	DECLARE_FUNCTION(execGetModel); \
	DECLARE_FUNCTION(execRequestControlRigInit); \
	DECLARE_FUNCTION(execSetAutoVMRecompile); \
	DECLARE_FUNCTION(execRequestAutoVMRecompilation); \
	DECLARE_FUNCTION(execRecompileVMIfRequired); \
	DECLARE_FUNCTION(execRecompileVM); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHierarchyController); \
	DECLARE_FUNCTION(execGetAvailableRigUnits); \
	DECLARE_FUNCTION(execCreateControlRig); \
	DECLARE_FUNCTION(execGetControlRigClass); \
	DECLARE_FUNCTION(execGetCurrentlyOpenRigBlueprints); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execGetOrCreateController); \
	DECLARE_FUNCTION(execGetControllerByName); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execRemoveModel); \
	DECLARE_FUNCTION(execAddModel); \
	DECLARE_FUNCTION(execGetLocalFunctionLibrary); \
	DECLARE_FUNCTION(execGetAllModels); \
	DECLARE_FUNCTION(execGetDefaultModel); \
	DECLARE_FUNCTION(execGetModel); \
	DECLARE_FUNCTION(execRequestControlRigInit); \
	DECLARE_FUNCTION(execSetAutoVMRecompile); \
	DECLARE_FUNCTION(execRequestAutoVMRecompilation); \
	DECLARE_FUNCTION(execRecompileVMIfRequired); \
	DECLARE_FUNCTION(execRecompileVM); \
	DECLARE_FUNCTION(execGetPreviewMesh); \
	DECLARE_FUNCTION(execSetPreviewMesh);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuspendNotifications); \
	DECLARE_FUNCTION(execChangeMemberVariableType); \
	DECLARE_FUNCTION(execRenameMemberVariable); \
	DECLARE_FUNCTION(execRemoveMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execGetMemberVariables);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSuspendNotifications); \
	DECLARE_FUNCTION(execChangeMemberVariableType); \
	DECLARE_FUNCTION(execRenameMemberVariable); \
	DECLARE_FUNCTION(execRemoveMemberVariable); \
	DECLARE_FUNCTION(execAddMemberVariable); \
	DECLARE_FUNCTION(execGetMemberVariables);


#else
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigBlueprint, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigBlueprint(); \
	friend struct Z_Construct_UClass_UControlRigBlueprint_Statics; \
public: \
	DECLARE_CLASS(UControlRigBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), NO_API) \
	DECLARE_SERIALIZER(UControlRigBlueprint) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRigBlueprint*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigBlueprint(); \
	friend struct Z_Construct_UClass_UControlRigBlueprint_Statics; \
public: \
	DECLARE_CLASS(UControlRigBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), NO_API) \
	DECLARE_SERIALIZER(UControlRigBlueprint) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UControlRigBlueprint*>(this); }


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigBlueprint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigBlueprint(UControlRigBlueprint&&); \
	NO_API UControlRigBlueprint(const UControlRigBlueprint&); \
public: \
	NO_API virtual ~UControlRigBlueprint();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigBlueprint(UControlRigBlueprint&&); \
	NO_API UControlRigBlueprint(const UControlRigBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigBlueprint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigBlueprint) \
	NO_API virtual ~UControlRigBlueprint();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_204_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h_207_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ControlRigBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<class UControlRigBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_ControlRigBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
