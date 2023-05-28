// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcessUnitTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProcessUnitTest() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UProcessUnitTest();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UProcessUnitTest_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UProcessUnitTest::StaticRegisterNativesUProcessUnitTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProcessUnitTest);
	UClass* Z_Construct_UClass_UProcessUnitTest_NoRegister()
	{
		return UProcessUnitTest::StaticClass();
	}
	struct Z_Construct_UClass_UProcessUnitTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProcessUnitTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProcessUnitTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all unit tests which launch child processes, whether they be UE child processes, or other arbitrary programs.\n *\n * Handles management of child processes, memory usage tracking, log/stdout output gathering/printing, and crash detection.\n */" },
		{ "IncludePath", "ProcessUnitTest.h" },
		{ "ModuleRelativePath", "Classes/ProcessUnitTest.h" },
		{ "ToolTip", "Base class for all unit tests which launch child processes, whether they be UE child processes, or other arbitrary programs.\n\nHandles management of child processes, memory usage tracking, log/stdout output gathering/printing, and crash detection." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProcessUnitTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProcessUnitTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProcessUnitTest_Statics::ClassParams = {
		&UProcessUnitTest::StaticClass,
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
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UProcessUnitTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProcessUnitTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProcessUnitTest()
	{
		if (!Z_Registration_Info_UClass_UProcessUnitTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProcessUnitTest.OuterSingleton, Z_Construct_UClass_UProcessUnitTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProcessUnitTest.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UProcessUnitTest>()
	{
		return UProcessUnitTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProcessUnitTest);
	UProcessUnitTest::~UProcessUnitTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProcessUnitTest, UProcessUnitTest::StaticClass, TEXT("UProcessUnitTest"), &Z_Registration_Info_UClass_UProcessUnitTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProcessUnitTest), 4031722758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_866216324(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_ProcessUnitTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
