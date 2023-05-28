// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QosBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosBeaconHost() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	QOS_API UClass* Z_Construct_UClass_AQosBeaconHost();
	QOS_API UClass* Z_Construct_UClass_AQosBeaconHost_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References
	void AQosBeaconHost::StaticRegisterNativesAQosBeaconHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQosBeaconHost);
	UClass* Z_Construct_UClass_AQosBeaconHost_NoRegister()
	{
		return AQosBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_AQosBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQosBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQosBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host listening for Qos requests from a potential client\n */" },
		{ "IncludePath", "QosBeaconHost.h" },
		{ "ModuleRelativePath", "Public/QosBeaconHost.h" },
		{ "ToolTip", "A beacon host listening for Qos requests from a potential client" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQosBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQosBeaconHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQosBeaconHost_Statics::ClassParams = {
		&AQosBeaconHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AQosBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQosBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQosBeaconHost()
	{
		if (!Z_Registration_Info_UClass_AQosBeaconHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQosBeaconHost.OuterSingleton, Z_Construct_UClass_AQosBeaconHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQosBeaconHost.OuterSingleton;
	}
	template<> QOS_API UClass* StaticClass<AQosBeaconHost>()
	{
		return AQosBeaconHost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQosBeaconHost);
	AQosBeaconHost::~AQosBeaconHost() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQosBeaconHost, AQosBeaconHost::StaticClass, TEXT("AQosBeaconHost"), &Z_Registration_Info_UClass_AQosBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQosBeaconHost), 2209734876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_3256294748(TEXT("/Script/Qos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconHost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
