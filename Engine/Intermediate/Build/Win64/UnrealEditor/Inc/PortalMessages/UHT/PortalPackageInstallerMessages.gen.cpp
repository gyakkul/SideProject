// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalPackageInstallerMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalPackageInstallerMessages() {}
// Cross Module References
	MESSAGINGRPC_API UScriptStruct* Z_Construct_UScriptStruct_FRpcMessage();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest();
	PORTALMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse();
	UPackage* Z_Construct_UPackage__Script_PortalMessages();
// End Cross Module References

static_assert(std::is_polymorphic<FPortalPackageInstallerInstallRequest>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalPackageInstallerInstallRequest cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest;
class UScriptStruct* FPortalPackageInstallerInstallRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerInstallRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerInstallRequest>()
{
	return FPortalPackageInstallerInstallRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Service discovery messages\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
		{ "ToolTip", "Service discovery messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerInstallRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalPackageInstallerInstallRequest, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel = { "BuildLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalPackageInstallerInstallRequest, BuildLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath = { "DestinationPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalPackageInstallerInstallRequest, DestinationPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_BuildLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewProp_DestinationPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerInstallRequest",
		sizeof(FPortalPackageInstallerInstallRequest),
		alignof(FPortalPackageInstallerInstallRequest),
		Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest.InnerSingleton, Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalPackageInstallerInstallResponse>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalPackageInstallerInstallResponse cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse;
class UScriptStruct* FPortalPackageInstallerInstallResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerInstallResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerInstallResponse>()
{
	return FPortalPackageInstallerInstallResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerInstallResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalPackageInstallerInstallResponse*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalPackageInstallerInstallResponse), &Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerInstallResponse",
		sizeof(FPortalPackageInstallerInstallResponse),
		alignof(FPortalPackageInstallerInstallResponse),
		Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse.InnerSingleton, Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalPackageInstallerUninstallRequest>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalPackageInstallerUninstallRequest cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest;
class UScriptStruct* FPortalPackageInstallerUninstallRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerUninstallRequest"));
	}
	return Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerUninstallRequest>()
{
	return FPortalPackageInstallerUninstallRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstallationPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstallationPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveUserFiles_MetaData[];
#endif
		static void NewProp_RemoveUserFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoveUserFiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerUninstallRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalPackageInstallerUninstallRequest, AppName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel = { "BuildLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalPackageInstallerUninstallRequest, BuildLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath = { "InstallationPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalPackageInstallerUninstallRequest, InstallationPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_SetBit(void* Obj)
	{
		((FPortalPackageInstallerUninstallRequest*)Obj)->RemoveUserFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles = { "RemoveUserFiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalPackageInstallerUninstallRequest), &Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_BuildLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_InstallationPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewProp_RemoveUserFiles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerUninstallRequest",
		sizeof(FPortalPackageInstallerUninstallRequest),
		alignof(FPortalPackageInstallerUninstallRequest),
		Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest.InnerSingleton, Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPortalPackageInstallerUninstallResponse>() == std::is_polymorphic<FRpcMessage>(), "USTRUCT FPortalPackageInstallerUninstallResponse cannot be polymorphic unless super FRpcMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse;
class UScriptStruct* FPortalPackageInstallerUninstallResponse::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse, (UObject*)Z_Construct_UPackage__Script_PortalMessages(), TEXT("PortalPackageInstallerUninstallResponse"));
	}
	return Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse.OuterSingleton;
}
template<> PORTALMESSAGES_API UScriptStruct* StaticStruct<FPortalPackageInstallerUninstallResponse>()
{
	return FPortalPackageInstallerUninstallResponse::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalPackageInstallerUninstallResponse>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Public/PortalPackageInstallerMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FPortalPackageInstallerUninstallResponse*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalPackageInstallerUninstallResponse), &Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalMessages,
		Z_Construct_UScriptStruct_FRpcMessage,
		&NewStructOps,
		"PortalPackageInstallerUninstallResponse",
		sizeof(FPortalPackageInstallerUninstallResponse),
		alignof(FPortalPackageInstallerUninstallResponse),
		Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse.InnerSingleton, Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalPackageInstallerMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalPackageInstallerMessages_h_Statics::ScriptStructInfo[] = {
		{ FPortalPackageInstallerInstallRequest::StaticStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerInstallRequest_Statics::NewStructOps, TEXT("PortalPackageInstallerInstallRequest"), &Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalPackageInstallerInstallRequest), 3758736095U) },
		{ FPortalPackageInstallerInstallResponse::StaticStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerInstallResponse_Statics::NewStructOps, TEXT("PortalPackageInstallerInstallResponse"), &Z_Registration_Info_UScriptStruct_PortalPackageInstallerInstallResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalPackageInstallerInstallResponse), 3457774315U) },
		{ FPortalPackageInstallerUninstallRequest::StaticStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallRequest_Statics::NewStructOps, TEXT("PortalPackageInstallerUninstallRequest"), &Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalPackageInstallerUninstallRequest), 1088224398U) },
		{ FPortalPackageInstallerUninstallResponse::StaticStruct, Z_Construct_UScriptStruct_FPortalPackageInstallerUninstallResponse_Statics::NewStructOps, TEXT("PortalPackageInstallerUninstallResponse"), &Z_Registration_Info_UScriptStruct_PortalPackageInstallerUninstallResponse, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalPackageInstallerUninstallResponse), 2237384373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalPackageInstallerMessages_h_3263856095(TEXT("/Script/PortalMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalPackageInstallerMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Messages_Public_PortalPackageInstallerMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
