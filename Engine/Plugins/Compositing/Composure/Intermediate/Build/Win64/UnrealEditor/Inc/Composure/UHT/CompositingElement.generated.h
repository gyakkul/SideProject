// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CompositingElement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
class ACompositingElement;
class UCompositingElementInput;
class UCompositingElementOutput;
class UCompositingElementPass;
class UCompositingElementTransform;
class UTexture;
class UTextureRenderTarget2D;
enum class ETargetUsageFlags : uint8;
struct FCompositingMaterial;
#ifdef COMPOSURE_CompositingElement_generated_h
#error "CompositingElement.generated.h already included, missing '#pragma once' in CompositingElement.h"
#endif
#define COMPOSURE_CompositingElement_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_29_DELEGATE \
COMPOSURE_API void FDynamicOnTransformPassRendered_DelegateWrapper(const FMulticastScriptDelegate& DynamicOnTransformPassRendered, ACompositingElement* CompElement, UTexture* Texture, FName PassName);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_30_DELEGATE \
COMPOSURE_API void FDynamicOnFinalPassRendered_DelegateWrapper(const FMulticastScriptDelegate& DynamicOnFinalPassRendered, ACompositingElement* CompElement, UTexture* Texture);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_SPARSE_DATA
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS \
	virtual UTexture* RenderCompElement_Implementation(bool bCameraCutThisFrame); \
 \
	DECLARE_FUNCTION(execGetRenderPriority); \
	DECLARE_FUNCTION(execAddNewOutputPass); \
	DECLARE_FUNCTION(execAddNewTransformPass); \
	DECLARE_FUNCTION(execAddNewInputPass); \
	DECLARE_FUNCTION(execCreateNewOutputPass); \
	DECLARE_FUNCTION(execCreateNewTransformPass); \
	DECLARE_FUNCTION(execCreateNewInputPass); \
	DECLARE_FUNCTION(execDeletePass); \
	DECLARE_FUNCTION(execGetOutputsList); \
	DECLARE_FUNCTION(execGetTransformsList); \
	DECLARE_FUNCTION(execGetInputsList); \
	DECLARE_FUNCTION(execFindOutputPass); \
	DECLARE_FUNCTION(execFindTransformPass); \
	DECLARE_FUNCTION(execFindInputPass); \
	DECLARE_FUNCTION(execSetRenderResolution); \
	DECLARE_FUNCTION(execGetRenderResolution); \
	DECLARE_FUNCTION(execGetLatestRenderResult); \
	DECLARE_FUNCTION(execFindNamedRenderResult); \
	DECLARE_FUNCTION(execRegisterPassResult); \
	DECLARE_FUNCTION(execSetTargetCamera); \
	DECLARE_FUNCTION(execFindTargetCamera); \
	DECLARE_FUNCTION(execRenderCompositingMaterialToTarget); \
	DECLARE_FUNCTION(execRenderCompositingMaterial); \
	DECLARE_FUNCTION(execReleaseOwnedTarget); \
	DECLARE_FUNCTION(execRequestNamedRenderTarget); \
	DECLARE_FUNCTION(execGetCompElementName); \
	DECLARE_FUNCTION(execRenderCompElement); \
	DECLARE_FUNCTION(execSetEditorColorPickerDisplayImage); \
	DECLARE_FUNCTION(execSetEditorColorPickingTarget); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execGetOpacity); \
	DECLARE_FUNCTION(execGetChildElements); \
	DECLARE_FUNCTION(execGetElementParent); \
	DECLARE_FUNCTION(execIsSubElement); \
	DECLARE_FUNCTION(execSetElementName);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UTexture* RenderCompElement_Implementation(bool bCameraCutThisFrame); \
 \
	DECLARE_FUNCTION(execGetRenderPriority); \
	DECLARE_FUNCTION(execAddNewOutputPass); \
	DECLARE_FUNCTION(execAddNewTransformPass); \
	DECLARE_FUNCTION(execAddNewInputPass); \
	DECLARE_FUNCTION(execCreateNewOutputPass); \
	DECLARE_FUNCTION(execCreateNewTransformPass); \
	DECLARE_FUNCTION(execCreateNewInputPass); \
	DECLARE_FUNCTION(execDeletePass); \
	DECLARE_FUNCTION(execGetOutputsList); \
	DECLARE_FUNCTION(execGetTransformsList); \
	DECLARE_FUNCTION(execGetInputsList); \
	DECLARE_FUNCTION(execFindOutputPass); \
	DECLARE_FUNCTION(execFindTransformPass); \
	DECLARE_FUNCTION(execFindInputPass); \
	DECLARE_FUNCTION(execSetRenderResolution); \
	DECLARE_FUNCTION(execGetRenderResolution); \
	DECLARE_FUNCTION(execGetLatestRenderResult); \
	DECLARE_FUNCTION(execFindNamedRenderResult); \
	DECLARE_FUNCTION(execRegisterPassResult); \
	DECLARE_FUNCTION(execSetTargetCamera); \
	DECLARE_FUNCTION(execFindTargetCamera); \
	DECLARE_FUNCTION(execRenderCompositingMaterialToTarget); \
	DECLARE_FUNCTION(execRenderCompositingMaterial); \
	DECLARE_FUNCTION(execReleaseOwnedTarget); \
	DECLARE_FUNCTION(execRequestNamedRenderTarget); \
	DECLARE_FUNCTION(execGetCompElementName); \
	DECLARE_FUNCTION(execRenderCompElement); \
	DECLARE_FUNCTION(execSetEditorColorPickerDisplayImage); \
	DECLARE_FUNCTION(execSetEditorColorPickingTarget); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execGetOpacity); \
	DECLARE_FUNCTION(execGetChildElements); \
	DECLARE_FUNCTION(execGetElementParent); \
	DECLARE_FUNCTION(execIsSubElement); \
	DECLARE_FUNCTION(execSetElementName);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ACCESSORS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ACompositingElement, NO_API)


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompositingElement(); \
	friend struct Z_Construct_UClass_ACompositingElement_Statics; \
