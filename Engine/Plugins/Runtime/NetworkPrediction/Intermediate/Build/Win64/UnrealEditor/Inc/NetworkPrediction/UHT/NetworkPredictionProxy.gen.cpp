// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionProxy() {}
// Cross Module References
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister();
	NETWORKPREDICTION_API UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionProxy();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkPredictionStateRead;
	static UEnum* ENetworkPredictionStateRead_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionStateRead.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkPredictionStateRead.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("ENetworkPredictionStateRead"));
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionStateRead.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UEnum* StaticEnum<ENetworkPredictionStateRead>()
	{
		return ENetworkPredictionStateRead_StaticEnum();
	}
	struct Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::Enumerators[] = {
		{ "ENetworkPredictionStateRead::Simulation", (int64)ENetworkPredictionStateRead::Simulation },
		{ "ENetworkPredictionStateRead::Presentation", (int64)ENetworkPredictionStateRead::Presentation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionProxy.h" },
		{ "Presentation.Comment", "// The local \"smoothed\" or \"corrected\" state values. If no explicit presentation value is set, Simulation value is implied.\n// Presentation values never feed back into the simulation.\n" },
		{ "Presentation.Name", "ENetworkPredictionStateRead::Presentation" },
		{ "Presentation.ToolTip", "The local \"smoothed\" or \"corrected\" state values. If no explicit presentation value is set, Simulation value is implied.\nPresentation values never feed back into the simulation." },
		{ "Simulation.Comment", "// The authoritative, networked state values.\n" },
		{ "Simulation.Name", "ENetworkPredictionStateRead::Simulation" },
		{ "Simulation.ToolTip", "The authoritative, networked state values." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		"ENetworkPredictionStateRead",
		"ENetworkPredictionStateRead",
		Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionStateRead.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkPredictionStateRead.InnerSingleton, Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionStateRead_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionStateRead.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPredictionProxy;
class UScriptStruct* FNetworkPredictionProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPredictionProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPredictionProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPredictionProxy, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("NetworkPredictionProxy"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPredictionProxy.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FNetworkPredictionProxy>()
{
	return FNetworkPredictionProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPredictionProxy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewProp_WorldManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewProp_WorldManager = { "WorldManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionProxy, WorldManager), Z_Construct_UClass_UNetworkPredictionWorldManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewProp_WorldManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewProp_WorldManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewProp_WorldManager,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"NetworkPredictionProxy",
		sizeof(FNetworkPredictionProxy),
		alignof(FNetworkPredictionProxy),
		Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkPredictionProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPredictionProxy.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkPredictionProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics::EnumInfo[] = {
		{ ENetworkPredictionStateRead_StaticEnum, TEXT("ENetworkPredictionStateRead"), &Z_Registration_Info_UEnum_ENetworkPredictionStateRead, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1963822938U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics::ScriptStructInfo[] = {
		{ FNetworkPredictionProxy::StaticStruct, Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics::NewStructOps, TEXT("NetworkPredictionProxy"), &Z_Registration_Info_UScriptStruct_NetworkPredictionProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPredictionProxy), 3814517317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_2619775023(TEXT("/Script/NetworkPrediction"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
