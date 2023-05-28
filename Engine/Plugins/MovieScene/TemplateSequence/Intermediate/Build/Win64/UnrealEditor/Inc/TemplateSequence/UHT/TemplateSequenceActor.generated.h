// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TemplateSequenceActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTemplateSequence;
class UTemplateSequencePlayer;
#ifdef TEMPLATESEQUENCE_TemplateSequenceActor_generated_h
#error "TemplateSequenceActor.generated.h already included, missing '#pragma once' in TemplateSequenceActor.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequenceActor_generated_h

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics; \
	TEMPLATESEQUENCE_API static class UScriptStruct* StaticStruct();


template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<struct FTemplateSequenceBindingOverrideData>();

#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_ACCESSORS
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemplateSequenceActor(); \
	friend struct Z_Construct_UClass_ATemplateSequenceActor_Statics; \
public: \
	DECLARE_CLASS(ATemplateSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), NO_API) \
	DECLARE_SERIALIZER(ATemplateSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATemplateSequenceActor*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_INCLASS \
private: \
	static void StaticRegisterNativesATemplateSequenceActor(); \
	friend struct Z_Construct_UClass_ATemplateSequenceActor_Statics; \
public: \
	DECLARE_CLASS(ATemplateSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), NO_API) \
	DECLARE_SERIALIZER(ATemplateSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATemplateSequenceActor*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATemplateSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATemplateSequenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemplateSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemplateSequenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATemplateSequenceActor(ATemplateSequenceActor&&); \
	NO_API ATemplateSequenceActor(const ATemplateSequenceActor&); \
public: \
	NO_API virtual ~ATemplateSequenceActor();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATemplateSequenceActor(ATemplateSequenceActor&&); \
	NO_API ATemplateSequenceActor(const ATemplateSequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemplateSequenceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemplateSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATemplateSequenceActor) \
	NO_API virtual ~ATemplateSequenceActor();


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_43_PROLOG
#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_ACCESSORS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_INCLASS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_ACCESSORS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_50_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLATESEQUENCE_API UClass* StaticClass<class ATemplateSequenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
