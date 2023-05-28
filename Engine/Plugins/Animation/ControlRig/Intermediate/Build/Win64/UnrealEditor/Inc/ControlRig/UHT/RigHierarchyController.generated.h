// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rigs/RigHierarchyController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigHierarchy;
class USkeleton;
enum class ERigBoneType : uint8;
struct FRigControlSettings;
struct FRigControlValue;
struct FRigElementKey;
struct FRigRigidBodySettings;
struct FRigVMMirrorSettings;
#ifdef CONTROLRIG_RigHierarchyController_generated_h
#error "RigHierarchyController.generated.h already included, missing '#pragma once' in RigHierarchyController.h"
#endif
#define CONTROLRIG_RigHierarchyController_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMirrorElements); \
	DECLARE_FUNCTION(execDuplicateElements); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execRemoveAllParents); \
	DECLARE_FUNCTION(execRemoveParent); \
	DECLARE_FUNCTION(execAddParent); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execReorderElement); \
	DECLARE_FUNCTION(execRenameElement); \
	DECLARE_FUNCTION(execRemoveElement); \
	DECLARE_FUNCTION(execImportFromText); \
	DECLARE_FUNCTION(execExportToText); \
	DECLARE_FUNCTION(execExportSelectionToText); \
	DECLARE_FUNCTION(execImportCurves); \
	DECLARE_FUNCTION(execImportBones); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execGetControlSettings); \
	DECLARE_FUNCTION(execAddRigidBody); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execAddAnimationChannel_ForBlueprint); \
	DECLARE_FUNCTION(execAddControl_ForBlueprint); \
	DECLARE_FUNCTION(execAddNull); \
	DECLARE_FUNCTION(execAddBone); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execSetHierarchy); \
	DECLARE_FUNCTION(execGetHierarchy);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMirrorElements); \
	DECLARE_FUNCTION(execDuplicateElements); \
	DECLARE_FUNCTION(execSetParent); \
	DECLARE_FUNCTION(execRemoveAllParents); \
	DECLARE_FUNCTION(execRemoveParent); \
	DECLARE_FUNCTION(execAddParent); \
	DECLARE_FUNCTION(execSetDisplayName); \
	DECLARE_FUNCTION(execReorderElement); \
	DECLARE_FUNCTION(execRenameElement); \
	DECLARE_FUNCTION(execRemoveElement); \
	DECLARE_FUNCTION(execImportFromText); \
	DECLARE_FUNCTION(execExportToText); \
	DECLARE_FUNCTION(execExportSelectionToText); \
	DECLARE_FUNCTION(execImportCurves); \
	DECLARE_FUNCTION(execImportBones); \
	DECLARE_FUNCTION(execSetControlSettings); \
	DECLARE_FUNCTION(execGetControlSettings); \
	DECLARE_FUNCTION(execAddRigidBody); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execAddAnimationChannel_ForBlueprint); \
	DECLARE_FUNCTION(execAddControl_ForBlueprint); \
	DECLARE_FUNCTION(execAddNull); \
	DECLARE_FUNCTION(execAddBone); \
	DECLARE_FUNCTION(execClearSelection); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execSetHierarchy); \
	DECLARE_FUNCTION(execGetHierarchy);


#if WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execImportCurvesFromAsset); \
	DECLARE_FUNCTION(execImportBonesFromAsset);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execImportCurvesFromAsset); \
	DECLARE_FUNCTION(execImportBonesFromAsset);


#else
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigHierarchyController, NO_API)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigHierarchyController(); \
	friend struct Z_Construct_UClass_URigHierarchyController_Statics; \
public: \
	DECLARE_CLASS(URigHierarchyController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(URigHierarchyController) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURigHierarchyController(); \
	friend struct Z_Construct_UClass_URigHierarchyController_Statics; \
public: \
	DECLARE_CLASS(URigHierarchyController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRig"), NO_API) \
	DECLARE_SERIALIZER(URigHierarchyController) \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigHierarchyController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigHierarchyController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigHierarchyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchyController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigHierarchyController(URigHierarchyController&&); \
	NO_API URigHierarchyController(const URigHierarchyController&); \
public:


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigHierarchyController(URigHierarchyController&&); \
	NO_API URigHierarchyController(const URigHierarchyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigHierarchyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigHierarchyController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigHierarchyController)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_12_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIG_API UClass* StaticClass<class URigHierarchyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
