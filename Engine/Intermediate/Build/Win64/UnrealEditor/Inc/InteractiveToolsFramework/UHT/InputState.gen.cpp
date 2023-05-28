// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRay();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceRay();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputDevices;
	static UEnum* EInputDevices_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputDevices.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputDevices.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EInputDevices"));
		}
		return Z_Registration_Info_UEnum_EInputDevices.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputDevices>()
	{
		return EInputDevices_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enumerators[] = {
		{ "EInputDevices::None", (int64)EInputDevices::None },
		{ "EInputDevices::Keyboard", (int64)EInputDevices::Keyboard },
		{ "EInputDevices::Mouse", (int64)EInputDevices::Mouse },
		{ "EInputDevices::Gamepad", (int64)EInputDevices::Gamepad },
		{ "EInputDevices::OculusTouch", (int64)EInputDevices::OculusTouch },
		{ "EInputDevices::HTCViveWands", (int64)EInputDevices::HTCViveWands },
		{ "EInputDevices::AnySpatialDevice", (int64)EInputDevices::AnySpatialDevice },
		{ "EInputDevices::TabletFingers", (int64)EInputDevices::TabletFingers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enum_MetaDataParams[] = {
		{ "AnySpatialDevice.Name", "EInputDevices::AnySpatialDevice" },
		{ "Comment", "/**\n * Input event data can be applicable to many possible input devices.\n * These flags are used to indicate specific or sets of device types.\n */" },
		{ "Gamepad.Name", "EInputDevices::Gamepad" },
		{ "HTCViveWands.Name", "EInputDevices::HTCViveWands" },
		{ "Keyboard.Name", "EInputDevices::Keyboard" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "Mouse.Name", "EInputDevices::Mouse" },
		{ "None.Name", "EInputDevices::None" },
		{ "OculusTouch.Name", "EInputDevices::OculusTouch" },
		{ "TabletFingers.Name", "EInputDevices::TabletFingers" },
		{ "ToolTip", "Input event data can be applicable to many possible input devices.\nThese flags are used to indicate specific or sets of device types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EInputDevices",
		"EInputDevices",
		Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices()
	{
		if (!Z_Registration_Info_UEnum_EInputDevices.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputDevices.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EInputDevices_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputDevices.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputRayHit;
class UScriptStruct* FInputRayHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputRayHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputRayHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRayHit, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("InputRayHit"));
	}
	return Z_Registration_Info_UScriptStruct_InputRayHit.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInputRayHit>()
{
	return FInputRayHit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputRayHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHit_MetaData[];
#endif
		static void NewProp_bHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HitDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasHitNormal_MetaData[];
#endif
		static void NewProp_bHasHitNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasHitNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HitIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HitObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * FInputRayHit is returned by various hit-test interface functions.\n * Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay \n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "* FInputRayHit is returned by various hit-test interface functions.\n* Generally this is intended to be returned as the result of a hit-test with a FInputDeviceRay" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputRayHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRayHit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** true if ray hit something, false otherwise */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "true if ray hit something, false otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_SetBit(void* Obj)
	{
		((FInputRayHit*)Obj)->bHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputRayHit), &Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** distance along ray at which intersection occurred */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "distance along ray at which intersection occurred" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth = { "HitDepth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputRayHit, HitDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** Normal at hit point, if available */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Normal at hit point, if available" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputRayHit, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** True if HitNormal was set */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "True if HitNormal was set" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_SetBit(void* Obj)
	{
		((FInputRayHit*)Obj)->bHasHitNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal = { "bHasHitNormal", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputRayHit), &Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/** Client-defined integer identifier for hit object/element/target/etc */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Client-defined integer identifier for hit object/element/target/etc" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier = { "HitIdentifier", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputRayHit, HitIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject_MetaData[] = {
		{ "Category", "InputRayHit" },
		{ "Comment", "/**\n\x09  * Client-defined pointer for UObject-derived hit owners.  \n\x09  * HitOwner and HitObject should be set to the same pointer if the HitOwner derives from UObject. \n\x09  */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "Client-defined pointer for UObject-derived hit owners.\nHitOwner and HitObject should be set to the same pointer if the HitOwner derives from UObject." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject = { "HitObject", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputRayHit, HitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_bHasHitNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRayHit_Statics::NewProp_HitObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRayHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"InputRayHit",
		sizeof(FInputRayHit),
		alignof(FInputRayHit),
		Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRayHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputRayHit()
	{
		if (!Z_Registration_Info_UScriptStruct_InputRayHit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputRayHit.InnerSingleton, Z_Construct_UScriptStruct_FInputRayHit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputRayHit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDeviceRay;
class UScriptStruct* FInputDeviceRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDeviceRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDeviceRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceRay, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("InputDeviceRay"));
	}
	return Z_Registration_Info_UScriptStruct_InputDeviceRay.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FInputDeviceRay>()
{
	return FInputDeviceRay::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputDeviceRay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldRay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHas2D_MetaData[];
#endif
		static void NewProp_bHas2D_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHas2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceRay_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FInputDeviceRay represents a 3D ray created based on an input device.\n * If the device is a 2D input device like a mouse, then the ray may\n * have an associated 2D screen position.\n */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "FInputDeviceRay represents a 3D ray created based on an input device.\nIf the device is a 2D input device like a mouse, then the ray may\nhave an associated 2D screen position." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDeviceRay>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay_MetaData[] = {
		{ "Category", "InputDeviceRay" },
		{ "Comment", "/** 3D ray in 3D scene, in world coordinates */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "3D ray in 3D scene, in world coordinates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay = { "WorldRay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputDeviceRay, WorldRay), Z_Construct_UScriptStruct_FRay, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_MetaData[] = {
		{ "Category", "InputDeviceRay" },
		{ "Comment", "/** If true, WorldRay has 2D device position coordinates */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "If true, WorldRay has 2D device position coordinates" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_SetBit(void* Obj)
	{
		((FInputDeviceRay*)Obj)->bHas2D = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D = { "bHas2D", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputDeviceRay), &Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "Category", "InputDeviceRay" },
		{ "Comment", "/** 2D device position coordinates associated with the ray */" },
		{ "ModuleRelativePath", "Public/InputState.h" },
		{ "ToolTip", "2D device position coordinates associated with the ray" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputDeviceRay, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_WorldRay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_bHas2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewProp_ScreenPosition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDeviceRay_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"InputDeviceRay",
		sizeof(FInputDeviceRay),
		alignof(FInputDeviceRay),
		Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceRay_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceRay()
	{
		if (!Z_Registration_Info_UScriptStruct_InputDeviceRay.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDeviceRay.InnerSingleton, Z_Construct_UScriptStruct_FInputDeviceRay_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputDeviceRay.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::EnumInfo[] = {
		{ EInputDevices_StaticEnum, TEXT("EInputDevices"), &Z_Registration_Info_UEnum_EInputDevices, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1462673201U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::ScriptStructInfo[] = {
		{ FInputRayHit::StaticStruct, Z_Construct_UScriptStruct_FInputRayHit_Statics::NewStructOps, TEXT("InputRayHit"), &Z_Registration_Info_UScriptStruct_InputRayHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputRayHit), 1802974795U) },
		{ FInputDeviceRay::StaticStruct, Z_Construct_UScriptStruct_FInputDeviceRay_Statics::NewStructOps, TEXT("InputDeviceRay"), &Z_Registration_Info_UScriptStruct_InputDeviceRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDeviceRay), 1496444290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_618768837(TEXT("/Script/InteractiveToolsFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
