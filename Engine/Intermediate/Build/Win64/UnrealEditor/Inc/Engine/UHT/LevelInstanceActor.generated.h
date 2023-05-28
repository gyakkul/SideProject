// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceActor_generated_h
#error "LevelInstanceActor.generated.h already included, missing '#pragma once' in LevelInstanceActor.h"
#endif
#define ENGINE_LevelInstanceActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_LevelInstanceSpawnGuid);


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_LevelInstanceSpawnGuid);


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALevelInstance, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelInstance(); \
	friend struct Z_Construct_UClass_ALevelInstance_Statics; \
public: \
	DECLARE_CLASS(ALevelInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelInstance) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALevelInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LevelInstanceSpawnGuid=NETFIELD_REP_START, \
		NETFIELD_REP_END=LevelInstanceSpawnGuid	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesALevelInstance(); \
	friend struct Z_Construct_UClass_ALevelInstance_Statics; \
public: \
	DECLARE_CLASS(ALevelInstance, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALevelInstance) \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ALevelInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LevelInstanceSpawnGuid=NETFIELD_REP_START, \
		NETFIELD_REP_END=LevelInstanceSpawnGuid	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelInstance(ALevelInstance&&); \
	NO_API ALevelInstance(const ALevelInstance&); \
public: \
	NO_API virtual ~ALevelInstance();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelInstance(ALevelInstance&&); \
	NO_API ALevelInstance(const ALevelInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelInstance) \
	NO_API virtual ~ALevelInstance();


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALevelInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
