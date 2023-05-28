// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInputBaseTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputBaseTypes() {}
// Cross Module References
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputBaseControllerData();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputPlatformSettings();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData();
	COMMONINPUT_API UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputPlatformBaseData();
	COMMONINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceIdentifierPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration;
class UScriptStruct* FCommonInputKeyBrushConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("CommonInputKeyBrushConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration.OuterSingleton;
}
template<> COMMONINPUT_API UScriptStruct* StaticStruct<FCommonInputKeyBrushConfiguration>()
{
	return FCommonInputKeyBrushConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputKeyBrushConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key Brush Configuration" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputKeyBrushConfiguration, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush_MetaData[] = {
		{ "Category", "Key Brush Configuration" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush = { "KeyBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputKeyBrushConfiguration, KeyBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewProp_KeyBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		&NewStructOps,
		"CommonInputKeyBrushConfiguration",
		sizeof(FCommonInputKeyBrushConfiguration),
		alignof(FCommonInputKeyBrushConfiguration),
		Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration;
class UScriptStruct* FCommonInputKeySetBrushConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("CommonInputKeySetBrushConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration.OuterSingleton;
}
template<> COMMONINPUT_API UScriptStruct* StaticStruct<FCommonInputKeySetBrushConfiguration>()
{
	return FCommonInputKeySetBrushConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputKeySetBrushConfiguration>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Key Brush Configuration" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "TitleProperty", "KeyName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputKeySetBrushConfiguration, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_KeyBrush_MetaData[] = {
		{ "Category", "Key Brush Configuration" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_KeyBrush = { "KeyBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputKeySetBrushConfiguration, KeyBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_KeyBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_KeyBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewProp_KeyBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		&NewStructOps,
		"CommonInputKeySetBrushConfiguration",
		sizeof(FCommonInputKeySetBrushConfiguration),
		alignof(FCommonInputKeySetBrushConfiguration),
		Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair;
class UScriptStruct* FInputDeviceIdentifierPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("InputDeviceIdentifierPair"));
	}
	return Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair.OuterSingleton;
}
template<> COMMONINPUT_API UScriptStruct* StaticStruct<FInputDeviceIdentifierPair>()
{
	return FInputDeviceIdentifierPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputDeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareDeviceIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HardwareDeviceIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputDeviceIdentifierPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_InputDeviceName_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_InputDeviceName = { "InputDeviceName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputDeviceIdentifierPair, InputDeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_InputDeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_InputDeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_HardwareDeviceIdentifier_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_HardwareDeviceIdentifier = { "HardwareDeviceIdentifier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputDeviceIdentifierPair, HardwareDeviceIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_HardwareDeviceIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_HardwareDeviceIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_InputDeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewProp_HardwareDeviceIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		&NewStructOps,
		"InputDeviceIdentifierPair",
		sizeof(FInputDeviceIdentifierPair),
		alignof(FInputDeviceIdentifierPair),
		Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceIdentifierPair()
	{
		if (!Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair.InnerSingleton, Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair.InnerSingleton;
	}
	void UCommonUIInputData::StaticRegisterNativesUCommonUIInputData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIInputData);
	UClass* Z_Construct_UClass_UCommonUIInputData_NoRegister()
	{
		return UCommonUIInputData::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIInputData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBackAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputClickAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnhancedInputClickAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputBackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnhancedInputBackAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIInputData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common Input" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/* Derive from this class to store the Input data. It is referenced in the Common Input Settings, found in the project settings UI. */" },
		{ "IncludePath", "CommonInputBaseTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "ToolTip", "Derive from this class to store the Input data. It is referenced in the Common Input Settings, found in the project settings UI." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction = { "DefaultClickAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputData, DefaultClickAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultBackAction_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultBackAction = { "DefaultBackAction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputData, DefaultBackAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultBackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultBackAction_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputClickAction_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputClickAction = { "EnhancedInputClickAction", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputData, EnhancedInputClickAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputClickAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputClickAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputBackAction_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputBackAction = { "EnhancedInputBackAction", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputData, EnhancedInputBackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputBackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputBackAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_DefaultBackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputClickAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputData_Statics::NewProp_EnhancedInputBackAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIInputData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIInputData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIInputData_Statics::ClassParams = {
		&UCommonUIInputData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonUIInputData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIInputData()
	{
		if (!Z_Registration_Info_UClass_UCommonUIInputData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIInputData.OuterSingleton, Z_Construct_UClass_UCommonUIInputData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUIInputData.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonUIInputData>()
	{
		return UCommonUIInputData::StaticClass();
	}
	UCommonUIInputData::UCommonUIInputData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIInputData);
	UCommonUIInputData::~UCommonUIInputData() {}
	DEFINE_FUNCTION(UCommonInputBaseControllerData::execGetRegisteredGamepads)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UCommonInputBaseControllerData::GetRegisteredGamepads();
		P_NATIVE_END;
	}
	void UCommonInputBaseControllerData::StaticRegisterNativesUCommonInputBaseControllerData()
	{
		UClass* Class = UCommonInputBaseControllerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRegisteredGamepads", &UCommonInputBaseControllerData::execGetRegisteredGamepads },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics
	{
		struct CommonInputBaseControllerData_eventGetRegisteredGamepads_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonInputBaseControllerData_eventGetRegisteredGamepads_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonInputBaseControllerData, nullptr, "GetRegisteredGamepads", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::CommonInputBaseControllerData_eventGetRegisteredGamepads_Parms), Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputBaseControllerData);
	UClass* Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister()
	{
		return UCommonInputBaseControllerData::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputBaseControllerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetButtonImageHeightTo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SetButtonImageHeightTo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GamepadName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_GamepadDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_GamepadCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadPlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_GamepadPlatformName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadHardwareIdMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadHardwareIdMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GamepadHardwareIdMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControllerTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerButtonMaskTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControllerButtonMaskTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputBrushDataMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBrushDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBrushDataMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputBrushKeySets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBrushKeySets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBrushKeySets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputBaseControllerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonInputBaseControllerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonInputBaseControllerData_GetRegisteredGamepads, "GetRegisteredGamepads" }, // 3287946297
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common Input" },
		{ "ClassGroupNames", "Input" },
		{ "Comment", "/* Derive from this class to store the Input data. It is referenced in the Common Input Settings, found in the project settings UI. */" },
		{ "IncludePath", "CommonInputBaseTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "ToolTip", "Derive from this class to store the Input data. It is referenced in the Common Input Settings, found in the project settings UI." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_SetButtonImageHeightTo_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_SetButtonImageHeightTo = { "SetButtonImageHeightTo", nullptr, (EPropertyFlags)0x0040000800002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, SetButtonImageHeightTo), METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_SetButtonImageHeightTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_SetButtonImageHeightTo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, InputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType_MetaData)) }; // 3567225506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadName_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "InputType == ECommonInputType::Gamepad" },
		{ "GetOptions", "GetRegisteredGamepads" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadName = { "GamepadName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, GamepadName), METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadDisplayName_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "InputType == ECommonInputType::Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadDisplayName = { "GamepadDisplayName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, GamepadDisplayName), METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadCategory_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "InputType == ECommonInputType::Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadCategory = { "GamepadCategory", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, GamepadCategory), METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadPlatformName_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "InputType == ECommonInputType::Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadPlatformName = { "GamepadPlatformName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, GamepadPlatformName), METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadPlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadPlatformName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping_Inner = { "GamepadHardwareIdMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputDeviceIdentifierPair, METADATA_PARAMS(nullptr, 0) }; // 4093888328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "InputType == ECommonInputType::Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping = { "GamepadHardwareIdMapping", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, GamepadHardwareIdMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping_MetaData)) }; // 4093888328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerTexture_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerTexture = { "ControllerTexture", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, ControllerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerButtonMaskTexture_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerButtonMaskTexture = { "ControllerButtonMaskTexture", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, ControllerButtonMaskTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerButtonMaskTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerButtonMaskTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap_Inner = { "InputBrushDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration, METADATA_PARAMS(nullptr, 0) }; // 3012541183
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "TitleProperty", "Key" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap = { "InputBrushDataMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, InputBrushDataMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap_MetaData)) }; // 3012541183
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets_Inner = { "InputBrushKeySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration, METADATA_PARAMS(nullptr, 0) }; // 2152045976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "TitleProperty", "Keys" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets = { "InputBrushKeySets", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputBaseControllerData, InputBrushKeySets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets_MetaData)) }; // 2152045976
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputBaseControllerData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_SetButtonImageHeightTo,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadPlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_GamepadHardwareIdMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_ControllerButtonMaskTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputBaseControllerData_Statics::NewProp_InputBrushKeySets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputBaseControllerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputBaseControllerData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputBaseControllerData_Statics::ClassParams = {
		&UCommonInputBaseControllerData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonInputBaseControllerData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputBaseControllerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputBaseControllerData()
	{
		if (!Z_Registration_Info_UClass_UCommonInputBaseControllerData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputBaseControllerData.OuterSingleton, Z_Construct_UClass_UCommonInputBaseControllerData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputBaseControllerData.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonInputBaseControllerData>()
	{
		return UCommonInputBaseControllerData::StaticClass();
	}
	UCommonInputBaseControllerData::UCommonInputBaseControllerData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputBaseControllerData);
	UCommonInputBaseControllerData::~UCommonInputBaseControllerData() {}
	void UCommonInputPlatformSettings::StaticRegisterNativesUCommonInputPlatformSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputPlatformSettings);
	UClass* Z_Construct_UClass_UCommonInputPlatformSettings_NoRegister()
	{
		return UCommonInputPlatformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputPlatformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsMouseAndKeyboard_MetaData[];
#endif
		static void NewProp_bSupportsMouseAndKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsMouseAndKeyboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsTouch_MetaData[];
#endif
		static void NewProp_bSupportsTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsTouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsGamepad_MetaData[];
#endif
		static void NewProp_bSupportsGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGamepadName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultGamepadName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanChangeGamepadType_MetaData[];
#endif
		static void NewProp_bCanChangeGamepadType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChangeGamepadType;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ControllerData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerDataClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerDataClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerDataClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputPlatformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonInputBaseTypes.h" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType = { "DefaultInputType", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputPlatformSettings, DefaultInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType_MetaData)) }; // 3567225506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit(void* Obj)
	{
		((UCommonInputPlatformSettings*)Obj)->bSupportsMouseAndKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard = { "bSupportsMouseAndKeyboard", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputPlatformSettings), &Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch_SetBit(void* Obj)
	{
		((UCommonInputPlatformSettings*)Obj)->bSupportsTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch = { "bSupportsTouch", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputPlatformSettings), &Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad_SetBit(void* Obj)
	{
		((UCommonInputPlatformSettings*)Obj)->bSupportsGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad = { "bSupportsGamepad", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputPlatformSettings), &Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultGamepadName_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bSupportsGamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultGamepadName = { "DefaultGamepadName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputPlatformSettings, DefaultGamepadName), METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultGamepadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultGamepadName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType_MetaData[] = {
		{ "Category", "Default" },
		{ "EditCondition", "bSupportsGamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType_SetBit(void* Obj)
	{
		((UCommonInputPlatformSettings*)Obj)->bCanChangeGamepadType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType = { "bCanChangeGamepadType", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputPlatformSettings), &Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData_Inner = { "ControllerData", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "TitleProperty", "InputType" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData = { "ControllerData", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputPlatformSettings, ControllerData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses_Inner = { "ControllerDataClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses = { "ControllerDataClasses", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputPlatformSettings, ControllerDataClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputPlatformSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsMouseAndKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bSupportsGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_DefaultGamepadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_bCanChangeGamepadType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputPlatformSettings_Statics::NewProp_ControllerDataClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputPlatformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputPlatformSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputPlatformSettings_Statics::ClassParams = {
		&UCommonInputPlatformSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonInputPlatformSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::PropPointers),
		0,
		0x001004A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputPlatformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputPlatformSettings()
	{
		if (!Z_Registration_Info_UClass_UCommonInputPlatformSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputPlatformSettings.OuterSingleton, Z_Construct_UClass_UCommonInputPlatformSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputPlatformSettings.OuterSingleton;
	}
	template<> COMMONINPUT_API UClass* StaticClass<UCommonInputPlatformSettings>()
	{
		return UCommonInputPlatformSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputPlatformSettings);
	UCommonInputPlatformSettings::~UCommonInputPlatformSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData;
class UScriptStruct* FCommonInputPlatformBaseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("CommonInputPlatformBaseData"));
	}
	return Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData.OuterSingleton;
}
template<> COMMONINPUT_API UScriptStruct* StaticStruct<FCommonInputPlatformBaseData>()
{
	return FCommonInputPlatformBaseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsMouseAndKeyboard_MetaData[];
#endif
		static void NewProp_bSupportsMouseAndKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsMouseAndKeyboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsGamepad_MetaData[];
#endif
		static void NewProp_bSupportsGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGamepadName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultGamepadName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanChangeGamepadType_MetaData[];
#endif
		static void NewProp_bCanChangeGamepadType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChangeGamepadType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsTouch_MetaData[];
#endif
		static void NewProp_bSupportsTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsTouch;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ControllerData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerDataClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerDataClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControllerDataClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* DEPRECATED Legacy! */" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "ToolTip", "DEPRECATED Legacy!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputPlatformBaseData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType = { "DefaultInputType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputPlatformBaseData, DefaultInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType_MetaData)) }; // 3567225506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit(void* Obj)
	{
		((FCommonInputPlatformBaseData*)Obj)->bSupportsMouseAndKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard = { "bSupportsMouseAndKeyboard", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonInputPlatformBaseData), &Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad_SetBit(void* Obj)
	{
		((FCommonInputPlatformBaseData*)Obj)->bSupportsGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad = { "bSupportsGamepad", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonInputPlatformBaseData), &Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultGamepadName_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "bSupportsGamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultGamepadName = { "DefaultGamepadName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputPlatformBaseData, DefaultGamepadName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultGamepadName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultGamepadName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType_MetaData[] = {
		{ "Category", "Gamepad" },
		{ "EditCondition", "bSupportsGamepad" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType_SetBit(void* Obj)
	{
		((FCommonInputPlatformBaseData*)Obj)->bCanChangeGamepadType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType = { "bCanChangeGamepadType", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonInputPlatformBaseData), &Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch_SetBit(void* Obj)
	{
		((FCommonInputPlatformBaseData*)Obj)->bSupportsTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch = { "bSupportsTouch", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonInputPlatformBaseData), &Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData_Inner = { "ControllerData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
		{ "TitleProperty", "GamepadName" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData = { "ControllerData", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputPlatformBaseData, ControllerData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses_Inner = { "ControllerDataClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonInputBaseControllerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonInputBaseTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses = { "ControllerDataClasses", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputPlatformBaseData, ControllerDataClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsMouseAndKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_DefaultGamepadName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bCanChangeGamepadType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_bSupportsTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewProp_ControllerDataClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		&NewStructOps,
		"CommonInputPlatformBaseData",
		sizeof(FCommonInputPlatformBaseData),
		alignof(FCommonInputPlatformBaseData),
		Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputPlatformBaseData()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData.InnerSingleton, Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics::ScriptStructInfo[] = {
		{ FCommonInputKeyBrushConfiguration::StaticStruct, Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration_Statics::NewStructOps, TEXT("CommonInputKeyBrushConfiguration"), &Z_Registration_Info_UScriptStruct_CommonInputKeyBrushConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonInputKeyBrushConfiguration), 3012541183U) },
		{ FCommonInputKeySetBrushConfiguration::StaticStruct, Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration_Statics::NewStructOps, TEXT("CommonInputKeySetBrushConfiguration"), &Z_Registration_Info_UScriptStruct_CommonInputKeySetBrushConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonInputKeySetBrushConfiguration), 2152045976U) },
		{ FInputDeviceIdentifierPair::StaticStruct, Z_Construct_UScriptStruct_FInputDeviceIdentifierPair_Statics::NewStructOps, TEXT("InputDeviceIdentifierPair"), &Z_Registration_Info_UScriptStruct_InputDeviceIdentifierPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputDeviceIdentifierPair), 4093888328U) },
		{ FCommonInputPlatformBaseData::StaticStruct, Z_Construct_UScriptStruct_FCommonInputPlatformBaseData_Statics::NewStructOps, TEXT("CommonInputPlatformBaseData"), &Z_Registration_Info_UScriptStruct_CommonInputPlatformBaseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonInputPlatformBaseData), 1741090021U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIInputData, UCommonUIInputData::StaticClass, TEXT("UCommonUIInputData"), &Z_Registration_Info_UClass_UCommonUIInputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIInputData), 1517732540U) },
		{ Z_Construct_UClass_UCommonInputBaseControllerData, UCommonInputBaseControllerData::StaticClass, TEXT("UCommonInputBaseControllerData"), &Z_Registration_Info_UClass_UCommonInputBaseControllerData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputBaseControllerData), 3035224612U) },
		{ Z_Construct_UClass_UCommonInputPlatformSettings, UCommonInputPlatformSettings::StaticClass, TEXT("UCommonInputPlatformSettings"), &Z_Registration_Info_UClass_UCommonInputPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputPlatformSettings), 2944168118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_3419543595(TEXT("/Script/CommonInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputBaseTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
