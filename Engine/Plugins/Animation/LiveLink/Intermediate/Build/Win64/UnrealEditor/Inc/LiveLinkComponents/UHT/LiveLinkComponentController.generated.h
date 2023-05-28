// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkComponentController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSubjectRepresentation;
#ifdef LIVELINKCOMPONENTS_LiveLinkComponentController_generated_h
#error "LiveLinkComponentController.generated.h already included, missing '#pragma once' in LiveLinkComponentController.h"
#endif
#define LIVELINKCOMPONENTS_LiveLinkComponentController_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_12_DELEGATE \
LIVELINKCOMPONENTS_API void FLiveLinkTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickDelegate, float DeltaTime);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_13_DELEGATE \
LIVELINKCOMPONENTS_API void FOnControllerMapUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnControllerMapUpdatedDelegate);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSubjectRepresentation); \
	DECLARE_FUNCTION(execGetSubjectRepresentation);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSubjectRepresentation); \
	DECLARE_FUNCTION(execGetSubjectRepresentation);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ACCESSORS
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkComponentController, NO_API)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkComponentController(); \
	friend struct Z_Construct_UClass_ULiveLinkComponentController_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponentController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponentController) \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkComponentController(); \
	friend struct Z_Construct_UClass_ULiveLinkComponentController_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponentController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLinkComponents"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponentController) \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkComponentController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkComponentController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponentController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponentController(ULiveLinkComponentController&&); \
	NO_API ULiveLinkComponentController(const ULiveLinkComponentController&); \
public:


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponentController(ULiveLinkComponentController&&); \
	NO_API ULiveLinkComponentController(const ULiveLinkComponentController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponentController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkComponentController)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_19_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_INCLASS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKCOMPONENTS_API UClass* StaticClass<class ULiveLinkComponentController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
