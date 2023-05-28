// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EdGraphNode_generated_h
#error "EdGraphNode.generated.h already included, missing '#pragma once' in EdGraphNode.h"
#endif
#define ENGINE_EdGraphNode_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEdGraphTerminalType>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphNodeContextMenuContext(); \
	friend struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UGraphNodeContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGraphNodeContextMenuContext)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_INCLASS \
private: \
	static void StaticRegisterNativesUGraphNodeContextMenuContext(); \
	friend struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UGraphNodeContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UGraphNodeContextMenuContext)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGraphNodeContextMenuContext(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGraphNodeContextMenuContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphNodeContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphNodeContextMenuContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphNodeContextMenuContext(UGraphNodeContextMenuContext&&); \
	NO_API UGraphNodeContextMenuContext(const UGraphNodeContextMenuContext&); \
public: \
	NO_API virtual ~UGraphNodeContextMenuContext();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGraphNodeContextMenuContext(UGraphNodeContextMenuContext&&); \
	NO_API UGraphNodeContextMenuContext(const UGraphNodeContextMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphNodeContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphNodeContextMenuContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphNodeContextMenuContext) \
	NO_API virtual ~UGraphNodeContextMenuContext();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_211_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGraphNodeContextMenuContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraphNode, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend struct Z_Construct_UClass_UEdGraphNode_Statics; \
public: \
	DECLARE_CLASS(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphNode(UEdGraphNode&&); \
	NO_API UEdGraphNode(const UEdGraphNode&); \
public: \
	NO_API virtual ~UEdGraphNode();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEdGraphNode(UEdGraphNode&&); \
	NO_API UEdGraphNode(const UEdGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode) \
	NO_API virtual ~UEdGraphNode();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_272_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_275_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EdGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEdGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h


#define FOREACH_ENUM_EEDGRAPHPINDIRECTION(op) \
	op(EGPD_Input) \
	op(EGPD_Output) 

enum EEdGraphPinDirection : int;
template<> ENGINE_API UEnum* StaticEnum<EEdGraphPinDirection>();

#define FOREACH_ENUM_EPINCONTAINERTYPE(op) \
	op(EPinContainerType::None) \
	op(EPinContainerType::Array) \
	op(EPinContainerType::Set) \
	op(EPinContainerType::Map) 

enum class EPinContainerType : uint8;
template<> struct TIsUEnumClass<EPinContainerType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPinContainerType>();

#define FOREACH_ENUM_ENODETITLETYPE(op) \
	op(ENodeTitleType::FullTitle) \
	op(ENodeTitleType::ListView) \
	op(ENodeTitleType::EditableTitle) \
	op(ENodeTitleType::MenuTitle) \
	op(ENodeTitleType::MAX_TitleTypes) 

namespace ENodeTitleType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENodeTitleType::Type>();

#define FOREACH_ENUM_ENODEADVANCEDPINS(op) \
	op(ENodeAdvancedPins::NoPins) \
	op(ENodeAdvancedPins::Shown) \
	op(ENodeAdvancedPins::Hidden) 

namespace ENodeAdvancedPins { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENodeAdvancedPins::Type>();

#define FOREACH_ENUM_ENODEENABLEDSTATE(op) \
	op(ENodeEnabledState::Enabled) \
	op(ENodeEnabledState::Disabled) \
	op(ENodeEnabledState::DevelopmentOnly) 

enum class ENodeEnabledState : uint8;
template<> struct TIsUEnumClass<ENodeEnabledState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENodeEnabledState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
