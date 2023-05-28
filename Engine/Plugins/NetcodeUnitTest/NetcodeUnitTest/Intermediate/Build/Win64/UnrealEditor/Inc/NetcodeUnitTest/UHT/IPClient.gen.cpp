// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/Engine/IPClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPClient() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UClientUnitTest();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UIPClient();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UIPClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UIPClient::StaticRegisterNativesUIPClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPClient);
	UClass* Z_Construct_UClass_UIPClient_NoRegister()
	{
		return UIPClient::StaticClass();
	}
	struct Z_Construct_UClass_UIPClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIPClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClientUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic unit test for launching a server and connecting a client, while verifying that the correct net driver was used,\n * and that the client connected successfully.\n */" },
		{ "IncludePath", "UnitTests/Engine/IPClient.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/Engine/IPClient.h" },
		{ "ToolTip", "Basic unit test for launching a server and connecting a client, while verifying that the correct net driver was used,\nand that the client connected successfully." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIPClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIPClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPClient_Statics::ClassParams = {
		&UIPClient::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIPClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIPClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIPClient()
	{
		if (!Z_Registration_Info_UClass_UIPClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPClient.OuterSingleton, Z_Construct_UClass_UIPClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIPClient.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UIPClient>()
	{
		return UIPClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIPClient);
	UIPClient::~UIPClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_IPClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_IPClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIPClient, UIPClient::StaticClass, TEXT("UIPClient"), &Z_Registration_Info_UClass_UIPClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPClient), 160685981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_IPClient_h_1478790560(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_IPClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_IPClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
