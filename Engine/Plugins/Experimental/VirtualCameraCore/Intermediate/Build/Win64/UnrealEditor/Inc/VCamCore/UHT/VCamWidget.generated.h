// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/VCamWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FVCamConnectionTargetSettings;
class UInputAction;
class UVCamComponent;
class UVCamModifier;
enum class EConnectionUpdateResult : uint8;
#ifdef VCAMCORE_VCamWidget_generated_h
#error "VCamWidget.generated.h already included, missing '#pragma once' in VCamWidget.h"
#endif
#define VCAMCORE_VCamWidget_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_63_DELEGATE \
static void FConnectionsReinitializedDelegate_Blueprint_DelegateWrapper(const FMulticastScriptDelegate& ConnectionsReinitializedDelegate_Blueprint);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_RPC_WRAPPERS \
	virtual void OnInitializeConnections_Implementation(UVCamComponent* VCam); \
 \
	DECLARE_FUNCTION(execOnInitializeConnections); \
	DECLARE_FUNCTION(execUpdateConnectionTargets); \
	DECLARE_FUNCTION(execReinitializeConnections);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInitializeConnections_Implementation(UVCamComponent* VCam); \
 \
	DECLARE_FUNCTION(execOnInitializeConnections); \
	DECLARE_FUNCTION(execUpdateConnectionTargets); \
	DECLARE_FUNCTION(execReinitializeConnections);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVCamWidget(); \
	friend struct Z_Construct_UClass_UVCamWidget_Statics; \
public: \
	DECLARE_CLASS(UVCamWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamWidget)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUVCamWidget(); \
	friend struct Z_Construct_UClass_UVCamWidget_Statics; \
public: \
	DECLARE_CLASS(UVCamWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamCore"), NO_API) \
	DECLARE_SERIALIZER(UVCamWidget)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVCamWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamWidget(UVCamWidget&&); \
	NO_API UVCamWidget(const UVCamWidget&); \
public: \
	NO_API virtual ~UVCamWidget();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVCamWidget(UVCamWidget&&); \
	NO_API UVCamWidget(const UVCamWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVCamWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVCamWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVCamWidget) \
	NO_API virtual ~UVCamWidget();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMCORE_API UClass* StaticClass<class UVCamWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_VCamWidget_h


#define FOREACH_ENUM_ECONNECTIONUPDATERESULT(op) \
	op(EConnectionUpdateResult::DidUpdateConnections) \
	op(EConnectionUpdateResult::NoConnectionsUpdated) 

enum class EConnectionUpdateResult : uint8;
template<> struct TIsUEnumClass<EConnectionUpdateResult> { enum { Value = true }; };
template<> VCAMCORE_API UEnum* StaticEnum<EConnectionUpdateResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
