// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingColorSpace_RGBCMY() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY();
	DMXPIXELMAPPINGRUNTIME_API UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY;
	static UEnum* EDMXPixelMappingOutputColorSpace_RGBCMY_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRuntime(), TEXT("EDMXPixelMappingOutputColorSpace_RGBCMY"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UEnum* StaticEnum<EDMXPixelMappingOutputColorSpace_RGBCMY>()
	{
		return EDMXPixelMappingOutputColorSpace_RGBCMY_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::Enumerators[] = {
		{ "EDMXPixelMappingOutputColorSpace_RGBCMY::sRGB", (int64)EDMXPixelMappingOutputColorSpace_RGBCMY::sRGB },
		{ "EDMXPixelMappingOutputColorSpace_RGBCMY::Rec2020", (int64)EDMXPixelMappingOutputColorSpace_RGBCMY::Rec2020 },
		{ "EDMXPixelMappingOutputColorSpace_RGBCMY::P3DCI", (int64)EDMXPixelMappingOutputColorSpace_RGBCMY::P3DCI },
		{ "EDMXPixelMappingOutputColorSpace_RGBCMY::P3D65", (int64)EDMXPixelMappingOutputColorSpace_RGBCMY::P3D65 },
		{ "EDMXPixelMappingOutputColorSpace_RGBCMY::Plasa", (int64)EDMXPixelMappingOutputColorSpace_RGBCMY::Plasa },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "P3D65.Name", "EDMXPixelMappingOutputColorSpace_RGBCMY::P3D65" },
		{ "P3DCI.Name", "EDMXPixelMappingOutputColorSpace_RGBCMY::P3DCI" },
		{ "Plasa.DisplayName", "PLASA RGB - ANSI E1.54" },
		{ "Plasa.Name", "EDMXPixelMappingOutputColorSpace_RGBCMY::Plasa" },
		{ "Rec2020.Name", "EDMXPixelMappingOutputColorSpace_RGBCMY::Rec2020" },
		{ "sRGB.DisplayName", "sRGB / Rec709" },
		{ "sRGB.Name", "EDMXPixelMappingOutputColorSpace_RGBCMY::sRGB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
		nullptr,
		"EDMXPixelMappingOutputColorSpace_RGBCMY",
		"EDMXPixelMappingOutputColorSpace_RGBCMY",
		Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY;
	static UEnum* EDMXPixelMappingLuminanceType_RGBCMY_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRuntime(), TEXT("EDMXPixelMappingLuminanceType_RGBCMY"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UEnum* StaticEnum<EDMXPixelMappingLuminanceType_RGBCMY>()
	{
		return EDMXPixelMappingLuminanceType_RGBCMY_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::Enumerators[] = {
		{ "EDMXPixelMappingLuminanceType_RGBCMY::FromColor", (int64)EDMXPixelMappingLuminanceType_RGBCMY::FromColor },
		{ "EDMXPixelMappingLuminanceType_RGBCMY::Constant", (int64)EDMXPixelMappingLuminanceType_RGBCMY::Constant },
		{ "EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha", (int64)EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha },
		{ "EDMXPixelMappingLuminanceType_RGBCMY::None", (int64)EDMXPixelMappingLuminanceType_RGBCMY::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Name", "EDMXPixelMappingLuminanceType_RGBCMY::Constant" },
		{ "FromAlpha.Name", "EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "FromColor.Name", "EDMXPixelMappingLuminanceType_RGBCMY::FromColor" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "None.Name", "EDMXPixelMappingLuminanceType_RGBCMY::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
		nullptr,
		"EDMXPixelMappingLuminanceType_RGBCMY",
		"EDMXPixelMappingLuminanceType_RGBCMY",
		Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY.InnerSingleton;
	}
	void UDMXPixelMappingColorSpace_RGBCMY::StaticRegisterNativesUDMXPixelMappingColorSpace_RGBCMY()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingColorSpace_RGBCMY);
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_NoRegister()
	{
		return UDMXPixelMappingColorSpace_RGBCMY::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelMappingOutputColorSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelMappingOutputColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelMappingOutputColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendCyan_MetaData[];
#endif
		static void NewProp_bSendCyan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendCyan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendMagenta_MetaData[];
#endif
		static void NewProp_bSendMagenta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendMagenta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendYellow_MetaData[];
#endif
		static void NewProp_bSendYellow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendYellow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueAttribute;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LuminanceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LuminanceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LuminanceAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Luminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Luminance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLuminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLuminance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLuminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLuminance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingColorSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "RGB / CMY" },
		{ "IncludePath", "ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace_MetaData[] = {
		{ "Category", "Color Space" },
		{ "Comment", "/** The color space to use */" },
		{ "DisplayName", "Output Color Space" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "The color space to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace = { "PixelMappingOutputColorSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, PixelMappingOutputColorSpace), Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingOutputColorSpace_RGBCMY, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace_MetaData)) }; // 1795037504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan_MetaData[] = {
		{ "Category", "RGB" },
		{ "Comment", "/** If set, converts Red to Cyan */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "If set, converts Red to Cyan" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan_SetBit(void* Obj)
	{
		((UDMXPixelMappingColorSpace_RGBCMY*)Obj)->bSendCyan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan = { "bSendCyan", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingColorSpace_RGBCMY), &Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta_MetaData[] = {
		{ "Category", "RGB" },
		{ "Comment", "/** If set, converts Green to Magenta */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "If set, converts Green to Magenta" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta_SetBit(void* Obj)
	{
		((UDMXPixelMappingColorSpace_RGBCMY*)Obj)->bSendMagenta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta = { "bSendMagenta", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingColorSpace_RGBCMY), &Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow_MetaData[] = {
		{ "Category", "RGB" },
		{ "Comment", "/** If set, converts Blue to Yellow */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "If set, converts Blue to Yellow" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow_SetBit(void* Obj)
	{
		((UDMXPixelMappingColorSpace_RGBCMY*)Obj)->bSendYellow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow = { "bSendYellow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingColorSpace_RGBCMY), &Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_RedAttribute_MetaData[] = {
		{ "Category", "RGB" },
		{ "Comment", "/** Attribute sent for Red */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Attribute sent for Red" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_RedAttribute = { "RedAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, RedAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_RedAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_RedAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_GreenAttribute_MetaData[] = {
		{ "Category", "RGB" },
		{ "Comment", "/** Attribute sent for Green */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Attribute sent for Green" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_GreenAttribute = { "GreenAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, GreenAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_GreenAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_GreenAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_BlueAttribute_MetaData[] = {
		{ "Category", "RGB" },
		{ "Comment", "/** Attribute sent for Blue */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Attribute sent for Blue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_BlueAttribute = { "BlueAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, BlueAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_BlueAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_BlueAttribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType_MetaData[] = {
		{ "Category", "Luminance" },
		{ "Comment", "/** Adds a Dimmer Attribute */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Adds a Dimmer Attribute" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType = { "LuminanceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, LuminanceType), Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingLuminanceType_RGBCMY, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType_MetaData)) }; // 2663948399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceAttribute_MetaData[] = {
		{ "Category", "Luminance" },
		{ "Comment", "/** Attribute sent for the generated Luminance */" },
		{ "EditCondition", "LuminanceType != EDMXPixelMappingLuminanceType_RGBCMY::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Attribute sent for the generated Luminance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceAttribute = { "LuminanceAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, LuminanceAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_Luminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Luminance used when Luminance Type is set to 'Set Value' */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::Constant" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Luminance used when Luminance Type is set to 'Set Value'" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_Luminance = { "Luminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, Luminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_Luminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_Luminance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MinLuminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Min Luminance used when Luminance Type is set to 'From White' or 'From Alpha' */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromColor || LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Min Luminance used when Luminance Type is set to 'From White' or 'From Alpha'" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MinLuminance = { "MinLuminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, MinLuminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MinLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MinLuminance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MaxLuminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Max Luminance used when Luminance Type is set to 'From White' or 'From Alpha' */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromColor || LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_RGBCMY.h" },
		{ "ToolTip", "Max Luminance used when Luminance Type is set to 'From White' or 'From Alpha'" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MaxLuminance = { "MaxLuminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_RGBCMY, MaxLuminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MaxLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MaxLuminance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_PixelMappingOutputColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendCyan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendMagenta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_bSendYellow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_RedAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_GreenAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_BlueAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_LuminanceAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_Luminance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MinLuminance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::NewProp_MaxLuminance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingColorSpace_RGBCMY>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::ClassParams = {
		&UDMXPixelMappingColorSpace_RGBCMY::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_RGBCMY.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_RGBCMY.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_RGBCMY.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingColorSpace_RGBCMY>()
	{
		return UDMXPixelMappingColorSpace_RGBCMY::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingColorSpace_RGBCMY);
	UDMXPixelMappingColorSpace_RGBCMY::~UDMXPixelMappingColorSpace_RGBCMY() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics::EnumInfo[] = {
		{ EDMXPixelMappingOutputColorSpace_RGBCMY_StaticEnum, TEXT("EDMXPixelMappingOutputColorSpace_RGBCMY"), &Z_Registration_Info_UEnum_EDMXPixelMappingOutputColorSpace_RGBCMY, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1795037504U) },
		{ EDMXPixelMappingLuminanceType_RGBCMY_StaticEnum, TEXT("EDMXPixelMappingLuminanceType_RGBCMY"), &Z_Registration_Info_UEnum_EDMXPixelMappingLuminanceType_RGBCMY, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2663948399U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingColorSpace_RGBCMY, UDMXPixelMappingColorSpace_RGBCMY::StaticClass, TEXT("UDMXPixelMappingColorSpace_RGBCMY"), &Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_RGBCMY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingColorSpace_RGBCMY), 2976830636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_1051111890(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_RGBCMY_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
