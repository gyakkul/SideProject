// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMCollapseNode;
class URigVMCommentNode;
class URigVMEnumNode;
class URigVMFunctionReferenceNode;
class URigVMGraph;
class URigVMInjectionInfo;
class URigVMInvokeEntryNode;
class URigVMLibraryNode;
class URigVMLink;
class URigVMNode;
class URigVMParameterNode;
class URigVMRerouteNode;
class URigVMTemplateNode;
class URigVMUnitNode;
class URigVMUserWorkflowOptions;
class URigVMVariableNode;
class UScriptStruct;
enum class ERigVMOpCode : uint8;
enum class ERigVMPinDirection : uint8;
struct FLinearColor;
struct FRigVMGraphFunctionHeader;
struct FRigVMGraphFunctionIdentifier;
struct FRigVMGraphFunctionIdentifier; class URigVMLibraryNode;
struct FRigVMGraphVariableDescription;
struct FRigVMUserWorkflow;
#ifdef RIGVMDEVELOPER_RigVMController_generated_h
#error "RigVMController.generated.h already included, missing '#pragma once' in RigVMController.h"
#endif
#define RIGVMDEVELOPER_RigVMController_generated_h

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigStructScope_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigStructScope>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMClientPatchResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMClientPatchResult>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsRunningUnitTest); \
	DECLARE_FUNCTION(execPerformUserWorkflow); \
	DECLARE_FUNCTION(execMakeOptionsForWorkflow); \
	DECLARE_FUNCTION(execSetLocalVariableDefaultValue); \
	DECLARE_FUNCTION(execSetLocalVariableTypeFromObjectPath); \
	DECLARE_FUNCTION(execSetLocalVariableType); \
	DECLARE_FUNCTION(execRenameLocalVariable); \
	DECLARE_FUNCTION(execRemoveLocalVariable); \
	DECLARE_FUNCTION(execAddLocalVariableFromObjectPath); \
	DECLARE_FUNCTION(execAddLocalVariable); \
	DECLARE_FUNCTION(execIsFunctionPublic); \
	DECLARE_FUNCTION(execMarkFunctionAsPublic); \
	DECLARE_FUNCTION(execRenameFunction); \
	DECLARE_FUNCTION(execRemoveFunctionFromLibrary); \
	DECLARE_FUNCTION(execAddFunctionToLibrary); \
	DECLARE_FUNCTION(execSetRemappedVariable); \
	DECLARE_FUNCTION(execAddFunctionReferenceNode); \
	DECLARE_FUNCTION(execAddExternalFunctionReferenceNode); \
	DECLARE_FUNCTION(execAddFunctionReferenceNodeFromDescription); \
	DECLARE_FUNCTION(execSetExposedPinIndex); \
	DECLARE_FUNCTION(execChangeExposedPinType); \
	DECLARE_FUNCTION(execRenameExposedPin); \
	DECLARE_FUNCTION(execRemoveExposedPin); \
	DECLARE_FUNCTION(execAddExposedPin); \
	DECLARE_FUNCTION(execBreakAllLinks); \
	DECLARE_FUNCTION(execBreakLink); \
	DECLARE_FUNCTION(execAddLink); \
	DECLARE_FUNCTION(execPromotePinToVariable); \
	DECLARE_FUNCTION(execMakeVariableNodeFromBinding); \
	DECLARE_FUNCTION(execMakeBindingsFromVariableNode); \
	DECLARE_FUNCTION(execUnbindPinFromVariable); \
	DECLARE_FUNCTION(execBindPinToVariable); \
	DECLARE_FUNCTION(execSetArrayPinSize); \
	DECLARE_FUNCTION(execClearArrayPin); \
	DECLARE_FUNCTION(execRemoveArrayPin); \
	DECLARE_FUNCTION(execInsertArrayPin); \
	DECLARE_FUNCTION(execDuplicateArrayPin); \
	DECLARE_FUNCTION(execAddArrayPin); \
	DECLARE_FUNCTION(execRemoveAggregatePin); \
	DECLARE_FUNCTION(execAddAggregatePin); \
	DECLARE_FUNCTION(execResetPinDefaultValue); \
	DECLARE_FUNCTION(execSetPinDefaultValue); \
	DECLARE_FUNCTION(execGetPinDefaultValue); \
	DECLARE_FUNCTION(execSetPinIsWatched); \
	DECLARE_FUNCTION(execSetPinExpansion); \
	DECLARE_FUNCTION(execRenameParameter); \
	DECLARE_FUNCTION(execRenameVariable); \
	DECLARE_FUNCTION(execSetRerouteCompactnessByName); \
	DECLARE_FUNCTION(execSetRerouteCompactness); \
	DECLARE_FUNCTION(execSetCommentTextByName); \
	DECLARE_FUNCTION(execSetCommentText); \
	DECLARE_FUNCTION(execSetNodeDescriptionByName); \
	DECLARE_FUNCTION(execSetNodeDescription); \
	DECLARE_FUNCTION(execSetNodeKeywordsByName); \
	DECLARE_FUNCTION(execSetNodeKeywords); \
	DECLARE_FUNCTION(execSetNodeCategoryByName); \
	DECLARE_FUNCTION(execSetNodeCategory); \
	DECLARE_FUNCTION(execSetNodeColorByName); \
	DECLARE_FUNCTION(execSetNodeColor); \
	DECLARE_FUNCTION(execSetNodeSizeByName); \
	DECLARE_FUNCTION(execSetNodeSize); \
	DECLARE_FUNCTION(execSetNodePositionByName); \
	DECLARE_FUNCTION(execSetNodePosition); \
	DECLARE_FUNCTION(execSetNodeSelection); \
	DECLARE_FUNCTION(execClearNodeSelection); \
	DECLARE_FUNCTION(execSelectNodeByName); \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execRenameNode); \
	DECLARE_FUNCTION(execRemoveNodeByName); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execIsReportingEnabled); \
	DECLARE_FUNCTION(execEnableReporting); \
	DECLARE_FUNCTION(execGetTopLevelGraph); \
	DECLARE_FUNCTION(execPopGraph); \
	DECLARE_FUNCTION(execPushGraph); \
	DECLARE_FUNCTION(execSetGraph); \
	DECLARE_FUNCTION(execGetGraph);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsRunningUnitTest); \
	DECLARE_FUNCTION(execPerformUserWorkflow); \
	DECLARE_FUNCTION(execMakeOptionsForWorkflow); \
	DECLARE_FUNCTION(execSetLocalVariableDefaultValue); \
	DECLARE_FUNCTION(execSetLocalVariableTypeFromObjectPath); \
	DECLARE_FUNCTION(execSetLocalVariableType); \
	DECLARE_FUNCTION(execRenameLocalVariable); \
	DECLARE_FUNCTION(execRemoveLocalVariable); \
	DECLARE_FUNCTION(execAddLocalVariableFromObjectPath); \
	DECLARE_FUNCTION(execAddLocalVariable); \
	DECLARE_FUNCTION(execIsFunctionPublic); \
	DECLARE_FUNCTION(execMarkFunctionAsPublic); \
	DECLARE_FUNCTION(execRenameFunction); \
	DECLARE_FUNCTION(execRemoveFunctionFromLibrary); \
	DECLARE_FUNCTION(execAddFunctionToLibrary); \
	DECLARE_FUNCTION(execSetRemappedVariable); \
	DECLARE_FUNCTION(execAddFunctionReferenceNode); \
	DECLARE_FUNCTION(execAddExternalFunctionReferenceNode); \
	DECLARE_FUNCTION(execAddFunctionReferenceNodeFromDescription); \
	DECLARE_FUNCTION(execSetExposedPinIndex); \
	DECLARE_FUNCTION(execChangeExposedPinType); \
	DECLARE_FUNCTION(execRenameExposedPin); \
	DECLARE_FUNCTION(execRemoveExposedPin); \
	DECLARE_FUNCTION(execAddExposedPin); \
	DECLARE_FUNCTION(execBreakAllLinks); \
	DECLARE_FUNCTION(execBreakLink); \
	DECLARE_FUNCTION(execAddLink); \
	DECLARE_FUNCTION(execPromotePinToVariable); \
	DECLARE_FUNCTION(execMakeVariableNodeFromBinding); \
	DECLARE_FUNCTION(execMakeBindingsFromVariableNode); \
	DECLARE_FUNCTION(execUnbindPinFromVariable); \
	DECLARE_FUNCTION(execBindPinToVariable); \
	DECLARE_FUNCTION(execSetArrayPinSize); \
	DECLARE_FUNCTION(execClearArrayPin); \
	DECLARE_FUNCTION(execRemoveArrayPin); \
	DECLARE_FUNCTION(execInsertArrayPin); \
	DECLARE_FUNCTION(execDuplicateArrayPin); \
	DECLARE_FUNCTION(execAddArrayPin); \
	DECLARE_FUNCTION(execRemoveAggregatePin); \
	DECLARE_FUNCTION(execAddAggregatePin); \
	DECLARE_FUNCTION(execResetPinDefaultValue); \
	DECLARE_FUNCTION(execSetPinDefaultValue); \
	DECLARE_FUNCTION(execGetPinDefaultValue); \
	DECLARE_FUNCTION(execSetPinIsWatched); \
	DECLARE_FUNCTION(execSetPinExpansion); \
	DECLARE_FUNCTION(execRenameParameter); \
	DECLARE_FUNCTION(execRenameVariable); \
	DECLARE_FUNCTION(execSetRerouteCompactnessByName); \
	DECLARE_FUNCTION(execSetRerouteCompactness); \
	DECLARE_FUNCTION(execSetCommentTextByName); \
	DECLARE_FUNCTION(execSetCommentText); \
	DECLARE_FUNCTION(execSetNodeDescriptionByName); \
	DECLARE_FUNCTION(execSetNodeDescription); \
	DECLARE_FUNCTION(execSetNodeKeywordsByName); \
	DECLARE_FUNCTION(execSetNodeKeywords); \
	DECLARE_FUNCTION(execSetNodeCategoryByName); \
	DECLARE_FUNCTION(execSetNodeCategory); \
	DECLARE_FUNCTION(execSetNodeColorByName); \
	DECLARE_FUNCTION(execSetNodeColor); \
	DECLARE_FUNCTION(execSetNodeSizeByName); \
	DECLARE_FUNCTION(execSetNodeSize); \
	DECLARE_FUNCTION(execSetNodePositionByName); \
	DECLARE_FUNCTION(execSetNodePosition); \
	DECLARE_FUNCTION(execSetNodeSelection); \
	DECLARE_FUNCTION(execClearNodeSelection); \
	DECLARE_FUNCTION(execSelectNodeByName); \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execRenameNode); \
	DECLARE_FUNCTION(execRemoveNodeByName); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execIsReportingEnabled); \
	DECLARE_FUNCTION(execEnableReporting); \
	DECLARE_FUNCTION(execGetTopLevelGraph); \
	DECLARE_FUNCTION(execPopGraph); \
	DECLARE_FUNCTION(execPushGraph); \
	DECLARE_FUNCTION(execSetGraph); \
	DECLARE_FUNCTION(execGetGraph);


