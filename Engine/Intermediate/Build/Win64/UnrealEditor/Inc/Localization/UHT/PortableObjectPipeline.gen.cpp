// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortableObjectPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortableObjectPipeline() {}
// Cross Module References
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode();
	LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_EPortableObjectFormat();
	UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalizedTextCollapseMode;
	static UEnum* ELocalizedTextCollapseMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocalizedTextCollapseMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocalizedTextCollapseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("ELocalizedTextCollapseMode"));
		}
		return Z_Registration_Info_UEnum_ELocalizedTextCollapseMode.OuterSingleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<ELocalizedTextCollapseMode>()
	{
		return ELocalizedTextCollapseMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::Enumerators[] = {
		{ "ELocalizedTextCollapseMode::IdenticalTextIdAndSource", (int64)ELocalizedTextCollapseMode::IdenticalTextIdAndSource },
		{ "ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource", (int64)ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource },
		{ "ELocalizedTextCollapseMode::IdenticalNamespaceAndSource", (int64)ELocalizedTextCollapseMode::IdenticalNamespaceAndSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::Enum_MetaDataParams[] = {
		{ "IdenticalNamespaceAndSource.Comment", "/** Collapse texts with the same namespace and source text (legacy pre-4.14 behavior). */" },
		{ "IdenticalNamespaceAndSource.DisplayName", "Identical Namespace and Source Text" },
		{ "IdenticalNamespaceAndSource.Name", "ELocalizedTextCollapseMode::IdenticalNamespaceAndSource" },
		{ "IdenticalNamespaceAndSource.ToolTip", "Collapse texts with the same namespace and source text (legacy pre-4.14 behavior)." },
		{ "IdenticalPackageIdTextIdAndSource.Comment", "/** Collapse texts with the same package ID, text identity (namespace + key), and source text (deprecated 4.14 behavior, removed in 4.17). */" },
		{ "IdenticalPackageIdTextIdAndSource.DisplayName", "Identical Package ID, Text Identity (Namespace + Key) and Source Text" },
		{ "IdenticalPackageIdTextIdAndSource.Hidden", "" },
		{ "IdenticalPackageIdTextIdAndSource.Name", "ELocalizedTextCollapseMode::IdenticalPackageIdTextIdAndSource" },
		{ "IdenticalPackageIdTextIdAndSource.ToolTip", "Collapse texts with the same package ID, text identity (namespace + key), and source text (deprecated 4.14 behavior, removed in 4.17)." },
		{ "IdenticalTextIdAndSource.Comment", "/** Collapse texts with the same text identity (namespace + key) and source text (default 4.15+ behavior). */" },
		{ "IdenticalTextIdAndSource.DisplayName", "Identical Text Identity (Namespace + Key) and Source Text" },
		{ "IdenticalTextIdAndSource.Name", "ELocalizedTextCollapseMode::IdenticalTextIdAndSource" },
		{ "IdenticalTextIdAndSource.ToolTip", "Collapse texts with the same text identity (namespace + key) and source text (default 4.15+ behavior)." },
		{ "ModuleRelativePath", "Public/PortableObjectPipeline.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		"ELocalizedTextCollapseMode",
		"ELocalizedTextCollapseMode",
		Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode()
	{
		if (!Z_Registration_Info_UEnum_ELocalizedTextCollapseMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalizedTextCollapseMode.InnerSingleton, Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocalizedTextCollapseMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPortableObjectFormat;
	static UEnum* EPortableObjectFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPortableObjectFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPortableObjectFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Localization_EPortableObjectFormat, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("EPortableObjectFormat"));
		}
		return Z_Registration_Info_UEnum_EPortableObjectFormat.OuterSingleton;
	}
	template<> LOCALIZATION_API UEnum* StaticEnum<EPortableObjectFormat>()
	{
		return EPortableObjectFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::Enumerators[] = {
		{ "EPortableObjectFormat::Unreal", (int64)EPortableObjectFormat::Unreal },
		{ "EPortableObjectFormat::Crowdin", (int64)EPortableObjectFormat::Crowdin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::Enum_MetaDataParams[] = {
		{ "Crowdin.Comment", "/**\n\x09 * The PO file uses the Crowdin format.\n\x09 *\n\x09 * When using the \"Identical Text Identity and Source Text\" collapse mode:\n\x09 *\x09- msgctxt is unused.\n\x09 *\x09- msgid contains the Unreal identity of the entry.\n\x09 *\x09- msgstr contains the source string (for the native culture), or the translation (for foreign cultures).\n\x09 *\x09- X-Crowdin-SourceKey header attribute specifies that msgstr is used as the source text from the native culture.\n\x09 *\n\x09 * When using the \"Identical Namespace and Source Text\" collapse mode:\n\x09 *\x09- msgctxt contains the Unreal namespace of the entry.\n\x09 *\x09- msgid contains the source string.\n\x09 *\x09- msgstr contains the translation.\n\x09 */" },
		{ "Crowdin.Name", "EPortableObjectFormat::Crowdin" },
		{ "Crowdin.ToolTip", "The PO file uses the Crowdin format.\n\nWhen using the \"Identical Text Identity and Source Text\" collapse mode:\n     - msgctxt is unused.\n     - msgid contains the Unreal identity of the entry.\n     - msgstr contains the source string (for the native culture), or the translation (for foreign cultures).\n     - X-Crowdin-SourceKey header attribute specifies that msgstr is used as the source text from the native culture.\n\nWhen using the \"Identical Namespace and Source Text\" collapse mode:\n     - msgctxt contains the Unreal namespace of the entry.\n     - msgid contains the source string.\n     - msgstr contains the translation." },
		{ "ModuleRelativePath", "Public/PortableObjectPipeline.h" },
		{ "Unreal.Comment", "/**\n\x09 * The PO file uses the Unreal format.\n\x09 *\n\x09 * When using the \"Identical Text Identity and Source Text\" collapse mode:\n\x09 *\x09- msgctxt contains the Unreal identity of the entry.\n\x09 *\x09- msgid contains the source string.\n\x09 *\x09- msgstr contains the translation.\n\x09 *\n\x09 * When using the \"Identical Namespace and Source Text\" collapse mode:\n\x09 *\x09- msgctxt contains the Unreal namespace of the entry.\n\x09 *\x09- msgid contains the source string.\n\x09 *\x09- msgstr contains the translation.\n\x09 */" },
		{ "Unreal.Name", "EPortableObjectFormat::Unreal" },
		{ "Unreal.ToolTip", "The PO file uses the Unreal format.\n\nWhen using the \"Identical Text Identity and Source Text\" collapse mode:\n     - msgctxt contains the Unreal identity of the entry.\n     - msgid contains the source string.\n     - msgstr contains the translation.\n\nWhen using the \"Identical Namespace and Source Text\" collapse mode:\n     - msgctxt contains the Unreal namespace of the entry.\n     - msgid contains the source string.\n     - msgstr contains the translation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Localization,
		nullptr,
		"EPortableObjectFormat",
		"EPortableObjectFormat",
		Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Localization_EPortableObjectFormat()
	{
		if (!Z_Registration_Info_UEnum_EPortableObjectFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPortableObjectFormat.InnerSingleton, Z_Construct_UEnum_Localization_EPortableObjectFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPortableObjectFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_PortableObjectPipeline_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_PortableObjectPipeline_h_Statics::EnumInfo[] = {
		{ ELocalizedTextCollapseMode_StaticEnum, TEXT("ELocalizedTextCollapseMode"), &Z_Registration_Info_UEnum_ELocalizedTextCollapseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 692705745U) },
		{ EPortableObjectFormat_StaticEnum, TEXT("EPortableObjectFormat"), &Z_Registration_Info_UEnum_EPortableObjectFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3094961235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_PortableObjectPipeline_h_4213572773(TEXT("/Script/Localization"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_PortableObjectPipeline_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_PortableObjectPipeline_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
