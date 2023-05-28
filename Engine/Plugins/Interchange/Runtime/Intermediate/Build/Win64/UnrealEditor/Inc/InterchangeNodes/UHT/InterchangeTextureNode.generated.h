// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeTextureFilterMode : uint8;
#ifdef INTERCHANGENODES_InterchangeTextureNode_generated_h
#error "InterchangeTextureNode.generated.h already included, missing '#pragma once' in InterchangeTextureNode.h"
#endif
#define INTERCHANGENODES_InterchangeTextureNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomFilter); \
	DECLARE_FUNCTION(execGetCustomFilter); \
	DECLARE_FUNCTION(execSetCustombFlipGreenChannel); \
	DECLARE_FUNCTION(execGetCustombFlipGreenChannel); \
	DECLARE_FUNCTION(execSetCustomSRGB); \
	DECLARE_FUNCTION(execGetCustomSRGB); \
	DECLARE_FUNCTION(execSetPayLoadKey);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomFilter); \
	DECLARE_FUNCTION(execGetCustomFilter); \
	DECLARE_FUNCTION(execSetCustombFlipGreenChannel); \
	DECLARE_FUNCTION(execGetCustombFlipGreenChannel); \
	DECLARE_FUNCTION(execSetCustomSRGB); \
	DECLARE_FUNCTION(execGetCustomSRGB); \
	DECLARE_FUNCTION(execSetPayLoadKey);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureNode(); \
	friend struct Z_Construct_UClass_UInterchangeTextureNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTextureNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeTextureNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeTextureNode(); \
	friend struct Z_Construct_UClass_UInterchangeTextureNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTextureNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeTextureNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeTextureNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeTextureNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeTextureNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeTextureNode(UInterchangeTextureNode&&); \
	NO_API UInterchangeTextureNode(const UInterchangeTextureNode&); \
public: \
	NO_API virtual ~UInterchangeTextureNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeTextureNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeTextureNode(UInterchangeTextureNode&&); \
	NO_API UInterchangeTextureNode(const UInterchangeTextureNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeTextureNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureNode) \
	NO_API virtual ~UInterchangeTextureNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_44_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeTextureNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h


#define FOREACH_ENUM_EINTERCHANGETEXTUREWRAPMODE(op) \
	op(EInterchangeTextureWrapMode::Wrap) \
	op(EInterchangeTextureWrapMode::Clamp) \
	op(EInterchangeTextureWrapMode::Mirror) 

enum class EInterchangeTextureWrapMode : uint8;
template<> struct TIsUEnumClass<EInterchangeTextureWrapMode> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureWrapMode>();

#define FOREACH_ENUM_EINTERCHANGETEXTUREFILTERMODE(op) \
	op(EInterchangeTextureFilterMode::Nearest) \
	op(EInterchangeTextureFilterMode::Bilinear) \
	op(EInterchangeTextureFilterMode::Trilinear) \
	op(EInterchangeTextureFilterMode::Default) 

enum class EInterchangeTextureFilterMode : uint8;
template<> struct TIsUEnumClass<EInterchangeTextureFilterMode> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureFilterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
