// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraLensEffectInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ICameraLensEffectInterface;
class UFXSystemComponent;
enum class EInterfaceValidResult : uint8;
struct FCameraLensInterfaceClassSupport;
#ifdef ENGINE_CameraLensEffectInterface_generated_h
#error "CameraLensEffectInterface.generated.h already included, missing '#pragma once' in CameraLensEffectInterface.h"
#endif
#define ENGINE_CameraLensEffectInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrimaryParticleComponent); \
	DECLARE_FUNCTION(execGetParticleComponents);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrimaryParticleComponent); \
	DECLARE_FUNCTION(execGetParticleComponents);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCameraLensEffectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraLensEffectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraLensEffectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraLensEffectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCameraLensEffectInterface(UCameraLensEffectInterface&&); \
	ENGINE_API UCameraLensEffectInterface(const UCameraLensEffectInterface&); \
public: \
	ENGINE_API virtual ~UCameraLensEffectInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCameraLensEffectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UCameraLensEffectInterface(UCameraLensEffectInterface&&); \
	ENGINE_API UCameraLensEffectInterface(const UCameraLensEffectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraLensEffectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraLensEffectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraLensEffectInterface) \
	ENGINE_API virtual ~UCameraLensEffectInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCameraLensEffectInterface(); \
	friend struct Z_Construct_UClass_UCameraLensEffectInterface_Statics; \
public: \
	DECLARE_CLASS(UCameraLensEffectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCameraLensEffectInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICameraLensEffectInterface() {} \
public: \
	typedef UCameraLensEffectInterface UClassType; \
	typedef ICameraLensEffectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_INCLASS_IINTERFACE \
protected: \
	virtual ~ICameraLensEffectInterface() {} \
public: \
	typedef UCameraLensEffectInterface UClassType; \
	typedef ICameraLensEffectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraLensEffectInterface>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraLensInterfaceClassSupport>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetInterfaceClass); \
	DECLARE_FUNCTION(execIsInterfaceValid); \
	DECLARE_FUNCTION(execIsInterfaceClassValid); \
	DECLARE_FUNCTION(execGetInterfaceClass);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInterfaceClass); \
	DECLARE_FUNCTION(execIsInterfaceValid); \
	DECLARE_FUNCTION(execIsInterfaceClassValid); \
	DECLARE_FUNCTION(execGetInterfaceClass);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary(); \
	friend struct Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics; \
public: \
	DECLARE_CLASS(UCameraLensEffectInterfaceClassSupportLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraLensEffectInterfaceClassSupportLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_INCLASS \
private: \
	static void StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary(); \
	friend struct Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics; \
public: \
	DECLARE_CLASS(UCameraLensEffectInterfaceClassSupportLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraLensEffectInterfaceClassSupportLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraLensEffectInterfaceClassSupportLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraLensEffectInterfaceClassSupportLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraLensEffectInterfaceClassSupportLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraLensEffectInterfaceClassSupportLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraLensEffectInterfaceClassSupportLibrary(UCameraLensEffectInterfaceClassSupportLibrary&&); \
	NO_API UCameraLensEffectInterfaceClassSupportLibrary(const UCameraLensEffectInterfaceClassSupportLibrary&); \
public: \
	NO_API virtual ~UCameraLensEffectInterfaceClassSupportLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraLensEffectInterfaceClassSupportLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraLensEffectInterfaceClassSupportLibrary(UCameraLensEffectInterfaceClassSupportLibrary&&); \
	NO_API UCameraLensEffectInterfaceClassSupportLibrary(const UCameraLensEffectInterfaceClassSupportLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraLensEffectInterfaceClassSupportLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraLensEffectInterfaceClassSupportLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraLensEffectInterfaceClassSupportLibrary) \
	NO_API virtual ~UCameraLensEffectInterfaceClassSupportLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_89_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraLensEffectInterfaceClassSupportLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h


#define FOREACH_ENUM_EINTERFACEVALIDRESULT(op) \
	op(EInterfaceValidResult::Valid) \
	op(EInterfaceValidResult::Invalid) 

enum class EInterfaceValidResult : uint8;
template<> struct TIsUEnumClass<EInterfaceValidResult> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EInterfaceValidResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
