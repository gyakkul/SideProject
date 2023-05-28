// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTaskOwnerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTaskOwnerInterface_generated_h
#error "GameplayTaskOwnerInterface.generated.h already included, missing '#pragma once' in GameplayTaskOwnerInterface.h"
#endif
#define GAMEPLAYTASKS_GameplayTaskOwnerInterface_generated_h

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskOwnerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTaskOwnerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskOwnerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(UGameplayTaskOwnerInterface&&); \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const UGameplayTaskOwnerInterface&); \
public: \
	GAMEPLAYTASKS_API virtual ~UGameplayTaskOwnerInterface();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(UGameplayTaskOwnerInterface&&); \
	GAMEPLAYTASKS_API UGameplayTaskOwnerInterface(const UGameplayTaskOwnerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTaskOwnerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTaskOwnerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTaskOwnerInterface) \
	GAMEPLAYTASKS_API virtual ~UGameplayTaskOwnerInterface();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayTaskOwnerInterface(); \
	friend struct Z_Construct_UClass_UGameplayTaskOwnerInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayTaskOwnerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTaskOwnerInterface)


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayTaskOwnerInterface() {} \
public: \
	typedef UGameplayTaskOwnerInterface UClassType; \
	typedef IGameplayTaskOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayTaskOwnerInterface() {} \
public: \
	typedef UGameplayTaskOwnerInterface UClassType; \
	typedef IGameplayTaskOwnerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTaskOwnerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskOwnerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
