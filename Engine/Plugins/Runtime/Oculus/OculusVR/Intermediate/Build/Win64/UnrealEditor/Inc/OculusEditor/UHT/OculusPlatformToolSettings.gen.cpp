// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusPlatformToolSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusPlatformToolSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OCULUSEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings();
	OCULUSEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_NoRegister();
	OCULUSEDITOR_API UEnum* Z_Construct_UEnum_OculusEditor_EOculusAssetType();
	OCULUSEDITOR_API UEnum* Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation();
	OCULUSEDITOR_API UEnum* Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget();
	OCULUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetConfig();
	OCULUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetConfigArray();
	OCULUSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRedistPackage();
	UPackage* Z_Construct_UPackage__Script_OculusEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusPlatformTarget;
	static UEnum* EOculusPlatformTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusPlatformTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusPlatformTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("EOculusPlatformTarget"));
		}
		return Z_Registration_Info_UEnum_EOculusPlatformTarget.OuterSingleton;
	}
	template<> OCULUSEDITOR_API UEnum* StaticEnum<EOculusPlatformTarget>()
	{
		return EOculusPlatformTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::Enumerators[] = {
		{ "EOculusPlatformTarget::Rift", (int64)EOculusPlatformTarget::Rift },
		{ "EOculusPlatformTarget::Quest", (int64)EOculusPlatformTarget::Quest },
		{ "EOculusPlatformTarget::Length", (int64)EOculusPlatformTarget::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::Enum_MetaDataParams[] = {
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusPlatformTarget::Length" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EOculusPlatformTarget::Quest" },
		{ "Rift.DisplayName", "Rift" },
		{ "Rift.Name", "EOculusPlatformTarget::Rift" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		"EOculusPlatformTarget",
		"EOculusPlatformTarget",
		Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget()
	{
		if (!Z_Registration_Info_UEnum_EOculusPlatformTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusPlatformTarget.InnerSingleton, Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusPlatformTarget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusGamepadEmulation;
	static UEnum* EOculusGamepadEmulation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusGamepadEmulation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusGamepadEmulation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("EOculusGamepadEmulation"));
		}
		return Z_Registration_Info_UEnum_EOculusGamepadEmulation.OuterSingleton;
	}
	template<> OCULUSEDITOR_API UEnum* StaticEnum<EOculusGamepadEmulation>()
	{
		return EOculusGamepadEmulation_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::Enumerators[] = {
		{ "EOculusGamepadEmulation::Off", (int64)EOculusGamepadEmulation::Off },
		{ "EOculusGamepadEmulation::Twinstick", (int64)EOculusGamepadEmulation::Twinstick },
		{ "EOculusGamepadEmulation::RightDPad", (int64)EOculusGamepadEmulation::RightDPad },
		{ "EOculusGamepadEmulation::LeftDPad", (int64)EOculusGamepadEmulation::LeftDPad },
		{ "EOculusGamepadEmulation::Length", (int64)EOculusGamepadEmulation::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::Enum_MetaDataParams[] = {
		{ "LeftDPad.DisplayName", "Left D Pad" },
		{ "LeftDPad.Name", "EOculusGamepadEmulation::LeftDPad" },
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusGamepadEmulation::Length" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
		{ "Off.DisplayName", "Off" },
		{ "Off.Name", "EOculusGamepadEmulation::Off" },
		{ "RightDPad.DisplayName", "Right D Pad" },
		{ "RightDPad.Name", "EOculusGamepadEmulation::RightDPad" },
		{ "Twinstick.DisplayName", "Twinstick" },
		{ "Twinstick.Name", "EOculusGamepadEmulation::Twinstick" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		"EOculusGamepadEmulation",
		"EOculusGamepadEmulation",
		Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation()
	{
		if (!Z_Registration_Info_UEnum_EOculusGamepadEmulation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusGamepadEmulation.InnerSingleton, Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusGamepadEmulation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusAssetType;
	static UEnum* EOculusAssetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusAssetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusAssetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusEditor_EOculusAssetType, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("EOculusAssetType"));
		}
		return Z_Registration_Info_UEnum_EOculusAssetType.OuterSingleton;
	}
	template<> OCULUSEDITOR_API UEnum* StaticEnum<EOculusAssetType>()
	{
		return EOculusAssetType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::Enumerators[] = {
		{ "EOculusAssetType::Default", (int64)EOculusAssetType::Default },
		{ "EOculusAssetType::Store", (int64)EOculusAssetType::Store },
		{ "EOculusAssetType::Language_Pack", (int64)EOculusAssetType::Language_Pack },
		{ "EOculusAssetType::Length", (int64)EOculusAssetType::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::Enum_MetaDataParams[] = {
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EOculusAssetType::Default" },
		{ "Language_Pack.DisplayName", "Language Pack" },
		{ "Language_Pack.Name", "EOculusAssetType::Language_Pack" },
		{ "Length.DisplayName", "Invlaid" },
		{ "Length.Name", "EOculusAssetType::Length" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
		{ "Store.DisplayName", "Store" },
		{ "Store.Name", "EOculusAssetType::Store" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		"EOculusAssetType",
		"EOculusAssetType",
		Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusEditor_EOculusAssetType()
	{
		if (!Z_Registration_Info_UEnum_EOculusAssetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusAssetType.InnerSingleton, Z_Construct_UEnum_OculusEditor_EOculusAssetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusAssetType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RedistPackage;
class UScriptStruct* FRedistPackage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RedistPackage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RedistPackage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRedistPackage, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("RedistPackage"));
	}
	return Z_Registration_Info_UScriptStruct_RedistPackage.OuterSingleton;
}
template<> OCULUSEDITOR_API UScriptStruct* StaticStruct<FRedistPackage>()
{
	return FRedistPackage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRedistPackage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Included_MetaData[];
#endif
		static void NewProp_Included_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Included;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedistPackage_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRedistPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRedistPackage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included_SetBit(void* Obj)
	{
		((FRedistPackage*)Obj)->Included = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included = { "Included", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRedistPackage), &Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRedistPackage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRedistPackage, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRedistPackage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Included,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRedistPackage_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRedistPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		&NewStructOps,
		"RedistPackage",
		sizeof(FRedistPackage),
		alignof(FRedistPackage),
		Z_Construct_UScriptStruct_FRedistPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedistPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRedistPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRedistPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRedistPackage()
	{
		if (!Z_Registration_Info_UScriptStruct_RedistPackage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RedistPackage.InnerSingleton, Z_Construct_UScriptStruct_FRedistPackage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RedistPackage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetConfig;
class UScriptStruct* FAssetConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetConfig, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("AssetConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AssetConfig.OuterSingleton;
}
template<> OCULUSEDITOR_API UScriptStruct* StaticStruct<FAssetConfig>()
{
	return FAssetConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Required_MetaData[];
#endif
		static void NewProp_Required_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Required;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sku_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Sku;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfig_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetConfig>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetConfig, AssetType), Z_Construct_UEnum_OculusEditor_EOculusAssetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType_MetaData)) }; // 1610331210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required_SetBit(void* Obj)
	{
		((FAssetConfig*)Obj)->Required = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required = { "Required", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAssetConfig), &Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetConfig, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Sku_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Sku = { "Sku", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetConfig, Sku), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Sku_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Sku_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_AssetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Required,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfig_Statics::NewProp_Sku,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		&NewStructOps,
		"AssetConfig",
		sizeof(FAssetConfig),
		alignof(FAssetConfig),
		Z_Construct_UScriptStruct_FAssetConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetConfig.InnerSingleton, Z_Construct_UScriptStruct_FAssetConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetConfigArray;
class UScriptStruct* FAssetConfigArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetConfigArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetConfigArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetConfigArray, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("AssetConfigArray"));
	}
	return Z_Registration_Info_UScriptStruct_AssetConfigArray.OuterSingleton;
}
template<> OCULUSEDITOR_API UScriptStruct* StaticStruct<FAssetConfigArray>()
{
	return FAssetConfigArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetConfigArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConfigArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfigArray_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetConfigArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray_Inner = { "ConfigArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetConfig, METADATA_PARAMS(nullptr, 0) }; // 153642131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray = { "ConfigArray", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetConfigArray, ConfigArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray_MetaData)) }; // 153642131
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetConfigArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewProp_ConfigArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetConfigArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		&NewStructOps,
		"AssetConfigArray",
		sizeof(FAssetConfigArray),
		alignof(FAssetConfigArray),
		Z_Construct_UScriptStruct_FAssetConfigArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfigArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetConfigArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetConfigArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetConfigArray()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetConfigArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetConfigArray.InnerSingleton, Z_Construct_UScriptStruct_FAssetConfigArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetConfigArray.InnerSingleton;
	}
	void UDEPRECATED_UOculusPlatformToolSettings::StaticRegisterNativesUDEPRECATED_UOculusPlatformToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusPlatformToolSettings);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_NoRegister()
	{
		return UDEPRECATED_UOculusPlatformToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftBuildDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftBuildDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftBuildVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftBuildVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftLaunchParams_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRiftLaunchParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftFireWallException_MetaData[];
#endif
		static void NewProp_OculusRiftFireWallException_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OculusRiftFireWallException;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRift2DLaunchPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRift2DLaunchPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRift2DLaunchParams_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusRift2DLaunchParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OculusRedistPackages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRedistPackages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusRedistPackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UploadDebugSymbols_MetaData[];
#endif
		static void NewProp_UploadDebugSymbols_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UploadDebugSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSymbolsOnly_MetaData[];
#endif
		static void NewProp_DebugSymbolsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugSymbolsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OculusTargetPlatform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusTargetPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusTargetPlatform;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusApplicationID_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusApplicationID_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusApplicationID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusApplicationToken_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusApplicationToken_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusApplicationToken;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusReleaseChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusReleaseChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusReleaseChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusReleaseNote_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusReleaseNote_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusReleaseNote;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusLaunchFilePath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusLaunchFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusLaunchFilePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OculusRiftGamepadEmulation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusRiftGamepadEmulation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OculusRiftGamepadEmulation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusLanguagePacksPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusLanguagePacksPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusLanguagePacksPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusExpansionFilesPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusExpansionFilesPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusExpansionFilesPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusSymbolDirPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusSymbolDirPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusSymbolDirPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OculusAssetConfigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OculusAssetConfigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OculusAssetConfigs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "IncludePath", "OculusPlatformToolSettings.h" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory = { "OculusRiftBuildDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRiftBuildDirectory), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion = { "OculusRiftBuildVersion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRiftBuildVersion), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams = { "OculusRiftLaunchParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRiftLaunchParams), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusPlatformToolSettings*)Obj)->OculusRiftFireWallException = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException = { "OculusRiftFireWallException", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusPlatformToolSettings), &Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath = { "OculusRift2DLaunchPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRift2DLaunchPath), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams = { "OculusRift2DLaunchParams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRift2DLaunchParams), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages_Inner = { "OculusRedistPackages", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRedistPackage, METADATA_PARAMS(nullptr, 0) }; // 1604186447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages = { "OculusRedistPackages", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRedistPackages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages_MetaData)) }; // 1604186447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusPlatformToolSettings*)Obj)->UploadDebugSymbols = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols = { "UploadDebugSymbols", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusPlatformToolSettings), &Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusPlatformToolSettings*)Obj)->DebugSymbolsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly = { "DebugSymbolsOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusPlatformToolSettings), &Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_BuildID_MetaData[] = {
		{ "Category", "Oculus" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_BuildID = { "BuildID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, BuildID), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_BuildID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_BuildID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform = { "OculusTargetPlatform", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusTargetPlatform), Z_Construct_UEnum_OculusEditor_EOculusPlatformTarget, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_MetaData)) }; // 278128802
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID_Inner = { "OculusApplicationID", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID = { "OculusApplicationID", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusApplicationID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken_Inner = { "OculusApplicationToken", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken = { "OculusApplicationToken", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusApplicationToken), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_Inner = { "OculusReleaseChannel", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel = { "OculusReleaseChannel", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusReleaseChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote_Inner = { "OculusReleaseNote", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote = { "OculusReleaseNote", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusReleaseNote), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_Inner = { "OculusLaunchFilePath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath = { "OculusLaunchFilePath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusLaunchFilePath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation = { "OculusRiftGamepadEmulation", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusRiftGamepadEmulation), Z_Construct_UEnum_OculusEditor_EOculusGamepadEmulation, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_MetaData)) }; // 1419135446
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_Inner = { "OculusLanguagePacksPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath = { "OculusLanguagePacksPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusLanguagePacksPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_Inner = { "OculusExpansionFilesPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath = { "OculusExpansionFilesPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusExpansionFilesPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_Inner = { "OculusSymbolDirPath", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath = { "OculusSymbolDirPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusSymbolDirPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_Inner = { "OculusAssetConfigs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetConfigArray, METADATA_PARAMS(nullptr, 0) }; // 2988876601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusPlatformToolSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs = { "OculusAssetConfigs", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusPlatformToolSettings, OculusAssetConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_MetaData)) }; // 2988876601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftBuildVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftLaunchParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftFireWallException,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRift2DLaunchParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRedistPackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_UploadDebugSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_DebugSymbolsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_BuildID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusTargetPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusApplicationToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusReleaseNote,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLaunchFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusRiftGamepadEmulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusLanguagePacksPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusExpansionFilesPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusSymbolDirPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::NewProp_OculusAssetConfigs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusPlatformToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::ClassParams = {
		&UDEPRECATED_UOculusPlatformToolSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::PropPointers),
		0,
		0x021002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusPlatformToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusPlatformToolSettings.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusPlatformToolSettings.OuterSingleton;
	}
	template<> OCULUSEDITOR_API UClass* StaticClass<UDEPRECATED_UOculusPlatformToolSettings>()
	{
		return UDEPRECATED_UOculusPlatformToolSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusPlatformToolSettings);
	UDEPRECATED_UOculusPlatformToolSettings::~UDEPRECATED_UOculusPlatformToolSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::EnumInfo[] = {
		{ EOculusPlatformTarget_StaticEnum, TEXT("EOculusPlatformTarget"), &Z_Registration_Info_UEnum_EOculusPlatformTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 278128802U) },
		{ EOculusGamepadEmulation_StaticEnum, TEXT("EOculusGamepadEmulation"), &Z_Registration_Info_UEnum_EOculusGamepadEmulation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1419135446U) },
		{ EOculusAssetType_StaticEnum, TEXT("EOculusAssetType"), &Z_Registration_Info_UEnum_EOculusAssetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1610331210U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::ScriptStructInfo[] = {
		{ FRedistPackage::StaticStruct, Z_Construct_UScriptStruct_FRedistPackage_Statics::NewStructOps, TEXT("RedistPackage"), &Z_Registration_Info_UScriptStruct_RedistPackage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRedistPackage), 1604186447U) },
		{ FAssetConfig::StaticStruct, Z_Construct_UScriptStruct_FAssetConfig_Statics::NewStructOps, TEXT("AssetConfig"), &Z_Registration_Info_UScriptStruct_AssetConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetConfig), 153642131U) },
		{ FAssetConfigArray::StaticStruct, Z_Construct_UScriptStruct_FAssetConfigArray_Statics::NewStructOps, TEXT("AssetConfigArray"), &Z_Registration_Info_UScriptStruct_AssetConfigArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetConfigArray), 2988876601U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusPlatformToolSettings, UDEPRECATED_UOculusPlatformToolSettings::StaticClass, TEXT("UDEPRECATED_UOculusPlatformToolSettings"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusPlatformToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusPlatformToolSettings), 2279470717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_2362891703(TEXT("/Script/OculusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusPlatformToolSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
