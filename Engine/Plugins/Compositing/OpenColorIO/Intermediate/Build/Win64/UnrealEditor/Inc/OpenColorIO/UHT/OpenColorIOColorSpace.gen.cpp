// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOColorSpace() {}
// Cross Module References
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister();
	OPENCOLORIO_API UEnum* Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorSpace();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayView();
	UPackage* Z_Construct_UPackage__Script_OpenColorIO();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace;
class UScriptStruct* FOpenColorIOColorSpace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIOColorSpace, (UObject*)Z_Construct_UPackage__Script_OpenColorIO(), TEXT("OpenColorIOColorSpace"));
	}
	return Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace.OuterSingleton;
}
template<> OPENCOLORIO_API UScriptStruct* StaticStruct<FOpenColorIOColorSpace>()
{
	return FOpenColorIOColorSpace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColorSpaceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColorSpaceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FamilyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FamilyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure to identify a ColorSpace as described in an OCIO configuration file. \n * Members are populated by data coming from a config file.\n */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "Structure to identify a ColorSpace as described in an OCIO configuration file.\nMembers are populated by data coming from a config file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenColorIOColorSpace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceName_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The ColorSpace name. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The ColorSpace name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceName = { "ColorSpaceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorSpace, ColorSpaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceIndex_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The index of the ColorSpace in the config */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The index of the ColorSpace in the config" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceIndex = { "ColorSpaceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorSpace, ColorSpaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_FamilyName_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** \n\x09 * The family of this ColorSpace as specified in the configuration file. \n\x09 * When you have lots of colorspaces, you can regroup them by family to facilitate browsing them. \n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The family of this ColorSpace as specified in the configuration file.\nWhen you have lots of colorspaces, you can regroup them by family to facilitate browsing them." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_FamilyName = { "FamilyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorSpace, FamilyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_FamilyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_FamilyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_ColorSpaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewProp_FamilyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
		nullptr,
		&NewStructOps,
		"OpenColorIOColorSpace",
		sizeof(FOpenColorIOColorSpace),
		alignof(FOpenColorIOColorSpace),
		Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorSpace()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace.InnerSingleton, Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection;
	static UEnum* EOpenColorIOViewTransformDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection, (UObject*)Z_Construct_UPackage__Script_OpenColorIO(), TEXT("EOpenColorIOViewTransformDirection"));
		}
		return Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.OuterSingleton;
	}
	template<> OPENCOLORIO_API UEnum* StaticEnum<EOpenColorIOViewTransformDirection>()
	{
		return EOpenColorIOViewTransformDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::Enumerators[] = {
		{ "EOpenColorIOViewTransformDirection::Forward", (int64)EOpenColorIOViewTransformDirection::Forward },
		{ "EOpenColorIOViewTransformDirection::Inverse", (int64)EOpenColorIOViewTransformDirection::Inverse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transformation direction type for display-view transformations.\n */" },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EOpenColorIOViewTransformDirection::Forward" },
		{ "Inverse.DisplayName", "Inverse" },
		{ "Inverse.Name", "EOpenColorIOViewTransformDirection::Inverse" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "Transformation direction type for display-view transformations." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenColorIO,
		nullptr,
		"EOpenColorIOViewTransformDirection",
		"EOpenColorIOViewTransformDirection",
		Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection()
	{
		if (!Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.InnerSingleton, Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenColorIODisplayView;
class UScriptStruct* FOpenColorIODisplayView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenColorIODisplayView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenColorIODisplayView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIODisplayView, (UObject*)Z_Construct_UPackage__Script_OpenColorIO(), TEXT("OpenColorIODisplayView"));
	}
	return Z_Registration_Info_UScriptStruct_OpenColorIODisplayView.OuterSingleton;
}
template<> OPENCOLORIO_API UScriptStruct* StaticStruct<FOpenColorIODisplayView>()
{
	return FOpenColorIODisplayView::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Display_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Display;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_View_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_View;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenColorIODisplayView>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_Display_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_Display = { "Display", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIODisplayView, Display), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_Display_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_Display_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_View_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_View = { "View", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIODisplayView, View), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_View_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_View_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_Display,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewProp_View,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
		nullptr,
		&NewStructOps,
		"OpenColorIODisplayView",
		sizeof(FOpenColorIODisplayView),
		alignof(FOpenColorIODisplayView),
		Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayView()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenColorIODisplayView.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenColorIODisplayView.InnerSingleton, Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenColorIODisplayView.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings;
class UScriptStruct* FOpenColorIOColorConversionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, (UObject*)Z_Construct_UPackage__Script_OpenColorIO(), TEXT("OpenColorIOColorConversionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings.OuterSingleton;
}
template<> OPENCOLORIO_API UScriptStruct* StaticStruct<FOpenColorIOColorConversionSettings>()
{
	return FOpenColorIOColorConversionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConfigurationSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationColorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationDisplayView_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationDisplayView;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayViewDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayViewDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayViewDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Identifies a OCIO ColorSpace conversion.\n */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "Identifies a OCIO ColorSpace conversion." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenColorIOColorConversionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_ConfigurationSource_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The source color space name. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The source color space name." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_ConfigurationSource = { "ConfigurationSource", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorConversionSettings, ConfigurationSource), Z_Construct_UClass_UOpenColorIOConfiguration_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_ConfigurationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_ConfigurationSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_SourceColorSpace_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The source color space name. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The source color space name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_SourceColorSpace = { "SourceColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorConversionSettings, SourceColorSpace), Z_Construct_UScriptStruct_FOpenColorIOColorSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_SourceColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_SourceColorSpace_MetaData)) }; // 2371464818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationColorSpace_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The destination color space name. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The destination color space name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationColorSpace = { "DestinationColorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorConversionSettings, DestinationColorSpace), Z_Construct_UScriptStruct_FOpenColorIOColorSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationColorSpace_MetaData)) }; // 2371464818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationDisplayView_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The destination display view name. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The destination display view name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationDisplayView = { "DestinationDisplayView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorConversionSettings, DestinationDisplayView), Z_Construct_UScriptStruct_FOpenColorIODisplayView, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationDisplayView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationDisplayView_MetaData)) }; // 496537640
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** The display view direction. */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "The display view direction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection = { "DisplayViewDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIOColorConversionSettings, DisplayViewDirection), Z_Construct_UEnum_OpenColorIO_EOpenColorIOViewTransformDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection_MetaData)) }; // 2043687259
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_ConfigurationSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_SourceColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DestinationDisplayView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewProp_DisplayViewDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
		nullptr,
		&NewStructOps,
		"OpenColorIOColorConversionSettings",
		sizeof(FOpenColorIOColorConversionSettings),
		alignof(FOpenColorIOColorConversionSettings),
		Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings.InnerSingleton, Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration;
class UScriptStruct* FOpenColorIODisplayConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, (UObject*)Z_Construct_UPackage__Script_OpenColorIO(), TEXT("OpenColorIODisplayConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration.OuterSingleton;
}
template<> OPENCOLORIO_API UScriptStruct* StaticStruct<FOpenColorIODisplayConfiguration>()
{
	return FOpenColorIODisplayConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Identifies an OCIO Display look configuration \n */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "Identifies an OCIO Display look configuration" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenColorIODisplayConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** Whether or not this display configuration is enabled\n\x09 *  Since display look are applied on viewports, this will \n\x09 * dictate whether it's applied or not to it\n\x09 */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "Whether or not this display configuration is enabled\nSince display look are applied on viewports, this will\ndictate whether it's applied or not to it" },
	};
#endif
	void Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FOpenColorIODisplayConfiguration*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOpenColorIODisplayConfiguration), &Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_ColorConfiguration_MetaData[] = {
		{ "Category", "ColorSpace" },
		{ "Comment", "/** Conversion to apply when this display is enabled */" },
		{ "ModuleRelativePath", "Public/OpenColorIOColorSpace.h" },
		{ "ToolTip", "Conversion to apply when this display is enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_ColorConfiguration = { "ColorConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenColorIODisplayConfiguration, ColorConfiguration), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_ColorConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_ColorConfiguration_MetaData)) }; // 349333024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewProp_ColorConfiguration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
		nullptr,
		&NewStructOps,
		"OpenColorIODisplayConfiguration",
		sizeof(FOpenColorIODisplayConfiguration),
		alignof(FOpenColorIODisplayConfiguration),
		Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics::EnumInfo[] = {
		{ EOpenColorIOViewTransformDirection_StaticEnum, TEXT("EOpenColorIOViewTransformDirection"), &Z_Registration_Info_UEnum_EOpenColorIOViewTransformDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2043687259U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics::ScriptStructInfo[] = {
		{ FOpenColorIOColorSpace::StaticStruct, Z_Construct_UScriptStruct_FOpenColorIOColorSpace_Statics::NewStructOps, TEXT("OpenColorIOColorSpace"), &Z_Registration_Info_UScriptStruct_OpenColorIOColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenColorIOColorSpace), 2371464818U) },
		{ FOpenColorIODisplayView::StaticStruct, Z_Construct_UScriptStruct_FOpenColorIODisplayView_Statics::NewStructOps, TEXT("OpenColorIODisplayView"), &Z_Registration_Info_UScriptStruct_OpenColorIODisplayView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenColorIODisplayView), 496537640U) },
		{ FOpenColorIOColorConversionSettings::StaticStruct, Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings_Statics::NewStructOps, TEXT("OpenColorIOColorConversionSettings"), &Z_Registration_Info_UScriptStruct_OpenColorIOColorConversionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenColorIOColorConversionSettings), 349333024U) },
		{ FOpenColorIODisplayConfiguration::StaticStruct, Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration_Statics::NewStructOps, TEXT("OpenColorIODisplayConfiguration"), &Z_Registration_Info_UScriptStruct_OpenColorIODisplayConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenColorIODisplayConfiguration), 2343336179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_1354039031(TEXT("/Script/OpenColorIO"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOColorSpace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
