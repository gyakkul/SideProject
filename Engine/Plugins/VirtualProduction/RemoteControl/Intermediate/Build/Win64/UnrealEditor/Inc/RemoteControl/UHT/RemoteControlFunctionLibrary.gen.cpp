// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlFunctionLibrary();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlFunctionLibrary_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingWheelColor();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FColorWheelColor();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FColorWheelColorBase();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs;
class UScriptStruct* FRemoteControlOptionalExposeArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlOptionalExposeArgs"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlOptionalExposeArgs>()
{
	return FRemoteControlOptionalExposeArgs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlOptionalExposeArgs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "RemoteControlPreset" },
		{ "Comment", "/**\n\x09 * The display name of the exposed entity in the panel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "The display name of the exposed entity in the panel." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlOptionalExposeArgs, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "RemoteControlPreset" },
		{ "Comment", "/**\n\x09 * The name of the group to expose the entity in.\n\x09 * If it does not exist, a group with that name will be created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "The name of the group to expose the entity in.\nIf it does not exist, a group with that name will be created." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlOptionalExposeArgs, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewProp_GroupName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlOptionalExposeArgs",
		sizeof(FRemoteControlOptionalExposeArgs),
		alignof(FRemoteControlOptionalExposeArgs),
		Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorWheelColorBase;
class UScriptStruct* FColorWheelColorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorWheelColorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorWheelColorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorWheelColorBase, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ColorWheelColorBase"));
	}
	return Z_Registration_Info_UScriptStruct_ColorWheelColorBase.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FColorWheelColorBase>()
{
	return FColorWheelColorBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColorWheelColorBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base data for a color represented as its position on a color wheel. */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "Base data for a color represented as its position on a color wheel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorWheelColorBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/**\n\x09* The position on the unit circle. Magnitude should be in range [0, 1].\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "The position on the unit circle. Magnitude should be in range [0, 1]." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorWheelColorBase, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/**\n\x09 * The color's value component (as in HSV).\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "The color's value component (as in HSV)." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorWheelColorBase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"ColorWheelColorBase",
		sizeof(FColorWheelColorBase),
		alignof(FColorWheelColorBase),
		Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorWheelColorBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ColorWheelColorBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorWheelColorBase.InnerSingleton, Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColorWheelColorBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FColorWheelColor>() == std::is_polymorphic<FColorWheelColorBase>(), "USTRUCT FColorWheelColor cannot be polymorphic unless super FColorWheelColorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorWheelColor;
class UScriptStruct* FColorWheelColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorWheelColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorWheelColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorWheelColor, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ColorWheelColor"));
	}
	return Z_Registration_Info_UScriptStruct_ColorWheelColor.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FColorWheelColor>()
{
	return FColorWheelColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColorWheelColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorWheelColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A color as represented by a position on a color wheel. */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "A color as represented by a position on a color wheel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorWheelColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewProp_Alpha_MetaData[] = {
		{ "Comment", "/**\n\x09 * The color's alpha component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "The color's alpha component." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorWheelColor, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorWheelColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewProp_Alpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorWheelColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FColorWheelColorBase,
		&NewStructOps,
		"ColorWheelColor",
		sizeof(FColorWheelColor),
		alignof(FColorWheelColor),
		Z_Construct_UScriptStruct_FColorWheelColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorWheelColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorWheelColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorWheelColor()
	{
		if (!Z_Registration_Info_UScriptStruct_ColorWheelColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorWheelColor.InnerSingleton, Z_Construct_UScriptStruct_FColorWheelColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColorWheelColor.InnerSingleton;
	}

static_assert(std::is_polymorphic<FColorGradingWheelColor>() == std::is_polymorphic<FColorWheelColorBase>(), "USTRUCT FColorGradingWheelColor cannot be polymorphic unless super FColorWheelColorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorGradingWheelColor;
class UScriptStruct* FColorGradingWheelColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorGradingWheelColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorGradingWheelColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorGradingWheelColor, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("ColorGradingWheelColor"));
	}
	return Z_Registration_Info_UScriptStruct_ColorGradingWheelColor.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FColorGradingWheelColor>()
{
	return FColorGradingWheelColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Luminance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Luminance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A color value as represented by a position on a color grading wheel. */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "A color value as represented by a position on a color grading wheel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorGradingWheelColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewProp_Luminance_MetaData[] = {
		{ "Comment", "/**\n\x09 * The color's luminance component, which is separate from the HSV color itself.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "The color's luminance component, which is separate from the HSV color itself." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewProp_Luminance = { "Luminance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FColorGradingWheelColor, Luminance), METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewProp_Luminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewProp_Luminance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewProp_Luminance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FColorWheelColorBase,
		&NewStructOps,
		"ColorGradingWheelColor",
		sizeof(FColorGradingWheelColor),
		alignof(FColorGradingWheelColor),
		Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FColorGradingWheelColor()
	{
		if (!Z_Registration_Info_UScriptStruct_ColorGradingWheelColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorGradingWheelColor.InnerSingleton, Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ColorGradingWheelColor.InnerSingleton;
	}
	DEFINE_FUNCTION(URemoteControlFunctionLibrary::execApplyColorGradingWheelDelta)
	{
		P_GET_OBJECT(UObject,Z_Param_TargetObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_STRUCT_REF(FColorGradingWheelColor,Z_Param_Out_DeltaValue);
		P_GET_STRUCT_REF(FColorGradingWheelColor,Z_Param_Out_ReferenceColor);
		P_GET_UBOOL(Z_Param_bIsInteractive);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteControlFunctionLibrary::ApplyColorGradingWheelDelta(Z_Param_TargetObject,Z_Param_PropertyName,Z_Param_Out_DeltaValue,Z_Param_Out_ReferenceColor,Z_Param_bIsInteractive,Z_Param_MinValue,Z_Param_MaxValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteControlFunctionLibrary::execApplyColorWheelDelta)
	{
		P_GET_OBJECT(UObject,Z_Param_TargetObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
		P_GET_STRUCT_REF(FColorWheelColor,Z_Param_Out_DeltaValue);
		P_GET_STRUCT_REF(FColorWheelColor,Z_Param_Out_ReferenceColor);
		P_GET_UBOOL(Z_Param_bIsInteractive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteControlFunctionLibrary::ApplyColorWheelDelta(Z_Param_TargetObject,Z_Param_PropertyName,Z_Param_Out_DeltaValue,Z_Param_Out_ReferenceColor,Z_Param_bIsInteractive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteControlFunctionLibrary::execExposeActor)
	{
		P_GET_OBJECT(URemoteControlPreset,Z_Param_Preset);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FRemoteControlOptionalExposeArgs,Z_Param_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteControlFunctionLibrary::ExposeActor(Z_Param_Preset,Z_Param_Actor,Z_Param_Args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteControlFunctionLibrary::execExposeFunction)
	{
		P_GET_OBJECT(URemoteControlPreset,Z_Param_Preset);
		P_GET_OBJECT(UObject,Z_Param_SourceObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Function);
		P_GET_STRUCT(FRemoteControlOptionalExposeArgs,Z_Param_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteControlFunctionLibrary::ExposeFunction(Z_Param_Preset,Z_Param_SourceObject,Z_Param_Function,Z_Param_Args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteControlFunctionLibrary::execExposeProperty)
	{
		P_GET_OBJECT(URemoteControlPreset,Z_Param_Preset);
		P_GET_OBJECT(UObject,Z_Param_SourceObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Property);
		P_GET_STRUCT(FRemoteControlOptionalExposeArgs,Z_Param_Args);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteControlFunctionLibrary::ExposeProperty(Z_Param_Preset,Z_Param_SourceObject,Z_Param_Property,Z_Param_Args);
		P_NATIVE_END;
	}
	void URemoteControlFunctionLibrary::StaticRegisterNativesURemoteControlFunctionLibrary()
	{
		UClass* Class = URemoteControlFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyColorGradingWheelDelta", &URemoteControlFunctionLibrary::execApplyColorGradingWheelDelta },
			{ "ApplyColorWheelDelta", &URemoteControlFunctionLibrary::execApplyColorWheelDelta },
			{ "ExposeActor", &URemoteControlFunctionLibrary::execExposeActor },
			{ "ExposeFunction", &URemoteControlFunctionLibrary::execExposeFunction },
			{ "ExposeProperty", &URemoteControlFunctionLibrary::execExposeProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics
	{
		struct RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms
		{
			UObject* TargetObject;
			FString PropertyName;
			FColorGradingWheelColor DeltaValue;
			FColorGradingWheelColor ReferenceColor;
			bool bIsInteractive;
			float MinValue;
			float MaxValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceColor;
		static void NewProp_bIsInteractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractive;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms, TargetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_DeltaValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms, DeltaValue), Z_Construct_UScriptStruct_FColorGradingWheelColor, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_DeltaValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_DeltaValue_MetaData)) }; // 1087908469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReferenceColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReferenceColor = { "ReferenceColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms, ReferenceColor), Z_Construct_UScriptStruct_FColorGradingWheelColor, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReferenceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReferenceColor_MetaData)) }; // 1087908469
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_bIsInteractive_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms*)Obj)->bIsInteractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_bIsInteractive = { "bIsInteractive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_bIsInteractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_TargetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReferenceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_bIsInteractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Color" },
		{ "Comment", "/**\n\x09 * Add/subtract from the value of an FVector4 property interpreted as RGBV using a delta value based on color wheel coordinates.\n\x09 * @param TargetObject the object that contains the property to modify.\n\x09 * @param PropertyName the name of the property to modify.\n\x09 * @param DeltaValue the amount to change the color by.\n\x09 * @param ReferenceColor if the color's current position on the wheel is ambiguous as calculated from RGB values (e.g. black), use this reference color's position instead.\n\x09 * @param bIsInteractive if true, this is treated as an interactive change. If false, it will be treated as the final value set change.\n\x09 * @return Whether the operation was successful.\n\x09 */" },
		{ "CPP_Default_MaxValue", "2.000000" },
		{ "CPP_Default_MinValue", "0.000000" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "Add/subtract from the value of an FVector4 property interpreted as RGBV using a delta value based on color wheel coordinates.\n@param TargetObject the object that contains the property to modify.\n@param PropertyName the name of the property to modify.\n@param DeltaValue the amount to change the color by.\n@param ReferenceColor if the color's current position on the wheel is ambiguous as calculated from RGB values (e.g. black), use this reference color's position instead.\n@param bIsInteractive if true, this is treated as an interactive change. If false, it will be treated as the final value set change.\n@return Whether the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlFunctionLibrary, nullptr, "ApplyColorGradingWheelDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::RemoteControlFunctionLibrary_eventApplyColorGradingWheelDelta_Parms), Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics
	{
		struct RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms
		{
			UObject* TargetObject;
			FString PropertyName;
			FColorWheelColor DeltaValue;
			FColorWheelColor ReferenceColor;
			bool bIsInteractive;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceColor;
		static void NewProp_bIsInteractive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteractive;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms, TargetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms, PropertyName), METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_DeltaValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms, DeltaValue), Z_Construct_UScriptStruct_FColorWheelColor, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_DeltaValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_DeltaValue_MetaData)) }; // 2139392055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReferenceColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReferenceColor = { "ReferenceColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms, ReferenceColor), Z_Construct_UScriptStruct_FColorWheelColor, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReferenceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReferenceColor_MetaData)) }; // 2139392055
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_bIsInteractive_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms*)Obj)->bIsInteractive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_bIsInteractive = { "bIsInteractive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_bIsInteractive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_TargetObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReferenceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_bIsInteractive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Remote Control Color" },
		{ "Comment", "/**\n\x09 * Add/subtract from the value of an FLinearColor property using a delta value based on color wheel coordinates.\n\x09 * @param TargetObject the object that contains the property to modify.\n\x09 * @param PropertyName the name of the property to modify.\n\x09 * @param DeltaValue the amount to change the color by.\n\x09 * @param ReferenceColor if the color's current position on the wheel is ambiguous as calculated from RGB values (e.g. black), use this reference color's position instead.\n\x09 * @param bIsInteractive if true, this is treated as an interactive change. If false, it will be treated as the final value set change.\n\x09 * @return Whether the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "Add/subtract from the value of an FLinearColor property using a delta value based on color wheel coordinates.\n@param TargetObject the object that contains the property to modify.\n@param PropertyName the name of the property to modify.\n@param DeltaValue the amount to change the color by.\n@param ReferenceColor if the color's current position on the wheel is ambiguous as calculated from RGB values (e.g. black), use this reference color's position instead.\n@param bIsInteractive if true, this is treated as an interactive change. If false, it will be treated as the final value set change.\n@return Whether the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlFunctionLibrary, nullptr, "ApplyColorWheelDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::RemoteControlFunctionLibrary_eventApplyColorWheelDelta_Parms), Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics
	{
		struct RemoteControlFunctionLibrary_eventExposeActor_Parms
		{
			URemoteControlPreset* Preset;
			AActor* Actor;
			FRemoteControlOptionalExposeArgs Args;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeActor_Parms, Preset), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeActor_Parms, Args), Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs, METADATA_PARAMS(nullptr, 0) }; // 1884730464
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventExposeActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventExposeActor_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_Args,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlPreset" },
		{ "Comment", "/**\n\x09 * Expose an actor in a remote control preset.\n\x09 * @param Preset the preset to expose the property in.\n\x09 * @param Actor the actor to expose.\n\x09 * @param Args optional arguments.\n\x09 * @return Whether the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "Expose an actor in a remote control preset.\n@param Preset the preset to expose the property in.\n@param Actor the actor to expose.\n@param Args optional arguments.\n@return Whether the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlFunctionLibrary, nullptr, "ExposeActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::RemoteControlFunctionLibrary_eventExposeActor_Parms), Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics
	{
		struct RemoteControlFunctionLibrary_eventExposeFunction_Parms
		{
			URemoteControlPreset* Preset;
			UObject* SourceObject;
			FString Function;
			FRemoteControlOptionalExposeArgs Args;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Function;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeFunction_Parms, Preset), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeFunction_Parms, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeFunction_Parms, Function), METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Function_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeFunction_Parms, Args), Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs, METADATA_PARAMS(nullptr, 0) }; // 1884730464
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventExposeFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventExposeFunction_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_Args,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlPreset" },
		{ "Comment", "/**\n\x09 * Expose a function in a remote control preset.\n\x09 * @param Preset the preset to expose the property in.\n\x09 * @param SourceObject the object that contains the property to expose.\n\x09 * @param Function the name of the function to expose.\n\x09 * @param Args optional arguments.\n\x09 * @return Whether the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "Expose a function in a remote control preset.\n@param Preset the preset to expose the property in.\n@param SourceObject the object that contains the property to expose.\n@param Function the name of the function to expose.\n@param Args optional arguments.\n@return Whether the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlFunctionLibrary, nullptr, "ExposeFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::RemoteControlFunctionLibrary_eventExposeFunction_Parms), Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics
	{
		struct RemoteControlFunctionLibrary_eventExposeProperty_Parms
		{
			URemoteControlPreset* Preset;
			UObject* SourceObject;
			FString Property;
			FRemoteControlOptionalExposeArgs Args;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeProperty_Parms, Preset), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeProperty_Parms, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Property_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeProperty_Parms, Property), METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlFunctionLibrary_eventExposeProperty_Parms, Args), Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs, METADATA_PARAMS(nullptr, 0) }; // 1884730464
	void Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteControlFunctionLibrary_eventExposeProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RemoteControlFunctionLibrary_eventExposeProperty_Parms), &Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_Args,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlPreset" },
		{ "Comment", "/**\n\x09 * Expose a property in a remote control preset.\n\x09 * @param Preset the preset to expose the property in.\n\x09 * @param SourceObject the object that contains the property to expose.\n\x09 * @param Property the name or path of the property to expose.\n\x09 * @param Args optional arguments.\n\x09 * @return Whether the operation was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
		{ "ToolTip", "Expose a property in a remote control preset.\n@param Preset the preset to expose the property in.\n@param SourceObject the object that contains the property to expose.\n@param Property the name or path of the property to expose.\n@param Args optional arguments.\n@return Whether the operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlFunctionLibrary, nullptr, "ExposeProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::RemoteControlFunctionLibrary_eventExposeProperty_Parms), Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlFunctionLibrary);
	UClass* Z_Construct_UClass_URemoteControlFunctionLibrary_NoRegister()
	{
		return URemoteControlFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorGradingWheelDelta, "ApplyColorGradingWheelDelta" }, // 3150832478
		{ &Z_Construct_UFunction_URemoteControlFunctionLibrary_ApplyColorWheelDelta, "ApplyColorWheelDelta" }, // 2675828278
		{ &Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeActor, "ExposeActor" }, // 3504350626
		{ &Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeFunction, "ExposeFunction" }, // 3430089237
		{ &Z_Construct_UFunction_URemoteControlFunctionLibrary_ExposeProperty, "ExposeProperty" }, // 554279434
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteControlFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RemoteControlFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::ClassParams = {
		&URemoteControlFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URemoteControlFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlFunctionLibrary.OuterSingleton, Z_Construct_UClass_URemoteControlFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlFunctionLibrary.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlFunctionLibrary>()
	{
		return URemoteControlFunctionLibrary::StaticClass();
	}
	URemoteControlFunctionLibrary::URemoteControlFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlFunctionLibrary);
	URemoteControlFunctionLibrary::~URemoteControlFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlOptionalExposeArgs::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlOptionalExposeArgs_Statics::NewStructOps, TEXT("RemoteControlOptionalExposeArgs"), &Z_Registration_Info_UScriptStruct_RemoteControlOptionalExposeArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlOptionalExposeArgs), 1884730464U) },
		{ FColorWheelColorBase::StaticStruct, Z_Construct_UScriptStruct_FColorWheelColorBase_Statics::NewStructOps, TEXT("ColorWheelColorBase"), &Z_Registration_Info_UScriptStruct_ColorWheelColorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorWheelColorBase), 3164250507U) },
		{ FColorWheelColor::StaticStruct, Z_Construct_UScriptStruct_FColorWheelColor_Statics::NewStructOps, TEXT("ColorWheelColor"), &Z_Registration_Info_UScriptStruct_ColorWheelColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorWheelColor), 2139392055U) },
		{ FColorGradingWheelColor::StaticStruct, Z_Construct_UScriptStruct_FColorGradingWheelColor_Statics::NewStructOps, TEXT("ColorGradingWheelColor"), &Z_Registration_Info_UScriptStruct_ColorGradingWheelColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorGradingWheelColor), 1087908469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlFunctionLibrary, URemoteControlFunctionLibrary::StaticClass, TEXT("URemoteControlFunctionLibrary"), &Z_Registration_Info_UClass_URemoteControlFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlFunctionLibrary), 874021641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_2925871854(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
