// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileServerMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileServerMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UNREALEDMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady();
	UPackage* Z_Construct_UPackage__Script_UnrealEdMessages();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileServerReady;
class UScriptStruct* FFileServerReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileServerReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileServerReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileServerReady, (UObject*)Z_Construct_UPackage__Script_UnrealEdMessages(), TEXT("FileServerReady"));
	}
	return Z_Registration_Info_UScriptStruct_FileServerReady.OuterSingleton;
}
template<> UNREALEDMESSAGES_API UScriptStruct* StaticStruct<FFileServerReady>()
{
	return FFileServerReady::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFileServerReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_AddressList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddressList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileServerReady_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is published by file servers when they're ready to accept connections.\n */" },
		{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
		{ "ToolTip", "Implements a message that is published by file servers when they're ready to accept connections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFileServerReady_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileServerReady>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_Inner = { "AddressList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the list of IP addresses that the file server is listening on. */" },
		{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
		{ "ToolTip", "Holds the list of IP addresses that the file server is listening on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList = { "AddressList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileServerReady, AddressList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the file server's application identifier. */" },
		{ "ModuleRelativePath", "Classes/FileServerMessages.h" },
		{ "ToolTip", "Holds the file server's application identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFileServerReady, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileServerReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_AddressList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileServerReady_Statics::NewProp_InstanceId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileServerReady_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEdMessages,
		nullptr,
		&NewStructOps,
		"FileServerReady",
		sizeof(FFileServerReady),
		alignof(FFileServerReady),
		Z_Construct_UScriptStruct_FFileServerReady_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFileServerReady_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileServerReady_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFileServerReady()
	{
		if (!Z_Registration_Info_UScriptStruct_FileServerReady.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileServerReady.InnerSingleton, Z_Construct_UScriptStruct_FFileServerReady_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FileServerReady.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h_Statics::ScriptStructInfo[] = {
		{ FFileServerReady::StaticStruct, Z_Construct_UScriptStruct_FFileServerReady_Statics::NewStructOps, TEXT("FileServerReady"), &Z_Registration_Info_UScriptStruct_FileServerReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileServerReady), 1775310192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h_2564617632(TEXT("/Script/UnrealEdMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEdMessages_Classes_FileServerMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
