// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AESGCMFaultHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAESGCMFaultHandler() {}
// Cross Module References
	AESGCMHANDLERCOMPONENT_API UEnum* Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult();
	UPackage* Z_Construct_UPackage__Script_AESGCMHandlerComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAESGCMNetResult;
	static UEnum* EAESGCMNetResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAESGCMNetResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAESGCMNetResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult, (UObject*)Z_Construct_UPackage__Script_AESGCMHandlerComponent(), TEXT("EAESGCMNetResult"));
		}
		return Z_Registration_Info_UEnum_EAESGCMNetResult.OuterSingleton;
	}
	template<> AESGCMHANDLERCOMPONENT_API UEnum* StaticEnum<EAESGCMNetResult>()
	{
		return EAESGCMNetResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::Enumerators[] = {
		{ "EAESGCMNetResult::Unknown", (int64)EAESGCMNetResult::Unknown },
		{ "EAESGCMNetResult::Success", (int64)EAESGCMNetResult::Success },
		{ "EAESGCMNetResult::AESMissingIV", (int64)EAESGCMNetResult::AESMissingIV },
		{ "EAESGCMNetResult::AESMissingAuthTag", (int64)EAESGCMNetResult::AESMissingAuthTag },
		{ "EAESGCMNetResult::AESMissingPayload", (int64)EAESGCMNetResult::AESMissingPayload },
		{ "EAESGCMNetResult::AESDecryptionFailed", (int64)EAESGCMNetResult::AESDecryptionFailed },
		{ "EAESGCMNetResult::AESZeroLastByte", (int64)EAESGCMNetResult::AESZeroLastByte },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::Enum_MetaDataParams[] = {
		{ "AESDecryptionFailed.Comment", "/** AES GCM Packet Decryption failed */" },
		{ "AESDecryptionFailed.Name", "EAESGCMNetResult::AESDecryptionFailed" },
		{ "AESDecryptionFailed.ToolTip", "AES GCM Packet Decryption failed" },
		{ "AESMissingAuthTag.Comment", "/** AES GCM Packet missing Authentication Tag */" },
		{ "AESMissingAuthTag.Name", "EAESGCMNetResult::AESMissingAuthTag" },
		{ "AESMissingAuthTag.ToolTip", "AES GCM Packet missing Authentication Tag" },
		{ "AESMissingIV.Comment", "/** AES GCM Packet missing Initialization Vector */" },
		{ "AESMissingIV.Name", "EAESGCMNetResult::AESMissingIV" },
		{ "AESMissingIV.ToolTip", "AES GCM Packet missing Initialization Vector" },
		{ "AESMissingPayload.Comment", "/** AES GCM Packet missing payload/ciphertext */" },
		{ "AESMissingPayload.Name", "EAESGCMNetResult::AESMissingPayload" },
		{ "AESMissingPayload.ToolTip", "AES GCM Packet missing payload/ciphertext" },
		{ "AESZeroLastByte.Comment", "/** AES GCM Packet had zero last byte (no termination bit) */" },
		{ "AESZeroLastByte.Name", "EAESGCMNetResult::AESZeroLastByte" },
		{ "AESZeroLastByte.ToolTip", "AES GCM Packet had zero last byte (no termination bit)" },
		{ "Comment", "/**\n * AESGCM net error types, for NetConnection fault handling\n */" },
		{ "ModuleRelativePath", "Public/AESGCMFaultHandler.h" },
		{ "Success.Name", "EAESGCMNetResult::Success" },
		{ "ToolTip", "AESGCM net error types, for NetConnection fault handling" },
		{ "Unknown.Name", "EAESGCMNetResult::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AESGCMHandlerComponent,
		nullptr,
		"EAESGCMNetResult",
		"EAESGCMNetResult",
		Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult()
	{
		if (!Z_Registration_Info_UEnum_EAESGCMNetResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAESGCMNetResult.InnerSingleton, Z_Construct_UEnum_AESGCMHandlerComponent_EAESGCMNetResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAESGCMNetResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PacketHandlers_AESGCMHandlerComponent_Source_Public_AESGCMFaultHandler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PacketHandlers_AESGCMHandlerComponent_Source_Public_AESGCMFaultHandler_h_Statics::EnumInfo[] = {
		{ EAESGCMNetResult_StaticEnum, TEXT("EAESGCMNetResult"), &Z_Registration_Info_UEnum_EAESGCMNetResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 529002051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PacketHandlers_AESGCMHandlerComponent_Source_Public_AESGCMFaultHandler_h_2356078038(TEXT("/Script/AESGCMHandlerComponent"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PacketHandlers_AESGCMHandlerComponent_Source_Public_AESGCMFaultHandler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_PacketHandlers_AESGCMHandlerComponent_Source_Public_AESGCMFaultHandler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