public: \
	DECLARE_CLASS(ACompositingElement, AComposurePipelineBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(ACompositingElement) \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ACompositingElement*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS \
private: \
	static void StaticRegisterNativesACompositingElement(); \
	friend struct Z_Construct_UClass_ACompositingElement_Statics; \
public: \
	DECLARE_CLASS(ACompositingElement, AComposurePipelineBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(ACompositingElement) \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ACompositingElement*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompositingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositingElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositingElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositingElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompositingElement(ACompositingElement&&); \
	NO_API ACompositingElement(const ACompositingElement&); \
public: \
	NO_API virtual ~ACompositingElement();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompositingElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompositingElement(ACompositingElement&&); \
	NO_API ACompositingElement(const ACompositingElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompositingElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompositingElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompositingElement) \
	NO_API virtual ~ACompositingElement();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_75_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_78_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompositingElement."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class ACompositingElement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h


#define FOREACH_ENUM_ESCENECAMERALINKTYPE(op) \
	op(ESceneCameraLinkType::Inherited) \
	op(ESceneCameraLinkType::Override) \
	op(ESceneCameraLinkType::Unused) 

enum class ESceneCameraLinkType;
template<> struct TIsUEnumClass<ESceneCameraLinkType> { enum { Value = true }; };
template<> COMPOSURE_API UEnum* StaticEnum<ESceneCameraLinkType>();

#define FOREACH_ENUM_EINHERITEDSOURCETYPE(op) \
	op(EInheritedSourceType::Inherited) \
	op(EInheritedSourceType::Override) 

enum class EInheritedSourceType;
template<> struct TIsUEnumClass<EInheritedSourceType> { enum { Value = true }; };
template<> COMPOSURE_API UEnum* StaticEnum<EInheritedSourceType>();

#define FOREACH_ENUM_ETARGETUSAGEFLAGS(op) \
	op(ETargetUsageFlags::USAGE_None) \
	op(ETargetUsageFlags::USAGE_Input) \
	op(ETargetUsageFlags::USAGE_Transform) \
	op(ETargetUsageFlags::USAGE_Output) \
	op(ETargetUsageFlags::USAGE_Persistent) \
	op(ETargetUsageFlags::USAGE_Intermediate0) \
	op(ETargetUsageFlags::USAGE_Intermediate1) 

enum class ETargetUsageFlags : uint8;
template<> struct TIsUEnumClass<ETargetUsageFlags> { enum { Value = true }; };
template<> COMPOSURE_API UEnum* StaticEnum<ETargetUsageFlags>();

#define FOREACH_ENUM_ECOMPPASSCONSTRUCTIONTYPE(op) \
	op(ECompPassConstructionType::Unknown) \
	op(ECompPassConstructionType::EditorConstructed) \
	op(ECompPassConstructionType::BlueprintConstructed) \
	op(ECompPassConstructionType::CodeConstructed) 

enum class ECompPassConstructionType;
template<> struct TIsUEnumClass<ECompPassConstructionType> { enum { Value = true }; };
template<> COMPOSURE_API UEnum* StaticEnum<ECompPassConstructionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
