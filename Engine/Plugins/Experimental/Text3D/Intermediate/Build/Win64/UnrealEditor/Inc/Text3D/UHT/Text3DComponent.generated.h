// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Text3DComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFont;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;
enum class EText3DBevelType : uint8;
enum class EText3DHorizontalTextAlignment : uint8;
enum class EText3DVerticalTextAlignment : uint8;
#ifdef TEXT3D_Text3DComponent_generated_h
#error "Text3DComponent.generated.h already included, missing '#pragma once' in Text3DComponent.h"
#endif
#define TEXT3D_Text3DComponent_generated_h

#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_143_DELEGATE \
static void FTextGenerated_DelegateWrapper(const FMulticastScriptDelegate& TextGenerated);


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTextScale); \
	DECLARE_FUNCTION(execGetGlyphMeshComponents); \
	DECLARE_FUNCTION(execGetGlyphMeshComponent); \
	DECLARE_FUNCTION(execGetGlyphKerningComponents); \
	DECLARE_FUNCTION(execGetGlyphKerningComponent); \
	DECLARE_FUNCTION(execGetGlyphCount); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetFreeze); \
	DECLARE_FUNCTION(execSetScaleProportionally); \
	DECLARE_FUNCTION(execSetMaxHeight); \
	DECLARE_FUNCTION(execSetHasMaxHeight); \
	DECLARE_FUNCTION(execSetMaxWidth); \
	DECLARE_FUNCTION(execSetHasMaxWidth); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetWordSpacing); \
	DECLARE_FUNCTION(execSetLineSpacing); \
	DECLARE_FUNCTION(execSetKerning); \
	DECLARE_FUNCTION(execSetBackMaterial); \
	DECLARE_FUNCTION(execSetExtrudeMaterial); \
	DECLARE_FUNCTION(execSetBevelMaterial); \
	DECLARE_FUNCTION(execSetFrontMaterial); \
	DECLARE_FUNCTION(execSetBevelSegments); \
	DECLARE_FUNCTION(execSetBevelType); \
	DECLARE_FUNCTION(execSetBevel); \
	DECLARE_FUNCTION(execSetExtrude); \
	DECLARE_FUNCTION(execSetOutlineExpand); \
	DECLARE_FUNCTION(execSetOutline); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetText);


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTextScale); \
	DECLARE_FUNCTION(execGetGlyphMeshComponents); \
	DECLARE_FUNCTION(execGetGlyphMeshComponent); \
	DECLARE_FUNCTION(execGetGlyphKerningComponents); \
	DECLARE_FUNCTION(execGetGlyphKerningComponent); \
	DECLARE_FUNCTION(execGetGlyphCount); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetCastShadow); \
	DECLARE_FUNCTION(execSetFreeze); \
	DECLARE_FUNCTION(execSetScaleProportionally); \
	DECLARE_FUNCTION(execSetMaxHeight); \
	DECLARE_FUNCTION(execSetHasMaxHeight); \
	DECLARE_FUNCTION(execSetMaxWidth); \
	DECLARE_FUNCTION(execSetHasMaxWidth); \
	DECLARE_FUNCTION(execSetVerticalAlignment); \
	DECLARE_FUNCTION(execSetHorizontalAlignment); \
	DECLARE_FUNCTION(execSetWordSpacing); \
	DECLARE_FUNCTION(execSetLineSpacing); \
	DECLARE_FUNCTION(execSetKerning); \
	DECLARE_FUNCTION(execSetBackMaterial); \
	DECLARE_FUNCTION(execSetExtrudeMaterial); \
	DECLARE_FUNCTION(execSetBevelMaterial); \
	DECLARE_FUNCTION(execSetFrontMaterial); \
	DECLARE_FUNCTION(execSetBevelSegments); \
	DECLARE_FUNCTION(execSetBevelType); \
	DECLARE_FUNCTION(execSetBevel); \
	DECLARE_FUNCTION(execSetExtrude); \
	DECLARE_FUNCTION(execSetOutlineExpand); \
	DECLARE_FUNCTION(execSetOutline); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetText);


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ACCESSORS
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUText3DComponent(); \
	friend struct Z_Construct_UClass_UText3DComponent_Statics; \
public: \
	DECLARE_CLASS(UText3DComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), NO_API) \
	DECLARE_SERIALIZER(UText3DComponent)


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUText3DComponent(); \
	friend struct Z_Construct_UClass_UText3DComponent_Statics; \
public: \
	DECLARE_CLASS(UText3DComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Text3D"), NO_API) \
	DECLARE_SERIALIZER(UText3DComponent)


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UText3DComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UText3DComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UText3DComponent(UText3DComponent&&); \
	NO_API UText3DComponent(const UText3DComponent&); \
public: \
	NO_API virtual ~UText3DComponent();


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UText3DComponent(UText3DComponent&&); \
	NO_API UText3DComponent(const UText3DComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UText3DComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UText3DComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UText3DComponent) \
	NO_API virtual ~UText3DComponent();


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_INCLASS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEXT3D_API UClass* StaticClass<class UText3DComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DComponent_h


#define FOREACH_ENUM_ETEXT3DVERTICALTEXTALIGNMENT(op) \
	op(EText3DVerticalTextAlignment::FirstLine) \
	op(EText3DVerticalTextAlignment::Top) \
	op(EText3DVerticalTextAlignment::Center) \
	op(EText3DVerticalTextAlignment::Bottom) 

enum class EText3DVerticalTextAlignment : uint8;
template<> struct TIsUEnumClass<EText3DVerticalTextAlignment> { enum { Value = true }; };
template<> TEXT3D_API UEnum* StaticEnum<EText3DVerticalTextAlignment>();

#define FOREACH_ENUM_ETEXT3DHORIZONTALTEXTALIGNMENT(op) \
	op(EText3DHorizontalTextAlignment::Left) \
	op(EText3DHorizontalTextAlignment::Center) \
	op(EText3DHorizontalTextAlignment::Right) 

enum class EText3DHorizontalTextAlignment : uint8;
template<> struct TIsUEnumClass<EText3DHorizontalTextAlignment> { enum { Value = true }; };
template<> TEXT3D_API UEnum* StaticEnum<EText3DHorizontalTextAlignment>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
