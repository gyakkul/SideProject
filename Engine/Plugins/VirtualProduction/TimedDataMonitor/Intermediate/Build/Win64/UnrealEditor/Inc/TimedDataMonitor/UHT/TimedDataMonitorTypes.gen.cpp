// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimedDataMonitorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedDataMonitorTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier();
	TIMEDDATAMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier();
	UPackage* Z_Construct_UPackage__Script_TimedDataMonitor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier;
class UScriptStruct* FTimedDataMonitorInputIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorInputIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorInputIdentifier>()
{
	return FTimedDataMonitorInputIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorInputIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimedDataMonitorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorInputIdentifier, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewProp_Identifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewProp_Identifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		&NewStructOps,
		"TimedDataMonitorInputIdentifier",
		sizeof(FTimedDataMonitorInputIdentifier),
		alignof(FTimedDataMonitorInputIdentifier),
		Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier;
class UScriptStruct* FTimedDataMonitorChannelIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier, (UObject*)Z_Construct_UPackage__Script_TimedDataMonitor(), TEXT("TimedDataMonitorChannelIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier.OuterSingleton;
}
template<> TIMEDDATAMONITOR_API UScriptStruct* StaticStruct<FTimedDataMonitorChannelIdentifier>()
{
	return FTimedDataMonitorChannelIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimedDataMonitorTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataMonitorChannelIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewProp_Identifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimedDataMonitorTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimedDataMonitorChannelIdentifier, Identifier), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewProp_Identifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewProp_Identifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimedDataMonitor,
		nullptr,
		&NewStructOps,
		"TimedDataMonitorChannelIdentifier",
		sizeof(FTimedDataMonitorChannelIdentifier),
		alignof(FTimedDataMonitorChannelIdentifier),
		Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorTypes_h_Statics::ScriptStructInfo[] = {
		{ FTimedDataMonitorInputIdentifier::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorInputIdentifier_Statics::NewStructOps, TEXT("TimedDataMonitorInputIdentifier"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorInputIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorInputIdentifier), 3525741413U) },
		{ FTimedDataMonitorChannelIdentifier::StaticStruct, Z_Construct_UScriptStruct_FTimedDataMonitorChannelIdentifier_Statics::NewStructOps, TEXT("TimedDataMonitorChannelIdentifier"), &Z_Registration_Info_UScriptStruct_TimedDataMonitorChannelIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedDataMonitorChannelIdentifier), 3757870906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorTypes_h_4105525298(TEXT("/Script/TimedDataMonitor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitor_Public_TimedDataMonitorTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
