// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveToolManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolManager_generated_h
#error "InteractiveToolManager.generated.h already included, missing '#pragma once' in InteractiveToolManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolManager_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolManager(); \
	friend struct Z_Construct_UClass_UInteractiveToolManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveToolManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveToolManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveToolManager*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveToolManager(); \
	friend struct Z_Construct_UClass_UInteractiveToolManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveToolManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveToolManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveToolManager*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveToolManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveToolManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveToolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveToolManager(UInteractiveToolManager&&); \
	NO_API UInteractiveToolManager(const UInteractiveToolManager&); \
public: \
	NO_API virtual ~UInteractiveToolManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveToolManager(UInteractiveToolManager&&); \
	NO_API UInteractiveToolManager(const UInteractiveToolManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveToolManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveToolManager) \
	NO_API virtual ~UInteractiveToolManager();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_61_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_INCLASS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveToolManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveToolManager_h


#define FOREACH_ENUM_ETOOLSIDE(op) \
	op(EToolSide::Left) \
	op(EToolSide::Mouse) \
	op(EToolSide::Right) 

enum class EToolSide;
template<> struct TIsUEnumClass<EToolSide> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolSide>();

#define FOREACH_ENUM_ETOOLCHANGETRACKINGMODE(op) \
	op(EToolChangeTrackingMode::NoChangeTracking) \
	op(EToolChangeTrackingMode::UndoToExit) \
	op(EToolChangeTrackingMode::FullUndoRedo) 

enum class EToolChangeTrackingMode;
template<> struct TIsUEnumClass<EToolChangeTrackingMode> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolChangeTrackingMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
