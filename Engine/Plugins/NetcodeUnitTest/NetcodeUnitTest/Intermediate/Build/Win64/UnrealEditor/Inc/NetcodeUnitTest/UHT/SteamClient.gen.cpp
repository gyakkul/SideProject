// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/Engine/SteamClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamClient() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UIPClient();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_USteamClient();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_USteamClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void USteamClient::StaticRegisterNativesUSteamClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamClient);
	UClass* Z_Construct_UClass_USteamClient_NoRegister()
	{
		return USteamClient::StaticClass();
	}
	struct Z_Construct_UClass_USteamClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIPClient,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic unit test for verifying simple client connection to a server, using the Steam net driver.\n */" },
		{ "IncludePath", "UnitTests/Engine/SteamClient.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/Engine/SteamClient.h" },
		{ "ToolTip", "Basic unit test for verifying simple client connection to a server, using the Steam net driver." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamClient_Statics::ClassParams = {
		&USteamClient::StaticClass,
		"UnitTestStats",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USteamClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamClient()
	{
		if (!Z_Registration_Info_UClass_USteamClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamClient.OuterSingleton, Z_Construct_UClass_USteamClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamClient.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<USteamClient>()
	{
		return USteamClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamClient);
	USteamClient::~USteamClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_SteamClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_SteamClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamClient, USteamClient::StaticClass, TEXT("USteamClient"), &Z_Registration_Info_UClass_USteamClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamClient), 3985749255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_SteamClient_h_2786463279(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_SteamClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_SteamClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
