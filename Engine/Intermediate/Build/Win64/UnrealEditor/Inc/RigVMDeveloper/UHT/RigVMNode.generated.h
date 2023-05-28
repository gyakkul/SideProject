// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMGraph;
class URigVMInjectionInfo;
class URigVMLibraryNode;
class URigVMLink;
class URigVMNode;
class URigVMPin;
enum class ERigVMPinDirection : uint8;
enum class ERigVMUserWorkflowType : uint8;
struct FLinearColor;
struct FRigVMUserWorkflow;
#ifdef RIGVMDEVELOPER_RigVMNode_generated_h
#error "RigVMNode.generated.h already included, missing '#pragma once' in RigVMNode.h"
#endif
#define RIGVMDEVELOPER_RigVMNode_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindFunctionForNode); \
	DECLARE_FUNCTION(execGetNextAggregateName); \
	DECLARE_FUNCTION(execGetAggregateOutputs); \
	DECLARE_FUNCTION(execGetAggregateInputs); \
	DECLARE_FUNCTION(execIsInputAggregate); \
	DECLARE_FUNCTION(execGetOppositeAggregatePin); \
	DECLARE_FUNCTION(execGetSecondAggregatePin); \
	DECLARE_FUNCTION(execGetFirstAggregatePin); \
	DECLARE_FUNCTION(execIsAggregate); \
	DECLARE_FUNCTION(execSetExecutionIsHaltedAtThisNode); \
	DECLARE_FUNCTION(execExecutionIsHaltedAtThisNode); \
	DECLARE_FUNCTION(execSetHasBreakpoint); \
	DECLARE_FUNCTION(execHasBreakpoint); \
	DECLARE_FUNCTION(execGetSupportedWorkflows); \
	DECLARE_FUNCTION(execCanBeUpgraded); \
	DECLARE_FUNCTION(execIsControlFlowNode); \
	DECLARE_FUNCTION(execIsLoopNode); \
	DECLARE_FUNCTION(execGetPreviousFName); \
	DECLARE_FUNCTION(execGetLinkedTargetNodes); \
	DECLARE_FUNCTION(execGetLinkedSourceNodes); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execIsLinkedTo); \
	DECLARE_FUNCTION(execHasPinOfDirection); \
	DECLARE_FUNCTION(execHasOutputPin); \
	DECLARE_FUNCTION(execHasLazyPin); \
	DECLARE_FUNCTION(execHasIOPin); \
	DECLARE_FUNCTION(execHasInputPin); \
	DECLARE_FUNCTION(execCanOnlyExistOnce); \
	DECLARE_FUNCTION(execGetEventName); \
	DECLARE_FUNCTION(execIsEvent); \
	DECLARE_FUNCTION(execIsMutable); \
	DECLARE_FUNCTION(execIsDefinedAsVarying); \
	DECLARE_FUNCTION(execIsDefinedAsConstant); \
	DECLARE_FUNCTION(execIsPure); \
	DECLARE_FUNCTION(execIsVisibleInUI); \
	DECLARE_FUNCTION(execIsInjected); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetNodeColor); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execGetInjectionInfo); \
	DECLARE_FUNCTION(execGetRootGraph); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execHasOrphanedPins); \
	DECLARE_FUNCTION(execGetOrphanedPins); \
	DECLARE_FUNCTION(execFindPin); \
	DECLARE_FUNCTION(execGetAllPinsRecursively); \
	DECLARE_FUNCTION(execGetPins); \
	DECLARE_FUNCTION(execGetNodeIndex); \
	DECLARE_FUNCTION(execGetNodePath);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindFunctionForNode); \
	DECLARE_FUNCTION(execGetNextAggregateName); \
	DECLARE_FUNCTION(execGetAggregateOutputs); \
	DECLARE_FUNCTION(execGetAggregateInputs); \
	DECLARE_FUNCTION(execIsInputAggregate); \
	DECLARE_FUNCTION(execGetOppositeAggregatePin); \
	DECLARE_FUNCTION(execGetSecondAggregatePin); \
	DECLARE_FUNCTION(execGetFirstAggregatePin); \
	DECLARE_FUNCTION(execIsAggregate); \
	DECLARE_FUNCTION(execSetExecutionIsHaltedAtThisNode); \
	DECLARE_FUNCTION(execExecutionIsHaltedAtThisNode); \
	DECLARE_FUNCTION(execSetHasBreakpoint); \
	DECLARE_FUNCTION(execHasBreakpoint); \
	DECLARE_FUNCTION(execGetSupportedWorkflows); \
	DECLARE_FUNCTION(execCanBeUpgraded); \
	DECLARE_FUNCTION(execIsControlFlowNode); \
	DECLARE_FUNCTION(execIsLoopNode); \
	DECLARE_FUNCTION(execGetPreviousFName); \
	DECLARE_FUNCTION(execGetLinkedTargetNodes); \
	DECLARE_FUNCTION(execGetLinkedSourceNodes); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execIsLinkedTo); \
	DECLARE_FUNCTION(execHasPinOfDirection); \
	DECLARE_FUNCTION(execHasOutputPin); \
	DECLARE_FUNCTION(execHasLazyPin); \
	DECLARE_FUNCTION(execHasIOPin); \
	DECLARE_FUNCTION(execHasInputPin); \
	DECLARE_FUNCTION(execCanOnlyExistOnce); \
	DECLARE_FUNCTION(execGetEventName); \
	DECLARE_FUNCTION(execIsEvent); \
	DECLARE_FUNCTION(execIsMutable); \
	DECLARE_FUNCTION(execIsDefinedAsVarying); \
	DECLARE_FUNCTION(execIsDefinedAsConstant); \
	DECLARE_FUNCTION(execIsPure); \
	DECLARE_FUNCTION(execIsVisibleInUI); \
	DECLARE_FUNCTION(execIsInjected); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetNodeColor); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execGetInjectionInfo); \
	DECLARE_FUNCTION(execGetRootGraph); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execHasOrphanedPins); \
	DECLARE_FUNCTION(execGetOrphanedPins); \
	DECLARE_FUNCTION(execFindPin); \
	DECLARE_FUNCTION(execGetAllPinsRecursively); \
	DECLARE_FUNCTION(execGetPins); \
	DECLARE_FUNCTION(execGetNodeIndex); \
	DECLARE_FUNCTION(execGetNodePath);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMNode(); \
	friend struct Z_Construct_UClass_URigVMNode_Statics; \
public: \
	DECLARE_CLASS(URigVMNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_INCLASS \
private: \
	static void StaticRegisterNativesURigVMNode(); \
	friend struct Z_Construct_UClass_URigVMNode_Statics; \
public: \
	DECLARE_CLASS(URigVMNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMNode(URigVMNode&&); \
	NO_API URigVMNode(const URigVMNode&); \
public:


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMNode(URigVMNode&&); \
	NO_API URigVMNode(const URigVMNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMNode)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_22_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
