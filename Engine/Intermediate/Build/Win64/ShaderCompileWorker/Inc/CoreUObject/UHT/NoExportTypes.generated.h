// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UObject/NoExportTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COREUOBJECT_NoExportTypes_generated_h
#error "NoExportTypes.generated.h already included, missing '#pragma once' in NoExportTypes.h"
#endif
#define COREUOBJECT_NoExportTypes_generated_h

#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_SPARSE_DATA
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_ACCESSORS
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObject(); \
public: \
	DECLARE_CLASS(UObject, None, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UObject)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_INCLASS \
private: \
	static void StaticRegisterNativesUObject(); \
public: \
	DECLARE_CLASS(UObject, None, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CoreUObject"), NO_API) \
	DECLARE_SERIALIZER(UObject)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObject) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObject(UObject&&); \
	NO_API UObject(const UObject&); \
public:


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObject(UObject&&); \
	NO_API UObject(const UObject&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObject)


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2723_PROLOG
#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_SPARSE_DATA \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_ACCESSORS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_INCLASS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_SPARSE_DATA \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_ACCESSORS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h_2726_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COREUOBJECT_API UClass* StaticClass<class UObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h


#define FOREACH_ENUM_ESEARCHCASE(op) \
	op(ESearchCase::CaseSensitive) \
	op(ESearchCase::IgnoreCase) 

namespace ESearchCase { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<ESearchCase::Type>();

#define FOREACH_ENUM_ESEARCHDIR(op) \
	op(ESearchDir::FromStart) \
	op(ESearchDir::FromEnd) 

namespace ESearchDir { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<ESearchDir::Type>();

#define FOREACH_ENUM_ELOGTIMES(op) \
	op(ELogTimes::None) \
	op(ELogTimes::UTC) \
	op(ELogTimes::SinceGStartTime) \
	op(ELogTimes::Local) 

namespace ELogTimes { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<ELogTimes::Type>();

#define FOREACH_ENUM_EAXIS(op) \
	op(EAxis::None) \
	op(EAxis::X) \
	op(EAxis::Y) \
	op(EAxis::Z) 

namespace EAxis { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<EAxis::Type>();

#define FOREACH_ENUM_EAXISLIST(op) \
	op(EAxisList::None) \
	op(EAxisList::X) \
	op(EAxisList::Y) \
	op(EAxisList::Z) \
	op(EAxisList::Screen) \
	op(EAxisList::XY) \
	op(EAxisList::XZ) \
	op(EAxisList::YZ) \
	op(EAxisList::XYZ) \
	op(EAxisList::All) \
	op(EAxisList::ZRotation) \
	op(EAxisList::Rotate2D) 

namespace EAxisList { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<EAxisList::Type>();

#define FOREACH_ENUM_EINTERPCURVEMODE(op) \
	op(CIM_Linear) \
	op(CIM_CurveAuto) \
	op(CIM_Constant) \
	op(CIM_CurveUser) \
	op(CIM_CurveBreak) \
	op(CIM_CurveAutoClamped) 

enum EInterpCurveMode : int;
template<> COREUOBJECT_API UEnum* StaticEnum<EInterpCurveMode>();

#define FOREACH_ENUM_EPIXELFORMAT(op) \
	op(PF_Unknown) \
	op(PF_A32B32G32R32F) \
	op(PF_B8G8R8A8) \
	op(PF_G8) \
	op(PF_G16) \
	op(PF_DXT1) \
	op(PF_DXT3) \
	op(PF_DXT5) \
	op(PF_UYVY) \
	op(PF_FloatRGB) \
	op(PF_FloatRGBA) \
	op(PF_DepthStencil) \
	op(PF_ShadowDepth) \
	op(PF_R32_FLOAT) \
	op(PF_G16R16) \
	op(PF_G16R16F) \
	op(PF_G16R16F_FILTER) \
	op(PF_G32R32F) \
	op(PF_A2B10G10R10) \
	op(PF_A16B16G16R16) \
	op(PF_D24) \
	op(PF_R16F) \
	op(PF_R16F_FILTER) \
	op(PF_BC5) \
	op(PF_V8U8) \
	op(PF_A1) \
	op(PF_FloatR11G11B10) \
	op(PF_A8) \
	op(PF_R32_UINT) \
	op(PF_R32_SINT) \
	op(PF_PVRTC2) \
	op(PF_PVRTC4) \
	op(PF_R16_UINT) \
	op(PF_R16_SINT) \
	op(PF_R16G16B16A16_UINT) \
	op(PF_R16G16B16A16_SINT) \
	op(PF_R5G6B5_UNORM) \
	op(PF_R8G8B8A8) \
	op(PF_A8R8G8B8) \
	op(PF_BC4) \
	op(PF_R8G8) \
	op(PF_ATC_RGB) \
	op(PF_ATC_RGBA_E) \
	op(PF_ATC_RGBA_I) \
	op(PF_X24_G8) \
	op(PF_ETC1) \
	op(PF_ETC2_RGB) \
	op(PF_ETC2_RGBA) \
	op(PF_R32G32B32A32_UINT) \
	op(PF_R16G16_UINT) \
	op(PF_ASTC_4x4) \
	op(PF_ASTC_6x6) \
	op(PF_ASTC_8x8) \
	op(PF_ASTC_10x10) \
	op(PF_ASTC_12x12) \
	op(PF_BC6H) \
	op(PF_BC7) \
	op(PF_R8_UINT) \
	op(PF_L8) \
	op(PF_XGXR8) \
	op(PF_R8G8B8A8_UINT) \
	op(PF_R8G8B8A8_SNORM) \
	op(PF_R16G16B16A16_UNORM) \
	op(PF_R16G16B16A16_SNORM) \
	op(PF_PLATFORM_HDR_0) \
	op(PF_PLATFORM_HDR_1) \
	op(PF_PLATFORM_HDR_2) \
	op(PF_NV12) \
	op(PF_R32G32_UINT) \
	op(PF_ETC2_R11_EAC) \
	op(PF_ETC2_RG11_EAC) \
	op(PF_R8) \
	op(PF_B5G5R5A1_UNORM) \
	op(PF_ASTC_4x4_HDR) \
	op(PF_ASTC_6x6_HDR) \
	op(PF_ASTC_8x8_HDR) \
	op(PF_ASTC_10x10_HDR) \
	op(PF_ASTC_12x12_HDR) \
	op(PF_G16R16_SNORM) \
	op(PF_R8G8_UINT) \
	op(PF_R32G32B32_UINT) \
	op(PF_R32G32B32_SINT) \
	op(PF_R32G32B32F) \
	op(PF_R8_SINT) \
	op(PF_R64_UINT) \
	op(PF_R9G9B9EXP5) \
	op(PF_P010) 

enum EPixelFormat : int;
template<> COREUOBJECT_API UEnum* StaticEnum<EPixelFormat>();

#define FOREACH_ENUM_EMOUSECURSOR(op) \
	op(EMouseCursor::None) \
	op(EMouseCursor::Default) \
	op(EMouseCursor::TextEditBeam) \
	op(EMouseCursor::ResizeLeftRight) \
	op(EMouseCursor::ResizeUpDown) \
	op(EMouseCursor::ResizeSouthEast) \
	op(EMouseCursor::ResizeSouthWest) \
	op(EMouseCursor::CardinalCross) \
	op(EMouseCursor::Crosshairs) \
	op(EMouseCursor::Hand) \
	op(EMouseCursor::GrabHand) \
	op(EMouseCursor::GrabHandClosed) \
	op(EMouseCursor::SlashedCircle) \
	op(EMouseCursor::EyeDropper) 

namespace EMouseCursor { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<EMouseCursor::Type>();

#define FOREACH_ENUM_EUNIT(op) \
	op(EUnit::Micrometers) \
	op(EUnit::Millimeters) \
	op(EUnit::Centimeters) \
	op(EUnit::Meters) \
	op(EUnit::Kilometers) \
	op(EUnit::Inches) \
	op(EUnit::Feet) \
	op(EUnit::Yards) \
	op(EUnit::Miles) \
	op(EUnit::Lightyears) \
	op(EUnit::Degrees) \
	op(EUnit::Radians) \
	op(EUnit::CentimetersPerSecond) \
	op(EUnit::MetersPerSecond) \
	op(EUnit::KilometersPerHour) \
	op(EUnit::MilesPerHour) \
	op(EUnit::Celsius) \
	op(EUnit::Farenheit) \
	op(EUnit::Kelvin) \
	op(EUnit::Micrograms) \
	op(EUnit::Milligrams) \
	op(EUnit::Grams) \
	op(EUnit::Kilograms) \
	op(EUnit::MetricTons) \
	op(EUnit::Ounces) \
	op(EUnit::Pounds) \
	op(EUnit::Stones) \
	op(EUnit::Newtons) \
	op(EUnit::PoundsForce) \
	op(EUnit::KilogramsForce) \
	op(EUnit::Hertz) \
	op(EUnit::Kilohertz) \
	op(EUnit::Megahertz) \
	op(EUnit::Gigahertz) \
	op(EUnit::RevolutionsPerMinute) \
	op(EUnit::Bytes) \
	op(EUnit::Kilobytes) \
	op(EUnit::Megabytes) \
	op(EUnit::Gigabytes) \
	op(EUnit::Terabytes) \
	op(EUnit::Lumens) \
	op(EUnit::Milliseconds) \
	op(EUnit::Seconds) \
	op(EUnit::Minutes) \
	op(EUnit::Hours) \
	op(EUnit::Days) \
	op(EUnit::Months) \
	op(EUnit::Years) \
	op(EUnit::Multiplier) \
	op(EUnit::Percentage) \
	op(EUnit::Unspecified) 

enum class EUnit : uint8;
template<> struct TIsUEnumClass<EUnit> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EUnit>();

#define FOREACH_ENUM_EPROPERTYACCESSCHANGENOTIFYMODE(op) \
	op(EPropertyAccessChangeNotifyMode::Default) \
	op(EPropertyAccessChangeNotifyMode::Never) \
	op(EPropertyAccessChangeNotifyMode::Always) 

enum class EPropertyAccessChangeNotifyMode : uint8;
template<> struct TIsUEnumClass<EPropertyAccessChangeNotifyMode> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EPropertyAccessChangeNotifyMode>();

#define FOREACH_ENUM_EAPPRETURNTYPE(op) \
	op(EAppReturnType::No) \
	op(EAppReturnType::Yes) \
	op(EAppReturnType::YesAll) \
	op(EAppReturnType::NoAll) \
	op(EAppReturnType::Cancel) \
	op(EAppReturnType::Ok) \
	op(EAppReturnType::Retry) \
	op(EAppReturnType::Continue) 

namespace EAppReturnType { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<EAppReturnType::Type>();

#define FOREACH_ENUM_EAPPMSGTYPE(op) \
	op(EAppMsgType::Ok) \
	op(EAppMsgType::YesNo) \
	op(EAppMsgType::OkCancel) \
	op(EAppMsgType::YesNoCancel) \
	op(EAppMsgType::CancelRetryContinue) \
	op(EAppMsgType::YesNoYesAllNoAll) \
	op(EAppMsgType::YesNoYesAllNoAllCancel) \
	op(EAppMsgType::YesNoYesAll) 

namespace EAppMsgType { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<EAppMsgType::Type>();

#define FOREACH_ENUM_ERANGEBOUNDTYPES(op) \
	op(ERangeBoundTypes::Exclusive) \
	op(ERangeBoundTypes::Inclusive) \
	op(ERangeBoundTypes::Open) 

namespace ERangeBoundTypes { enum Type : int; }
template<> COREUOBJECT_API UEnum* StaticEnum<ERangeBoundTypes::Type>();

#define FOREACH_ENUM_ELOCALIZEDTEXTSOURCECATEGORY(op) \
	op(ELocalizedTextSourceCategory::Game) \
	op(ELocalizedTextSourceCategory::Engine) \
	op(ELocalizedTextSourceCategory::Editor) 

enum class ELocalizedTextSourceCategory : uint8;
template<> struct TIsUEnumClass<ELocalizedTextSourceCategory> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<ELocalizedTextSourceCategory>();

#define FOREACH_ENUM_EAUTOMATIONEVENTTYPE(op) \
	op(EAutomationEventType::Info) \
	op(EAutomationEventType::Warning) \
	op(EAutomationEventType::Error) 

enum class EAutomationEventType : uint8;
template<> struct TIsUEnumClass<EAutomationEventType> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EAutomationEventType>();

#define FOREACH_ENUM_EINPUTDEVICECONNECTIONSTATE(op) \
	op(EInputDeviceConnectionState::Invalid) \
	op(EInputDeviceConnectionState::Unknown) \
	op(EInputDeviceConnectionState::Disconnected) \
	op(EInputDeviceConnectionState::Connected) 

enum class EInputDeviceConnectionState : uint8;
template<> struct TIsUEnumClass<EInputDeviceConnectionState> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EInputDeviceConnectionState>();

#define FOREACH_ENUM_EINPUTDEVICETRIGGERMASK(op) \
	op(EInputDeviceTriggerMask::None) \
	op(EInputDeviceTriggerMask::Left) \
	op(EInputDeviceTriggerMask::Right) \
	op(EInputDeviceTriggerMask::All) 

enum class EInputDeviceTriggerMask : uint8;
template<> struct TIsUEnumClass<EInputDeviceTriggerMask> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EInputDeviceTriggerMask>();

#define FOREACH_ENUM_EDATAVALIDATIONRESULT(op) \
	op(EDataValidationResult::Invalid) \
	op(EDataValidationResult::Valid) \
	op(EDataValidationResult::NotValidated) 

enum class EDataValidationResult : uint8;
template<> struct TIsUEnumClass<EDataValidationResult> { enum { Value = true }; };
template<> COREUOBJECT_API UEnum* StaticEnum<EDataValidationResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
