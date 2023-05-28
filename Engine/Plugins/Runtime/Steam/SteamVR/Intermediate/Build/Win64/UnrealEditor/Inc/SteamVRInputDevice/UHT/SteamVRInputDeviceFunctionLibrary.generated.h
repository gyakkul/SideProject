// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamVRInputDeviceFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerFidelity : uint8;
enum class EHand : uint8;
enum class ESkeletalSummaryDataType : uint8;
enum class ESteamVRHand : uint8;
enum class ESteamVRInputStringBits : uint8;
struct FSteamVRAction;
struct FSteamVRActionSet;
struct FSteamVRFingerCurls;
struct FSteamVRFingerSplays;
struct FSteamVRInputBindingInfo;
struct FSteamVRInputOriginInfo;
struct FSteamVRSkeletonTransform;
#ifdef STEAMVRINPUTDEVICE_SteamVRInputDeviceFunctionLibrary_generated_h
#error "SteamVRInputDeviceFunctionLibrary.generated.h already included, missing '#pragma once' in SteamVRInputDeviceFunctionLibrary.h"
#endif
#define STEAMVRINPUTDEVICE_SteamVRInputDeviceFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRSkeletonTransform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRSkeletonTransform>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRFingerCurls_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRFingerCurls>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRFingerSplays_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRFingerSplays>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRAction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRAction>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRActionSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRActionSet>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRInputOriginInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRInputOriginInfo>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_299_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUE4RetargettingRefs_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FUE4RetargettingRefs>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_335_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamVRInputBindingInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMVRINPUTDEVICE_API UScriptStruct* StaticStruct<struct FSteamVRInputBindingInfo>();

#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserIPD); \
	DECLARE_FUNCTION(execResetSeatedPosition); \
	DECLARE_FUNCTION(execFindSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execGetSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execShowAllSteamVR_ActionOrigins); \
	DECLARE_FUNCTION(execSetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_HandPoseRelativeToNow); \
	DECLARE_FUNCTION(execFindSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execShowSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execGetSteamVR_OriginLocalizedName); \
	DECLARE_FUNCTION(execFindSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_ActionSetArray); \
	DECLARE_FUNCTION(execFindSteamVR_Action); \
	DECLARE_FUNCTION(execGetSteamVR_ActionArray); \
	DECLARE_FUNCTION(execGetRightHandPoseData); \
	DECLARE_FUNCTION(execGetLeftHandPoseData); \
	DECLARE_FUNCTION(execGetSkeletalTransform); \
	DECLARE_FUNCTION(execSetPoseSource); \
	DECLARE_FUNCTION(execGetPoseSource); \
	DECLARE_FUNCTION(execSetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execGetControllerFidelity); \
	DECLARE_FUNCTION(execGetSkeletalState); \
	DECLARE_FUNCTION(execGetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execPlaySteamVR_HapticFeedback); \
	DECLARE_FUNCTION(execGetFingerCurlsAndSplays);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserIPD); \
	DECLARE_FUNCTION(execResetSeatedPosition); \
	DECLARE_FUNCTION(execFindSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execGetSteamVR_InputBindingInfo); \
	DECLARE_FUNCTION(execShowAllSteamVR_ActionOrigins); \
	DECLARE_FUNCTION(execSetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_GlobalPredictedSecondsFromNow); \
	DECLARE_FUNCTION(execGetSteamVR_HandPoseRelativeToNow); \
	DECLARE_FUNCTION(execFindSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execShowSteamVR_ActionOrigin); \
	DECLARE_FUNCTION(execGetSteamVR_OriginLocalizedName); \
	DECLARE_FUNCTION(execFindSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_OriginTrackedDeviceInfo); \
	DECLARE_FUNCTION(execGetSteamVR_ActionSetArray); \
	DECLARE_FUNCTION(execFindSteamVR_Action); \
	DECLARE_FUNCTION(execGetSteamVR_ActionArray); \
	DECLARE_FUNCTION(execGetRightHandPoseData); \
	DECLARE_FUNCTION(execGetLeftHandPoseData); \
	DECLARE_FUNCTION(execGetSkeletalTransform); \
	DECLARE_FUNCTION(execSetPoseSource); \
	DECLARE_FUNCTION(execGetPoseSource); \
	DECLARE_FUNCTION(execSetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execGetControllerFidelity); \
	DECLARE_FUNCTION(execGetSkeletalState); \
	DECLARE_FUNCTION(execGetCurlsAndSplaysState); \
	DECLARE_FUNCTION(execPlaySteamVR_HapticFeedback); \
	DECLARE_FUNCTION(execGetFingerCurlsAndSplays);


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_ACCESSORS
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_USteamVRInputDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_USteamVRInputDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_USteamVRInputDeviceFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_USteamVRInputDeviceFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_USteamVRInputDeviceFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_USteamVRInputDeviceFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/SteamVRInputDevice"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_USteamVRInputDeviceFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_USteamVRInputDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_USteamVRInputDeviceFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_USteamVRInputDeviceFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_USteamVRInputDeviceFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_USteamVRInputDeviceFunctionLibrary(UDEPRECATED_USteamVRInputDeviceFunctionLibrary&&); \
	NO_API UDEPRECATED_USteamVRInputDeviceFunctionLibrary(const UDEPRECATED_USteamVRInputDeviceFunctionLibrary&); \
public: \
	NO_API virtual ~UDEPRECATED_USteamVRInputDeviceFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_USteamVRInputDeviceFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_USteamVRInputDeviceFunctionLibrary(UDEPRECATED_USteamVRInputDeviceFunctionLibrary&&); \
	NO_API UDEPRECATED_USteamVRInputDeviceFunctionLibrary(const UDEPRECATED_USteamVRInputDeviceFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_USteamVRInputDeviceFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_USteamVRInputDeviceFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_USteamVRInputDeviceFunctionLibrary) \
	NO_API virtual ~UDEPRECATED_USteamVRInputDeviceFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_443_PROLOG
