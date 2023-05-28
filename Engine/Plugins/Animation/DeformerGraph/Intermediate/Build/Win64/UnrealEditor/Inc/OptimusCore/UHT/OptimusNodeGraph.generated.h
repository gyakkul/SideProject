// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusNodeGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOptimusComponentSourceBinding;
class UOptimusComputeDataInterface;
class UOptimusNode;
class UOptimusNodeGraph;
class UOptimusNodePin;
class UOptimusResourceDescription;
class UOptimusVariableDescription;
enum class EOptimusNodeGraphType : int32;
struct FOptimusDataTypeRef;
#ifdef OPTIMUSCORE_OptimusNodeGraph_generated_h
#error "OptimusNodeGraph.generated.h already included, missing '#pragma once' in OptimusNodeGraph.h"
#endif
#define OPTIMUSCORE_OptimusNodeGraph_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_SPARSE_DATA
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenameGraph); \
	DECLARE_FUNCTION(execMoveGraph); \
	DECLARE_FUNCTION(execGetGraphs); \
	DECLARE_FUNCTION(execIsSubGraphReference); \
	DECLARE_FUNCTION(execIsFunctionReference); \
	DECLARE_FUNCTION(execIsKernelFunction); \
	DECLARE_FUNCTION(execIsCustomKernel); \
	DECLARE_FUNCTION(execExpandCollapsedNodes); \
	DECLARE_FUNCTION(execCollapseNodesToSubGraph); \
	DECLARE_FUNCTION(execCollapseNodesToFunction); \
	DECLARE_FUNCTION(execConvertFunctionToCustomKernel); \
	DECLARE_FUNCTION(execConvertCustomKernelToFunction); \
	DECLARE_FUNCTION(execRemoveAllLinks); \
	DECLARE_FUNCTION(execRemoveLink); \
	DECLARE_FUNCTION(execAddLink); \
	DECLARE_FUNCTION(execDuplicateNodes); \
	DECLARE_FUNCTION(execDuplicateNode); \
	DECLARE_FUNCTION(execRemoveNodes); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execAddComponentBindingGetNode); \
	DECLARE_FUNCTION(execAddVariableGetNode); \
	DECLARE_FUNCTION(execAddResourceSetNode); \
	DECLARE_FUNCTION(execAddResourceGetNode); \
	DECLARE_FUNCTION(execAddResourceNode); \
	DECLARE_FUNCTION(execAddDataInterfaceNode); \
	DECLARE_FUNCTION(execAddValueNode); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execGetGraphIndex); \
	DECLARE_FUNCTION(execIsFunctionGraph); \
	DECLARE_FUNCTION(execIsExecutionGraph); \
	DECLARE_FUNCTION(execGetGraphType);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenameGraph); \
	DECLARE_FUNCTION(execMoveGraph); \
	DECLARE_FUNCTION(execGetGraphs); \
	DECLARE_FUNCTION(execIsSubGraphReference); \
	DECLARE_FUNCTION(execIsFunctionReference); \
	DECLARE_FUNCTION(execIsKernelFunction); \
	DECLARE_FUNCTION(execIsCustomKernel); \
	DECLARE_FUNCTION(execExpandCollapsedNodes); \
	DECLARE_FUNCTION(execCollapseNodesToSubGraph); \
	DECLARE_FUNCTION(execCollapseNodesToFunction); \
	DECLARE_FUNCTION(execConvertFunctionToCustomKernel); \
	DECLARE_FUNCTION(execConvertCustomKernelToFunction); \
	DECLARE_FUNCTION(execRemoveAllLinks); \
	DECLARE_FUNCTION(execRemoveLink); \
	DECLARE_FUNCTION(execAddLink); \
	DECLARE_FUNCTION(execDuplicateNodes); \
	DECLARE_FUNCTION(execDuplicateNode); \
	DECLARE_FUNCTION(execRemoveNodes); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execAddComponentBindingGetNode); \
	DECLARE_FUNCTION(execAddVariableGetNode); \
	DECLARE_FUNCTION(execAddResourceSetNode); \
	DECLARE_FUNCTION(execAddResourceGetNode); \
	DECLARE_FUNCTION(execAddResourceNode); \
	DECLARE_FUNCTION(execAddDataInterfaceNode); \
	DECLARE_FUNCTION(execAddValueNode); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execGetGraphIndex); \
	DECLARE_FUNCTION(execIsFunctionGraph); \
	DECLARE_FUNCTION(execIsExecutionGraph); \
	DECLARE_FUNCTION(execGetGraphType);


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_ACCESSORS
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusNodeGraph(); \
	friend struct Z_Construct_UClass_UOptimusNodeGraph_Statics; \
public: \
	DECLARE_CLASS(UOptimusNodeGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNodeGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNodeGraph*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUOptimusNodeGraph(); \
	friend struct Z_Construct_UClass_UOptimusNodeGraph_Statics; \
public: \
	DECLARE_CLASS(UOptimusNodeGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), NO_API) \
	DECLARE_SERIALIZER(UOptimusNodeGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusNodeGraph*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNodeGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodeGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNodeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimusNodeGraph(UOptimusNodeGraph&&); \
	NO_API UOptimusNodeGraph(const UOptimusNodeGraph&); \
public: \
	NO_API virtual ~UOptimusNodeGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusNodeGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimusNodeGraph(UOptimusNodeGraph&&); \
	NO_API UOptimusNodeGraph(const UOptimusNodeGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusNodeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusNodeGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusNodeGraph) \
	NO_API virtual ~UOptimusNodeGraph();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_54_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_ACCESSORS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_INCLASS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_ACCESSORS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSCORE_API UClass* StaticClass<class UOptimusNodeGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeGraph_h


#define FOREACH_ENUM_EOPTIMUSNODEGRAPHTYPE(op) \
	op(EOptimusNodeGraphType::Setup) \
	op(EOptimusNodeGraphType::Update) \
	op(EOptimusNodeGraphType::ExternalTrigger) \
	op(EOptimusNodeGraphType::Function) \
	op(EOptimusNodeGraphType::SubGraph) \
	op(EOptimusNodeGraphType::Transient) 

enum class EOptimusNodeGraphType;
template<> struct TIsUEnumClass<EOptimusNodeGraphType> { enum { Value = true }; };
template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusNodeGraphType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
