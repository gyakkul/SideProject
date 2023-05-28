// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestBeaconHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBeaconHost() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconHost();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconHost_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void ATestBeaconHost::StaticRegisterNativesATestBeaconHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestBeaconHost);
	UClass* Z_Construct_UClass_ATestBeaconHost_NoRegister()
	{
		return ATestBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_ATestBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconHostObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "TestBeaconHost.h" },
		{ "ModuleRelativePath", "Classes/TestBeaconHost.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestBeaconHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestBeaconHost_Statics::ClassParams = {
		&ATestBeaconHost::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATestBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestBeaconHost()
	{
		if (!Z_Registration_Info_UClass_ATestBeaconHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestBeaconHost.OuterSingleton, Z_Construct_UClass_ATestBeaconHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestBeaconHost.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ATestBeaconHost>()
	{
		return ATestBeaconHost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestBeaconHost);
	ATestBeaconHost::~ATestBeaconHost() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestBeaconHost, ATestBeaconHost::StaticClass, TEXT("ATestBeaconHost"), &Z_Registration_Info_UClass_ATestBeaconHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestBeaconHost), 583501960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_4007780789(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconHost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
