// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RawInputSettings.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputSettings_NoRegister();
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties();
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties();
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration();
	UPackage* Z_Construct_UPackage__Script_RawInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties;
class UScriptStruct* FRawInputDeviceAxisProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties, (UObject*)Z_Construct_UPackage__Script_RawInput(), TEXT("RawInputDeviceAxisProperties"));
	}
	return Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties.OuterSingleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceAxisProperties>()
{
	return FRawInputDeviceAxisProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInverted_MetaData[];
#endif
		static void NewProp_bInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadStick_MetaData[];
#endif
		static void NewProp_bGamepadStick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadStick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceAxisProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Whether the axis is enabled. */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the axis is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Which key to emit the values from this axis to. */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Which key to emit the values from this axis to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Whether the value of the axis as supplied from the driver should be inverted. */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the value of the axis as supplied from the driver should be inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted = { "bInverted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** Whether this is a gamepad stick, which means it should scale from -1 to 1 instead of 0 to 1 */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether this is a gamepad stick, which means it should scale from -1 to 1 instead of 0 to 1" },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_SetBit(void* Obj)
	{
		((FRawInputDeviceAxisProperties*)Obj)->bGamepadStick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick = { "bGamepadStick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FRawInputDeviceAxisProperties), &Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Axis Properties" },
		{ "Comment", "/** The amount to offset the axis value by to get the desired range (note that this offset is applied after the value has been inverted). */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "The amount to offset the axis value by to get the desired range (note that this offset is applied after the value has been inverted)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceAxisProperties, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bInverted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_bGamepadStick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceAxisProperties",
		sizeof(FRawInputDeviceAxisProperties),
		alignof(FRawInputDeviceAxisProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties.InnerSingleton, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties;
class UScriptStruct* FRawInputDeviceButtonProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties, (UObject*)Z_Construct_UPackage__Script_RawInput(), TEXT("RawInputDeviceButtonProperties"));
	}
	return Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties.OuterSingleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceButtonProperties>()
{
	return FRawInputDeviceButtonProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceButtonProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Button Properties" },
		{ "Comment", "/** Whether the button is enabled. */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the button is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRawInputDeviceButtonProperties*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FRawInputDeviceButtonProperties), &Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Button Properties" },
		{ "Comment", "/** Which key to emit the values from this button to. */" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Which key to emit the values from this button to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceButtonProperties, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceButtonProperties",
		sizeof(FRawInputDeviceButtonProperties),
		alignof(FRawInputDeviceButtonProperties),
		Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties.InnerSingleton, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration;
class UScriptStruct* FRawInputDeviceConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration, (UObject*)Z_Construct_UPackage__Script_RawInput(), TEXT("RawInputDeviceConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration.OuterSingleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRawInputDeviceConfiguration>()
{
	return FRawInputDeviceConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VendorID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ButtonProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawInputDeviceConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "Device Config" },
		{ "Comment", "/** The hexadecimal vendor ID in string form (e.g. 0x046D). If this is empty, will match all vendors */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "The hexadecimal vendor ID in string form (e.g. 0x046D). If this is empty, will match all vendors" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID = { "VendorID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceConfiguration, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "Device Config" },
		{ "Comment", "/** The hexadecimal product ID in string form (e.g. 0xC262). If this is empty, will match all products */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "The hexadecimal product ID in string form (e.g. 0xC262). If this is empty, will match all products" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceConfiguration, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_Inner = { "AxisProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties, METADATA_PARAMS(nullptr, 0) }; // 3223002427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties = { "AxisProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceConfiguration, AxisProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_MetaData)) }; // 3223002427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_Inner = { "ButtonProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties, METADATA_PARAMS(nullptr, 0) }; // 3012058649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData[] = {
		{ "Category", "Device Config" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties = { "ButtonProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawInputDeviceConfiguration, ButtonProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_MetaData)) }; // 3012058649
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_VendorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ProductID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_AxisProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewProp_ButtonProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RawInputDeviceConfiguration",
		sizeof(FRawInputDeviceConfiguration),
		alignof(FRawInputDeviceConfiguration),
		Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawInputDeviceConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration.InnerSingleton;
	}
	void URawInputSettings::StaticRegisterNativesURawInputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URawInputSettings);
	UClass* Z_Construct_UClass_URawInputSettings_NoRegister()
	{
		return URawInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_URawInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceConfigurations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceConfigurations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeviceConfigurations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterDefaultDevice_MetaData[];
#endif
		static void NewProp_bRegisterDefaultDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterDefaultDevice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RawInputSettings.h" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_Inner = { "DeviceConfigurations", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3109878440
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData[] = {
		{ "Category", "Device Configurations" },
		{ "Comment", "/** List of bindings to apply based on Vendor and Product Id, these are applied in order. To set a default, add an entry with empty product/vendor id at the end of the array */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "List of bindings to apply based on Vendor and Product Id, these are applied in order. To set a default, add an entry with empty product/vendor id at the end of the array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations = { "DeviceConfigurations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URawInputSettings, DeviceConfigurations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_MetaData)) }; // 3109878440
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_MetaData[] = {
		{ "Category", "Device Configurations" },
		{ "Comment", "/** Whether the plugin should try to register a default device to handle generic gamepads and joysticks */" },
		{ "ModuleRelativePath", "Public/RawInputSettings.h" },
		{ "ToolTip", "Whether the plugin should try to register a default device to handle generic gamepads and joysticks" },
	};
#endif
	void Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_SetBit(void* Obj)
	{
		((URawInputSettings*)Obj)->bRegisterDefaultDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice = { "bRegisterDefaultDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URawInputSettings), &Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URawInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_DeviceConfigurations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URawInputSettings_Statics::NewProp_bRegisterDefaultDevice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URawInputSettings_Statics::ClassParams = {
		&URawInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URawInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawInputSettings()
	{
		if (!Z_Registration_Info_UClass_URawInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URawInputSettings.OuterSingleton, Z_Construct_UClass_URawInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URawInputSettings.OuterSingleton;
	}
	template<> RAWINPUT_API UClass* StaticClass<URawInputSettings>()
	{
		return URawInputSettings::StaticClass();
	}
	URawInputSettings::URawInputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawInputSettings);
	URawInputSettings::~URawInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics::ScriptStructInfo[] = {
		{ FRawInputDeviceAxisProperties::StaticStruct, Z_Construct_UScriptStruct_FRawInputDeviceAxisProperties_Statics::NewStructOps, TEXT("RawInputDeviceAxisProperties"), &Z_Registration_Info_UScriptStruct_RawInputDeviceAxisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawInputDeviceAxisProperties), 3223002427U) },
		{ FRawInputDeviceButtonProperties::StaticStruct, Z_Construct_UScriptStruct_FRawInputDeviceButtonProperties_Statics::NewStructOps, TEXT("RawInputDeviceButtonProperties"), &Z_Registration_Info_UScriptStruct_RawInputDeviceButtonProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawInputDeviceButtonProperties), 3012058649U) },
		{ FRawInputDeviceConfiguration::StaticStruct, Z_Construct_UScriptStruct_FRawInputDeviceConfiguration_Statics::NewStructOps, TEXT("RawInputDeviceConfiguration"), &Z_Registration_Info_UScriptStruct_RawInputDeviceConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawInputDeviceConfiguration), 3109878440U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URawInputSettings, URawInputSettings::StaticClass, TEXT("URawInputSettings"), &Z_Registration_Info_UClass_URawInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URawInputSettings), 4227266562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_3671327632(TEXT("/Script/RawInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
