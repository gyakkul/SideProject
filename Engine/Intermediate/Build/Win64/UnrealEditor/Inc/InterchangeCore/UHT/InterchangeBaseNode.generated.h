// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeBaseNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeNodeContainerType : uint8;
struct FGuid;
struct FLinearColor;
#ifdef INTERCHANGECORE_InterchangeBaseNode_generated_h
#error "InterchangeBaseNode.generated.h already included, missing '#pragma once' in InterchangeBaseNode.h"
#endif
#define INTERCHANGECORE_InterchangeBaseNode_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAssetName); \
	DECLARE_FUNCTION(execGetAssetName); \
	DECLARE_FUNCTION(execGetNodeContainerType); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execRemoveTargetNodeUid); \
	DECLARE_FUNCTION(execAddTargetNodeUid); \
	DECLARE_FUNCTION(execGetTargetNodeUids); \
	DECLARE_FUNCTION(execGetTargetNodeCount); \
	DECLARE_FUNCTION(execSetParentUid); \
	DECLARE_FUNCTION(execGetParentUid); \
	DECLARE_FUNCTION(execSetDisplayLabel); \
	DECLARE_FUNCTION(execGetDisplayLabel); \
	DECLARE_FUNCTION(execGetUniqueID); \
	DECLARE_FUNCTION(execGetVector2Attribute); \
	DECLARE_FUNCTION(execAddVector2Attribute); \
	DECLARE_FUNCTION(execGetLinearColorAttribute); \
	DECLARE_FUNCTION(execAddLinearColorAttribute); \
	DECLARE_FUNCTION(execGetGuidAttribute); \
	DECLARE_FUNCTION(execAddGuidAttribute); \
	DECLARE_FUNCTION(execGetStringAttribute); \
	DECLARE_FUNCTION(execAddStringAttribute); \
	DECLARE_FUNCTION(execGetDoubleAttribute); \
	DECLARE_FUNCTION(execAddDoubleAttribute); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execAddFloatAttribute); \
	DECLARE_FUNCTION(execGetInt32Attribute); \
	DECLARE_FUNCTION(execAddInt32Attribute); \
	DECLARE_FUNCTION(execGetBooleanAttribute); \
	DECLARE_FUNCTION(execAddBooleanAttribute); \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execInitializeNode);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAssetName); \
	DECLARE_FUNCTION(execGetAssetName); \
	DECLARE_FUNCTION(execGetNodeContainerType); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execRemoveTargetNodeUid); \
	DECLARE_FUNCTION(execAddTargetNodeUid); \
	DECLARE_FUNCTION(execGetTargetNodeUids); \
	DECLARE_FUNCTION(execGetTargetNodeCount); \
	DECLARE_FUNCTION(execSetParentUid); \
	DECLARE_FUNCTION(execGetParentUid); \
	DECLARE_FUNCTION(execSetDisplayLabel); \
	DECLARE_FUNCTION(execGetDisplayLabel); \
	DECLARE_FUNCTION(execGetUniqueID); \
	DECLARE_FUNCTION(execGetVector2Attribute); \
	DECLARE_FUNCTION(execAddVector2Attribute); \
	DECLARE_FUNCTION(execGetLinearColorAttribute); \
	DECLARE_FUNCTION(execAddLinearColorAttribute); \
	DECLARE_FUNCTION(execGetGuidAttribute); \
	DECLARE_FUNCTION(execAddGuidAttribute); \
	DECLARE_FUNCTION(execGetStringAttribute); \
	DECLARE_FUNCTION(execAddStringAttribute); \
	DECLARE_FUNCTION(execGetDoubleAttribute); \
	DECLARE_FUNCTION(execAddDoubleAttribute); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execAddFloatAttribute); \
	DECLARE_FUNCTION(execGetInt32Attribute); \
	DECLARE_FUNCTION(execAddInt32Attribute); \
	DECLARE_FUNCTION(execGetBooleanAttribute); \
	DECLARE_FUNCTION(execAddBooleanAttribute); \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execInitializeNode);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeBaseNode, NO_API)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseNode) \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeBaseNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseNode) \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeBaseNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeBaseNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeBaseNode(UInterchangeBaseNode&&); \
	NO_API UInterchangeBaseNode(const UInterchangeBaseNode&); \
public: \
	NO_API virtual ~UInterchangeBaseNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeBaseNode(UInterchangeBaseNode&&); \
	NO_API UInterchangeBaseNode(const UInterchangeBaseNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseNode) \
	NO_API virtual ~UInterchangeBaseNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_181_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeBaseNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNode_h


#define FOREACH_ENUM_EINTERCHANGENODECONTAINERTYPE(op) \
	op(EInterchangeNodeContainerType::None) \
	op(EInterchangeNodeContainerType::TranslatedScene) \
	op(EInterchangeNodeContainerType::TranslatedAsset) \
	op(EInterchangeNodeContainerType::FactoryData) 

enum class EInterchangeNodeContainerType : uint8;
template<> struct TIsUEnumClass<EInterchangeNodeContainerType> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EInterchangeNodeContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
