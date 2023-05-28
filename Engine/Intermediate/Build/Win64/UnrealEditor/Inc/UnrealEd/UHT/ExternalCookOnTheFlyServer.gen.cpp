// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Private/Cooker/ExternalCookOnTheFlyServer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalCookOnTheFlyServer() {}
// Cross Module References
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage;
class UScriptStruct* FZenCookOnTheFlyRegisterServiceMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ZenCookOnTheFlyRegisterServiceMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FZenCookOnTheFlyRegisterServiceMessage>()
{
	return FZenCookOnTheFlyRegisterServiceMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServiceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Cooker/ExternalCookOnTheFlyServer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZenCookOnTheFlyRegisterServiceMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_ServiceId_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/Cooker/ExternalCookOnTheFlyServer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_ServiceId = { "ServiceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZenCookOnTheFlyRegisterServiceMessage, ServiceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_ServiceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_ServiceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/Cooker/ExternalCookOnTheFlyServer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZenCookOnTheFlyRegisterServiceMessage, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_Port_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_ServiceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewProp_Port,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ZenCookOnTheFlyRegisterServiceMessage",
		sizeof(FZenCookOnTheFlyRegisterServiceMessage),
		alignof(FZenCookOnTheFlyRegisterServiceMessage),
		Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage.InnerSingleton, Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Cooker_ExternalCookOnTheFlyServer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Cooker_ExternalCookOnTheFlyServer_h_Statics::ScriptStructInfo[] = {
		{ FZenCookOnTheFlyRegisterServiceMessage::StaticStruct, Z_Construct_UScriptStruct_FZenCookOnTheFlyRegisterServiceMessage_Statics::NewStructOps, TEXT("ZenCookOnTheFlyRegisterServiceMessage"), &Z_Registration_Info_UScriptStruct_ZenCookOnTheFlyRegisterServiceMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZenCookOnTheFlyRegisterServiceMessage), 2846013450U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Cooker_ExternalCookOnTheFlyServer_h_2334636022(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Cooker_ExternalCookOnTheFlyServer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Cooker_ExternalCookOnTheFlyServer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
