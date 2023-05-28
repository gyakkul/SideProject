// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementWorldInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UTypedElementSelectionSet;
class UWorld;
enum class ETypedElementWorldType : uint8;
struct FScriptTypedElementHandle;
struct FTypedElementDeletionOptions;
#ifdef ENGINE_TypedElementWorldInterface_generated_h
#error "TypedElementWorldInterface.generated.h already included, missing '#pragma once' in TypedElementWorldInterface.h"
#endif
#define ENGINE_TypedElementWorldInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementDeletionOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTypedElementDeletionOptions>();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPromoteElement); \
	DECLARE_FUNCTION(execCanPromoteElement); \
	DECLARE_FUNCTION(execDuplicateElement); \
	DECLARE_FUNCTION(execCanDuplicateElement); \
	DECLARE_FUNCTION(execDeleteElement); \
	DECLARE_FUNCTION(execCanDeleteElement); \
	DECLARE_FUNCTION(execNotifyMovementEnded); \
	DECLARE_FUNCTION(execNotifyMovementOngoing); \
	DECLARE_FUNCTION(execNotifyMovementStarted); \
	DECLARE_FUNCTION(execSetPivotOffset); \
	DECLARE_FUNCTION(execGetPivotOffset); \
	DECLARE_FUNCTION(execSetRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execSetWorldTransform); \
	DECLARE_FUNCTION(execGetWorldTransform); \
	DECLARE_FUNCTION(execCanMoveElement); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetOwnerWorld); \
	DECLARE_FUNCTION(execGetOwnerLevel); \
	DECLARE_FUNCTION(execCanEditElement); \
	DECLARE_FUNCTION(execIsTemplateElement);


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPromoteElement); \
	DECLARE_FUNCTION(execCanPromoteElement); \
	DECLARE_FUNCTION(execDuplicateElement); \
	DECLARE_FUNCTION(execCanDuplicateElement); \
	DECLARE_FUNCTION(execDeleteElement); \
	DECLARE_FUNCTION(execCanDeleteElement); \
	DECLARE_FUNCTION(execNotifyMovementEnded); \
	DECLARE_FUNCTION(execNotifyMovementOngoing); \
	DECLARE_FUNCTION(execNotifyMovementStarted); \
	DECLARE_FUNCTION(execSetPivotOffset); \
	DECLARE_FUNCTION(execGetPivotOffset); \
	DECLARE_FUNCTION(execSetRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execSetWorldTransform); \
	DECLARE_FUNCTION(execGetWorldTransform); \
	DECLARE_FUNCTION(execCanMoveElement); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execGetOwnerWorld); \
	DECLARE_FUNCTION(execGetOwnerLevel); \
	DECLARE_FUNCTION(execCanEditElement); \
	DECLARE_FUNCTION(execIsTemplateElement);


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTypedElementWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementWorldInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTypedElementWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementWorldInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTypedElementWorldInterface(UTypedElementWorldInterface&&); \
	ENGINE_API UTypedElementWorldInterface(const UTypedElementWorldInterface&); \
public: \
	ENGINE_API virtual ~UTypedElementWorldInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTypedElementWorldInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTypedElementWorldInterface(UTypedElementWorldInterface&&); \
	ENGINE_API UTypedElementWorldInterface(const UTypedElementWorldInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTypedElementWorldInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementWorldInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementWorldInterface) \
	ENGINE_API virtual ~UTypedElementWorldInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementWorldInterface(); \
	friend struct Z_Construct_UClass_UTypedElementWorldInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementWorldInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTypedElementWorldInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementWorldInterface() {} \
public: \
	typedef UTypedElementWorldInterface UClassType; \
	typedef ITypedElementWorldInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_INCLASS_IINTERFACE \
protected: \
	virtual ~ITypedElementWorldInterface() {} \
public: \
	typedef UTypedElementWorldInterface UClassType; \
	typedef ITypedElementWorldInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_72_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_80_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h_75_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTypedElementWorldInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Interfaces_TypedElementWorldInterface_h


#define FOREACH_ENUM_ETYPEDELEMENTWORLDTYPE(op) \
	op(ETypedElementWorldType::Game) \
	op(ETypedElementWorldType::Editor) 

enum class ETypedElementWorldType : uint8;
template<> struct TIsUEnumClass<ETypedElementWorldType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETypedElementWorldType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
