// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssetMultiUserManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaAssetMultiUserManager() {}
// Cross Module References
	DISPLAYCLUSTERMULTIUSER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMultiUser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent;
class UScriptStruct* FConcertMediaStateChangedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent, (UObject*)Z_Construct_UPackage__Script_DisplayClusterMultiUser(), TEXT("ConcertMediaStateChangedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent.OuterSingleton;
}
template<> DISPLAYCLUSTERMULTIUSER_API UScriptStruct* StaticStruct<FConcertMediaStateChangedEvent>()
{
	return FConcertMediaStateChangedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorsPathNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsPathNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsPathNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n* The event that is transfered over MU.\n*/" },
		{ "ModuleRelativePath", "Private/MediaAssetMultiUserManager.h" },
		{ "ToolTip", "The event that is transfered over MU." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertMediaStateChangedEvent>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames_Inner = { "ActorsPathNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames_MetaData[] = {
		{ "Comment", "/** Name used to find the object on the other side of MU. */" },
		{ "ModuleRelativePath", "Private/MediaAssetMultiUserManager.h" },
		{ "ToolTip", "Name used to find the object on the other side of MU." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames = { "ActorsPathNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMediaStateChangedEvent, ActorsPathNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** State to replicate on the other side. */" },
		{ "ModuleRelativePath", "Private/MediaAssetMultiUserManager.h" },
		{ "ToolTip", "State to replicate on the other side." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMediaStateChangedEvent, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_State_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_ActorsPathNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMultiUser,
		nullptr,
		&NewStructOps,
		"ConcertMediaStateChangedEvent",
		sizeof(FConcertMediaStateChangedEvent),
		alignof(FConcertMediaStateChangedEvent),
		Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMultiUser_Private_MediaAssetMultiUserManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMultiUser_Private_MediaAssetMultiUserManager_h_Statics::ScriptStructInfo[] = {
		{ FConcertMediaStateChangedEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertMediaStateChangedEvent_Statics::NewStructOps, TEXT("ConcertMediaStateChangedEvent"), &Z_Registration_Info_UScriptStruct_ConcertMediaStateChangedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertMediaStateChangedEvent), 2388054635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMultiUser_Private_MediaAssetMultiUserManager_h_313866640(TEXT("/Script/DisplayClusterMultiUser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMultiUser_Private_MediaAssetMultiUserManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMultiUser_Private_MediaAssetMultiUserManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
