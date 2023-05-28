// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HeadMountedDisplayTypes.h"
#include "IIdentifiableXRDevice.h"
#include "InputCoreTypes.h"
#include "XRGestureConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRDeviceId();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRGestureConfig();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRHMDData();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics
	{
		struct _Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms
		{
			FString OutReason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::NewProp_OutReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::NewProp_OutReason = { "OutReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms, OutReason), METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::NewProp_OutReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::NewProp_OutReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::NewProp_OutReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay, nullptr, "XRDeviceOnDisconnectDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::_Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms), Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FXRDeviceOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& XRDeviceOnDisconnectDelegate, const FString& OutReason)
{
	struct _Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms
	{
		FString OutReason;
	};
	_Script_HeadMountedDisplay_eventXRDeviceOnDisconnectDelegate_Parms Parms;
	Parms.OutReason=OutReason;
	XRDeviceOnDisconnectDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics
	{
		struct _Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms
		{
			float Value;
			FTimespan Time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms, Value), METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay, nullptr, "XRTimedInputActionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::_Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms), Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FXRTimedInputActionDelegate_DelegateWrapper(const FScriptDelegate& XRTimedInputActionDelegate, const float Value, const FTimespan Time)
{
	struct _Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms
	{
		float Value;
		FTimespan Time;
	};
	_Script_HeadMountedDisplay_eventXRTimedInputActionDelegate_Parms Parms;
	Parms.Value=Value;
	Parms.Time=Time;
	XRTimedInputActionDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execBreakKey)
	{
		P_GET_STRUCT(FKey,Z_Param_InKey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InteractionProfile);
		P_GET_ENUM_REF(EControllerHand,Z_Param_Out_Hand);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_MotionSource);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Indentifier);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::BreakKey(Z_Param_InKey,Z_Param_Out_InteractionProfile,(EControllerHand&)(Z_Param_Out_Hand),Z_Param_Out_MotionSource,Z_Param_Out_Indentifier,Z_Param_Out_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetPlayAreaRect)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutRect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetPlayAreaRect(Z_Param_Out_OutTransform,Z_Param_Out_OutRect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingOriginTransform)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingOriginTransform(EHMDTrackingOrigin::Type(Z_Param_Origin),Z_Param_Out_OutTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetPlayAreaBounds)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetPlayAreaBounds(EHMDTrackingOrigin::Type(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetControllerTransformForTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
		P_GET_PROPERTY(FNameProperty,Z_Param_MotionSource);
		P_GET_STRUCT(FTimespan,Z_Param_Time);
		P_GET_UBOOL_REF(Z_Param_Out_bTimeWasUsed);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_GET_UBOOL_REF(Z_Param_Out_bProvidedLinearVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_UBOOL_REF(Z_Param_Out_bProvidedAngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocityRadPerSec);
		P_GET_UBOOL_REF(Z_Param_Out_bProvidedLinearAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetControllerTransformForTime(Z_Param_WorldContext,Z_Param_ControllerIndex,Z_Param_MotionSource,Z_Param_Time,Z_Param_Out_bTimeWasUsed,Z_Param_Out_Orientation,Z_Param_Out_Position,Z_Param_Out_bProvidedLinearVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_bProvidedAngularVelocity,Z_Param_Out_AngularVelocityRadPerSec,Z_Param_Out_bProvidedLinearAcceleration,Z_Param_Out_LinearAcceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execClearXRTimedInputActionDelegate)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ActionPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::ClearXRTimedInputActionDelegate(Z_Param_Out_ActionPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetXRTimedInputActionDelegate)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ActionName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetXRTimedInputActionDelegate(Z_Param_Out_ActionName,FXRTimedInputActionDelegate(Z_Param_Out_InDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetXRDisconnectDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDisconnectedDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetXRDisconnectDelegate(FXRDeviceOnDisconnectDelegate(Z_Param_Out_InDisconnectedDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execDisconnectRemoteXRDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::DisconnectRemoteXRDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execConnectRemoteXRDevice)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EXRDeviceConnectionResult::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::ConnectRemoteXRDevice(Z_Param_IpAddress,Z_Param_BitRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetCurrentInteractionProfile)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InteractionProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetCurrentInteractionProfile(EControllerHand(Z_Param_Hand),Z_Param_Out_InteractionProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execConfigureGestures)
	{
		P_GET_STRUCT_REF(FXRGestureConfig,Z_Param_Out_GestureConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::ConfigureGestures(Z_Param_Out_GestureConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetMotionControllerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_STRUCT_REF(FXRMotionControllerData,Z_Param_Out_MotionControllerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetMotionControllerData(Z_Param_WorldContext,EControllerHand(Z_Param_Hand),Z_Param_Out_MotionControllerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetHMDData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FXRHMDData,Z_Param_Out_HMDData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetHMDData(Z_Param_WorldContext,Z_Param_Out_HMDData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsDeviceTracking)
	{
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsDeviceTracking(Z_Param_Out_XRDeviceId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetDeviceWorldPose)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(Z_Param_WorldContext,Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetDevicePose)
	{
		P_GET_STRUCT_REF(FXRDeviceId,Z_Param_Out_XRDeviceId);
		P_GET_UBOOL_REF(Z_Param_Out_bIsTracked);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Orientation);
		P_GET_UBOOL_REF(Z_Param_Out_bHasPositionalTracking);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetDevicePose(Z_Param_Out_XRDeviceId,Z_Param_Out_bIsTracked,Z_Param_Out_Orientation,Z_Param_Out_bHasPositionalTracking,Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execEnumerateTrackedDevices)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SystemId);
		P_GET_ENUM(EXRTrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FXRDeviceId>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(Z_Param_SystemId,EXRTrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenModeTexturePlusEyeLayout)
	{
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMin);
		P_GET_STRUCT(FVector2D,Z_Param_EyeRectMax);
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMin);
		P_GET_STRUCT(FVector2D,Z_Param_TextureRectMax);
		P_GET_UBOOL(Z_Param_bDrawEyeFirst);
		P_GET_UBOOL(Z_Param_bClearBlack);
		P_GET_UBOOL(Z_Param_bUseAlpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(Z_Param_EyeRectMin,Z_Param_EyeRectMax,Z_Param_TextureRectMin,Z_Param_TextureRectMax,Z_Param_bDrawEyeFirst,Z_Param_bClearBlack,Z_Param_bUseAlpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenMode)
	{
		P_GET_ENUM(ESpectatorScreenMode,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(ESpectatorScreenMode(Z_Param_Mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsSpectatorScreenModeControllable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetVRFocusState)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bUseFocus);
		P_GET_UBOOL_REF(Z_Param_Out_bHasFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetVRFocusState(Z_Param_Out_bUseFocus,Z_Param_Out_bHasFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execUpdateExternalTrackingHMDPosition)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(Z_Param_Out_ExternalTrackingTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execCalibrateExternalTrackingToHMD)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_ExternalTrackingTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(Z_Param_Out_ExternalTrackingTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingToWorldTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EHMDTrackingOrigin::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetTrackingOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetTrackingOrigin)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Type(Z_Param_Origin));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetWorldToMetersScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetWorldToMetersScale)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(Z_Param_WorldContext,Z_Param_NewScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetPixelDensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetPixelDensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execSetClippingPlanes)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Near);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Far);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::SetClippingPlanes(Z_Param_Near,Z_Param_Far);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execResetOrientationAndPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(Z_Param_Yaw,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execEnableLowPersistenceMode)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsInLowPersistenceMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetPositionalTrackingCameraParameters)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraOrigin);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_VFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_CameraDistance);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NearPlane);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FarPlane);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(Z_Param_Out_CameraOrigin,Z_Param_Out_CameraRotation,Z_Param_Out_HFOV,Z_Param_Out_VFOV,Z_Param_Out_CameraDistance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetTrackingSensorParameters)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LeftFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RightFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TopFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BottomFOV);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Distance);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_NearPlane);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FarPlane);
		P_GET_UBOOL_REF(Z_Param_Out_IsActive);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(Z_Param_Out_Origin,Z_Param_Out_Rotation,Z_Param_Out_LeftFOV,Z_Param_Out_RightFOV,Z_Param_Out_TopFOV,Z_Param_Out_BottomFOV,Z_Param_Out_Distance,Z_Param_Out_NearPlane,Z_Param_Out_FarPlane,Z_Param_Out_IsActive,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetNumOfTrackingSensors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execHasValidTrackingPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::HasValidTrackingPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetOrientationAndPosition)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetHMDWornState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EHMDWornState::Type>*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDWornState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetVersionString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetVersionString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetXRSystemFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetXRSystemFlags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execGetHMDDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::GetHMDDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execEnableHMD)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::EnableHMD(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
		P_NATIVE_END;
	}
	void UHeadMountedDisplayFunctionLibrary::StaticRegisterNativesUHeadMountedDisplayFunctionLibrary()
	{
		UClass* Class = UHeadMountedDisplayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakKey", &UHeadMountedDisplayFunctionLibrary::execBreakKey },
			{ "CalibrateExternalTrackingToHMD", &UHeadMountedDisplayFunctionLibrary::execCalibrateExternalTrackingToHMD },
			{ "ClearXRTimedInputActionDelegate", &UHeadMountedDisplayFunctionLibrary::execClearXRTimedInputActionDelegate },
			{ "ConfigureGestures", &UHeadMountedDisplayFunctionLibrary::execConfigureGestures },
			{ "ConnectRemoteXRDevice", &UHeadMountedDisplayFunctionLibrary::execConnectRemoteXRDevice },
			{ "DisconnectRemoteXRDevice", &UHeadMountedDisplayFunctionLibrary::execDisconnectRemoteXRDevice },
			{ "EnableHMD", &UHeadMountedDisplayFunctionLibrary::execEnableHMD },
			{ "EnableLowPersistenceMode", &UHeadMountedDisplayFunctionLibrary::execEnableLowPersistenceMode },
			{ "EnumerateTrackedDevices", &UHeadMountedDisplayFunctionLibrary::execEnumerateTrackedDevices },
			{ "GetControllerTransformForTime", &UHeadMountedDisplayFunctionLibrary::execGetControllerTransformForTime },
			{ "GetCurrentInteractionProfile", &UHeadMountedDisplayFunctionLibrary::execGetCurrentInteractionProfile },
			{ "GetDevicePose", &UHeadMountedDisplayFunctionLibrary::execGetDevicePose },
			{ "GetDeviceWorldPose", &UHeadMountedDisplayFunctionLibrary::execGetDeviceWorldPose },
			{ "GetHMDData", &UHeadMountedDisplayFunctionLibrary::execGetHMDData },
			{ "GetHMDDeviceName", &UHeadMountedDisplayFunctionLibrary::execGetHMDDeviceName },
			{ "GetHMDWornState", &UHeadMountedDisplayFunctionLibrary::execGetHMDWornState },
			{ "GetMotionControllerData", &UHeadMountedDisplayFunctionLibrary::execGetMotionControllerData },
			{ "GetNumOfTrackingSensors", &UHeadMountedDisplayFunctionLibrary::execGetNumOfTrackingSensors },
			{ "GetOrientationAndPosition", &UHeadMountedDisplayFunctionLibrary::execGetOrientationAndPosition },
			{ "GetPixelDensity", &UHeadMountedDisplayFunctionLibrary::execGetPixelDensity },
			{ "GetPlayAreaBounds", &UHeadMountedDisplayFunctionLibrary::execGetPlayAreaBounds },
			{ "GetPlayAreaRect", &UHeadMountedDisplayFunctionLibrary::execGetPlayAreaRect },
			{ "GetPositionalTrackingCameraParameters", &UHeadMountedDisplayFunctionLibrary::execGetPositionalTrackingCameraParameters },
			{ "GetTrackingOrigin", &UHeadMountedDisplayFunctionLibrary::execGetTrackingOrigin },
			{ "GetTrackingOriginTransform", &UHeadMountedDisplayFunctionLibrary::execGetTrackingOriginTransform },
			{ "GetTrackingSensorParameters", &UHeadMountedDisplayFunctionLibrary::execGetTrackingSensorParameters },
			{ "GetTrackingToWorldTransform", &UHeadMountedDisplayFunctionLibrary::execGetTrackingToWorldTransform },
			{ "GetVersionString", &UHeadMountedDisplayFunctionLibrary::execGetVersionString },
			{ "GetVRFocusState", &UHeadMountedDisplayFunctionLibrary::execGetVRFocusState },
			{ "GetWorldToMetersScale", &UHeadMountedDisplayFunctionLibrary::execGetWorldToMetersScale },
			{ "GetXRSystemFlags", &UHeadMountedDisplayFunctionLibrary::execGetXRSystemFlags },
			{ "HasValidTrackingPosition", &UHeadMountedDisplayFunctionLibrary::execHasValidTrackingPosition },
			{ "IsDeviceTracking", &UHeadMountedDisplayFunctionLibrary::execIsDeviceTracking },
			{ "IsHeadMountedDisplayConnected", &UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayConnected },
			{ "IsHeadMountedDisplayEnabled", &UHeadMountedDisplayFunctionLibrary::execIsHeadMountedDisplayEnabled },
			{ "IsInLowPersistenceMode", &UHeadMountedDisplayFunctionLibrary::execIsInLowPersistenceMode },
			{ "IsSpectatorScreenModeControllable", &UHeadMountedDisplayFunctionLibrary::execIsSpectatorScreenModeControllable },
			{ "ResetOrientationAndPosition", &UHeadMountedDisplayFunctionLibrary::execResetOrientationAndPosition },
			{ "SetClippingPlanes", &UHeadMountedDisplayFunctionLibrary::execSetClippingPlanes },
			{ "SetSpectatorScreenMode", &UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenMode },
			{ "SetSpectatorScreenModeTexturePlusEyeLayout", &UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenModeTexturePlusEyeLayout },
			{ "SetSpectatorScreenTexture", &UHeadMountedDisplayFunctionLibrary::execSetSpectatorScreenTexture },
			{ "SetTrackingOrigin", &UHeadMountedDisplayFunctionLibrary::execSetTrackingOrigin },
			{ "SetWorldToMetersScale", &UHeadMountedDisplayFunctionLibrary::execSetWorldToMetersScale },
			{ "SetXRDisconnectDelegate", &UHeadMountedDisplayFunctionLibrary::execSetXRDisconnectDelegate },
			{ "SetXRTimedInputActionDelegate", &UHeadMountedDisplayFunctionLibrary::execSetXRTimedInputActionDelegate },
			{ "UpdateExternalTrackingHMDPosition", &UHeadMountedDisplayFunctionLibrary::execUpdateExternalTrackingHMDPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms
		{
			FKey InKey;
			FString InteractionProfile;
			EControllerHand Hand;
			FName MotionSource;
			FString Indentifier;
			FString Component;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InteractionProfile;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Indentifier;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_InteractionProfile = { "InteractionProfile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms, InteractionProfile), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) }; // 2834220773
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms, MotionSource), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Indentifier = { "Indentifier", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms, Indentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms, Component), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_InteractionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_MotionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Indentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/** Breaks an XR key apart into the interaction profile, handedness, motion source, indentifier and component. */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Breaks an XR key apart into the interaction profile, handedness, motion source, indentifier and component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "BreakKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::HeadMountedDisplayFunctionLibrary_eventBreakKey_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventCalibrateExternalTrackingToHMD_Parms
		{
			FTransform ExternalTrackingTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTrackingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTrackingTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform = { "ExternalTrackingTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventCalibrateExternalTrackingToHMD_Parms, ExternalTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::NewProp_ExternalTrackingTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|ExternalTracking" },
		{ "Comment", "/**\n\x09* Called to calibrate the offset transform between an external tracking source and the internal tracking source\n\x09* (e.g. mocap tracker to and HMD tracker).  This should be called once per session, or when the physical relationship\n\x09* between the external tracker and internal tracker changes (e.g. it was bumped or reattached).  After calibration,\n\x09* calling UpdateExternalTrackingPosition will try to correct the internal tracker to the calibrated offset to prevent\n\x09* drift between the two systems\n\x09*\n\x09* @param ExternalTrackingTransform\x09\x09The transform in world-coordinates, of the reference marker of the external tracking system\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Called to calibrate the offset transform between an external tracking source and the internal tracking source\n(e.g. mocap tracker to and HMD tracker).  This should be called once per session, or when the physical relationship\nbetween the external tracker and internal tracker changes (e.g. it was bumped or reattached).  After calibration,\ncalling UpdateExternalTrackingPosition will try to correct the internal tracker to the calibrated offset to prevent\ndrift between the two systems\n\n@param ExternalTrackingTransform              The transform in world-coordinates, of the reference marker of the external tracking system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "CalibrateExternalTrackingToHMD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::HeadMountedDisplayFunctionLibrary_eventCalibrateExternalTrackingToHMD_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventClearXRTimedInputActionDelegate_Parms
		{
			FName ActionPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::NewProp_ActionPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::NewProp_ActionPath = { "ActionPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventClearXRTimedInputActionDelegate_Parms, ActionPath), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::NewProp_ActionPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::NewProp_ActionPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::NewProp_ActionPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "//** Clear a delegate to get an OpenXR action event with action time.*/\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "/ Clear a delegate to get an OpenXR action event with action time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "ClearXRTimedInputActionDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::HeadMountedDisplayFunctionLibrary_eventClearXRTimedInputActionDelegate_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventConfigureGestures_Parms
		{
			FXRGestureConfig GestureConfig;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GestureConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GestureConfig;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_GestureConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_GestureConfig = { "GestureConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventConfigureGestures_Parms, GestureConfig), Z_Construct_UScriptStruct_FXRGestureConfig, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_GestureConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_GestureConfig_MetaData)) }; // 2156989822
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventConfigureGestures_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventConfigureGestures_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_GestureConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Specify which gestures to capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "ConfigureGestures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::HeadMountedDisplayFunctionLibrary_eventConfigureGestures_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventConnectRemoteXRDevice_Parms
		{
			FString IpAddress;
			int32 BitRate;
			TEnumAsByte<EXRDeviceConnectionResult::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IpAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IpAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BitRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_IpAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventConnectRemoteXRDevice_Parms, IpAddress), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_IpAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_IpAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_BitRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_BitRate = { "BitRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventConnectRemoteXRDevice_Parms, BitRate), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_BitRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_BitRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventConnectRemoteXRDevice_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult, METADATA_PARAMS(nullptr, 0) }; // 2679766992
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_IpAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_BitRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR|HeadMountedDisplay" },
		{ "Comment", "/** Connect to a remote device */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Connect to a remote device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "ConnectRemoteXRDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::HeadMountedDisplayFunctionLibrary_eventConnectRemoteXRDevice_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR|HeadMountedDisplay" },
		{ "Comment", "/** Disconnect remote AR Device */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Disconnect remote AR Device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "DisconnectRemoteXRDevice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms
		{
			bool bEnable;
			bool ReturnValue;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Switches to/from using HMD and stereo rendering.\n\x09 *\n\x09 * @param bEnable\x09\x09\x09(in) 'true' to enable HMD / stereo; 'false' otherwise\n\x09 * @return (Boolean)\x09\x09True, if the request was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Switches to/from using HMD and stereo rendering.\n\n@param bEnable                       (in) 'true' to enable HMD / stereo; 'false' otherwise\n@return (Boolean)            True, if the request was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "EnableHMD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::HeadMountedDisplayFunctionLibrary_eventEnableHMD_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Switches between low and full persistence modes.\n\x09 *\n\x09 * @param bEnable\x09\x09\x09(in) 'true' to enable low persistence mode; 'false' otherwise\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This functionality is no longer available. HMD platforms that support low persistence will always enable it." },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Switches between low and full persistence modes.\n\n@param bEnable                       (in) 'true' to enable low persistence mode; 'false' otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "EnableLowPersistenceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::HeadMountedDisplayFunctionLibrary_eventEnableLowPersistenceMode_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms
		{
			FName SystemId;
			EXRTrackedDeviceType DeviceType;
			TArray<FXRDeviceId> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SystemId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId = { "SystemId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms, SystemId), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms, DeviceType), Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 557844897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(nullptr, 0) }; // 2390384735
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2390384735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_SystemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that will list all XR devices currently being tracked.\n\x09 *\n\x09 * @param  SystemId\x09\x09(Optional) Specifies an explicit system to poll devices from (use if you want only devices belonging to one explicit XR ecosystem, e.g. 'OculusHMD', or 'SteamVR')\n\x09 * @param  DeviceType\x09Specifies the type of device to query for - defaults to 'Any' (meaning 'All').\n\x09 *\n\x09 * @return A list of device identifiers matching the query. Use these to query and operate on the device (e.g. through GetDevicePose, AddDeviceVisualizationComponent, etc.)\n\x09 */" },
		{ "CPP_Default_DeviceType", "Any" },
		{ "CPP_Default_SystemId", "None" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that will list all XR devices currently being tracked.\n\n@param  SystemId             (Optional) Specifies an explicit system to poll devices from (use if you want only devices belonging to one explicit XR ecosystem, e.g. 'OculusHMD', or 'SteamVR')\n@param  DeviceType   Specifies the type of device to query for - defaults to 'Any' (meaning 'All').\n\n@return A list of device identifiers matching the query. Use these to query and operate on the device (e.g. through GetDevicePose, AddDeviceVisualizationComponent, etc.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "EnumerateTrackedDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::HeadMountedDisplayFunctionLibrary_eventEnumerateTrackedDevices_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms
		{
			UObject* WorldContext;
			int32 ControllerIndex;
			FName MotionSource;
			FTimespan Time;
			bool bTimeWasUsed;
			FRotator Orientation;
			FVector Position;
			bool bProvidedLinearVelocity;
			FVector LinearVelocity;
			bool bProvidedAngularVelocity;
			FVector AngularVelocityRadPerSec;
			bool bProvidedLinearAcceleration;
			FVector LinearAcceleration;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MotionSource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static void NewProp_bTimeWasUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimeWasUsed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_bProvidedLinearVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProvidedLinearVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static void NewProp_bProvidedAngularVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProvidedAngularVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocityRadPerSec;
		static void NewProp_bProvidedLinearAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProvidedLinearAcceleration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ControllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, ControllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ControllerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_MotionSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_MotionSource = { "MotionSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, MotionSource), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_MotionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_MotionSource_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bTimeWasUsed_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms*)Obj)->bTimeWasUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bTimeWasUsed = { "bTimeWasUsed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bTimeWasUsed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearVelocity_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms*)Obj)->bProvidedLinearVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearVelocity = { "bProvidedLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedAngularVelocity_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms*)Obj)->bProvidedAngularVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedAngularVelocity = { "bProvidedAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedAngularVelocity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_AngularVelocityRadPerSec = { "AngularVelocityRadPerSec", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, AngularVelocityRadPerSec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearAcceleration_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms*)Obj)->bProvidedLinearAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearAcceleration = { "bProvidedLinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearAcceleration_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_MotionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bTimeWasUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_AngularVelocityRadPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_bProvidedLinearAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_LinearAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09* Get the transform and potentially velocity data at a specified time near the current frame in unreal world space.\n\x09* This is intended for use with sub-frame input action timing data from SetXRTimedInputActionDelegate, or future support for timestamps in the core input system.\n\x09* The valid time window is platform dependent, but the intention per OpenXR is to fetch transforms for times from, at most, the previous few frames in the past or future.  \n\x09* The OpenXR spec suggests that 50ms in the past should return an accurate result.  There is no guarantee for the future, but the underlying system is likely to have been\n\x09* designed to predict out to about 50ms as well.\n\x09* On some platforms this  will always just return a cached position and rotation, ignoring time.  bTimeWasUsed will be false in that case.\n\x09* AngularVelocityRadPerSec is a vector whose direction is the axis of rotation and whoes length is the speed of rotation in radians per second.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Get the transform and potentially velocity data at a specified time near the current frame in unreal world space.\nThis is intended for use with sub-frame input action timing data from SetXRTimedInputActionDelegate, or future support for timestamps in the core input system.\nThe valid time window is platform dependent, but the intention per OpenXR is to fetch transforms for times from, at most, the previous few frames in the past or future.\nThe OpenXR spec suggests that 50ms in the past should return an accurate result.  There is no guarantee for the future, but the underlying system is likely to have been\ndesigned to predict out to about 50ms as well.\nOn some platforms this  will always just return a cached position and rotation, ignoring time.  bTimeWasUsed will be false in that case.\nAngularVelocityRadPerSec is a vector whose direction is the axis of rotation and whoes length is the speed of rotation in radians per second." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetControllerTransformForTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::HeadMountedDisplayFunctionLibrary_eventGetControllerTransformForTime_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetCurrentInteractionProfile_Parms
		{
			EControllerHand Hand;
			FString InteractionProfile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InteractionProfile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetCurrentInteractionProfile_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand_MetaData)) }; // 2834220773
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_InteractionProfile = { "InteractionProfile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetCurrentInteractionProfile_Parms, InteractionProfile), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetCurrentInteractionProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetCurrentInteractionProfile_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_InteractionProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking|OpenXR" },
		{ "Comment", "/**\n\x09 * Get the openXR interaction profile name for the given controller. Returns true if the openxr call is successfully made.  The string may be empty\n\x09 * if there is no interaction profile associated with the controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Get the openXR interaction profile name for the given controller. Returns true if the openxr call is successfully made.  The string may be empty\nif there is no interaction profile associated with the controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetCurrentInteractionProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::HeadMountedDisplayFunctionLibrary_eventGetCurrentInteractionProfile_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms
		{
			FXRDeviceId XRDeviceId;
			bool bIsTracked;
			FRotator Orientation;
			bool bHasPositionalTracking;
			FVector Position;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static void NewProp_bHasPositionalTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPositionalTracking;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId_MetaData)) }; // 2390384735
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms*)Obj)->bIsTracked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms*)Obj)->bHasPositionalTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking = { "bHasPositionalTracking", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bIsTracked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_bHasPositionalTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns a specific device's tracked position and orientation (in tracking space).\n\x09 *\n\x09 * @param  XRDeviceId\x09\x09\x09\x09Specifies the device you're querying for.\n\x09 * @param  bIsTracked\x09\x09\x09\x09[out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n\x09 * @param  Orientation\x09\x09\x09\x09[out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n\x09 * @param  bHasPositionalTracking\x09[out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n\x09 * @param  Position\x09\x09\x09\x09\x09[out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns a specific device's tracked position and orientation (in tracking space).\n\n@param  XRDeviceId                           Specifies the device you're querying for.\n@param  bIsTracked                           [out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n@param  Orientation                          [out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n@param  bHasPositionalTracking       [out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n@param  Position                                     [out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetDevicePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::HeadMountedDisplayFunctionLibrary_eventGetDevicePose_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms
		{
			UObject* WorldContext;
			FXRDeviceId XRDeviceId;
			bool bIsTracked;
			FRotator Orientation;
			bool bHasPositionalTracking;
			FVector Position;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static void NewProp_bIsTracked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTracked;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static void NewProp_bHasPositionalTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPositionalTracking;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId_MetaData)) }; // 2390384735
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms*)Obj)->bIsTracked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked = { "bIsTracked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms*)Obj)->bHasPositionalTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking = { "bHasPositionalTracking", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bIsTracked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_bHasPositionalTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns a specific device's position and orientation in world space.\n\x09 *\n\x09 * @param  XRDeviceId\x09\x09\x09\x09Specifies the device you're querying for.\n\x09 * @param  bIsTracked\x09\x09\x09\x09[out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n\x09 * @param  Orientation\x09\x09\x09\x09[out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n\x09 * @param  bHasPositionalTracking\x09[out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n\x09 * @param  Position\x09\x09\x09\x09\x09[out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns a specific device's position and orientation in world space.\n\n@param  XRDeviceId                           Specifies the device you're querying for.\n@param  bIsTracked                           [out] Details if the specified device is tracked (i.e. should the rest of the outputs be used)\n@param  Orientation                          [out] Represents the device's current rotation - NOTE: this value is not late updated and will be behind the render thread\n@param  bHasPositionalTracking       [out] Details if the specified device has positional tracking (i.e. if the position output should be used)\n@param  Position                                     [out] Represents the device's current position - NOTE: this value is not late updated and will be behind the render thread" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetDeviceWorldPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::HeadMountedDisplayFunctionLibrary_eventGetDeviceWorldPose_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDData_Parms
		{
			UObject* WorldContext;
			FXRHMDData HMDData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HMDData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDData_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::NewProp_HMDData = { "HMDData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDData_Parms, HMDData), Z_Construct_UScriptStruct_FXRHMDData, METADATA_PARAMS(nullptr, 0) }; // 2302025590
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::NewProp_HMDData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns critical information about the HMD display (position, orientation, device name)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns critical information about the HMD display (position, orientation, device name)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetHMDData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::HeadMountedDisplayFunctionLibrary_eventGetHMDData_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns the name of the device, so scripts can modify their behaviour appropriately\n\x09 *\n\x09 * @return\x09""FName specific to the currently active HMD device type.  \"None\" implies no device, \"Unknown\" implies a device with no description.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the name of the device, so scripts can modify their behaviour appropriately\n\n@return      FName specific to the currently active HMD device type.  \"None\" implies no device, \"Unknown\" implies a device with no description." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetHMDDeviceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::HeadMountedDisplayFunctionLibrary_eventGetHMDDeviceName_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms
		{
			TEnumAsByte<EHMDWornState::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, METADATA_PARAMS(nullptr, 0) }; // 2177842658
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Returns the worn state of the device.\n\x09*\n\x09* @return\x09Unknown, Worn, NotWorn.  If the platform does not detect this it will always return Unknown.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the worn state of the device.\n\n@return       Unknown, Worn, NotWorn.  If the platform does not detect this it will always return Unknown." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetHMDWornState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::HeadMountedDisplayFunctionLibrary_eventGetHMDWornState_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetMotionControllerData_Parms
		{
			UObject* WorldContext;
			EControllerHand Hand;
			FXRMotionControllerData MotionControllerData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionControllerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetMotionControllerData_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetMotionControllerData_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand_MetaData)) }; // 2834220773
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_MotionControllerData = { "MotionControllerData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetMotionControllerData_Parms, MotionControllerData), Z_Construct_UScriptStruct_FXRMotionControllerData, METADATA_PARAMS(nullptr, 0) }; // 2470930983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::NewProp_MotionControllerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns critical information about the motion controller (position, orientation, hand/finger position)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns critical information about the motion controller (position, orientation, hand/finger position)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetMotionControllerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::HeadMountedDisplayFunctionLibrary_eventGetMotionControllerData_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* If the HMD has multiple positional tracking sensors, return a total number of them currently connected.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD has multiple positional tracking sensors, return a total number of them currently connected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetNumOfTrackingSensors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::HeadMountedDisplayFunctionLibrary_eventGetNumOfTrackingSensors_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DeviceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::NewProp_DevicePosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\x09 *\n\x09 * @param DeviceRotation\x09(out) The device's current rotation\n\x09 * @param DevicePosition\x09(out) The device's current position, in its own tracking space\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Grabs the current orientation and position for the HMD.  If positional tracking is not available, DevicePosition will be a zero vector\n\n@param DeviceRotation        (out) The device's current rotation\n@param DevicePosition        (out) The device's current position, in its own tracking space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetOrientationAndPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::HeadMountedDisplayFunctionLibrary_eventGetOrientationAndPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPixelDensity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPixelDensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** \n\x09 * Returns the current VR pixel density. Pixel density sets the VR render \n\x09 * target texture size as a factor of recommended texture size. The recommended \n\x09 * texture size is the size that will result in no under sampling in most \n\x09 * distorted area of the view when computing the final image to be displayed \n\x09 * on the device by the runtime compositor.\n\x09 *\n\x09 * @return (float)\x09The pixel density to be used in VR mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the current VR pixel density. Pixel density sets the VR render\ntarget texture size as a factor of recommended texture size. The recommended\ntexture size is the size that will result in no under sampling in most\ndistorted area of the view when computing the final image to be displayed\non the device by the runtime compositor.\n\n@return (float)      The pixel density to be used in VR mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetPixelDensity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::HeadMountedDisplayFunctionLibrary_eventGetPixelDensity_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPlayAreaBounds_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> Origin;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPlayAreaBounds_Parms, Origin), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) }; // 3606177280
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPlayAreaBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Get the bounds of the area where the user can freely move while remaining tracked centered around the specified origin\n\x09 */" },
		{ "CPP_Default_Origin", "Stage" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Get the bounds of the area where the user can freely move while remaining tracked centered around the specified origin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetPlayAreaBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::HeadMountedDisplayFunctionLibrary_eventGetPlayAreaBounds_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPlayAreaRect_Parms
		{
			FTransform OutTransform;
			FVector2D OutRect;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRect;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPlayAreaRect_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_OutRect = { "OutRect", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPlayAreaRect_Parms, OutRect), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetPlayAreaRect_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetPlayAreaRect_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_OutRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Get the transform and dimensions of the playable area rectangle.  Returns false if none currently specified/available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Get the transform and dimensions of the playable area rectangle.  Returns false if none currently specified/available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetPlayAreaRect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::HeadMountedDisplayFunctionLibrary_eventGetPlayAreaRect_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms
		{
			FVector CameraOrigin;
			FRotator CameraRotation;
			float HFOV;
			float VFOV;
			float CameraDistance;
			float NearPlane;
			float FarPlane;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraDistance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearPlane;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraOrigin = { "CameraOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_HFOV = { "HFOV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, HFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_VFOV = { "VFOV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, VFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraDistance = { "CameraDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, CameraDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_NearPlane = { "NearPlane", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, NearPlane), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_FarPlane = { "FarPlane", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms, FarPlane), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_HFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_VFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_CameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_NearPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::NewProp_FarPlane,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\n\x09 * This allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\x09 *\n\x09 * @param Origin\x09\x09\x09(out) Origin, in world-space, of the sensor\n\x09 * @param Rotation\x09\x09\x09(out) Rotation, in world-space, of the sensor\n\x09 * @param HFOV\x09\x09\x09\x09(out) Field-of-view, horizontal, in degrees, of the valid tracking zone of the sensor\n\x09 * @param VFOV\x09\x09\x09\x09(out) Field-of-view, vertical, in degrees, of the valid tracking zone of the sensor\n\x09 * @param CameraDistance\x09(out) Nominal distance to sensor, in world-space\n\x09 * @param NearPlane\x09\x09\x09(out) Near plane distance of the tracking volume, in world-space\n\x09 * @param FarPlane\x09\x09\x09(out) Far plane distance of the tracking volume, in world-space\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use new GetTrackingSensorParameters / GetNumOfTrackingSensors" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\nThis allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\n@param Origin                        (out) Origin, in world-space, of the sensor\n@param Rotation                      (out) Rotation, in world-space, of the sensor\n@param HFOV                          (out) Field-of-view, horizontal, in degrees, of the valid tracking zone of the sensor\n@param VFOV                          (out) Field-of-view, vertical, in degrees, of the valid tracking zone of the sensor\n@param CameraDistance        (out) Nominal distance to sensor, in world-space\n@param NearPlane                     (out) Near plane distance of the tracking volume, in world-space\n@param FarPlane                      (out) Far plane distance of the tracking volume, in world-space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetPositionalTrackingCameraParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::HeadMountedDisplayFunctionLibrary_eventGetPositionalTrackingCameraParameters_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms, ReturnValue), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) }; // 3606177280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns current tracking origin type (eye level or floor level).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns current tracking origin type (eye level or floor level)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::HeadMountedDisplayFunctionLibrary_eventGetTrackingOrigin_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingOriginTransform_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> Origin;
			FTransform OutTransform;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingOriginTransform_Parms, Origin), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) }; // 3606177280
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingOriginTransform_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetTrackingOriginTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingOriginTransform_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Get the transform of the specified tracking origin, if available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Get the transform of the specified tracking origin, if available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingOriginTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::HeadMountedDisplayFunctionLibrary_eventGetTrackingOriginTransform_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms
		{
			FVector Origin;
			FRotator Rotation;
			float LeftFOV;
			float RightFOV;
			float TopFOV;
			float BottomFOV;
			float Distance;
			float NearPlane;
			float FarPlane;
			bool IsActive;
			int32 Index;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TopFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BottomFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearPlane;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarPlane;
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_LeftFOV = { "LeftFOV", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, LeftFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_RightFOV = { "RightFOV", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, RightFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_TopFOV = { "TopFOV", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, TopFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_BottomFOV = { "BottomFOV", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, BottomFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_NearPlane = { "NearPlane", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, NearPlane), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_FarPlane = { "FarPlane", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, FarPlane), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms*)Obj)->IsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_LeftFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_RightFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_TopFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_BottomFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_NearPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_FarPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_IsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "LeftFOV,RightFOV,TopFOV,BottomFOV,Distance,NearPlane,FarPlane" },
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\n\x09 * This allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\x09 *\n\x09 * @param Index\x09\x09\x09\x09(in) Index of the tracking sensor to query\n\x09 * @param Origin\x09\x09\x09(out) Origin, in world-space, of the sensor\n\x09 * @param Rotation\x09\x09\x09(out) Rotation, in world-space, of the sensor\n\x09 * @param LeftFOV\x09\x09\x09(out) Field-of-view, left from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param RightFOV\x09\x09\x09(out) Field-of-view, right from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param TopFOV\x09\x09\x09(out) Field-of-view, top from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param BottomFOV\x09\x09\x09(out) Field-of-view, bottom from center, in degrees, of the valid tracking zone of the sensor\n\x09 * @param Distance\x09\x09\x09(out) Nominal distance to sensor, in world-space\n\x09 * @param NearPlane\x09\x09\x09(out) Near plane distance of the tracking volume, in world-space\n\x09 * @param FarPlane\x09\x09\x09(out) Far plane distance of the tracking volume, in world-space\n\x09 * @param IsActive\x09\x09\x09(out) True, if the query for the specified sensor succeeded.\n\x09 */" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD has a positional sensor, this will return the game-world location of it, as well as the parameters for the bounding region of tracking.\nThis allows an in-game representation of the legal positional tracking range.  All values will be zeroed if the sensor is not available or the HMD does not support it.\n\n@param Index                         (in) Index of the tracking sensor to query\n@param Origin                        (out) Origin, in world-space, of the sensor\n@param Rotation                      (out) Rotation, in world-space, of the sensor\n@param LeftFOV                       (out) Field-of-view, left from center, in degrees, of the valid tracking zone of the sensor\n@param RightFOV                      (out) Field-of-view, right from center, in degrees, of the valid tracking zone of the sensor\n@param TopFOV                        (out) Field-of-view, top from center, in degrees, of the valid tracking zone of the sensor\n@param BottomFOV                     (out) Field-of-view, bottom from center, in degrees, of the valid tracking zone of the sensor\n@param Distance                      (out) Nominal distance to sensor, in world-space\n@param NearPlane                     (out) Near plane distance of the tracking volume, in world-space\n@param FarPlane                      (out) Far plane distance of the tracking volume, in world-space\n@param IsActive                      (out) True, if the query for the specified sensor succeeded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingSensorParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::HeadMountedDisplayFunctionLibrary_eventGetTrackingSensorParameters_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms
		{
			UObject* WorldContext;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns a transform that can be used to convert points from tracking space to world space.\n\x09 * Does NOT include the set WorldToMeters scale, as that is added in by the backing XR system to their tracking space poses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns a transform that can be used to convert points from tracking space to world space.\nDoes NOT include the set WorldToMeters scale, as that is added in by the backing XR system to their tracking space poses." },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetTrackingToWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::HeadMountedDisplayFunctionLibrary_eventGetTrackingToWorldTransform_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetVersionString_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetVersionString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns name of tracking system specific version string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns name of tracking system specific version string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetVersionString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::HeadMountedDisplayFunctionLibrary_eventGetVersionString_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms
		{
			bool bUseFocus;
			bool bHasFocus;
		};
		static void NewProp_bUseFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFocus;
		static void NewProp_bHasFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms*)Obj)->bUseFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus = { "bUseFocus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms*)Obj)->bHasFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus = { "bHasFocus", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bUseFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::NewProp_bHasFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns current state of VR focus.\n\x09 *\n\x09 * @param bUseFocus\x09\x09(out) if set to true, then this App does use VR focus.\n\x09 * @param bHasFocus\x09\x09(out) if set to true, then this App currently has VR focus.\n\x09 */" },
		{ "DisplayName", "Get VR Focus State" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns current state of VR focus.\n\n@param bUseFocus             (out) if set to true, then this App does use VR focus.\n@param bHasFocus             (out) if set to true, then this App currently has VR focus." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetVRFocusState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::HeadMountedDisplayFunctionLibrary_eventGetVRFocusState_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms
		{
			UObject* WorldContext;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Returns the World to Meters scale, which corresponds to the scale of the world as perceived by the player\n\x09*\n\x09* @return\x09How many Unreal units correspond to one meter in the real world\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the World to Meters scale, which corresponds to the scale of the world as perceived by the player\n\n@return       How many Unreal units correspond to one meter in the real world" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetWorldToMetersScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::HeadMountedDisplayFunctionLibrary_eventGetWorldToMetersScale_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventGetXRSystemFlags_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventGetXRSystemFlags_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns the flags for the device, so scripts can modify their behaviour appropriately\n\x09 *\n\x09 * @return\x09IsAR, IsTablet, IsHeadMounted.  Returns false\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns the flags for the device, so scripts can modify their behaviour appropriately\n\n@return      IsAR, IsTablet, IsHeadMounted.  Returns false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "GetXRSystemFlags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::HeadMountedDisplayFunctionLibrary_eventGetXRSystemFlags_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* If the HMD supports positional tracking, whether or not we are currently being tracked\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "If the HMD supports positional tracking, whether or not we are currently being tracked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "HasValidTrackingPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::HeadMountedDisplayFunctionLibrary_eventHasValidTrackingPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms
		{
			FXRDeviceId XRDeviceId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XRDeviceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XRDeviceId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId = { "XRDeviceId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms, XRDeviceId), Z_Construct_UScriptStruct_FXRDeviceId, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId_MetaData)) }; // 2390384735
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_XRDeviceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/**\n\x09 * Cross XR-System query that returns whether the specified device is tracked or not.\n\x09 *\n\x09 * @param  XRDeviceId\x09Specifies the device you're querying for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Cross XR-System query that returns whether the specified device is tracked or not.\n\n@param  XRDeviceId   Specifies the device you're querying for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsDeviceTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::HeadMountedDisplayFunctionLibrary_eventIsDeviceTracking_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Returns whether or not the HMD hardware is connected and ready to use.  It may or may not actually be in use.\n\x09*\n\x09* @return (Boolean)  status whether the HMD hardware is connected and ready to use.  It may or may not actually be in use. \n\x09*/" },
		{ "KeyWords", "HMD" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the HMD hardware is connected and ready to use.  It may or may not actually be in use.\n\n@return (Boolean)  status whether the HMD hardware is connected and ready to use.  It may or may not actually be in use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsHeadMountedDisplayConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayConnected_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns whether or not we are currently using the head mounted display.\n\x09 *\n\x09 * @return (Boolean)  status of HMD\n\x09 */" },
		{ "KeyWords", "HMD" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not we are currently using the head mounted display.\n\n@return (Boolean)  status of HMD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsHeadMountedDisplayEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::HeadMountedDisplayFunctionLibrary_eventIsHeadMountedDisplayEnabled_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Returns true, if HMD is in low persistence mode. 'false' otherwise.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This functionality is no longer available. HMD platforms that support low persistence will always enable it." },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Returns true, if HMD is in low persistence mode. 'false' otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsInLowPersistenceMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::HeadMountedDisplayFunctionLibrary_eventIsInLowPersistenceMode_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Return true if spectator screen mode control is available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Return true if spectator screen mode control is available." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "IsSpectatorScreenModeControllable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::HeadMountedDisplayFunctionLibrary_eventIsSpectatorScreenModeControllable_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms
		{
			float Yaw;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) }; // 3931628698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** \n\x09 * Resets orientation by setting roll and pitch to 0, assuming that current yaw is forward direction and assuming\n\x09 * current position as a 'zero-point' (for positional tracking). \n\x09 *\n\x09 * @param Yaw\x09\x09\x09\x09(in) the desired yaw to be set after orientation reset.\n\x09 * @param Options\x09\x09\x09(in) specifies either position, orientation or both should be reset.\n\x09 */" },
		{ "CPP_Default_Options", "OrientationAndPosition" },
		{ "CPP_Default_Yaw", "0.000000" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Resets orientation by setting roll and pitch to 0, assuming that current yaw is forward direction and assuming\ncurrent position as a 'zero-point' (for positional tracking).\n\n@param Yaw                           (in) the desired yaw to be set after orientation reset.\n@param Options                       (in) specifies either position, orientation or both should be reset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "ResetOrientationAndPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::HeadMountedDisplayFunctionLibrary_eventResetOrientationAndPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms
		{
			float Near;
			float Far;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Near;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Far;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Near = { "Near", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms, Near), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Far = { "Far", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms, Far), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Near,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::NewProp_Far,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/** \n\x09 * Sets near and far clipping planes (NCP and FCP) for stereo rendering. Similar to 'stereo ncp= fcp' console command, but NCP and FCP set by this\n\x09 * call won't be saved in .ini file.\n\x09 *\n\x09 * @param Near\x09\x09\x09\x09(in) Near clipping plane, in centimeters\n\x09 * @param Far\x09\x09\x09\x09(in) Far clipping plane, in centimeters\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets near and far clipping planes (NCP and FCP) for stereo rendering. Similar to 'stereo ncp= fcp' console command, but NCP and FCP set by this\ncall won't be saved in .ini file.\n\n@param Near                          (in) Near clipping plane, in centimeters\n@param Far                           (in) Far clipping plane, in centimeters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetClippingPlanes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::HeadMountedDisplayFunctionLibrary_eventSetClippingPlanes_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms
		{
			ESpectatorScreenMode Mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms, Mode), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, METADATA_PARAMS(nullptr, 0) }; // 387750963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Sets the social screen mode.\n\x09* @param Mode\x09\x09\x09\x09(in) The social screen Mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets the social screen mode.\n@param Mode                           (in) The social screen Mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetSpectatorScreenMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenMode_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms
		{
			FVector2D EyeRectMin;
			FVector2D EyeRectMax;
			FVector2D TextureRectMin;
			FVector2D TextureRectMax;
			bool bDrawEyeFirst;
			bool bClearBlack;
			bool bUseAlpha;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EyeRectMin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EyeRectMax;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureRectMin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureRectMax;
		static void NewProp_bDrawEyeFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawEyeFirst;
		static void NewProp_bClearBlack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBlack;
		static void NewProp_bUseAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMin = { "EyeRectMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, EyeRectMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMax = { "EyeRectMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, EyeRectMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMin = { "TextureRectMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, TextureRectMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMax = { "TextureRectMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms, TextureRectMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bDrawEyeFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst = { "bDrawEyeFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bClearBlack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack = { "bClearBlack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha_SetBit(void* Obj)
	{
		((HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms*)Obj)->bUseAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha = { "bUseAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_EyeRectMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_TextureRectMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bDrawEyeFirst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bClearBlack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::NewProp_bUseAlpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Setup the layout for ESpectatorScreenMode::TexturePlusEye.\n\x09* @param\x09""EyeRectMin: min of screen rectangle the eye will be drawn in.  0-1 normalized.\n\x09* @param\x09""EyeRectMax: max of screen rectangle the eye will be drawn in.  0-1 normalized.\n\x09* @param\x09TextureRectMin: min of screen rectangle the texture will be drawn in.  0-1 normalized.\n\x09* @param\x09TextureRectMax: max of screen rectangle the texture will be drawn in.  0-1 normalized.\n\x09* @param\x09""bDrawEyeFirst: if true the eye is drawn before the texture, if false the reverse.\n\x09* @param\x09""bClearBlack: if true the render target will be drawn black before either rect is drawn.\n\x09*/" },
		{ "CPP_Default_bClearBlack", "false" },
		{ "CPP_Default_bDrawEyeFirst", "true" },
		{ "CPP_Default_bUseAlpha", "false" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Setup the layout for ESpectatorScreenMode::TexturePlusEye.\n@param        EyeRectMin: min of screen rectangle the eye will be drawn in.  0-1 normalized.\n@param        EyeRectMax: max of screen rectangle the eye will be drawn in.  0-1 normalized.\n@param        TextureRectMin: min of screen rectangle the texture will be drawn in.  0-1 normalized.\n@param        TextureRectMax: max of screen rectangle the texture will be drawn in.  0-1 normalized.\n@param        bDrawEyeFirst: if true the eye is drawn before the texture, if false the reverse.\n@param        bClearBlack: if true the render target will be drawn black before either rect is drawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetSpectatorScreenModeTexturePlusEyeLayout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenModeTexturePlusEyeLayout_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms
		{
			UTexture* InTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|SpectatorScreen" },
		{ "Comment", "/**\n\x09* Change the texture displayed on the social screen\n\x09* @param\x09InTexture: new Texture2D\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Change the texture displayed on the social screen\n@param        InTexture: new Texture2D" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetSpectatorScreenTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::HeadMountedDisplayFunctionLibrary_eventSetSpectatorScreenTexture_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms
		{
			TEnumAsByte<EHMDTrackingOrigin::Type> Origin;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms, Origin), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(nullptr, 0) }; // 3606177280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::NewProp_Origin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09 * Sets current tracking origin type (eye level or floor level).\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets current tracking origin type (eye level or floor level)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetTrackingOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::HeadMountedDisplayFunctionLibrary_eventSetTrackingOrigin_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms
		{
			UObject* WorldContext;
			float NewScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms, NewScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "Comment", "/**\n\x09* Sets the World to Meters scale, which changes the scale of the world as perceived by the player\n\x09*\n\x09* @param NewScale\x09Specifies how many Unreal units correspond to one meter in the real world\n\x09*/" },
		{ "CPP_Default_NewScale", "100.000000" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Sets the World to Meters scale, which changes the scale of the world as perceived by the player\n\n@param NewScale       Specifies how many Unreal units correspond to one meter in the real world" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetWorldToMetersScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::HeadMountedDisplayFunctionLibrary_eventSetWorldToMetersScale_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetXRDisconnectDelegate_Parms
		{
			FScriptDelegate InDisconnectedDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDisconnectedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDisconnectedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::NewProp_InDisconnectedDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::NewProp_InDisconnectedDelegate = { "InDisconnectedDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetXRDisconnectDelegate_Parms, InDisconnectedDelegate), Z_Construct_UDelegateFunction_HeadMountedDisplay_XRDeviceOnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::NewProp_InDisconnectedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::NewProp_InDisconnectedDelegate_MetaData)) }; // 4291630543
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::NewProp_InDisconnectedDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR|HeadMountedDisplay" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetXRDisconnectDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::HeadMountedDisplayFunctionLibrary_eventSetXRDisconnectDelegate_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventSetXRTimedInputActionDelegate_Parms
		{
			FName ActionName;
			FScriptDelegate InDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_ActionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetXRTimedInputActionDelegate_Parms, ActionName), METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventSetXRTimedInputActionDelegate_Parms, InDelegate), Z_Construct_UDelegateFunction_HeadMountedDisplay_XRTimedInputActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_InDelegate_MetaData)) }; // 2989916808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|XRTracking" },
		{ "Comment", "/** \n\x09* Hook up a delegate to get an OpenXR action event with action time.  \n\x09* For a boolean input the the 'value' parameter of the delegate will be 1.0 for a press and 0.0 for a release.  For an analog input the value's range is action and platform specific.\n\x09* Use in combination with GetControllerTransformForTime for potentially improved temporal transform precision and velocity data. \n\x09* \"Left Grip\" is an example of a valid ActionName.\n\x09* Note: this is likely to be replaced by native support for event times in the core input system at some time in the future.\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Hook up a delegate to get an OpenXR action event with action time.\nFor a boolean input the the 'value' parameter of the delegate will be 1.0 for a press and 0.0 for a release.  For an analog input the value's range is action and platform specific.\nUse in combination with GetControllerTransformForTime for potentially improved temporal transform precision and velocity data.\n\"Left Grip\" is an example of a valid ActionName.\nNote: this is likely to be replaced by native support for event times in the core input system at some time in the future." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "SetXRTimedInputActionDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::HeadMountedDisplayFunctionLibrary_eventSetXRTimedInputActionDelegate_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics
	{
		struct HeadMountedDisplayFunctionLibrary_eventUpdateExternalTrackingHMDPosition_Parms
		{
			FTransform ExternalTrackingTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTrackingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTrackingTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform = { "ExternalTrackingTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HeadMountedDisplayFunctionLibrary_eventUpdateExternalTrackingHMDPosition_Parms, ExternalTrackingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::NewProp_ExternalTrackingTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|HeadMountedDisplay|ExternalTracking" },
		{ "Comment", "/**\n\x09* Called after calibration to attempt to pull the internal tracker (e.g. HMD tracking) in line with the external tracker\n\x09* (e.g. mocap tracker).  This will set the internal tracker's base offset and rotation to match and realign the two systems.\n\x09* This can be called every tick, or whenever realignment is desired.  Note that this may cause choppy movement if the two\n\x09* systems diverge relative to each other, or a big jump if called infrequently when there has been significant drift\n\x09*\n\x09* @param ExternalTrackingTransform\x09\x09The transform in world-coordinates, of the reference marker of the external tracking system\n\x09*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
		{ "ToolTip", "Called after calibration to attempt to pull the internal tracker (e.g. HMD tracking) in line with the external tracker\n(e.g. mocap tracker).  This will set the internal tracker's base offset and rotation to match and realign the two systems.\nThis can be called every tick, or whenever realignment is desired.  Note that this may cause choppy movement if the two\nsystems diverge relative to each other, or a big jump if called infrequently when there has been significant drift\n\n@param ExternalTrackingTransform              The transform in world-coordinates, of the reference marker of the external tracking system" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, nullptr, "UpdateExternalTrackingHMDPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::HeadMountedDisplayFunctionLibrary_eventUpdateExternalTrackingHMDPosition_Parms), Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeadMountedDisplayFunctionLibrary);
	UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_NoRegister()
	{
		return UHeadMountedDisplayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_BreakKey, "BreakKey" }, // 1500661366
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_CalibrateExternalTrackingToHMD, "CalibrateExternalTrackingToHMD" }, // 3525664099
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ClearXRTimedInputActionDelegate, "ClearXRTimedInputActionDelegate" }, // 1489981544
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConfigureGestures, "ConfigureGestures" }, // 2739715225
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ConnectRemoteXRDevice, "ConnectRemoteXRDevice" }, // 2657266004
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_DisconnectRemoteXRDevice, "DisconnectRemoteXRDevice" }, // 158157394
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableHMD, "EnableHMD" }, // 2434037092
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnableLowPersistenceMode, "EnableLowPersistenceMode" }, // 1136430281
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_EnumerateTrackedDevices, "EnumerateTrackedDevices" }, // 1252140197
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetControllerTransformForTime, "GetControllerTransformForTime" }, // 921326726
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetCurrentInteractionProfile, "GetCurrentInteractionProfile" }, // 4075637555
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDevicePose, "GetDevicePose" }, // 281780144
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetDeviceWorldPose, "GetDeviceWorldPose" }, // 2400159867
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDData, "GetHMDData" }, // 2903042718
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDDeviceName, "GetHMDDeviceName" }, // 791083021
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetHMDWornState, "GetHMDWornState" }, // 4224626424
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetMotionControllerData, "GetMotionControllerData" }, // 697688008
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetNumOfTrackingSensors, "GetNumOfTrackingSensors" }, // 1135486532
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetOrientationAndPosition, "GetOrientationAndPosition" }, // 1258326633
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPixelDensity, "GetPixelDensity" }, // 1052443978
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaBounds, "GetPlayAreaBounds" }, // 442432648
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPlayAreaRect, "GetPlayAreaRect" }, // 259870407
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetPositionalTrackingCameraParameters, "GetPositionalTrackingCameraParameters" }, // 1747628954
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOrigin, "GetTrackingOrigin" }, // 2298016402
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingOriginTransform, "GetTrackingOriginTransform" }, // 1112600367
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingSensorParameters, "GetTrackingSensorParameters" }, // 508686110
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetTrackingToWorldTransform, "GetTrackingToWorldTransform" }, // 1986387858
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVersionString, "GetVersionString" }, // 298611081
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetVRFocusState, "GetVRFocusState" }, // 583901469
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetWorldToMetersScale, "GetWorldToMetersScale" }, // 110156285
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_GetXRSystemFlags, "GetXRSystemFlags" }, // 1163964741
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_HasValidTrackingPosition, "HasValidTrackingPosition" }, // 3741465654
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsDeviceTracking, "IsDeviceTracking" }, // 1825003201
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayConnected, "IsHeadMountedDisplayConnected" }, // 2697429834
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsHeadMountedDisplayEnabled, "IsHeadMountedDisplayEnabled" }, // 1138510544
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsInLowPersistenceMode, "IsInLowPersistenceMode" }, // 3780677922
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_IsSpectatorScreenModeControllable, "IsSpectatorScreenModeControllable" }, // 3273211276
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_ResetOrientationAndPosition, "ResetOrientationAndPosition" }, // 799477455
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetClippingPlanes, "SetClippingPlanes" }, // 797728547
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenMode, "SetSpectatorScreenMode" }, // 1505761530
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenModeTexturePlusEyeLayout, "SetSpectatorScreenModeTexturePlusEyeLayout" }, // 60980319
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetSpectatorScreenTexture, "SetSpectatorScreenTexture" }, // 2817174551
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetTrackingOrigin, "SetTrackingOrigin" }, // 4041830770
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetWorldToMetersScale, "SetWorldToMetersScale" }, // 1372992576
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRDisconnectDelegate, "SetXRDisconnectDelegate" }, // 69134367
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_SetXRTimedInputActionDelegate, "SetXRTimedInputActionDelegate" }, // 3944972793
		{ &Z_Construct_UFunction_UHeadMountedDisplayFunctionLibrary_UpdateExternalTrackingHMDPosition, "UpdateExternalTrackingHMDPosition" }, // 3222535602
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HeadMountedDisplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeadMountedDisplayFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::ClassParams = {
		&UHeadMountedDisplayFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.OuterSingleton, Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UHeadMountedDisplayFunctionLibrary>()
	{
		return UHeadMountedDisplayFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeadMountedDisplayFunctionLibrary);
	UHeadMountedDisplayFunctionLibrary::~UHeadMountedDisplayFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeadMountedDisplayFunctionLibrary, UHeadMountedDisplayFunctionLibrary::StaticClass, TEXT("UHeadMountedDisplayFunctionLibrary"), &Z_Registration_Info_UClass_UHeadMountedDisplayFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeadMountedDisplayFunctionLibrary), 249929222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_443149360(TEXT("/Script/HeadMountedDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