#if WITH_EDITOR
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPromoteFunctionReferenceNodeToCollapseNode); \
	DECLARE_FUNCTION(execPromoteCollapseNodeToFunctionReferenceNode); \
	DECLARE_FUNCTION(execExpandLibraryNode); \
	DECLARE_FUNCTION(execCollapseNodes); \
	DECLARE_FUNCTION(execLocalizeFunctions); \
	DECLARE_FUNCTION(execLocalizeFunction); \
	DECLARE_FUNCTION(execLocalizeFunctionFromPath); \
	DECLARE_FUNCTION(execImportNodesFromText); \
	DECLARE_FUNCTION(execCanImportNodesFromText); \
	DECLARE_FUNCTION(execExportSelectedNodesToText); \
	DECLARE_FUNCTION(execExportNodesToText); \
	DECLARE_FUNCTION(execCancelUndoBracket); \
	DECLARE_FUNCTION(execCloseUndoBracket); \
	DECLARE_FUNCTION(execOpenUndoBracket); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execAddInvokeEntryNode); \
	DECLARE_FUNCTION(execAddArrayNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddArrayNode); \
	DECLARE_FUNCTION(execAddEnumNode); \
	DECLARE_FUNCTION(execEjectNodeFromPin); \
	DECLARE_FUNCTION(execRemoveInjectedNode); \
	DECLARE_FUNCTION(execAddInjectedNodeFromStructPath); \
	DECLARE_FUNCTION(execAddInjectedNode); \
	DECLARE_FUNCTION(execResolveWildCardPin); \
	DECLARE_FUNCTION(execGetTemplateForUnitStruct); \
	DECLARE_FUNCTION(execGetUnitStructsForTemplate); \
	DECLARE_FUNCTION(execGetRegisteredTemplates); \
	DECLARE_FUNCTION(execGetRegisteredUnitStructs); \
	DECLARE_FUNCTION(execAddTemplateNode); \
	DECLARE_FUNCTION(execAddSelectNodeFromStruct); \
	DECLARE_FUNCTION(execAddSelectNode); \
	DECLARE_FUNCTION(execAddIfNodeFromStruct); \
	DECLARE_FUNCTION(execAddIfNode); \
	DECLARE_FUNCTION(execAddBranchNode); \
	DECLARE_FUNCTION(execAddFreeRerouteNode); \
	DECLARE_FUNCTION(execAddRerouteNodeOnPin); \
	DECLARE_FUNCTION(execAddRerouteNodeOnLinkPath); \
	DECLARE_FUNCTION(execAddRerouteNodeOnLink); \
	DECLARE_FUNCTION(execAddCommentNode); \
	DECLARE_FUNCTION(execAddParameterNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddParameterNode); \
	DECLARE_FUNCTION(execUpgradeNodes); \
	DECLARE_FUNCTION(execUnresolveTemplateNodes); \
	DECLARE_FUNCTION(execReplaceParameterNodeWithVariable); \
	DECLARE_FUNCTION(execRefreshVariableNode); \
	DECLARE_FUNCTION(execAddVariableNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddVariableNode); \
	DECLARE_FUNCTION(execSetUnitNodeDefaults); \
	DECLARE_FUNCTION(execAddUnitNodeWithDefaults); \
	DECLARE_FUNCTION(execAddUnitNodeFromStructPath); \
	DECLARE_FUNCTION(execAddUnitNode);


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPromoteFunctionReferenceNodeToCollapseNode); \
	DECLARE_FUNCTION(execPromoteCollapseNodeToFunctionReferenceNode); \
	DECLARE_FUNCTION(execExpandLibraryNode); \
	DECLARE_FUNCTION(execCollapseNodes); \
	DECLARE_FUNCTION(execLocalizeFunctions); \
	DECLARE_FUNCTION(execLocalizeFunction); \
	DECLARE_FUNCTION(execLocalizeFunctionFromPath); \
	DECLARE_FUNCTION(execImportNodesFromText); \
	DECLARE_FUNCTION(execCanImportNodesFromText); \
	DECLARE_FUNCTION(execExportSelectedNodesToText); \
	DECLARE_FUNCTION(execExportNodesToText); \
	DECLARE_FUNCTION(execCancelUndoBracket); \
	DECLARE_FUNCTION(execCloseUndoBracket); \
	DECLARE_FUNCTION(execOpenUndoBracket); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execAddInvokeEntryNode); \
	DECLARE_FUNCTION(execAddArrayNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddArrayNode); \
	DECLARE_FUNCTION(execAddEnumNode); \
	DECLARE_FUNCTION(execEjectNodeFromPin); \
	DECLARE_FUNCTION(execRemoveInjectedNode); \
	DECLARE_FUNCTION(execAddInjectedNodeFromStructPath); \
	DECLARE_FUNCTION(execAddInjectedNode); \
	DECLARE_FUNCTION(execResolveWildCardPin); \
	DECLARE_FUNCTION(execGetTemplateForUnitStruct); \
	DECLARE_FUNCTION(execGetUnitStructsForTemplate); \
	DECLARE_FUNCTION(execGetRegisteredTemplates); \
	DECLARE_FUNCTION(execGetRegisteredUnitStructs); \
	DECLARE_FUNCTION(execAddTemplateNode); \
	DECLARE_FUNCTION(execAddSelectNodeFromStruct); \
	DECLARE_FUNCTION(execAddSelectNode); \
	DECLARE_FUNCTION(execAddIfNodeFromStruct); \
	DECLARE_FUNCTION(execAddIfNode); \
	DECLARE_FUNCTION(execAddBranchNode); \
	DECLARE_FUNCTION(execAddFreeRerouteNode); \
	DECLARE_FUNCTION(execAddRerouteNodeOnPin); \
	DECLARE_FUNCTION(execAddRerouteNodeOnLinkPath); \
	DECLARE_FUNCTION(execAddRerouteNodeOnLink); \
	DECLARE_FUNCTION(execAddCommentNode); \
	DECLARE_FUNCTION(execAddParameterNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddParameterNode); \
	DECLARE_FUNCTION(execUpgradeNodes); \
	DECLARE_FUNCTION(execUnresolveTemplateNodes); \
	DECLARE_FUNCTION(execReplaceParameterNodeWithVariable); \
	DECLARE_FUNCTION(execRefreshVariableNode); \
	DECLARE_FUNCTION(execAddVariableNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddVariableNode); \
	DECLARE_FUNCTION(execSetUnitNodeDefaults); \
	DECLARE_FUNCTION(execAddUnitNodeWithDefaults); \
	DECLARE_FUNCTION(execAddUnitNodeFromStructPath); \
	DECLARE_FUNCTION(execAddUnitNode);


