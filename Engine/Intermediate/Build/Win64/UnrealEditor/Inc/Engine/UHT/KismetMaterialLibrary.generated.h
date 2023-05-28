// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Kismet/KismetMaterialLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UObject;
enum class EMIDCreationFlags : uint8;
struct FLinearColor;
#ifdef ENGINE_KismetMaterialLibrary_generated_h
#error "KismetMaterialLibrary.generated.h already included, missing '#pragma once' in KismetMaterialLibrary.h"
#endif
#define ENGINE_KismetMaterialLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetVectorParameterValue); \
	DECLARE_FUNCTION(execGetScalarParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDynamicMaterialInstance); \
	DECLARE_FUNCTION(execGetVectorParameterValue); \
	DECLARE_FUNCTION(execGetScalarParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetMaterialLibrary(); \
	friend struct Z_Construct_UClass_UKismetMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMaterialLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUKismetMaterialLibrary(); \
	friend struct Z_Construct_UClass_UKismetMaterialLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetMaterialLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetMaterialLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMaterialLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMaterialLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMaterialLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetMaterialLibrary(UKismetMaterialLibrary&&); \
	ENGINE_API UKismetMaterialLibrary(const UKismetMaterialLibrary&); \
public: \
	ENGINE_API virtual ~UKismetMaterialLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetMaterialLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetMaterialLibrary(UKismetMaterialLibrary&&); \
	ENGINE_API UKismetMaterialLibrary(const UKismetMaterialLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetMaterialLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetMaterialLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetMaterialLibrary) \
	ENGINE_API virtual ~UKismetMaterialLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetMaterialLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetMaterialLibrary_h


#define FOREACH_ENUM_EMIDCREATIONFLAGS(op) \
	op(EMIDCreationFlags::None) \
	op(EMIDCreationFlags::Transient) 

enum class EMIDCreationFlags : uint8;
template<> struct TIsUEnumClass<EMIDCreationFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMIDCreationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
