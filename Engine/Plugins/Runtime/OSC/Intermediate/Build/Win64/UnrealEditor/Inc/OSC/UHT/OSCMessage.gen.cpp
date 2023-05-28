// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCMessage() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OSCMessage;
class UScriptStruct* FOSCMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OSCMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OSCMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOSCMessage, (UObject*)Z_Construct_UPackage__Script_OSC(), TEXT("OSCMessage"));
	}
	return Z_Registration_Info_UScriptStruct_OSCMessage.OuterSingleton;
}
template<> OSC_API UScriptStruct* StaticStruct<FOSCMessage>()
{
	return FOSCMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOSCMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOSCMessage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OSCMessage.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOSCMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOSCMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOSCMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
		nullptr,
		&NewStructOps,
		"OSCMessage",
		sizeof(FOSCMessage),
		alignof(FOSCMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOSCMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_OSCMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OSCMessage.InnerSingleton, Z_Construct_UScriptStruct_FOSCMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OSCMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCMessage_h_Statics::ScriptStructInfo[] = {
		{ FOSCMessage::StaticStruct, Z_Construct_UScriptStruct_FOSCMessage_Statics::NewStructOps, TEXT("OSCMessage"), &Z_Registration_Info_UScriptStruct_OSCMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOSCMessage), 3256038154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCMessage_h_2481370396(TEXT("/Script/OSC"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
