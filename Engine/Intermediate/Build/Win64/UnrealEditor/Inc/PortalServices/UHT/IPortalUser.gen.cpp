// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Account/IPortalUser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPortalUser() {}
// Cross Module References
	PORTALSERVICES_API UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest();
	PORTALSERVICES_API UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserDetails();
	PORTALSERVICES_API UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult();
	UPackage* Z_Construct_UPackage__Script_PortalServices();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserDetails;
class UScriptStruct* FPortalUserDetails::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserDetails.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserDetails.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserDetails, (UObject*)Z_Construct_UPackage__Script_PortalServices(), TEXT("PortalUserDetails"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserDetails.OuterSingleton;
}
template<> PORTALSERVICES_API UScriptStruct* StaticStruct<FPortalUserDetails>()
{
	return FPortalUserDetails::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RealName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSignedIn_MetaData[];
#endif
		static void NewProp_IsSignedIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSignedIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * The basic data for the last or currently signed-in user.\n */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The basic data for the last or currently signed-in user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserDetails>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** The users epic games account display name */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The users epic games account display name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserDetails, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** The users epic games account email address */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The users epic games account email address" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserDetails, Email), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** The users real name attached to their epic games account */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The users real name attached to their epic games account" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserDetails, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_MetaData[] = {
		{ "Category", "User" },
		{ "Comment", "/** Whether this user is currently signed-in to the portal */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "Whether this user is currently signed-in to the portal" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_SetBit(void* Obj)
	{
		((FPortalUserDetails*)Obj)->IsSignedIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn = { "IsSignedIn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalUserDetails), &Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserDetails_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_RealName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewProp_IsSignedIn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserDetails_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalServices,
		nullptr,
		&NewStructOps,
		"PortalUserDetails",
		sizeof(FPortalUserDetails),
		alignof(FPortalUserDetails),
		Z_Construct_UScriptStruct_FPortalUserDetails_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserDetails_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserDetails()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserDetails.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserDetails.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserDetails_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserDetails.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest;
	static UEnum* EEntitlementCacheLevelRequest_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest, (UObject*)Z_Construct_UPackage__Script_PortalServices(), TEXT("EEntitlementCacheLevelRequest"));
		}
		return Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest.OuterSingleton;
	}
	template<> PORTALSERVICES_API UEnum* StaticEnum<EEntitlementCacheLevelRequest>()
	{
		return EEntitlementCacheLevelRequest_StaticEnum();
	}
	struct Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::Enumerators[] = {
		{ "EEntitlementCacheLevelRequest::Memory", (int64)EEntitlementCacheLevelRequest::Memory },
		{ "EEntitlementCacheLevelRequest::Disk", (int64)EEntitlementCacheLevelRequest::Disk },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * The available options for the different levels of caches available when\n * requesting information about user entitlements.\n *\n * Disk cache level includes Memory cache level.\n */" },
		{ "Disk.Comment", "/** \n\x09 * Allow reference to entitlements cached on disk between sessions of the portal. \n\x09 * This cache is updated regularly while a user is signed-in.  If no user is signed-in\n\x09 * then disk cached entitlements are still used from the last signed-in user's session.\n\x09 */" },
		{ "Disk.Name", "EEntitlementCacheLevelRequest::Disk" },
		{ "Disk.ToolTip", "Allow reference to entitlements cached on disk between sessions of the portal.\nThis cache is updated regularly while a user is signed-in.  If no user is signed-in\nthen disk cached entitlements are still used from the last signed-in user's session." },
		{ "Memory.Comment", "/** \n\x09 * Allow reference to entitlements cached in-memory for this session of the portal. \n\x09 * These are periodically updated. This is the recommended level for entitlement checking.\n\x09 */" },
		{ "Memory.Name", "EEntitlementCacheLevelRequest::Memory" },
		{ "Memory.ToolTip", "Allow reference to entitlements cached in-memory for this session of the portal.\nThese are periodically updated. This is the recommended level for entitlement checking." },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The available options for the different levels of caches available when\nrequesting information about user entitlements.\n\nDisk cache level includes Memory cache level." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PortalServices,
		nullptr,
		"EEntitlementCacheLevelRequest",
		"EEntitlementCacheLevelRequest",
		Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest()
	{
		if (!Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest.InnerSingleton, Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRequest_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved;
	static UEnum* EEntitlementCacheLevelRetrieved_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved, (UObject*)Z_Construct_UPackage__Script_PortalServices(), TEXT("EEntitlementCacheLevelRetrieved"));
		}
		return Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved.OuterSingleton;
	}
	template<> PORTALSERVICES_API UEnum* StaticEnum<EEntitlementCacheLevelRetrieved>()
	{
		return EEntitlementCacheLevelRetrieved_StaticEnum();
	}
	struct Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::Enumerators[] = {
		{ "EEntitlementCacheLevelRetrieved::None", (int64)EEntitlementCacheLevelRetrieved::None },
		{ "EEntitlementCacheLevelRetrieved::Memory", (int64)EEntitlementCacheLevelRetrieved::Memory },
		{ "EEntitlementCacheLevelRetrieved::Disk", (int64)EEntitlementCacheLevelRetrieved::Disk },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \n * Used to delineate which cache an entitlement check result was retrieved from.\n */" },
		{ "Disk.Comment", "/** \n\x09 * Allow reference to entitlements cached on disk between sessions of the portal. \n\x09 * This cache is updated regularly while a user is signed-in.  If no user is signed-in\n\x09 * then disk cached entitlements are still used from the last signed-in user's session.\n\x09 */" },
		{ "Disk.Name", "EEntitlementCacheLevelRetrieved::Disk" },
		{ "Disk.ToolTip", "Allow reference to entitlements cached on disk between sessions of the portal.\nThis cache is updated regularly while a user is signed-in.  If no user is signed-in\nthen disk cached entitlements are still used from the last signed-in user's session." },
		{ "Memory.Comment", "/** \n\x09 * Allow reference to entitlements cached in-memory for this session of the portal. \n\x09 * These are periodically updated. This is the recommended level for entitlement checking.\n\x09 */" },
		{ "Memory.Name", "EEntitlementCacheLevelRetrieved::Memory" },
		{ "Memory.ToolTip", "Allow reference to entitlements cached in-memory for this session of the portal.\nThese are periodically updated. This is the recommended level for entitlement checking." },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "None.Name", "EEntitlementCacheLevelRetrieved::None" },
		{ "ToolTip", "Used to delineate which cache an entitlement check result was retrieved from." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PortalServices,
		nullptr,
		"EEntitlementCacheLevelRetrieved",
		"EEntitlementCacheLevelRetrieved",
		Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved()
	{
		if (!Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved.InnerSingleton, Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult;
class UScriptStruct* FPortalUserIsEntitledToItemResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult, (UObject*)Z_Construct_UPackage__Script_PortalServices(), TEXT("PortalUserIsEntitledToItemResult"));
	}
	return Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult.OuterSingleton;
}
template<> PORTALSERVICES_API UScriptStruct* StaticStruct<FPortalUserIsEntitledToItemResult>()
{
	return FPortalUserIsEntitledToItemResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEntitled_MetaData[];
#endif
		static void NewProp_IsEntitled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEntitled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RetrievedFromCacheLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetrievedFromCacheLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RetrievedFromCacheLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPortalUserIsEntitledToItemResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "Entitlement" },
		{ "Comment", "/** The item id that was checked for an active entitlement */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "The item id that was checked for an active entitlement" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserIsEntitledToItemResult, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_MetaData[] = {
		{ "Category", "Entitlement" },
		{ "Comment", "/** Whether this user is entitled to the item id */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "Whether this user is entitled to the item id" },
	};
#endif
	void Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_SetBit(void* Obj)
	{
		((FPortalUserIsEntitledToItemResult*)Obj)->IsEntitled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled = { "IsEntitled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPortalUserIsEntitledToItemResult), &Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_MetaData[] = {
		{ "Category", "Entitlement" },
		{ "Comment", "/** How fresh this entitlement information is */" },
		{ "ModuleRelativePath", "Public/Account/IPortalUser.h" },
		{ "ToolTip", "How fresh this entitlement information is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel = { "RetrievedFromCacheLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPortalUserIsEntitledToItemResult, RetrievedFromCacheLevel), Z_Construct_UEnum_PortalServices_EEntitlementCacheLevelRetrieved, METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_MetaData)) }; // 141592987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_IsEntitled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewProp_RetrievedFromCacheLevel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PortalServices,
		nullptr,
		&NewStructOps,
		"PortalUserIsEntitledToItemResult",
		sizeof(FPortalUserIsEntitledToItemResult),
		alignof(FPortalUserIsEntitledToItemResult),
		Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult()
	{
		if (!Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult.InnerSingleton, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics::EnumInfo[] = {
		{ EEntitlementCacheLevelRequest_StaticEnum, TEXT("EEntitlementCacheLevelRequest"), &Z_Registration_Info_UEnum_EEntitlementCacheLevelRequest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1307875131U) },
		{ EEntitlementCacheLevelRetrieved_StaticEnum, TEXT("EEntitlementCacheLevelRetrieved"), &Z_Registration_Info_UEnum_EEntitlementCacheLevelRetrieved, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 141592987U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics::ScriptStructInfo[] = {
		{ FPortalUserDetails::StaticStruct, Z_Construct_UScriptStruct_FPortalUserDetails_Statics::NewStructOps, TEXT("PortalUserDetails"), &Z_Registration_Info_UScriptStruct_PortalUserDetails, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserDetails), 2397253698U) },
		{ FPortalUserIsEntitledToItemResult::StaticStruct, Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics::NewStructOps, TEXT("PortalUserIsEntitledToItemResult"), &Z_Registration_Info_UScriptStruct_PortalUserIsEntitledToItemResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPortalUserIsEntitledToItemResult), 3934900834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_1434924859(TEXT("/Script/PortalServices"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
