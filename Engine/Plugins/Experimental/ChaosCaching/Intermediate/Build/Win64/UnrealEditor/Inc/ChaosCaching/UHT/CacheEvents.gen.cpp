// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/CacheEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCacheEvents() {}
// Cross Module References
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheEventBase();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheEventTrack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheEventBase;
class UScriptStruct* FCacheEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CacheEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_CacheEventBase.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCacheEventBase>()
{
	return FCacheEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheEventBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base type for all events, ALL events must derive from this so we have a fallback for serialization\n * when we can't find the actual event struct.\n */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheEvents.h" },
		{ "ToolTip", "Base type for all events, ALL events must derive from this so we have a fallback for serialization\nwhen we can't find the actual event struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheEventBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		nullptr,
		&NewStructOps,
		"CacheEventBase",
		sizeof(FCacheEventBase),
		alignof(FCacheEventBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheEventBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheEventBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCacheEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheEventBase.InnerSingleton, Z_Construct_UScriptStruct_FCacheEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheEventBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheEventTrack;
class UScriptStruct* FCacheEventTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheEventTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheEventTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventTrack, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CacheEventTrack"));
	}
	return Z_Registration_Info_UScriptStruct_CacheEventTrack.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCacheEventTrack>()
{
	return FCacheEventTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCacheEventTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStamps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeStamps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheEventTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/CacheEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheEventTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/CacheEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCacheEventTrack, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** Type of the event stored in this track. Must inherit FCacheEventBase */" },
		{ "ModuleRelativePath", "Public/Chaos/CacheEvents.h" },
		{ "ToolTip", "Type of the event stored in this track. Must inherit FCacheEventBase" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCacheEventTrack, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Struct_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps_Inner = { "TimeStamps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/CacheEvents.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps = { "TimeStamps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCacheEventTrack, TimeStamps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheEventTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewProp_TimeStamps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheEventTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		nullptr,
		&NewStructOps,
		"CacheEventTrack",
		sizeof(FCacheEventTrack),
		alignof(FCacheEventTrack),
		Z_Construct_UScriptStruct_FCacheEventTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheEventTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCacheEventTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_CacheEventTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheEventTrack.InnerSingleton, Z_Construct_UScriptStruct_FCacheEventTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CacheEventTrack.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheEvents_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheEvents_h_Statics::ScriptStructInfo[] = {
		{ FCacheEventBase::StaticStruct, Z_Construct_UScriptStruct_FCacheEventBase_Statics::NewStructOps, TEXT("CacheEventBase"), &Z_Registration_Info_UScriptStruct_CacheEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheEventBase), 1919928317U) },
		{ FCacheEventTrack::StaticStruct, Z_Construct_UScriptStruct_FCacheEventTrack_Statics::NewStructOps, TEXT("CacheEventTrack"), &Z_Registration_Info_UScriptStruct_CacheEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheEventTrack), 2385957589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheEvents_h_1270930707(TEXT("/Script/ChaosCaching"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheEvents_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
