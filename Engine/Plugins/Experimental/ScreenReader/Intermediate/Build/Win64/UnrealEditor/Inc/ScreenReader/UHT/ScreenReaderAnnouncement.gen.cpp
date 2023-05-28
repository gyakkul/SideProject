// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Announcement/ScreenReaderAnnouncement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenReaderAnnouncement() {}
// Cross Module References
	SCREENREADER_API UEnum* Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority();
	SCREENREADER_API UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderAnnouncement();
	SCREENREADER_API UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo();
	UPackage* Z_Construct_UPackage__Script_ScreenReader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority;
	static UEnum* EScreenReaderAnnouncementPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority, (UObject*)Z_Construct_UPackage__Script_ScreenReader(), TEXT("EScreenReaderAnnouncementPriority"));
		}
		return Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority.OuterSingleton;
	}
	template<> SCREENREADER_API UEnum* StaticEnum<EScreenReaderAnnouncementPriority>()
	{
		return EScreenReaderAnnouncementPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::Enumerators[] = {
		{ "EScreenReaderAnnouncementPriority::High", (int64)EScreenReaderAnnouncementPriority::High },
		{ "EScreenReaderAnnouncementPriority::Medium", (int64)EScreenReaderAnnouncementPriority::Medium },
		{ "EScreenReaderAnnouncementPriority::Low", (int64)EScreenReaderAnnouncementPriority::Low },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* The priority level associated with a screen reader announcement.\n* The priority of an announcement could be used to determine if an announcement A could interrupt announcement B\n* or to help order the announcements if multiple are queued.\n*/" },
		{ "High.Name", "EScreenReaderAnnouncementPriority::High" },
		{ "Low.Name", "EScreenReaderAnnouncementPriority::Low" },
		{ "Medium.Name", "EScreenReaderAnnouncementPriority::Medium" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "The priority level associated with a screen reader announcement.\nThe priority of an announcement could be used to determine if an announcement A could interrupt announcement B\nor to help order the announcements if multiple are queued." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ScreenReader,
		nullptr,
		"EScreenReaderAnnouncementPriority",
		"EScreenReaderAnnouncementPriority",
		Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority()
	{
		if (!Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority.InnerSingleton, Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo;
class UScriptStruct* FScreenReaderAnnouncementInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo, (UObject*)Z_Construct_UPackage__Script_ScreenReader(), TEXT("ScreenReaderAnnouncementInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo.OuterSingleton;
}
template<> SCREENREADER_API UScriptStruct* StaticStruct<FScreenReaderAnnouncementInfo>()
{
	return FScreenReaderAnnouncementInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldQueue_MetaData[];
#endif
		static void NewProp_bShouldQueue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterruptable_MetaData[];
#endif
		static void NewProp_bInterruptable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A struct that contains information about how a screen reader announcement should behave when the announcement is requested to be spoken.\n* This struct holds information to determine an announcement's priority in relation to other announcements and determines if an \n* announcement can be interrupted by other announcements and if an announcement should be queued if it cannot be made immendiately.\n* For C++ users, please use the static methods provided to create instances of FScreenReaderInfo with pre-defined defaults that will\n* satisfy 80% of your use cases.\n* Please see FScreenReaderUser::RequestSpeak() for examples of how to use this struct.\n* @see FScreenReaderUser, FScreenReaderAnnouncement\n*/" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "A struct that contains information about how a screen reader announcement should behave when the announcement is requested to be spoken.\nThis struct holds information to determine an announcement's priority in relation to other announcements and determines if an\nannouncement can be interrupted by other announcements and if an announcement should be queued if it cannot be made immendiately.\nFor C++ users, please use the static methods provided to create instances of FScreenReaderInfo with pre-defined defaults that will\nsatisfy 80% of your use cases.\nPlease see FScreenReaderUser::RequestSpeak() for examples of how to use this struct.\n@see FScreenReaderUser, FScreenReaderAnnouncement" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenReaderAnnouncementInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ScreenReaderAnnouncementInfo" },
		{ "Comment", "/** True if the associated announcement should be queued if it cannot be spoken immediately or is interrupted. Else false.*/" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "True if the associated announcement should be queued if it cannot be spoken immediately or is interrupted. Else false." },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue_SetBit(void* Obj)
	{
		((FScreenReaderAnnouncementInfo*)Obj)->bShouldQueue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue = { "bShouldQueue", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScreenReaderAnnouncementInfo), &Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ScreenReaderAnnouncementInfo" },
		{ "Comment", "/** True if the associazted announcement can be intrrupted by another announcement. Else false. */" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "True if the associazted announcement can be intrrupted by another announcement. Else false." },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable_SetBit(void* Obj)
	{
		((FScreenReaderAnnouncementInfo*)Obj)->bInterruptable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable = { "bInterruptable", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FScreenReaderAnnouncementInfo), &Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ScreenReaderAnnouncementInfo" },
		{ "Comment", "/** The priority level of the associated announcement. */" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "The priority level of the associated announcement." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenReaderAnnouncementInfo, Priority), Z_Construct_UEnum_ScreenReader_EScreenReaderAnnouncementPriority, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority_MetaData)) }; // 1908295395
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bShouldQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_bInterruptable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenReader,
		nullptr,
		&NewStructOps,
		"ScreenReaderAnnouncementInfo",
		sizeof(FScreenReaderAnnouncementInfo),
		alignof(FScreenReaderAnnouncementInfo),
		Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo.InnerSingleton, Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement;
class UScriptStruct* FScreenReaderAnnouncement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenReaderAnnouncement, (UObject*)Z_Construct_UPackage__Script_ScreenReader(), TEXT("ScreenReaderAnnouncement"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement.OuterSingleton;
}
template<> SCREENREADER_API UScriptStruct* StaticStruct<FScreenReaderAnnouncement>()
{
	return FScreenReaderAnnouncement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnnouncementString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnnouncementInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnnouncementInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A screen reader announcement represents a localized message that a user wants to speak to an end user.\n* This class is used to request announcements to be spoken to an end user via the FScreenReaderUser class.\n* FScreenReaderUser::RequestSpeak() for instructions on how to use the class.\n* @see FScreenReaderUser\n*/" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "A screen reader announcement represents a localized message that a user wants to speak to an end user.\nThis class is used to request announcements to be spoken to an end user via the FScreenReaderUser class.\nFScreenReaderUser::RequestSpeak() for instructions on how to use the class.\n@see FScreenReaderUser" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenReaderAnnouncement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementString_MetaData[] = {
		{ "Category", "ScreenReaderAnnouncement" },
		{ "Comment", "/** A localized string that represents the message to be spoken to a end user */" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "A localized string that represents the message to be spoken to a end user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementString = { "AnnouncementString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenReaderAnnouncement, AnnouncementString), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementInfo_MetaData[] = {
		{ "Category", "ScreenReaderAnnouncement" },
		{ "Comment", "/** The announcement info associated with the announcement which controls how the announcement behaves when a user requests this announcement to be spoken to an end user */" },
		{ "ModuleRelativePath", "Public/Announcement/ScreenReaderAnnouncement.h" },
		{ "ToolTip", "The announcement info associated with the announcement which controls how the announcement behaves when a user requests this announcement to be spoken to an end user" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementInfo = { "AnnouncementInfo", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenReaderAnnouncement, AnnouncementInfo), Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementInfo_MetaData)) }; // 2377253650
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewProp_AnnouncementInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenReader,
		nullptr,
		&NewStructOps,
		"ScreenReaderAnnouncement",
		sizeof(FScreenReaderAnnouncement),
		alignof(FScreenReaderAnnouncement),
		Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderAnnouncement()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement.InnerSingleton, Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics::EnumInfo[] = {
		{ EScreenReaderAnnouncementPriority_StaticEnum, TEXT("EScreenReaderAnnouncementPriority"), &Z_Registration_Info_UEnum_EScreenReaderAnnouncementPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1908295395U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics::ScriptStructInfo[] = {
		{ FScreenReaderAnnouncementInfo::StaticStruct, Z_Construct_UScriptStruct_FScreenReaderAnnouncementInfo_Statics::NewStructOps, TEXT("ScreenReaderAnnouncementInfo"), &Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncementInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenReaderAnnouncementInfo), 2377253650U) },
		{ FScreenReaderAnnouncement::StaticStruct, Z_Construct_UScriptStruct_FScreenReaderAnnouncement_Statics::NewStructOps, TEXT("ScreenReaderAnnouncement"), &Z_Registration_Info_UScriptStruct_ScreenReaderAnnouncement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenReaderAnnouncement), 2625095201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_1114826884(TEXT("/Script/ScreenReader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScreenReader_Source_ScreenReader_Public_Announcement_ScreenReaderAnnouncement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
