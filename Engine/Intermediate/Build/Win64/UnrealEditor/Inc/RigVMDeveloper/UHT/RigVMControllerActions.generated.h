// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMControllerActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMController;
#ifdef RIGVMDEVELOPER_RigVMControllerActions_generated_h
#error "RigVMControllerActions.generated.h already included, missing '#pragma once' in RigVMControllerActions.h"
#endif
#define RIGVMDEVELOPER_RigVMControllerActions_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMActionKey_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMActionKey>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMBaseAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMBaseAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execCancelUndoBracket); \
	DECLARE_FUNCTION(execCloseUndoBracket); \
	DECLARE_FUNCTION(execOpenUndoBracket);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execCancelUndoBracket); \
	DECLARE_FUNCTION(execCloseUndoBracket); \
	DECLARE_FUNCTION(execOpenUndoBracket);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMActionStack(); \
	friend struct Z_Construct_UClass_URigVMActionStack_Statics; \
public: \
	DECLARE_CLASS(URigVMActionStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMActionStack)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_INCLASS \
private: \
	static void StaticRegisterNativesURigVMActionStack(); \
	friend struct Z_Construct_UClass_URigVMActionStack_Statics; \
public: \
	DECLARE_CLASS(URigVMActionStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMActionStack)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMActionStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMActionStack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMActionStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMActionStack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMActionStack(URigVMActionStack&&); \
	NO_API URigVMActionStack(const URigVMActionStack&); \
public:


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMActionStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMActionStack(URigVMActionStack&&); \
	NO_API URigVMActionStack(const URigVMActionStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMActionStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMActionStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMActionStack)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_168_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_171_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMActionStack>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_373_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMInverseAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMInverseAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_388_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddUnitNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddUnitNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_418_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddVariableNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddVariableNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddCommentNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddCommentNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddRerouteNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddRerouteNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddEnumNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddEnumNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_562_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddTemplateNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddTemplateNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_589_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMInjectNodeIntoPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMInjectNodeIntoPinAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_622_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRemoveNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRemoveNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_643_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodeSelectionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodeSelectionAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_667_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodePositionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodePositionAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_698_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodeSizeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodeSizeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_729_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodeColorAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodeColorAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_760_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodeCategoryAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodeCategoryAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_792_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodeKeywordsAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodeKeywordsAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_823_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetNodeDescriptionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetNodeDescriptionAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_854_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetCommentTextAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetCommentTextAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_899_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetRerouteCompactnessAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetRerouteCompactnessAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_926_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRenameVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRenameVariableAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_950_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetPinExpansionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetPinExpansionAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_982_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetPinWatchAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetPinWatchAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1013_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetPinDefaultValueAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetPinDefaultValueAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1041_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetTemplateFilteredPermutationsAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetTemplateFilteredPermutationsAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1069_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetPreferredTemplatePermutationsAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetPreferredTemplatePermutationsAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1097_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetLibraryTemplateAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetLibraryTemplateAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMInsertArrayPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMInsertArrayPinAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRemoveArrayPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRemoveArrayPinAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddLinkAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddLinkAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMBreakLinkAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMBreakLinkAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMChangePinTypeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMChangePinTypeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1270_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMImportNodeFromTextAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMImportNodeFromTextAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMCollapseNodesAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMCollapseNodesAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1330_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMExpandNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMExpandNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1360_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRenameNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRenameNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1384_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMPushGraphAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMPushGraphAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1405_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMPopGraphAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMPopGraphAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1427_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddExposedPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddExposedPinAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1460_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRemoveExposedPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRemoveExposedPinAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1496_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRenameExposedPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRenameExposedPinAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1520_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetPinIndexAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetPinIndexAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1547_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMSetRemappedVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMSetRemappedVariableAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1578_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddLocalVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddLocalVariableAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1599_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRemoveLocalVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRemoveLocalVariableAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1620_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMRenameLocalVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMRenameLocalVariableAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1644_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMChangeLocalVariableTypeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMChangeLocalVariableTypeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1670_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMChangeLocalVariableDefaultValueAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMChangeLocalVariableDefaultValueAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1693_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMPromoteNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMPromoteNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1720_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMAddInvokeEntryNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMAddInvokeEntryNodeAction>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1747_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMMarkFunctionPublicAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMMarkFunctionPublicAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
