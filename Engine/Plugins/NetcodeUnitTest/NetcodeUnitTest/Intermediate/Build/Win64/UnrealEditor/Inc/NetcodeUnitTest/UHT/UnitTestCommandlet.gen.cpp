// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTestCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTestCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestCommandlet();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTestCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTestCommandlet::StaticRegisterNativesUUnitTestCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTestCommandlet);
	UClass* Z_Construct_UClass_UUnitTestCommandlet_NoRegister()
	{
		return UUnitTestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A commandlet for running unit tests, without having to launch the game client.\n * Uses a heavily stripped down game client, with allowances for Slate, and some hacks for enabling proper netcode usage.\n *\n * Usage:\n *\x09\"UnrealEditor.exe shootergame -run=NetcodeUnitTest.UnitTestCommandlet\"\n *\n * Parameters:\n *\x09-UnitTest=UnitTestName\n *\x09\x09- Launches only the specified unit test\n *\n *\x09-UnitTestNoAutoClose\n *\x09\x09- Sets the default option for the 'AutoClose' button to False\n *\n *\x09-UnitTestServerParms=\"CommandlineParameters\"\n *\x09\x09- Adds additional commandline parameters to unit test server instances (useful for e.g. unsuppressing specific logs)\n *\n *\x09-UnitTestClientParms=\"CommandlineParameters\"\n *\x09\x09- Adds additional commandline parameters to unit test client instances\n *\n *\x09-UnitTestClientDebug\n *\x09\x09- Launches unit test clients with a valid render interface (so you can interact with the client window), and a larger window\n *\n *\x09-UnitTestCap=x\n *\x09\x09- Caps the maximum number of unit tests that can run at the same time\n */" },
		{ "IncludePath", "UnitTestCommandlet.h" },
		{ "ModuleRelativePath", "Classes/UnitTestCommandlet.h" },
		{ "ToolTip", "A commandlet for running unit tests, without having to launch the game client.\nUses a heavily stripped down game client, with allowances for Slate, and some hacks for enabling proper netcode usage.\n\nUsage:\n    \"UnrealEditor.exe shootergame -run=NetcodeUnitTest.UnitTestCommandlet\"\n\nParameters:\n    -UnitTest=UnitTestName\n            - Launches only the specified unit test\n\n    -UnitTestNoAutoClose\n            - Sets the default option for the 'AutoClose' button to False\n\n    -UnitTestServerParms=\"CommandlineParameters\"\n            - Adds additional commandline parameters to unit test server instances (useful for e.g. unsuppressing specific logs)\n\n    -UnitTestClientParms=\"CommandlineParameters\"\n            - Adds additional commandline parameters to unit test client instances\n\n    -UnitTestClientDebug\n            - Launches unit test clients with a valid render interface (so you can interact with the client window), and a larger window\n\n    -UnitTestCap=x\n            - Caps the maximum number of unit tests that can run at the same time" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTestCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTestCommandlet_Statics::ClassParams = {
		&UUnitTestCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTestCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTestCommandlet()
	{
		if (!Z_Registration_Info_UClass_UUnitTestCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTestCommandlet.OuterSingleton, Z_Construct_UClass_UUnitTestCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTestCommandlet.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTestCommandlet>()
	{
		return UUnitTestCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTestCommandlet);
	UUnitTestCommandlet::~UUnitTestCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTestCommandlet, UUnitTestCommandlet::StaticClass, TEXT("UUnitTestCommandlet"), &Z_Registration_Info_UClass_UUnitTestCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTestCommandlet), 1987281875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_205735056(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
