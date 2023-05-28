// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalFileNetworkReplayStreaming.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFileNetworkReplayStreaming() {}
// Cross Module References
	LOCALFILENETWORKREPLAYSTREAMING_API UEnum* Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult();
	UPackage* Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocalFileReplayResult;
	static UEnum* ELocalFileReplayResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult, (UObject*)Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming(), TEXT("ELocalFileReplayResult"));
		}
		return Z_Registration_Info_UEnum_ELocalFileReplayResult.OuterSingleton;
	}
	template<> LOCALFILENETWORKREPLAYSTREAMING_API UEnum* StaticEnum<ELocalFileReplayResult>()
	{
		return ELocalFileReplayResult_StaticEnum();
	}
	struct Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enumerators[] = {
		{ "ELocalFileReplayResult::Success", (int64)ELocalFileReplayResult::Success },
		{ "ELocalFileReplayResult::InvalidReplayInfo", (int64)ELocalFileReplayResult::InvalidReplayInfo },
		{ "ELocalFileReplayResult::StreamChunkIndexMismatch", (int64)ELocalFileReplayResult::StreamChunkIndexMismatch },
		{ "ELocalFileReplayResult::DecompressBuffer", (int64)ELocalFileReplayResult::DecompressBuffer },
		{ "ELocalFileReplayResult::CompressionNotSupported", (int64)ELocalFileReplayResult::CompressionNotSupported },
		{ "ELocalFileReplayResult::DecryptBuffer", (int64)ELocalFileReplayResult::DecryptBuffer },
		{ "ELocalFileReplayResult::EncryptionNotSupported", (int64)ELocalFileReplayResult::EncryptionNotSupported },
		{ "ELocalFileReplayResult::Unknown", (int64)ELocalFileReplayResult::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enum_MetaDataParams[] = {
		{ "CompressionNotSupported.Name", "ELocalFileReplayResult::CompressionNotSupported" },
		{ "DecompressBuffer.Name", "ELocalFileReplayResult::DecompressBuffer" },
		{ "DecryptBuffer.Name", "ELocalFileReplayResult::DecryptBuffer" },
		{ "EncryptionNotSupported.Name", "ELocalFileReplayResult::EncryptionNotSupported" },
		{ "InvalidReplayInfo.Name", "ELocalFileReplayResult::InvalidReplayInfo" },
		{ "ModuleRelativePath", "Public/LocalFileNetworkReplayStreaming.h" },
		{ "StreamChunkIndexMismatch.Name", "ELocalFileReplayResult::StreamChunkIndexMismatch" },
		{ "Success.Name", "ELocalFileReplayResult::Success" },
		{ "Unknown.Name", "ELocalFileReplayResult::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LocalFileNetworkReplayStreaming,
		nullptr,
		"ELocalFileReplayResult",
		"ELocalFileReplayResult",
		Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult()
	{
		if (!Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton, Z_Construct_UEnum_LocalFileNetworkReplayStreaming_ELocalFileReplayResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocalFileReplayResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics::EnumInfo[] = {
		{ ELocalFileReplayResult_StaticEnum, TEXT("ELocalFileReplayResult"), &Z_Registration_Info_UEnum_ELocalFileReplayResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3606090568U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_882448426(TEXT("/Script/LocalFileNetworkReplayStreaming"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NetworkReplayStreaming_LocalFileNetworkReplayStreaming_Public_LocalFileNetworkReplayStreaming_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
