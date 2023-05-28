// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithDefinitions() {}
// Cross Module References
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode();
	UPackage* Z_Construct_UPackage__Script_DatasmithCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithLightShape;
	static UEnum* EDatasmithLightShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithLightShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithLightShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithLightShape"));
		}
		return Z_Registration_Info_UEnum_EDatasmithLightShape.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithLightShape>()
	{
		return EDatasmithLightShape_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::Enumerators[] = {
		{ "EDatasmithLightShape::Rectangle", (int64)EDatasmithLightShape::Rectangle },
		{ "EDatasmithLightShape::Disc", (int64)EDatasmithLightShape::Disc },
		{ "EDatasmithLightShape::Sphere", (int64)EDatasmithLightShape::Sphere },
		{ "EDatasmithLightShape::Cylinder", (int64)EDatasmithLightShape::Cylinder },
		{ "EDatasmithLightShape::None", (int64)EDatasmithLightShape::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Different supported light shapes */" },
		{ "Cylinder.Name", "EDatasmithLightShape::Cylinder" },
		{ "Disc.Name", "EDatasmithLightShape::Disc" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "None.Name", "EDatasmithLightShape::None" },
		{ "Rectangle.Name", "EDatasmithLightShape::Rectangle" },
		{ "Sphere.Name", "EDatasmithLightShape::Sphere" },
		{ "ToolTip", "Different supported light shapes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithLightShape",
		"EDatasmithLightShape",
		Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithLightShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithLightShape.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithLightShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithLightShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithTextureMode;
	static UEnum* EDatasmithTextureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithTextureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithTextureMode"));
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureMode.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureMode>()
	{
		return EDatasmithTextureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::Enumerators[] = {
		{ "EDatasmithTextureMode::Diffuse", (int64)EDatasmithTextureMode::Diffuse },
		{ "EDatasmithTextureMode::Specular", (int64)EDatasmithTextureMode::Specular },
		{ "EDatasmithTextureMode::Normal", (int64)EDatasmithTextureMode::Normal },
		{ "EDatasmithTextureMode::NormalGreenInv", (int64)EDatasmithTextureMode::NormalGreenInv },
		{ "EDatasmithTextureMode::UNUSED_Displace", (int64)EDatasmithTextureMode::UNUSED_Displace },
		{ "EDatasmithTextureMode::Other", (int64)EDatasmithTextureMode::Other },
		{ "EDatasmithTextureMode::Bump", (int64)EDatasmithTextureMode::Bump },
		{ "EDatasmithTextureMode::Ies", (int64)EDatasmithTextureMode::Ies },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::Enum_MetaDataParams[] = {
		{ "Bump.Name", "EDatasmithTextureMode::Bump" },
		{ "Comment", "/** Different usage for textures.  Note: Preserve enum order. */" },
		{ "Diffuse.Name", "EDatasmithTextureMode::Diffuse" },
		{ "Ies.Name", "EDatasmithTextureMode::Ies" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "Normal.Name", "EDatasmithTextureMode::Normal" },
		{ "NormalGreenInv.Name", "EDatasmithTextureMode::NormalGreenInv" },
		{ "Other.Name", "EDatasmithTextureMode::Other" },
		{ "Specular.Name", "EDatasmithTextureMode::Specular" },
		{ "ToolTip", "Different usage for textures.  Note: Preserve enum order." },
		{ "UNUSED_Displace.Name", "EDatasmithTextureMode::UNUSED_Displace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithTextureMode",
		"EDatasmithTextureMode",
		Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithTextureMode.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithTextureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithTextureFilter;
	static UEnum* EDatasmithTextureFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithTextureFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithTextureFilter"));
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureFilter.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureFilter>()
	{
		return EDatasmithTextureFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::Enumerators[] = {
		{ "EDatasmithTextureFilter::Nearest", (int64)EDatasmithTextureFilter::Nearest },
		{ "EDatasmithTextureFilter::Bilinear", (int64)EDatasmithTextureFilter::Bilinear },
		{ "EDatasmithTextureFilter::Trilinear", (int64)EDatasmithTextureFilter::Trilinear },
		{ "EDatasmithTextureFilter::Default", (int64)EDatasmithTextureFilter::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::Enum_MetaDataParams[] = {
		{ "Bilinear.Name", "EDatasmithTextureFilter::Bilinear" },
		{ "Comment", "/** Texture filtering for textures. */" },
		{ "Default.Comment", "/** Use setting from the Texture Group. */" },
		{ "Default.Name", "EDatasmithTextureFilter::Default" },
		{ "Default.ToolTip", "Use setting from the Texture Group." },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "Nearest.Name", "EDatasmithTextureFilter::Nearest" },
		{ "ToolTip", "Texture filtering for textures." },
		{ "Trilinear.Name", "EDatasmithTextureFilter::Trilinear" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithTextureFilter",
		"EDatasmithTextureFilter",
		Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithTextureFilter.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithTextureAddress;
	static UEnum* EDatasmithTextureAddress_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureAddress.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithTextureAddress.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithTextureAddress"));
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureAddress.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureAddress>()
	{
		return EDatasmithTextureAddress_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::Enumerators[] = {
		{ "EDatasmithTextureAddress::Wrap", (int64)EDatasmithTextureAddress::Wrap },
		{ "EDatasmithTextureAddress::Clamp", (int64)EDatasmithTextureAddress::Clamp },
		{ "EDatasmithTextureAddress::Mirror", (int64)EDatasmithTextureAddress::Mirror },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::Enum_MetaDataParams[] = {
		{ "Clamp.Name", "EDatasmithTextureAddress::Clamp" },
		{ "Comment", "/** Texture address mode for textures.  Note: Preserve enum order. */" },
		{ "Mirror.Name", "EDatasmithTextureAddress::Mirror" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "ToolTip", "Texture address mode for textures.  Note: Preserve enum order." },
		{ "Wrap.Name", "EDatasmithTextureAddress::Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithTextureAddress",
		"EDatasmithTextureAddress",
		Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureAddress.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithTextureAddress.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithTextureAddress_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureAddress.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithTextureFormat;
	static UEnum* EDatasmithTextureFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithTextureFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithTextureFormat"));
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureFormat.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureFormat>()
	{
		return EDatasmithTextureFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::Enumerators[] = {
		{ "EDatasmithTextureFormat::PNG", (int64)EDatasmithTextureFormat::PNG },
		{ "EDatasmithTextureFormat::JPEG", (int64)EDatasmithTextureFormat::JPEG },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Texture format for raw data importing. */" },
		{ "JPEG.Name", "EDatasmithTextureFormat::JPEG" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "PNG.Name", "EDatasmithTextureFormat::PNG" },
		{ "ToolTip", "Texture format for raw data importing." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithTextureFormat",
		"EDatasmithTextureFormat",
		Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithTextureFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithTextureFormat.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithTextureFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithTextureFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithColorSpace;
	static UEnum* EDatasmithColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithColorSpace"));
		}
		return Z_Registration_Info_UEnum_EDatasmithColorSpace.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithColorSpace>()
	{
		return EDatasmithColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::Enumerators[] = {
		{ "EDatasmithColorSpace::Default", (int64)EDatasmithColorSpace::Default },
		{ "EDatasmithColorSpace::sRGB", (int64)EDatasmithColorSpace::sRGB },
		{ "EDatasmithColorSpace::Linear", (int64)EDatasmithColorSpace::Linear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Texture color space.\n * Default: Leave at whatever is default for the texture mode\n * sRGB: Enable the sRGB boolean regardless of texture mode\n * Linear: Disable the sRGB boolean regardless of texture mode\n */" },
		{ "Default.Name", "EDatasmithColorSpace::Default" },
		{ "Linear.Name", "EDatasmithColorSpace::Linear" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "sRGB.Name", "EDatasmithColorSpace::sRGB" },
		{ "ToolTip", "Texture color space.\nDefault: Leave at whatever is default for the texture mode\nsRGB: Enable the sRGB boolean regardless of texture mode\nLinear: Disable the sRGB boolean regardless of texture mode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithColorSpace",
		"EDatasmithColorSpace",
		Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithColorSpace.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithColorSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType;
	static UEnum* EDatasmithKeyValuePropertyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithKeyValuePropertyType"));
		}
		return Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithKeyValuePropertyType>()
	{
		return EDatasmithKeyValuePropertyType_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::Enumerators[] = {
		{ "EDatasmithKeyValuePropertyType::String", (int64)EDatasmithKeyValuePropertyType::String },
		{ "EDatasmithKeyValuePropertyType::Color", (int64)EDatasmithKeyValuePropertyType::Color },
		{ "EDatasmithKeyValuePropertyType::Float", (int64)EDatasmithKeyValuePropertyType::Float },
		{ "EDatasmithKeyValuePropertyType::Bool", (int64)EDatasmithKeyValuePropertyType::Bool },
		{ "EDatasmithKeyValuePropertyType::Texture", (int64)EDatasmithKeyValuePropertyType::Texture },
		{ "EDatasmithKeyValuePropertyType::Vector", (int64)EDatasmithKeyValuePropertyType::Vector },
		{ "EDatasmithKeyValuePropertyType::Integer", (int64)EDatasmithKeyValuePropertyType::Integer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EDatasmithKeyValuePropertyType::Bool" },
		{ "Color.Name", "EDatasmithKeyValuePropertyType::Color" },
		{ "Comment", "/** Key-value property */" },
		{ "Float.Name", "EDatasmithKeyValuePropertyType::Float" },
		{ "Integer.Name", "EDatasmithKeyValuePropertyType::Integer" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "String.Name", "EDatasmithKeyValuePropertyType::String" },
		{ "Texture.Name", "EDatasmithKeyValuePropertyType::Texture" },
		{ "ToolTip", "Key-value property" },
		{ "Vector.Name", "EDatasmithKeyValuePropertyType::Vector" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithKeyValuePropertyType",
		"EDatasmithKeyValuePropertyType",
		Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithKeyValuePropertyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithActorRemovalRule;
	static UEnum* EDatasmithActorRemovalRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithActorRemovalRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithActorRemovalRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithActorRemovalRule"));
		}
		return Z_Registration_Info_UEnum_EDatasmithActorRemovalRule.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithActorRemovalRule>()
	{
		return EDatasmithActorRemovalRule_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::Enumerators[] = {
		{ "EDatasmithActorRemovalRule::RemoveChildren", (int64)EDatasmithActorRemovalRule::RemoveChildren },
		{ "EDatasmithActorRemovalRule::KeepChildrenAndKeepRelativeTransform", (int64)EDatasmithActorRemovalRule::KeepChildrenAndKeepRelativeTransform },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::Enum_MetaDataParams[] = {
		{ "KeepChildrenAndKeepRelativeTransform.Comment", "/** Keeps current relative transform as the relative transform to the new parent. */" },
		{ "KeepChildrenAndKeepRelativeTransform.Name", "EDatasmithActorRemovalRule::KeepChildrenAndKeepRelativeTransform" },
		{ "KeepChildrenAndKeepRelativeTransform.ToolTip", "Keeps current relative transform as the relative transform to the new parent." },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "RemoveChildren.Comment", "/** Remove also the actors children */" },
		{ "RemoveChildren.Name", "EDatasmithActorRemovalRule::RemoveChildren" },
		{ "RemoveChildren.ToolTip", "Remove also the actors children" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithActorRemovalRule",
		"EDatasmithActorRemovalRule",
		Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithActorRemovalRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithActorRemovalRule.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithActorRemovalRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule;
	static UEnum* EDatasmithActorAttachmentRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithActorAttachmentRule"));
		}
		return Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithActorAttachmentRule>()
	{
		return EDatasmithActorAttachmentRule_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::Enumerators[] = {
		{ "EDatasmithActorAttachmentRule::KeepRelativeTransform", (int64)EDatasmithActorAttachmentRule::KeepRelativeTransform },
		{ "EDatasmithActorAttachmentRule::KeepWorldTransform", (int64)EDatasmithActorAttachmentRule::KeepWorldTransform },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::Enum_MetaDataParams[] = {
		{ "KeepRelativeTransform.Comment", "/** Keeps current relative transform as the relative transform to the new parent. */" },
		{ "KeepRelativeTransform.Name", "EDatasmithActorAttachmentRule::KeepRelativeTransform" },
		{ "KeepRelativeTransform.ToolTip", "Keeps current relative transform as the relative transform to the new parent." },
		{ "KeepWorldTransform.Comment", "/** The attached actor or component will maintain the same world transform. */" },
		{ "KeepWorldTransform.Name", "EDatasmithActorAttachmentRule::KeepWorldTransform" },
		{ "KeepWorldTransform.ToolTip", "The attached actor or component will maintain the same world transform." },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithActorAttachmentRule",
		"EDatasmithActorAttachmentRule",
		Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithCompletionMode;
	static UEnum* EDatasmithCompletionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithCompletionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithCompletionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithCompletionMode"));
		}
		return Z_Registration_Info_UEnum_EDatasmithCompletionMode.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithCompletionMode>()
	{
		return EDatasmithCompletionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::Enumerators[] = {
		{ "EDatasmithCompletionMode::KeepState", (int64)EDatasmithCompletionMode::KeepState },
		{ "EDatasmithCompletionMode::RestoreState", (int64)EDatasmithCompletionMode::RestoreState },
		{ "EDatasmithCompletionMode::ProjectDefault", (int64)EDatasmithCompletionMode::ProjectDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes how an animated node should behave after its animation has completed\n * Mirrors EMovieSceneCompletionMode\n */" },
		{ "KeepState.Name", "EDatasmithCompletionMode::KeepState" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "ProjectDefault.Name", "EDatasmithCompletionMode::ProjectDefault" },
		{ "RestoreState.Name", "EDatasmithCompletionMode::RestoreState" },
		{ "ToolTip", "Describes how an animated node should behave after its animation has completed\nMirrors EMovieSceneCompletionMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithCompletionMode",
		"EDatasmithCompletionMode",
		Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithCompletionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithCompletionMode.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithCompletionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithCompletionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithPropertyCategory;
	static UEnum* EDatasmithPropertyCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithPropertyCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDatasmithPropertyCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("EDatasmithPropertyCategory"));
		}
		return Z_Registration_Info_UEnum_EDatasmithPropertyCategory.OuterSingleton;
	}
	template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithPropertyCategory>()
	{
		return EDatasmithPropertyCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::Enumerators[] = {
		{ "EDatasmithPropertyCategory::Undefined", (int64)EDatasmithPropertyCategory::Undefined },
		{ "EDatasmithPropertyCategory::Generic", (int64)EDatasmithPropertyCategory::Generic },
		{ "EDatasmithPropertyCategory::RelativeLocation", (int64)EDatasmithPropertyCategory::RelativeLocation },
		{ "EDatasmithPropertyCategory::RelativeRotation", (int64)EDatasmithPropertyCategory::RelativeRotation },
		{ "EDatasmithPropertyCategory::RelativeScale3D", (int64)EDatasmithPropertyCategory::RelativeScale3D },
		{ "EDatasmithPropertyCategory::Visibility", (int64)EDatasmithPropertyCategory::Visibility },
		{ "EDatasmithPropertyCategory::Material", (int64)EDatasmithPropertyCategory::Material },
		{ "EDatasmithPropertyCategory::Color", (int64)EDatasmithPropertyCategory::Color },
		{ "EDatasmithPropertyCategory::Option", (int64)EDatasmithPropertyCategory::Option },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::Enum_MetaDataParams[] = {
		{ "Color.Name", "EDatasmithPropertyCategory::Color" },
		{ "Comment", "/**\n * Describes a category of an UPropertyValue asset, indicating types of\n * properties that require special handling for any reason.\n * Mirrors EPropertyValueCategory\n */" },
		{ "Generic.Name", "EDatasmithPropertyCategory::Generic" },
		{ "Material.Name", "EDatasmithPropertyCategory::Material" },
		{ "ModuleRelativePath", "Public/DatasmithDefinitions.h" },
		{ "Option.Name", "EDatasmithPropertyCategory::Option" },
		{ "RelativeLocation.Name", "EDatasmithPropertyCategory::RelativeLocation" },
		{ "RelativeRotation.Name", "EDatasmithPropertyCategory::RelativeRotation" },
		{ "RelativeScale3D.Name", "EDatasmithPropertyCategory::RelativeScale3D" },
		{ "ToolTip", "Describes a category of an UPropertyValue asset, indicating types of\nproperties that require special handling for any reason.\nMirrors EPropertyValueCategory" },
		{ "Undefined.Name", "EDatasmithPropertyCategory::Undefined" },
		{ "Visibility.Name", "EDatasmithPropertyCategory::Visibility" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		"EDatasmithPropertyCategory",
		"EDatasmithPropertyCategory",
		Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory()
	{
		if (!Z_Registration_Info_UEnum_EDatasmithPropertyCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithPropertyCategory.InnerSingleton, Z_Construct_UEnum_DatasmithCore_EDatasmithPropertyCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDatasmithPropertyCategory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithDefinitions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithDefinitions_h_Statics::EnumInfo[] = {
		{ EDatasmithLightShape_StaticEnum, TEXT("EDatasmithLightShape"), &Z_Registration_Info_UEnum_EDatasmithLightShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1415948106U) },
		{ EDatasmithTextureMode_StaticEnum, TEXT("EDatasmithTextureMode"), &Z_Registration_Info_UEnum_EDatasmithTextureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 948624206U) },
		{ EDatasmithTextureFilter_StaticEnum, TEXT("EDatasmithTextureFilter"), &Z_Registration_Info_UEnum_EDatasmithTextureFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1914212571U) },
		{ EDatasmithTextureAddress_StaticEnum, TEXT("EDatasmithTextureAddress"), &Z_Registration_Info_UEnum_EDatasmithTextureAddress, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2374170898U) },
		{ EDatasmithTextureFormat_StaticEnum, TEXT("EDatasmithTextureFormat"), &Z_Registration_Info_UEnum_EDatasmithTextureFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2391476863U) },
		{ EDatasmithColorSpace_StaticEnum, TEXT("EDatasmithColorSpace"), &Z_Registration_Info_UEnum_EDatasmithColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2608804710U) },
		{ EDatasmithKeyValuePropertyType_StaticEnum, TEXT("EDatasmithKeyValuePropertyType"), &Z_Registration_Info_UEnum_EDatasmithKeyValuePropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2944519063U) },
		{ EDatasmithActorRemovalRule_StaticEnum, TEXT("EDatasmithActorRemovalRule"), &Z_Registration_Info_UEnum_EDatasmithActorRemovalRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2616769342U) },
		{ EDatasmithActorAttachmentRule_StaticEnum, TEXT("EDatasmithActorAttachmentRule"), &Z_Registration_Info_UEnum_EDatasmithActorAttachmentRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1971496026U) },
		{ EDatasmithCompletionMode_StaticEnum, TEXT("EDatasmithCompletionMode"), &Z_Registration_Info_UEnum_EDatasmithCompletionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4248641752U) },
		{ EDatasmithPropertyCategory_StaticEnum, TEXT("EDatasmithPropertyCategory"), &Z_Registration_Info_UEnum_EDatasmithPropertyCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3064809688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithDefinitions_h_1881569981(TEXT("/Script/DatasmithCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithDefinitions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