#else
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMController(); \
	friend struct Z_Construct_UClass_URigVMController_Statics; \
public: \
	DECLARE_CLASS(URigVMController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMController)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_INCLASS \
private: \
	static void StaticRegisterNativesURigVMController(); \
	friend struct Z_Construct_UClass_URigVMController_Statics; \
public: \
	DECLARE_CLASS(URigVMController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMController)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMController(URigVMController&&); \
	NO_API URigVMController(const URigVMController&); \
public:


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMController(URigVMController&&); \
	NO_API URigVMController(const URigVMController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMController)


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_178_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RigVMController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMController>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1361_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigVMController_CommonTypePerTemplate_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<struct FRigVMController_CommonTypePerTemplate>();

#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_SPARSE_DATA
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_RPC_WRAPPERS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_ACCESSORS
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMControllerSettings(); \
	friend struct Z_Construct_UClass_URigVMControllerSettings_Statics; \
public: \
	DECLARE_CLASS(URigVMControllerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_INCLASS \
private: \
	static void StaticRegisterNativesURigVMControllerSettings(); \
	friend struct Z_Construct_UClass_URigVMControllerSettings_Statics; \
public: \
	DECLARE_CLASS(URigVMControllerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), NO_API) \
	DECLARE_SERIALIZER(URigVMControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigVMControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMControllerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMControllerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMControllerSettings(URigVMControllerSettings&&); \
	NO_API URigVMControllerSettings(const URigVMControllerSettings&); \
public: \
	NO_API virtual ~URigVMControllerSettings();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URigVMControllerSettings(URigVMControllerSettings&&); \
	NO_API URigVMControllerSettings(const URigVMControllerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigVMControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMControllerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMControllerSettings) \
	NO_API virtual ~URigVMControllerSettings();


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1370_PROLOG
#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_RPC_WRAPPERS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_INCLASS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_SPARSE_DATA \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_ACCESSORS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1376_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RIGVMDEVELOPER_API UClass* StaticClass<class URigVMControllerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMController_h


#define FOREACH_ENUM_ERIGVMCONTROLLERBULKEDITTYPE(op) \
	op(ERigVMControllerBulkEditType::AddExposedPin) \
	op(ERigVMControllerBulkEditType::RemoveExposedPin) \
	op(ERigVMControllerBulkEditType::RenameExposedPin) \
	op(ERigVMControllerBulkEditType::ChangeExposedPinType) \
	op(ERigVMControllerBulkEditType::AddVariable) \
	op(ERigVMControllerBulkEditType::RemoveVariable) \
	op(ERigVMControllerBulkEditType::RenameVariable) \
	op(ERigVMControllerBulkEditType::ChangeVariableType) \
	op(ERigVMControllerBulkEditType::RemoveFunction) \
	op(ERigVMControllerBulkEditType::Max) 

enum class ERigVMControllerBulkEditType : uint8;
template<> struct TIsUEnumClass<ERigVMControllerBulkEditType> { enum { Value = true }; };
template<> RIGVMDEVELOPER_API UEnum* StaticEnum<ERigVMControllerBulkEditType>();

#define FOREACH_ENUM_ERIGVMCONTROLLERBULKEDITPROGRESS(op) \
	op(ERigVMControllerBulkEditProgress::BeginLoad) \
	op(ERigVMControllerBulkEditProgress::FinishedLoad) \
	op(ERigVMControllerBulkEditProgress::BeginEdit) \
	op(ERigVMControllerBulkEditProgress::FinishedEdit) \
	op(ERigVMControllerBulkEditProgress::Max) 

enum class ERigVMControllerBulkEditProgress : uint8;
template<> struct TIsUEnumClass<ERigVMControllerBulkEditProgress> { enum { Value = true }; };
template<> RIGVMDEVELOPER_API UEnum* StaticEnum<ERigVMControllerBulkEditProgress>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
