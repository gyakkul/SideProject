// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagsManager_generated_h
#error "GameplayTagsManager.generated.h already included, missing '#pragma once' in GameplayTagsManager.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsManager_generated_h

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagTableRow>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayTagTableRow Super;


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FRestrictedGameplayTagTableRow>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagSource_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagSource>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagNode_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagNode>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsManager(); \
	friend struct Z_Construct_UClass_UGameplayTagsManager_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsManager(); \
	friend struct Z_Construct_UClass_UGameplayTagsManager_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsManager(UGameplayTagsManager&&); \
	NO_API UGameplayTagsManager(const UGameplayTagsManager&); \
public:


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsManager(UGameplayTagsManager&&); \
	NO_API UGameplayTagsManager(const UGameplayTagsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsManager)


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_295_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_298_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h


#define FOREACH_ENUM_EGAMEPLAYTAGSOURCETYPE(op) \
	op(EGameplayTagSourceType::Native) \
	op(EGameplayTagSourceType::DefaultTagList) \
	op(EGameplayTagSourceType::TagList) \
	op(EGameplayTagSourceType::RestrictedTagList) \
	op(EGameplayTagSourceType::DataTable) \
	op(EGameplayTagSourceType::Invalid) 

enum class EGameplayTagSourceType : uint8;
template<> struct TIsUEnumClass<EGameplayTagSourceType> { enum { Value = true }; };
template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSourceType>();

#define FOREACH_ENUM_EGAMEPLAYTAGSELECTIONTYPE(op) \
	op(EGameplayTagSelectionType::None) \
	op(EGameplayTagSelectionType::NonRestrictedOnly) \
	op(EGameplayTagSelectionType::RestrictedOnly) \
	op(EGameplayTagSelectionType::All) 

enum class EGameplayTagSelectionType : uint8;
template<> struct TIsUEnumClass<EGameplayTagSelectionType> { enum { Value = true }; };
template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
