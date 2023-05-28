// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/UdpMessagingTestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingTestTypes() {}
// Cross Module References
	UDPMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FUdpMockMessage();
	UPackage* Z_Construct_UPackage__Script_UdpMessaging();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UdpMockMessage;
class UScriptStruct* FUdpMockMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UdpMockMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UdpMockMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUdpMockMessage, (UObject*)Z_Construct_UPackage__Script_UdpMessaging(), TEXT("UdpMockMessage"));
	}
	return Z_Registration_Info_UScriptStruct_UdpMockMessage.OuterSingleton;
}
template<> UDPMESSAGING_API UScriptStruct* StaticStruct<FUdpMockMessage>()
{
	return FUdpMockMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUdpMockMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UdpMessagingTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUdpMockMessage>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/UdpMessagingTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUdpMockMessage, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
		nullptr,
		&NewStructOps,
		"UdpMockMessage",
		sizeof(FUdpMockMessage),
		alignof(FUdpMockMessage),
		Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUdpMockMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_UdpMockMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UdpMockMessage.InnerSingleton, Z_Construct_UScriptStruct_FUdpMockMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UdpMockMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FUdpMockMessage::StaticStruct, Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewStructOps, TEXT("UdpMockMessage"), &Z_Registration_Info_UScriptStruct_UdpMockMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUdpMockMessage), 1054606925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_1644533152(TEXT("/Script/UdpMessaging"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Messaging_UdpMessaging_Source_UdpMessaging_Private_Tests_UdpMessagingTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
