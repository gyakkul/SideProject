// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraSaveGame() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EUnit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraSaveGame();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraSaveGame_NoRegister();
	VIRTUALCAMERA_API UEnum* Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraAxisSettings();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraScreenshot();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettings();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraWaypoint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualCameraAxis;
	static UEnum* EVirtualCameraAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVirtualCameraAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVirtualCameraAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("EVirtualCameraAxis"));
		}
		return Z_Registration_Info_UEnum_EVirtualCameraAxis.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UEnum* StaticEnum<EVirtualCameraAxis>()
	{
		return EVirtualCameraAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::Enumerators[] = {
		{ "EVirtualCameraAxis::LocationX", (int64)EVirtualCameraAxis::LocationX },
		{ "EVirtualCameraAxis::LocationY", (int64)EVirtualCameraAxis::LocationY },
		{ "EVirtualCameraAxis::LocationZ", (int64)EVirtualCameraAxis::LocationZ },
		{ "EVirtualCameraAxis::RotationX", (int64)EVirtualCameraAxis::RotationX },
		{ "EVirtualCameraAxis::RotationY", (int64)EVirtualCameraAxis::RotationY },
		{ "EVirtualCameraAxis::RotationZ", (int64)EVirtualCameraAxis::RotationZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::Enum_MetaDataParams[] = {
		{ "LocationX.Comment", "/* Locking for x location movement; Truck */" },
		{ "LocationX.Name", "EVirtualCameraAxis::LocationX" },
		{ "LocationX.ToolTip", "Locking for x location movement; Truck" },
		{ "LocationY.Comment", "/* Locking for y location movement; Dolly */" },
		{ "LocationY.Name", "EVirtualCameraAxis::LocationY" },
		{ "LocationY.ToolTip", "Locking for y location movement; Dolly" },
		{ "LocationZ.Comment", "/* Locking for z location movement; Boom */" },
		{ "LocationZ.Name", "EVirtualCameraAxis::LocationZ" },
		{ "LocationZ.ToolTip", "Locking for z location movement; Boom" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "RotationX.Comment", "/* Locking for x rotation movement; Dutch or Roll */" },
		{ "RotationX.Name", "EVirtualCameraAxis::RotationX" },
		{ "RotationX.ToolTip", "Locking for x rotation movement; Dutch or Roll" },
		{ "RotationY.Comment", "/* Locking for y rotation movement; Tilt or Pitch */" },
		{ "RotationY.Name", "EVirtualCameraAxis::RotationY" },
		{ "RotationY.ToolTip", "Locking for y rotation movement; Tilt or Pitch" },
		{ "RotationZ.Comment", "/* Locking for Z rotation movement; Pan or Yaw */" },
		{ "RotationZ.Name", "EVirtualCameraAxis::RotationZ" },
		{ "RotationZ.ToolTip", "Locking for Z rotation movement; Pan or Yaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		"EVirtualCameraAxis",
		"EVirtualCameraAxis",
		Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis()
	{
		if (!Z_Registration_Info_UEnum_EVirtualCameraAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualCameraAxis.InnerSingleton, Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVirtualCameraAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings;
class UScriptStruct* FVirtualCameraAxisSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("VirtualCameraAxisSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FVirtualCameraAxisSettings>()
{
	return FVirtualCameraAxisSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFrozen_MetaData[];
#endif
		static void NewProp_bIsFrozen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFrozen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StabilizationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StabilizationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores relevant information for an axis for the virtual camera pawn\n */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Stores relevant information for an axis for the virtual camera pawn" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualCameraAxisSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Comment", "/** If an axis is locked, then that axis's movement will be disabled. When unlocking an axis the movement is updated as if the axis had never been locked. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "If an axis is locked, then that axis's movement will be disabled. When unlocking an axis the movement is updated as if the axis had never been locked." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((FVirtualCameraAxisSettings*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraAxisSettings), &Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen_MetaData[] = {
		{ "Comment", "/** If an axis is frozen, then that frozen axis's movement will be disabled. When frozen axis is unlocked the movement is not updated, and all of the axis movement is applied as if it was in the location when the freeze was initiated. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "If an axis is frozen, then that frozen axis's movement will be disabled. When frozen axis is unlocked the movement is not updated, and all of the axis movement is applied as if it was in the location when the freeze was initiated." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen_SetBit(void* Obj)
	{
		((FVirtualCameraAxisSettings*)Obj)->bIsFrozen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen = { "bIsFrozen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraAxisSettings), &Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_StabilizationScale_MetaData[] = {
		{ "Comment", "/** The amount of stabilization that can be applied to an axis */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The amount of stabilization that can be applied to an axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_StabilizationScale = { "StabilizationScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraAxisSettings, StabilizationScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_StabilizationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_StabilizationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_MovementScale_MetaData[] = {
		{ "Comment", "/** The scale that a user's movement should be adjusted by in game */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The scale that a user's movement should be adjusted by in game" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_MovementScale = { "MovementScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraAxisSettings, MovementScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_MovementScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_MovementScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_bIsFrozen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_StabilizationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewProp_MovementScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"VirtualCameraAxisSettings",
		sizeof(FVirtualCameraAxisSettings),
		alignof(FVirtualCameraAxisSettings),
		Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraAxisSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings.InnerSingleton, Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualCameraSettings;
class UScriptStruct* FVirtualCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualCameraSettings, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("VirtualCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualCameraSettings.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FVirtualCameraSettings>()
{
	return FVirtualCameraSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aperture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Aperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilmbackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmbackWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmbackHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatteOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MatteOpacity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisSettings_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisSettings_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AxisSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFocusVisualization_MetaData[];
#endif
		static void NewProp_bAllowFocusVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFocusVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugFocusPlaneColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredDistanceUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredDistanceUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesiredDistanceUnits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores specific camera settings to be retrieved at a later time\n */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Stores specific camera settings to be retrieved at a later time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualCameraSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FocalLength_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The focal length of the camera */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The focal length of the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, FocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_Aperture_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The aperture of the camera */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The aperture of the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_Aperture = { "Aperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, Aperture), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_Aperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_Aperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackName = { "FilmbackName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, FilmbackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackWidth_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The filmback sensor width of the camera */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The filmback sensor width of the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackWidth = { "FilmbackWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, FilmbackWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackHeight_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The filmback sensor height of the camera */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The filmback sensor height of the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackHeight = { "FilmbackHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, FilmbackHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_MatteOpacity_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_MatteOpacity = { "MatteOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, MatteOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_MatteOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_MatteOpacity_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_ValueProp = { "AxisSettings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraAxisSettings, METADATA_PARAMS(nullptr, 0) }; // 1658077197
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_Key_KeyProp = { "AxisSettings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_VirtualCamera_EVirtualCameraAxis, METADATA_PARAMS(nullptr, 0) }; // 4214100908
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The Axis settings for locking, stabilization, and scaling */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The Axis settings for locking, stabilization, and scaling" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings = { "AxisSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, AxisSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_MetaData)) }; // 4214100908 1658077197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization_SetBit(void* Obj)
	{
		((FVirtualCameraSettings*)Obj)->bAllowFocusVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization = { "bAllowFocusVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraSettings), &Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DebugFocusPlaneColor = { "DebugFocusPlaneColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, DebugFocusPlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits = { "DesiredDistanceUnits", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettings, DesiredDistanceUnits), Z_Construct_UEnum_CoreUObject_EUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits_MetaData)) }; // 1931954769
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_Aperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_FilmbackHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_MatteOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_AxisSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_bAllowFocusVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DebugFocusPlaneColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewProp_DesiredDistanceUnits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"VirtualCameraSettings",
		sizeof(FVirtualCameraSettings),
		alignof(FVirtualCameraSettings),
		Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualCameraSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualCameraSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint;
class UScriptStruct* FVirtualCameraWaypoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualCameraWaypoint, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("VirtualCameraWaypoint"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FVirtualCameraWaypoint>()
{
	return FVirtualCameraWaypoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaypointTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaypointTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateCreated_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHomeWaypoint_MetaData[];
#endif
		static void NewProp_bIsHomeWaypoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHomeWaypoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFavorited_MetaData[];
#endif
		static void NewProp_bIsFavorited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFavorited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Keeps a saved location and the name of that location\n */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Keeps a saved location and the name of that location" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualCameraWaypoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* An associated name for the waypoint provided by the user */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "An associated name for the waypoint provided by the user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraWaypoint, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_WaypointTransform_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The location of the waypoint in world space */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The location of the waypoint in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_WaypointTransform = { "WaypointTransform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraWaypoint, WaypointTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_WaypointTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_WaypointTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_DateCreated_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_DateCreated = { "DateCreated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraWaypoint, DateCreated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_DateCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_DateCreated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint_SetBit(void* Obj)
	{
		((FVirtualCameraWaypoint*)Obj)->bIsHomeWaypoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint = { "bIsHomeWaypoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraWaypoint), &Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited_SetBit(void* Obj)
	{
		((FVirtualCameraWaypoint*)Obj)->bIsFavorited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited = { "bIsFavorited", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraWaypoint), &Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_WaypointTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_DateCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsHomeWaypoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewProp_bIsFavorited,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"VirtualCameraWaypoint",
		sizeof(FVirtualCameraWaypoint),
		alignof(FVirtualCameraWaypoint),
		Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraWaypoint()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint.InnerSingleton, Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot;
class UScriptStruct* FVirtualCameraScreenshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualCameraScreenshot, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("VirtualCameraScreenshot"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FVirtualCameraScreenshot>()
{
	return FVirtualCameraScreenshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waypoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Waypoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Keeps track of all the data associated with a screenshot that was taken by the user\n*/" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Keeps track of all the data associated with a screenshot that was taken by the user" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualCameraScreenshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_Waypoint_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The name and location of the screenshot */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The name and location of the screenshot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_Waypoint = { "Waypoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraScreenshot, Waypoint), Z_Construct_UScriptStruct_FVirtualCameraWaypoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_Waypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_Waypoint_MetaData)) }; // 3725296236
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* The associated camera data from when the screenshot was taken */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "The associated camera data from when the screenshot was taken" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraScreenshot, CameraSettings), Z_Construct_UScriptStruct_FVirtualCameraSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_CameraSettings_MetaData)) }; // 52396575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_Waypoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewProp_CameraSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"VirtualCameraScreenshot",
		sizeof(FVirtualCameraScreenshot),
		alignof(FVirtualCameraScreenshot),
		Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraScreenshot()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot.InnerSingleton, Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset;
class UScriptStruct* FVirtualCameraSettingsPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset, (UObject*)Z_Construct_UPackage__Script_VirtualCamera(), TEXT("VirtualCameraSettingsPreset"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset.OuterSingleton;
}
template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<FVirtualCameraSettingsPreset>()
{
	return FVirtualCameraSettingsPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCameraSettingsSaved_MetaData[];
#endif
		static void NewProp_bIsCameraSettingsSaved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCameraSettingsSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStabilizationSettingsSaved_MetaData[];
#endif
		static void NewProp_bIsStabilizationSettingsSaved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStabilizationSettingsSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAxisLockingSettingsSaved_MetaData[];
#endif
		static void NewProp_bIsAxisLockingSettingsSaved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAxisLockingSettingsSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMotionScaleSettingsSaved_MetaData[];
#endif
		static void NewProp_bIsMotionScaleSettingsSaved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMotionScaleSettingsSaved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFavorited_MetaData[];
#endif
		static void NewProp_bIsFavorited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFavorited;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateCreated_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DateCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Keeps track of all data associated with settings presets.\n */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Keeps track of all data associated with settings presets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualCameraSettingsPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* Checks which settings are saved for the preset */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Checks which settings are saved for the preset" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved_SetBit(void* Obj)
	{
		((FVirtualCameraSettingsPreset*)Obj)->bIsCameraSettingsSaved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved = { "bIsCameraSettingsSaved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraSettingsPreset), &Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved_SetBit(void* Obj)
	{
		((FVirtualCameraSettingsPreset*)Obj)->bIsStabilizationSettingsSaved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved = { "bIsStabilizationSettingsSaved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraSettingsPreset), &Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved_SetBit(void* Obj)
	{
		((FVirtualCameraSettingsPreset*)Obj)->bIsAxisLockingSettingsSaved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved = { "bIsAxisLockingSettingsSaved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraSettingsPreset), &Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved_SetBit(void* Obj)
	{
		((FVirtualCameraSettingsPreset*)Obj)->bIsMotionScaleSettingsSaved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved = { "bIsMotionScaleSettingsSaved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraSettingsPreset), &Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "/* Checks if saettings is set as favorite */" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
		{ "ToolTip", "Checks if saettings is set as favorite" },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited_SetBit(void* Obj)
	{
		((FVirtualCameraSettingsPreset*)Obj)->bIsFavorited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited = { "bIsFavorited", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualCameraSettingsPreset), &Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettingsPreset, CameraSettings), Z_Construct_UScriptStruct_FVirtualCameraSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_CameraSettings_MetaData)) }; // 52396575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_DateCreated_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_DateCreated = { "DateCreated", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualCameraSettingsPreset, DateCreated), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_DateCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_DateCreated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsCameraSettingsSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsStabilizationSettingsSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsAxisLockingSettingsSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsMotionScaleSettingsSaved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_bIsFavorited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_CameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewProp_DateCreated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
		nullptr,
		&NewStructOps,
		"VirtualCameraSettingsPreset",
		sizeof(FVirtualCameraSettingsPreset),
		alignof(FVirtualCameraSettingsPreset),
		Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset.InnerSingleton, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset.InnerSingleton;
	}
	void UVirtualCameraSaveGame::StaticRegisterNativesUVirtualCameraSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraSaveGame);
	UClass* Z_Construct_UClass_UVirtualCameraSaveGame_NoRegister()
	{
		return UVirtualCameraSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Waypoints_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Waypoints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Waypoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Screenshots_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Screenshots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screenshots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Screenshots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HomeWaypointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HomeWaypointName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SettingsPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SettingsPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaypointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaypointIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScreenshotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualCameraSaveGame.h" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_ValueProp = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraWaypoint, METADATA_PARAMS(nullptr, 0) }; // 3725296236
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_Key_KeyProp = { "Waypoints_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, Waypoints), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_MetaData)) }; // 3725296236
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_ValueProp = { "Screenshots", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraScreenshot, METADATA_PARAMS(nullptr, 0) }; // 4274225689
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_Key_KeyProp = { "Screenshots_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots = { "Screenshots", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, Screenshots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_MetaData)) }; // 4274225689
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_HomeWaypointName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_HomeWaypointName = { "HomeWaypointName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, HomeWaypointName), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_HomeWaypointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_HomeWaypointName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, CameraSettings), Z_Construct_UScriptStruct_FVirtualCameraSettings, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_CameraSettings_MetaData)) }; // 52396575
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_ValueProp = { "SettingsPresets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_Key_KeyProp = { "SettingsPresets_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets = { "SettingsPresets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, SettingsPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_MetaData)) }; // 1209101004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_WaypointIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_WaypointIndex = { "WaypointIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, WaypointIndex), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_WaypointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_WaypointIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_ScreenshotIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_ScreenshotIndex = { "ScreenshotIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, ScreenshotIndex), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_ScreenshotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_ScreenshotIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_PresetIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/VirtualCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraSaveGame, PresetIndex), METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_PresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_PresetIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualCameraSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Waypoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_Screenshots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_HomeWaypointName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_CameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SettingsPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_WaypointIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_ScreenshotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraSaveGame_Statics::NewProp_PresetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraSaveGame_Statics::ClassParams = {
		&UVirtualCameraSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualCameraSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraSaveGame()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraSaveGame.OuterSingleton, Z_Construct_UClass_UVirtualCameraSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraSaveGame.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraSaveGame>()
	{
		return UVirtualCameraSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraSaveGame);
	UVirtualCameraSaveGame::~UVirtualCameraSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::EnumInfo[] = {
		{ EVirtualCameraAxis_StaticEnum, TEXT("EVirtualCameraAxis"), &Z_Registration_Info_UEnum_EVirtualCameraAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4214100908U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::ScriptStructInfo[] = {
		{ FVirtualCameraAxisSettings::StaticStruct, Z_Construct_UScriptStruct_FVirtualCameraAxisSettings_Statics::NewStructOps, TEXT("VirtualCameraAxisSettings"), &Z_Registration_Info_UScriptStruct_VirtualCameraAxisSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualCameraAxisSettings), 1658077197U) },
		{ FVirtualCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FVirtualCameraSettings_Statics::NewStructOps, TEXT("VirtualCameraSettings"), &Z_Registration_Info_UScriptStruct_VirtualCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualCameraSettings), 52396575U) },
		{ FVirtualCameraWaypoint::StaticStruct, Z_Construct_UScriptStruct_FVirtualCameraWaypoint_Statics::NewStructOps, TEXT("VirtualCameraWaypoint"), &Z_Registration_Info_UScriptStruct_VirtualCameraWaypoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualCameraWaypoint), 3725296236U) },
		{ FVirtualCameraScreenshot::StaticStruct, Z_Construct_UScriptStruct_FVirtualCameraScreenshot_Statics::NewStructOps, TEXT("VirtualCameraScreenshot"), &Z_Registration_Info_UScriptStruct_VirtualCameraScreenshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualCameraScreenshot), 4274225689U) },
		{ FVirtualCameraSettingsPreset::StaticStruct, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset_Statics::NewStructOps, TEXT("VirtualCameraSettingsPreset"), &Z_Registration_Info_UScriptStruct_VirtualCameraSettingsPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualCameraSettingsPreset), 1209101004U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraSaveGame, UVirtualCameraSaveGame::StaticClass, TEXT("UVirtualCameraSaveGame"), &Z_Registration_Info_UClass_UVirtualCameraSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraSaveGame), 2382496957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_997968035(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraSaveGame_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
