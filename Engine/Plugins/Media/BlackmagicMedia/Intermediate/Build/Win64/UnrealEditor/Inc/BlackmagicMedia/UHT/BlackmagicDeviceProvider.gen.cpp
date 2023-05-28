// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackmagicDeviceProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicDeviceProvider() {}
// Cross Module References
	BLACKMAGICMEDIA_API UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat;
	static UEnum* EBlackmagicMediaTimecodeFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat, (UObject*)Z_Construct_UPackage__Script_BlackmagicMedia(), TEXT("EBlackmagicMediaTimecodeFormat"));
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat.OuterSingleton;
	}
	template<> BLACKMAGICMEDIA_API UEnum* StaticEnum<EBlackmagicMediaTimecodeFormat>()
	{
		return EBlackmagicMediaTimecodeFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::Enumerators[] = {
		{ "EBlackmagicMediaTimecodeFormat::None", (int64)EBlackmagicMediaTimecodeFormat::None },
		{ "EBlackmagicMediaTimecodeFormat::LTC", (int64)EBlackmagicMediaTimecodeFormat::LTC },
		{ "EBlackmagicMediaTimecodeFormat::VITC", (int64)EBlackmagicMediaTimecodeFormat::VITC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Available timecode formats that Blackmagic support.\n */" },
		{ "LTC.Name", "EBlackmagicMediaTimecodeFormat::LTC" },
		{ "ModuleRelativePath", "Public/BlackmagicDeviceProvider.h" },
		{ "None.Name", "EBlackmagicMediaTimecodeFormat::None" },
		{ "ToolTip", "Available timecode formats that Blackmagic support." },
		{ "VITC.Name", "EBlackmagicMediaTimecodeFormat::VITC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlackmagicMedia,
		nullptr,
		"EBlackmagicMediaTimecodeFormat",
		"EBlackmagicMediaTimecodeFormat",
		Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat()
	{
		if (!Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat.InnerSingleton, Z_Construct_UEnum_BlackmagicMedia_EBlackmagicMediaTimecodeFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicDeviceProvider_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicDeviceProvider_h_Statics::EnumInfo[] = {
		{ EBlackmagicMediaTimecodeFormat_StaticEnum, TEXT("EBlackmagicMediaTimecodeFormat"), &Z_Registration_Info_UEnum_EBlackmagicMediaTimecodeFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3589572117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicDeviceProvider_h_1542697582(TEXT("/Script/BlackmagicMedia"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicDeviceProvider_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMedia_Public_BlackmagicDeviceProvider_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
