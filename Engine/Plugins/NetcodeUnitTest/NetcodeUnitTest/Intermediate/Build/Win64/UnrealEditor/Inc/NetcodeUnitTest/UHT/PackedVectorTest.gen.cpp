// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/Engine/PackedVectorTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackedVectorTest() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UPackedVectorTest();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UPackedVectorTest_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UPackedVectorTest::StaticRegisterNativesUPackedVectorTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPackedVectorTest);
	UClass* Z_Construct_UClass_UPackedVectorTest_NoRegister()
	{
		return UPackedVectorTest::StaticClass();
	}
	struct Z_Construct_UClass_UPackedVectorTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackedVectorTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackedVectorTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic unit test for WritePackedValue and ReadPackedValue\n */" },
		{ "IncludePath", "UnitTests/Engine/PackedVectorTest.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/Engine/PackedVectorTest.h" },
		{ "ToolTip", "Basic unit test for WritePackedValue and ReadPackedValue" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackedVectorTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackedVectorTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPackedVectorTest_Statics::ClassParams = {
		&UPackedVectorTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPackedVectorTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPackedVectorTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackedVectorTest()
	{
		if (!Z_Registration_Info_UClass_UPackedVectorTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPackedVectorTest.OuterSingleton, Z_Construct_UClass_UPackedVectorTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPackedVectorTest.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UPackedVectorTest>()
	{
		return UPackedVectorTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackedVectorTest);
	UPackedVectorTest::~UPackedVectorTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_PackedVectorTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_PackedVectorTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPackedVectorTest, UPackedVectorTest::StaticClass, TEXT("UPackedVectorTest"), &Z_Registration_Info_UClass_UPackedVectorTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPackedVectorTest), 2162169789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_PackedVectorTest_h_2665807552(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_PackedVectorTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTests_Engine_PackedVectorTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
