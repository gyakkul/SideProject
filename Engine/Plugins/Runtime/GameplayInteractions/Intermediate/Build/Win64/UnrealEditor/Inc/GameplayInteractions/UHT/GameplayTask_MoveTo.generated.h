// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTask_MoveTo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayTask_MoveTo;
enum class EGameplayTaskMoveToIntent : uint8;
#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayTask_MoveTo_generated_h
#error "GameplayTask_MoveTo.generated.h already included, missing '#pragma once' in GameplayTask_MoveTo.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayTask_MoveTo_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveTo);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveTo);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_MoveTo(); \
	friend struct Z_Construct_UClass_UGameplayTask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_MoveTo, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_MoveTo) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask_MoveTo*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask_MoveTo(); \
	friend struct Z_Construct_UClass_UGameplayTask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_MoveTo, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask_MoveTo) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask_MoveTo*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTask_MoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_MoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_MoveTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_MoveTo(UGameplayTask_MoveTo&&); \
	NO_API UGameplayTask_MoveTo(const UGameplayTask_MoveTo&); \
public: \
	NO_API virtual ~UGameplayTask_MoveTo();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask_MoveTo(UGameplayTask_MoveTo&&); \
	NO_API UGameplayTask_MoveTo(const UGameplayTask_MoveTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_MoveTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_MoveTo) \
	NO_API virtual ~UGameplayTask_MoveTo();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<class UGameplayTask_MoveTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayTask_MoveTo_h


#define FOREACH_ENUM_EGAMEPLAYTASKMOVETOINTENT(op) \
	op(EGameplayTaskMoveToIntent::Stop) \
	op(EGameplayTaskMoveToIntent::KeepMoving) 

enum class EGameplayTaskMoveToIntent : uint8;
template<> struct TIsUEnumClass<EGameplayTaskMoveToIntent> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayTaskMoveToIntent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
