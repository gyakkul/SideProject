// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimMontage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UAnimSequenceBase;
struct FAlphaBlendArgs;
struct FMontageBlendSettings;
#ifdef ENGINE_AnimMontage_generated_h
#error "AnimMontage.generated.h already included, missing '#pragma once' in AnimMontage.h"
#endif
#define ENGINE_AnimMontage_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeSection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCompositeSection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSlotAnimationTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSlotAnimationTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBranchingPoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBranchingPoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBranchingPointMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBranchingPointMarker>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_307_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMontageBlendSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMontageBlendSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_329_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimMontageInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimMontageInstance>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSlotAnimationAsDynamicMontage_WithBlendSettings); \
	DECLARE_FUNCTION(execIsValidSectionName); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetSectionName); \
	DECLARE_FUNCTION(execGetSectionIndex); \
	DECLARE_FUNCTION(execGetDefaultBlendOutTime); \
	DECLARE_FUNCTION(execGetDefaultBlendInTime); \
	DECLARE_FUNCTION(execGetBlendOutArgs); \
	DECLARE_FUNCTION(execGetBlendInArgs);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSlotAnimationAsDynamicMontage_WithBlendSettings); \
	DECLARE_FUNCTION(execIsValidSectionName); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execGetSectionName); \
	DECLARE_FUNCTION(execGetSectionIndex); \
	DECLARE_FUNCTION(execGetDefaultBlendOutTime); \
	DECLARE_FUNCTION(execGetDefaultBlendInTime); \
	DECLARE_FUNCTION(execGetBlendOutArgs); \
	DECLARE_FUNCTION(execGetBlendInArgs);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend struct Z_Construct_UClass_UAnimMontage_Statics; \
public: \
	DECLARE_CLASS(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimMontage) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_INCLASS \
private: \
	static void StaticRegisterNativesUAnimMontage(); \
	friend struct Z_Construct_UClass_UAnimMontage_Statics; \
public: \
	DECLARE_CLASS(UAnimMontage, UAnimCompositeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimMontage) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimMontage(UAnimMontage&&); \
	ENGINE_API UAnimMontage(const UAnimMontage&); \
public: \
	ENGINE_API virtual ~UAnimMontage();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimMontage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimMontage(UAnimMontage&&); \
	ENGINE_API UAnimMontage(const UAnimMontage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimMontage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimMontage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimMontage) \
	ENGINE_API virtual ~UAnimMontage();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_612_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h_615_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimMontage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimMontage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimMontage_h


#define FOREACH_ENUM_EANIMNOTIFYEVENTTYPE(op) \
	op(EAnimNotifyEventType::Begin) \
	op(EAnimNotifyEventType::End) 

namespace EAnimNotifyEventType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAnimNotifyEventType::Type>();

#define FOREACH_ENUM_EMONTAGEBLENDMODE(op) \
	op(EMontageBlendMode::Standard) \
	op(EMontageBlendMode::Inertialization) 

enum class EMontageBlendMode : uint8;
template<> struct TIsUEnumClass<EMontageBlendMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMontageBlendMode>();

#define FOREACH_ENUM_EMONTAGESUBSTEPRESULT(op) \
	op(EMontageSubStepResult::Moved) \
	op(EMontageSubStepResult::NotMoved) \
	op(EMontageSubStepResult::InvalidSection) \
	op(EMontageSubStepResult::InvalidMontage) 

enum class EMontageSubStepResult : uint8;
template<> struct TIsUEnumClass<EMontageSubStepResult> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EMontageSubStepResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
