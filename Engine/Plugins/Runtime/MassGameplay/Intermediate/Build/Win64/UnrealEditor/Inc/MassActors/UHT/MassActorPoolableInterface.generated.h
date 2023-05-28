// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassActorPoolableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSACTORS_MassActorPoolableInterface_generated_h
#error "MassActorPoolableInterface.generated.h already included, missing '#pragma once' in MassActorPoolableInterface.h"
#endif
#define MASSACTORS_MassActorPoolableInterface_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_RPC_WRAPPERS \
	virtual void PrepareForGame_Implementation() {}; \
	virtual void PrepareForPooling_Implementation() {}; \
	virtual bool CanBePooled_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPrepareForGame); \
	DECLARE_FUNCTION(execPrepareForPooling); \
	DECLARE_FUNCTION(execCanBePooled);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PrepareForGame_Implementation() {}; \
	virtual void PrepareForPooling_Implementation() {}; \
	virtual bool CanBePooled_Implementation() { return false; }; \
 \
	DECLARE_FUNCTION(execPrepareForGame); \
	DECLARE_FUNCTION(execPrepareForPooling); \
	DECLARE_FUNCTION(execCanBePooled);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassActorPoolableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassActorPoolableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActorPoolableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorPoolableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassActorPoolableInterface(UMassActorPoolableInterface&&); \
	NO_API UMassActorPoolableInterface(const UMassActorPoolableInterface&); \
public: \
	NO_API virtual ~UMassActorPoolableInterface();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassActorPoolableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassActorPoolableInterface(UMassActorPoolableInterface&&); \
	NO_API UMassActorPoolableInterface(const UMassActorPoolableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassActorPoolableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassActorPoolableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassActorPoolableInterface) \
	NO_API virtual ~UMassActorPoolableInterface();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassActorPoolableInterface(); \
	friend struct Z_Construct_UClass_UMassActorPoolableInterface_Statics; \
public: \
	DECLARE_CLASS(UMassActorPoolableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassActors"), NO_API) \
	DECLARE_SERIALIZER(UMassActorPoolableInterface)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMassActorPoolableInterface() {} \
public: \
	typedef UMassActorPoolableInterface UClassType; \
	typedef IMassActorPoolableInterface ThisClass; \
	static bool Execute_CanBePooled(UObject* O); \
	static void Execute_PrepareForGame(UObject* O); \
	static void Execute_PrepareForPooling(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IMassActorPoolableInterface() {} \
public: \
	typedef UMassActorPoolableInterface UClassType; \
	typedef IMassActorPoolableInterface ThisClass; \
	static bool Execute_CanBePooled(UObject* O); \
	static void Execute_PrepareForGame(UObject* O); \
	static void Execute_PrepareForPooling(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_9_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSACTORS_API UClass* StaticClass<class UMassActorPoolableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
