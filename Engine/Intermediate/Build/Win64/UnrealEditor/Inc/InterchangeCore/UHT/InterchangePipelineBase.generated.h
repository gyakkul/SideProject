// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangePipelineBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
class UInterchangeSourceData;
class UObject;
enum class EInterchangePipelineTask : uint8;
struct FInterchangePipelinePropertyStates;
#ifdef INTERCHANGECORE_InterchangePipelineBase_generated_h
#error "InterchangePipelineBase.generated.h already included, missing '#pragma once' in InterchangePipelineBase.h"
#endif
#define INTERCHANGECORE_InterchangePipelineBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStatePerContext_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<struct FInterchangePipelinePropertyStatePerContext>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangePipelinePropertyStates_Statics; \
	INTERCHANGECORE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGECORE_API UScriptStruct* StaticStruct<struct FInterchangePipelinePropertyStates>();

#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_RPC_WRAPPERS \
	virtual void ScriptedSetReimportSourceIndex_Implementation(UClass* ReimportObjectClass, const int32 SourceFileIndex); \
	virtual bool ScriptedCanExecuteOnAnyThread_Implementation(EInterchangePipelineTask PipelineTask); \
	virtual void ScriptedExecuteExportPipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer); \
	virtual void ScriptedExecutePostImportPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport); \
	virtual void ScriptedExecutePostFactoryPipeline_Implementation(const UInterchangeBaseNodeContainer* BaseNodeContainer, const FString& FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport); \
	virtual void ScriptedExecutePipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*> const& SourceDatas); \
	virtual void ScriptedExecutePreImportPipeline_Implementation(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*> const& SourceDatas); \
 \
	DECLARE_FUNCTION(execFindOrAddPropertyStates); \
	DECLARE_FUNCTION(execDoesPropertyStatesExist); \
	DECLARE_FUNCTION(execScriptedSetReimportSourceIndex); \
	DECLARE_FUNCTION(execScriptedCanExecuteOnAnyThread); \
	DECLARE_FUNCTION(execScriptedExecuteExportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostImportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostFactoryPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePipeline); \
	DECLARE_FUNCTION(execScriptedExecutePreImportPipeline);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindOrAddPropertyStates); \
	DECLARE_FUNCTION(execDoesPropertyStatesExist); \
	DECLARE_FUNCTION(execScriptedSetReimportSourceIndex); \
	DECLARE_FUNCTION(execScriptedCanExecuteOnAnyThread); \
	DECLARE_FUNCTION(execScriptedExecuteExportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostImportPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePostFactoryPipeline); \
	DECLARE_FUNCTION(execScriptedExecutePipeline); \
	DECLARE_FUNCTION(execScriptedExecutePreImportPipeline);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePipelineBase(); \
	friend struct Z_Construct_UClass_UInterchangePipelineBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangePipelineBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePipelineBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangePipelineBase(); \
	friend struct Z_Construct_UClass_UInterchangePipelineBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangePipelineBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePipelineBase)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePipelineBase(UInterchangePipelineBase&&); \
	NO_API UInterchangePipelineBase(const UInterchangePipelineBase&); \
public: \
	NO_API virtual ~UInterchangePipelineBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePipelineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePipelineBase(UInterchangePipelineBase&&); \
	NO_API UInterchangePipelineBase(const UInterchangePipelineBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePipelineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePipelineBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePipelineBase) \
	NO_API virtual ~UInterchangePipelineBase();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_104_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h_107_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangePipelineBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_InterchangePipelineBase_h


#define FOREACH_ENUM_EINTERCHANGEPIPELINETASK(op) \
	op(EInterchangePipelineTask::PostTranslator) \
	op(EInterchangePipelineTask::PostFactory) \
	op(EInterchangePipelineTask::PostImport) \
	op(EInterchangePipelineTask::Export) 

enum class EInterchangePipelineTask : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineTask> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineTask>();

#define FOREACH_ENUM_EINTERCHANGEPIPELINECONTEXT(op) \
	op(EInterchangePipelineContext::None) \
	op(EInterchangePipelineContext::AssetImport) \
	op(EInterchangePipelineContext::AssetReimport) \
	op(EInterchangePipelineContext::SceneImport) \
	op(EInterchangePipelineContext::SceneReimport) \
	op(EInterchangePipelineContext::AssetCustomLODImport) \
	op(EInterchangePipelineContext::AssetCustomLODReimport) \
	op(EInterchangePipelineContext::AssetAlternateSkinningImport) \
	op(EInterchangePipelineContext::AssetAlternateSkinningReimport) 

enum class EInterchangePipelineContext : uint8;
template<> struct TIsUEnumClass<EInterchangePipelineContext> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangePipelineContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
