// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef CONTEXTUALANIMATION_ContextualAnimActorInterface_generated_h
#error "ContextualAnimActorInterface.generated.h already included, missing '#pragma once' in ContextualAnimActorInterface.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimActorInterface_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_RPC_WRAPPERS \
	virtual USkeletalMeshComponent* GetMesh_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetMesh);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USkeletalMeshComponent* GetMesh_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetMesh);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimActorInterface(UContextualAnimActorInterface&&); \
	NO_API UContextualAnimActorInterface(const UContextualAnimActorInterface&); \
public: \
	NO_API virtual ~UContextualAnimActorInterface();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimActorInterface(UContextualAnimActorInterface&&); \
	NO_API UContextualAnimActorInterface(const UContextualAnimActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimActorInterface) \
	NO_API virtual ~UContextualAnimActorInterface();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUContextualAnimActorInterface(); \
	friend struct Z_Construct_UClass_UContextualAnimActorInterface_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimActorInterface)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IContextualAnimActorInterface() {} \
public: \
	typedef UContextualAnimActorInterface UClassType; \
	typedef IContextualAnimActorInterface ThisClass; \
	static USkeletalMeshComponent* Execute_GetMesh(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IContextualAnimActorInterface() {} \
public: \
	typedef UContextualAnimActorInterface UClassType; \
	typedef IContextualAnimActorInterface ThisClass; \
	static USkeletalMeshComponent* Execute_GetMesh(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
