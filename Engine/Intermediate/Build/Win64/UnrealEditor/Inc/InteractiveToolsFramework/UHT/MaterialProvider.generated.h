// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TargetInterfaces/MaterialProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_MaterialProvider_generated_h
#error "MaterialProvider.generated.h already included, missing '#pragma once' in MaterialProvider.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_MaterialProvider_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialProvider(UMaterialProvider&&); \
	NO_API UMaterialProvider(const UMaterialProvider&); \
public: \
	NO_API virtual ~UMaterialProvider();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialProvider(UMaterialProvider&&); \
	NO_API UMaterialProvider(const UMaterialProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialProvider) \
	NO_API virtual ~UMaterialProvider();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMaterialProvider(); \
	friend struct Z_Construct_UClass_UMaterialProvider_Statics; \
public: \
	DECLARE_CLASS(UMaterialProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UMaterialProvider)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMaterialProvider() {} \
public: \
	typedef UMaterialProvider UClassType; \
	typedef IMaterialProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_INCLASS_IINTERFACE \
protected: \
	virtual ~IMaterialProvider() {} \
public: \
	typedef UMaterialProvider UClassType; \
	typedef IMaterialProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_25_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UMaterialProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MaterialProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
