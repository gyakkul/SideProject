// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/BuiltInAttributeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
#ifdef ENGINE_BuiltInAttributeTypes_generated_h
#error "BuiltInAttributeTypes.generated.h already included, missing '#pragma once' in BuiltInAttributeTypes.h"
#endif
#define ENGINE_BuiltInAttributeTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFloatAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFloatAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIntegerAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FIntegerAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStringAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStringAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTransformAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVectorAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVectorAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuaternionAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuaternionAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNonBlendableQuaternionAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FQuaternionAnimationAttribute Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNonBlendableQuaternionAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_262_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNonBlendableVectorAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FVectorAnimationAttribute Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNonBlendableVectorAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNonBlendableTransformAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTransformAnimationAttribute Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNonBlendableTransformAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNonBlendableFloatAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FFloatAnimationAttribute Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNonBlendableFloatAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_280_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNonBlendableIntegerAnimationAttribute_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FIntegerAnimationAttribute Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNonBlendableIntegerAnimationAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTransformAttribute);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTransformAttribute);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuiltInAttributesExtensions(); \
	friend struct Z_Construct_UClass_UBuiltInAttributesExtensions_Statics; \
public: \
	DECLARE_CLASS(UBuiltInAttributesExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBuiltInAttributesExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_INCLASS \
private: \
	static void StaticRegisterNativesUBuiltInAttributesExtensions(); \
	friend struct Z_Construct_UClass_UBuiltInAttributesExtensions_Statics; \
public: \
	DECLARE_CLASS(UBuiltInAttributesExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBuiltInAttributesExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuiltInAttributesExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuiltInAttributesExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuiltInAttributesExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuiltInAttributesExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuiltInAttributesExtensions(UBuiltInAttributesExtensions&&); \
	NO_API UBuiltInAttributesExtensions(const UBuiltInAttributesExtensions&); \
public: \
	NO_API virtual ~UBuiltInAttributesExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuiltInAttributesExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuiltInAttributesExtensions(UBuiltInAttributesExtensions&&); \
	NO_API UBuiltInAttributesExtensions(const UBuiltInAttributesExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuiltInAttributesExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuiltInAttributesExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuiltInAttributesExtensions) \
	NO_API virtual ~UBuiltInAttributesExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_403_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h_406_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBuiltInAttributesExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_BuiltInAttributeTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
