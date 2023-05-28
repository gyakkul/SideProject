// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXMVRFixtureActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMXFIXTUREACTORINTERFACE_DMXMVRFixtureActorInterface_generated_h
#error "DMXMVRFixtureActorInterface.generated.h already included, missing '#pragma once' in DMXMVRFixtureActorInterface.h"
#endif
#define DMXFIXTUREACTORINTERFACE_DMXMVRFixtureActorInterface_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_RPC_WRAPPERS \
	virtual void OnMVRGetSupportedDMXAttributes_Implementation(TArray<FName>& OutAttributeNames, TArray<FName>& OutMatrixAttributeNames) const {}; \
 \
	DECLARE_FUNCTION(execOnMVRGetSupportedDMXAttributes);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnMVRGetSupportedDMXAttributes_Implementation(TArray<FName>& OutAttributeNames, TArray<FName>& OutMatrixAttributeNames) const {}; \
 \
	DECLARE_FUNCTION(execOnMVRGetSupportedDMXAttributes);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXMVRFixtureActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXMVRFixtureActorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXMVRFixtureActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXMVRFixtureActorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXMVRFixtureActorInterface(UDMXMVRFixtureActorInterface&&); \
	NO_API UDMXMVRFixtureActorInterface(const UDMXMVRFixtureActorInterface&); \
public: \
	NO_API virtual ~UDMXMVRFixtureActorInterface();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXMVRFixtureActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXMVRFixtureActorInterface(UDMXMVRFixtureActorInterface&&); \
	NO_API UDMXMVRFixtureActorInterface(const UDMXMVRFixtureActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXMVRFixtureActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXMVRFixtureActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXMVRFixtureActorInterface) \
	NO_API virtual ~UDMXMVRFixtureActorInterface();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMXMVRFixtureActorInterface(); \
	friend struct Z_Construct_UClass_UDMXMVRFixtureActorInterface_Statics; \
public: \
	DECLARE_CLASS(UDMXMVRFixtureActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DMXFixtureActorInterface"), NO_API) \
	DECLARE_SERIALIZER(UDMXMVRFixtureActorInterface)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMXMVRFixtureActorInterface() {} \
public: \
	typedef UDMXMVRFixtureActorInterface UClassType; \
	typedef IDMXMVRFixtureActorInterface ThisClass; \
	static void Execute_OnMVRGetSupportedDMXAttributes(const UObject* O, TArray<FName>& OutAttributeNames, TArray<FName>& OutMatrixAttributeNames); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IDMXMVRFixtureActorInterface() {} \
public: \
	typedef UDMXMVRFixtureActorInterface UClassType; \
	typedef IDMXMVRFixtureActorInterface ThisClass; \
	static void Execute_OnMVRGetSupportedDMXAttributes(const UObject* O, TArray<FName>& OutAttributeNames, TArray<FName>& OutMatrixAttributeNames); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_18_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXFIXTUREACTORINTERFACE_API UClass* StaticClass<class UDMXMVRFixtureActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXModularFeatures_Source_DMXFixtureActorInterface_Public_DMXMVRFixtureActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
