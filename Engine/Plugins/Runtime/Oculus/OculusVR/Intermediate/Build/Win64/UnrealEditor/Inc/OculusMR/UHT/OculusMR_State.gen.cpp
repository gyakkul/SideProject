// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusMR_State.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_State() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_State();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_State_NoRegister();
	OCULUSMR_API UScriptStruct* Z_Construct_UScriptStruct_FTrackedCamera();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackedCamera;
class UScriptStruct* FTrackedCamera::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackedCamera.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackedCamera.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackedCamera, (UObject*)Z_Construct_UPackage__Script_OculusMR(), TEXT("TrackedCamera"));
	}
	return Z_Registration_Info_UScriptStruct_TrackedCamera.OuterSingleton;
}
template<> OCULUSMR_API UScriptStruct* StaticStruct<FTrackedCamera>()
{
	return FTrackedCamera::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrackedCamera_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachedTrackedDevice_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedTrackedDevice_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachedTrackedDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratedRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratedOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratedOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackedCamera>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "/** >=0: the index of the external camera\n\x09\x09* -1: not bind to any external camera (and would be setup to match the manual CastingCameraActor placement)\n\x09\x09*/" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", ">=0: the index of the external camera\n-1: not bind to any external camera (and would be setup to match the manual CastingCameraActor placement)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The external camera name set through the CameraTool */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The external camera name set through the CameraTool" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "Comment", "/** The time that this camera was updated */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The time that this camera was updated" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UpdateTime = { "UpdateTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, UpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UpdateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The horizontal FOV, in degrees */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The horizontal FOV, in degrees" },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, FieldOfView), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX_MetaData[] = {
		{ "Comment", "/** The resolution of the camera frame */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The resolution of the camera frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, SizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY_MetaData[] = {
		{ "Comment", "/** The resolution of the camera frame */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The resolution of the camera frame" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, SizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData[] = {
		{ "Comment", "/** The tracking node the external camera is bound to */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The tracking node the external camera is bound to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice = { "AttachedTrackedDevice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, AttachedTrackedDevice), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_MetaData)) }; // 1408524775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData[] = {
		{ "Comment", "/** The relative pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The relative pose of the camera to the attached tracking device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation = { "CalibratedRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, CalibratedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData[] = {
		{ "Comment", "/** The relative pose of the camera to the attached tracking device */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The relative pose of the camera to the attached tracking device" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset = { "CalibratedOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, CalibratedOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation_MetaData[] = {
		{ "Comment", "/** (optional) The user pose is provided to fine tuning the relative camera pose at the run-time */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "(optional) The user pose is provided to fine tuning the relative camera pose at the run-time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation = { "UserRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, UserRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset_MetaData[] = {
		{ "Comment", "/** (optional) The user pose is provided to fine tuning the relative camera pose at the run-time */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "(optional) The user pose is provided to fine tuning the relative camera pose at the run-time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset = { "UserOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, UserOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation_MetaData[] = {
		{ "Comment", "/** The raw pose of the camera to the attached tracking device (Deprecated) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "All camera pose info is now in stage space, do not use raw pose data." },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The raw pose of the camera to the attached tracking device (Deprecated)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation = { "RawRotation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, RawRotation_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset_MetaData[] = {
		{ "Comment", "/** The raw pose of the camera to the attached tracking device (Deprecated) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "All camera pose info is now in stage space, do not use raw pose data." },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "The raw pose of the camera to the attached tracking device (Deprecated)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset = { "RawOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackedCamera, RawOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackedCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_AttachedTrackedDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_CalibratedOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_UserOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewProp_RawOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackedCamera_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		&NewStructOps,
		"TrackedCamera",
		sizeof(FTrackedCamera),
		alignof(FTrackedCamera),
		Z_Construct_UScriptStruct_FTrackedCamera_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackedCamera_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackedCamera_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackedCamera()
	{
		if (!Z_Registration_Info_UScriptStruct_TrackedCamera.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackedCamera.InnerSingleton, Z_Construct_UScriptStruct_FTrackedCamera_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrackedCamera.InnerSingleton;
	}
	void UOculusMR_State::StaticRegisterNativesUOculusMR_State()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusMR_State);
	UClass* Z_Construct_UClass_UOculusMR_State_NoRegister()
	{
		return UOculusMR_State::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMR_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedCamera_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingReferenceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackingReferenceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScalingFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeCameraStateRequested_MetaData[];
#endif
		static void NewProp_ChangeCameraStateRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChangeCameraStateRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindToTrackedCameraIndexRequested_MetaData[];
#endif
		static void NewProp_BindToTrackedCameraIndexRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BindToTrackedCameraIndexRequested;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMR_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "OculusMR" },
		{ "Comment", "/**\n* Object to hold the state of MR capture and capturing camera\n*/" },
		{ "IncludePath", "OculusMR_State.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Object to hold the state of MR capture and capturing camera" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera = { "TrackedCamera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_State, TrackedCamera), Z_Construct_UScriptStruct_FTrackedCamera, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera_MetaData)) }; // 3484719461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData[] = {
		{ "Comment", "// Component at the tracking origin that the camera calibration is applied to\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "Component at the tracking origin that the camera calibration is applied to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent = { "TrackingReferenceComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_State, TrackingReferenceComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Comment", "// A multiplier on the camera distance, should be based on the scaling of the player component\n" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "A multiplier on the camera distance, should be based on the scaling of the player component" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusMR_State, ScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData[] = {
		{ "Comment", "/** Flag indicating a change in the tracked camera state for the camera actor to consume */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "Flag indicating a change in the tracked camera state for the camera actor to consume" },
	};
#endif
	void Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_SetBit(void* Obj)
	{
		((UOculusMR_State*)Obj)->ChangeCameraStateRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested = { "ChangeCameraStateRequested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMR_State), &Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData[] = {
		{ "Comment", "/** Flag indicating a change in the tracked camera index for the camera actor to consume */" },
		{ "ModuleRelativePath", "Private/OculusMR_State.h" },
		{ "ToolTip", "Flag indicating a change in the tracked camera index for the camera actor to consume" },
	};
#endif
	void Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_SetBit(void* Obj)
	{
		((UOculusMR_State*)Obj)->BindToTrackedCameraIndexRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested = { "BindToTrackedCameraIndexRequested", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusMR_State), &Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusMR_State_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackedCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_TrackingReferenceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ScalingFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_ChangeCameraStateRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusMR_State_Statics::NewProp_BindToTrackedCameraIndexRequested,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMR_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMR_State>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusMR_State_Statics::ClassParams = {
		&UOculusMR_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusMR_State_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::PropPointers),
		0,
		0x008002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMR_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMR_State()
	{
		if (!Z_Registration_Info_UClass_UOculusMR_State.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusMR_State.OuterSingleton, Z_Construct_UClass_UOculusMR_State_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusMR_State.OuterSingleton;
	}
	template<> OCULUSMR_API UClass* StaticClass<UOculusMR_State>()
	{
		return UOculusMR_State::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMR_State);
	UOculusMR_State::~UOculusMR_State() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics::ScriptStructInfo[] = {
		{ FTrackedCamera::StaticStruct, Z_Construct_UScriptStruct_FTrackedCamera_Statics::NewStructOps, TEXT("TrackedCamera"), &Z_Registration_Info_UScriptStruct_TrackedCamera, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackedCamera), 3484719461U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusMR_State, UOculusMR_State::StaticClass, TEXT("UOculusMR_State"), &Z_Registration_Info_UClass_UOculusMR_State, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusMR_State), 2300662898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_3875274027(TEXT("/Script/OculusMR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_State_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