#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_INCLASS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h_446_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMVRINPUTDEVICE_API UClass* StaticClass<class UDEPRECATED_USteamVRInputDeviceFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVRInputDevice_Public_SteamVRInputDeviceFunctionLibrary_h


#define FOREACH_ENUM_ESTEAMVRHAND(op) \
	op(ESteamVRHand::VR_Left) \
	op(ESteamVRHand::VR_Right) 

enum class ESteamVRHand : uint8;
template<> struct TIsUEnumClass<ESteamVRHand> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRHand>();

#define FOREACH_ENUM_EMOTIONRANGE(op) \
	op(EMotionRange::VR_WithoutController) \
	op(EMotionRange::VR_WithController) 

enum class EMotionRange : uint8;
template<> struct TIsUEnumClass<EMotionRange> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EMotionRange>();

#define FOREACH_ENUM_EHAND(op) \
	op(EHand::VR_LeftHand) \
	op(EHand::VR_RightHand) 

enum class EHand : uint8;
template<> struct TIsUEnumClass<EHand> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHand>();

#define FOREACH_ENUM_EHANDSKELETON(op) \
	op(EHandSkeleton::VR_SteamVRHandSkeleton) \
	op(EHandSkeleton::VR_UE4HandSkeleton) 

enum class EHandSkeleton : uint8;
template<> struct TIsUEnumClass<EHandSkeleton> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EHandSkeleton>();

#define FOREACH_ENUM_ECONTROLLERFIDELITY(op) \
	op(EControllerFidelity::VR_ControllerFidelity_Estimated) \
	op(EControllerFidelity::VR_ControllerFidelity_Full) \
	op(EControllerFidelity::VR_ControllerFidelity_Partial) 

enum class EControllerFidelity : uint8;
template<> struct TIsUEnumClass<EControllerFidelity> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<EControllerFidelity>();

#define FOREACH_ENUM_ESTEAMVRINPUTSTRINGBITS(op) \
	op(ESteamVRInputStringBits::VR_InputString_Hand) \
	op(ESteamVRInputStringBits::VR_InputString_ControllerType) \
	op(ESteamVRInputStringBits::VR_InputString_InputSource) \
	op(ESteamVRInputStringBits::VR_InputString_All) 

enum class ESteamVRInputStringBits : uint8;
template<> struct TIsUEnumClass<ESteamVRInputStringBits> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESteamVRInputStringBits>();

#define FOREACH_ENUM_ESKELETALSUMMARYDATATYPE(op) \
	op(ESkeletalSummaryDataType::VR_SummaryType_FromAnimation) \
	op(ESkeletalSummaryDataType::VR_SummaryType_FromDevice) 

enum class ESkeletalSummaryDataType : uint8;
template<> struct TIsUEnumClass<ESkeletalSummaryDataType> { enum { Value = true }; };
template<> STEAMVRINPUTDEVICE_API UEnum* StaticEnum<ESkeletalSummaryDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
