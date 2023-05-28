// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/OnlineBeacon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeacon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void AOnlineBeacon::StaticRegisterNativesAOnlineBeacon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeacon);
	UClass* Z_Construct_UClass_AOnlineBeacon_NoRegister()
	{
		return AOnlineBeacon::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeacon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeaconConnectionInitialTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeaconConnectionInitialTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeaconConnectionTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BeaconConnectionTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetDriver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeacon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for beacon communication (Unreal Networking, but outside normal gameplay traffic)\n */" },
		{ "IncludePath", "OnlineBeacon.h" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Base class for beacon communication (Unreal Networking, but outside normal gameplay traffic)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout_MetaData[] = {
		{ "Comment", "/** Time beacon will wait to establish a connection with the beacon host */" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Time beacon will wait to establish a connection with the beacon host" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout = { "BeaconConnectionInitialTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOnlineBeacon, BeaconConnectionInitialTimeout), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout_MetaData[] = {
		{ "Comment", "/** Time beacon will wait for packets after establishing a connection before giving up */" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Time beacon will wait for packets after establishing a connection before giving up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout = { "BeaconConnectionTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOnlineBeacon, BeaconConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** Net driver routing network traffic */" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Net driver routing network traffic" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOnlineBeacon, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeacon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeacon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeacon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeacon_Statics::ClassParams = {
		&AOnlineBeacon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOnlineBeacon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBeacon()
	{
		if (!Z_Registration_Info_UClass_AOnlineBeacon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeacon.OuterSingleton, Z_Construct_UClass_AOnlineBeacon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlineBeacon.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeacon>()
	{
		return AOnlineBeacon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeacon);
	AOnlineBeacon::~AOnlineBeacon() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeacon, AOnlineBeacon::StaticClass, TEXT("AOnlineBeacon"), &Z_Registration_Info_UClass_AOnlineBeacon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeacon), 1456505614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_3267052355(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeacon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
