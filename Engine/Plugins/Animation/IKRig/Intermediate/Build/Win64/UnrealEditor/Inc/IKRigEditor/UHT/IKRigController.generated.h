// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigEditor/IKRigController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIKRigController;
class UIKRigDefinition;
class UIKRigEffectorGoal;
class UIKRigSolver;
class UObject;
class USkeletalMesh;
struct FBoneChain;
#ifdef IKRIGEDITOR_IKRigController_generated_h
#error "IKRigController.generated.h already included, missing '#pragma once' in IKRigController.h"
#endif
#define IKRIGEDITOR_IKRigController_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRetargetRoot); \
	DECLARE_FUNCTION(execSetRetargetRoot); \
	DECLARE_FUNCTION(execGetRetargetChains); \
	DECLARE_FUNCTION(execGetRetargetChainEndBone); \
	DECLARE_FUNCTION(execGetRetargetChainStartBone); \
	DECLARE_FUNCTION(execGetRetargetChainGoal); \
	DECLARE_FUNCTION(execSetRetargetChainGoal); \
	DECLARE_FUNCTION(execSetRetargetChainEndBone); \
	DECLARE_FUNCTION(execSetRetargetChainStartBone); \
	DECLARE_FUNCTION(execRenameRetargetChain); \
	DECLARE_FUNCTION(execRemoveRetargetChain); \
	DECLARE_FUNCTION(execAddRetargetChain); \
	DECLARE_FUNCTION(execGetRefPoseTransformOfBone); \
	DECLARE_FUNCTION(execGetBoneSettings); \
	DECLARE_FUNCTION(execRemoveBoneSetting); \
	DECLARE_FUNCTION(execAddBoneSetting); \
	DECLARE_FUNCTION(execGetBoneExcluded); \
	DECLARE_FUNCTION(execSetBoneExcluded); \
	DECLARE_FUNCTION(execGetGoalSettingsForSolver); \
	DECLARE_FUNCTION(execGetAllGoals); \
	DECLARE_FUNCTION(execGetGoal); \
	DECLARE_FUNCTION(execIsGoalConnectedToAnySolver); \
	DECLARE_FUNCTION(execIsGoalConnectedToSolver); \
	DECLARE_FUNCTION(execDisconnectGoalFromSolver); \
	DECLARE_FUNCTION(execConnectGoalToSolver); \
	DECLARE_FUNCTION(execGetGoalNameForBone); \
	DECLARE_FUNCTION(execGetBoneForGoal); \
	DECLARE_FUNCTION(execSetGoalBone); \
	DECLARE_FUNCTION(execRenameGoal); \
	DECLARE_FUNCTION(execRemoveGoal); \
	DECLARE_FUNCTION(execAddNewGoal); \
	DECLARE_FUNCTION(execGetEndBone); \
	DECLARE_FUNCTION(execSetEndBone); \
	DECLARE_FUNCTION(execGetRootBone); \
	DECLARE_FUNCTION(execSetRootBone); \
	DECLARE_FUNCTION(execGetSolverEnabled); \
	DECLARE_FUNCTION(execSetSolverEnabled); \
	DECLARE_FUNCTION(execMoveSolverInStack); \
	DECLARE_FUNCTION(execGetNumSolvers); \
	DECLARE_FUNCTION(execGetIndexOfSolver); \
	DECLARE_FUNCTION(execGetSolverAtIndex); \
	DECLARE_FUNCTION(execRemoveSolver); \
	DECLARE_FUNCTION(execAddSolver); \
	DECLARE_FUNCTION(execIsSkeletalMeshCompatible); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execGetController);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRetargetRoot); \
	DECLARE_FUNCTION(execSetRetargetRoot); \
	DECLARE_FUNCTION(execGetRetargetChains); \
	DECLARE_FUNCTION(execGetRetargetChainEndBone); \
	DECLARE_FUNCTION(execGetRetargetChainStartBone); \
	DECLARE_FUNCTION(execGetRetargetChainGoal); \
	DECLARE_FUNCTION(execSetRetargetChainGoal); \
	DECLARE_FUNCTION(execSetRetargetChainEndBone); \
	DECLARE_FUNCTION(execSetRetargetChainStartBone); \
	DECLARE_FUNCTION(execRenameRetargetChain); \
	DECLARE_FUNCTION(execRemoveRetargetChain); \
	DECLARE_FUNCTION(execAddRetargetChain); \
	DECLARE_FUNCTION(execGetRefPoseTransformOfBone); \
	DECLARE_FUNCTION(execGetBoneSettings); \
	DECLARE_FUNCTION(execRemoveBoneSetting); \
	DECLARE_FUNCTION(execAddBoneSetting); \
	DECLARE_FUNCTION(execGetBoneExcluded); \
	DECLARE_FUNCTION(execSetBoneExcluded); \
	DECLARE_FUNCTION(execGetGoalSettingsForSolver); \
	DECLARE_FUNCTION(execGetAllGoals); \
	DECLARE_FUNCTION(execGetGoal); \
	DECLARE_FUNCTION(execIsGoalConnectedToAnySolver); \
	DECLARE_FUNCTION(execIsGoalConnectedToSolver); \
	DECLARE_FUNCTION(execDisconnectGoalFromSolver); \
	DECLARE_FUNCTION(execConnectGoalToSolver); \
	DECLARE_FUNCTION(execGetGoalNameForBone); \
	DECLARE_FUNCTION(execGetBoneForGoal); \
	DECLARE_FUNCTION(execSetGoalBone); \
	DECLARE_FUNCTION(execRenameGoal); \
	DECLARE_FUNCTION(execRemoveGoal); \
	DECLARE_FUNCTION(execAddNewGoal); \
	DECLARE_FUNCTION(execGetEndBone); \
	DECLARE_FUNCTION(execSetEndBone); \
	DECLARE_FUNCTION(execGetRootBone); \
	DECLARE_FUNCTION(execSetRootBone); \
	DECLARE_FUNCTION(execGetSolverEnabled); \
	DECLARE_FUNCTION(execSetSolverEnabled); \
	DECLARE_FUNCTION(execMoveSolverInStack); \
	DECLARE_FUNCTION(execGetNumSolvers); \
	DECLARE_FUNCTION(execGetIndexOfSolver); \
	DECLARE_FUNCTION(execGetSolverAtIndex); \
	DECLARE_FUNCTION(execRemoveSolver); \
	DECLARE_FUNCTION(execAddSolver); \
	DECLARE_FUNCTION(execIsSkeletalMeshCompatible); \
	DECLARE_FUNCTION(execGetSkeletalMesh); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execGetController);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigController(); \
	friend struct Z_Construct_UClass_UIKRigController_Statics; \
public: \
	DECLARE_CLASS(UIKRigController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRigController) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUIKRigController(); \
	friend struct Z_Construct_UClass_UIKRigController_Statics; \
public: \
	DECLARE_CLASS(UIKRigController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IKRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UIKRigController) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRigController(UIKRigController&&); \
	NO_API UIKRigController(const UIKRigController&); \
public: \
	NO_API virtual ~UIKRigController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRigController(UIKRigController&&); \
	NO_API UIKRigController(const UIKRigController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigController) \
	NO_API virtual ~UIKRigController();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_28_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIGEDITOR_API UClass* StaticClass<class UIKRigController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
