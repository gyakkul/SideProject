// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertFrontendUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertFrontendUtils() {}
// Cross Module References
	CONCERTSHAREDSLATE_API UEnum* Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat();
	UPackage* Z_Construct_UPackage__Script_ConcertSharedSlate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimeFormat;
	static UEnum* ETimeFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimeFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimeFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat, (UObject*)Z_Construct_UPackage__Script_ConcertSharedSlate(), TEXT("ETimeFormat"));
		}
		return Z_Registration_Info_UEnum_ETimeFormat.OuterSingleton;
	}
	template<> CONCERTSHAREDSLATE_API UEnum* StaticEnum<ETimeFormat>()
	{
		return ETimeFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::Enumerators[] = {
		{ "ETimeFormat::Relative", (int64)ETimeFormat::Relative },
		{ "ETimeFormat::Absolute", (int64)ETimeFormat::Absolute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "// Display relative time (23 seconds ago)\n" },
		{ "Absolute.Name", "ETimeFormat::Absolute" },
		{ "Absolute.ToolTip", "Display relative time (23 seconds ago)" },
		{ "Comment", "/** Defines how the time should be displayed in the date/time column. */" },
		{ "ModuleRelativePath", "Public/ConcertFrontendUtils.h" },
		{ "Relative.Name", "ETimeFormat::Relative" },
		{ "ToolTip", "Defines how the time should be displayed in the date/time column." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertSharedSlate,
		nullptr,
		"ETimeFormat",
		"ETimeFormat",
		Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat()
	{
		if (!Z_Registration_Info_UEnum_ETimeFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimeFormat.InnerSingleton, Z_Construct_UEnum_ConcertSharedSlate_ETimeFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimeFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertFrontendUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertFrontendUtils_h_Statics::EnumInfo[] = {
		{ ETimeFormat_StaticEnum, TEXT("ETimeFormat"), &Z_Registration_Info_UEnum_ETimeFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1917496234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertFrontendUtils_h_128699609(TEXT("/Script/ConcertSharedSlate"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertFrontendUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertUI_ConcertSharedSlate_Source_ConcertSharedSlate_Public_ConcertFrontendUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
