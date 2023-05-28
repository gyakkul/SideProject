// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTests/NetBitsTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBitsTest() {}
// Cross Module References
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest();
	NUTUNREALENGINE_API UClass* Z_Construct_UClass_UNetBitsTest();
	NUTUNREALENGINE_API UClass* Z_Construct_UClass_UNetBitsTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NUTUnrealEngine();
// End Cross Module References
	void UNetBitsTest::StaticRegisterNativesUNetBitsTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetBitsTest);
	UClass* Z_Construct_UClass_UNetBitsTest_NoRegister()
	{
		return UNetBitsTest::StaticClass();
	}
	struct Z_Construct_UClass_UNetBitsTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetBitsTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUnitTest,
		(UObject* (*)())Z_Construct_UPackage__Script_NUTUnrealEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetBitsTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @todo JohnB\n */" },
		{ "IncludePath", "UnitTests/NetBitsTest.h" },
		{ "ModuleRelativePath", "Classes/UnitTests/NetBitsTest.h" },
		{ "ToolTip", "@todo JohnB" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetBitsTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetBitsTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetBitsTest_Statics::ClassParams = {
		&UNetBitsTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetBitsTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetBitsTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetBitsTest()
	{
		if (!Z_Registration_Info_UClass_UNetBitsTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetBitsTest.OuterSingleton, Z_Construct_UClass_UNetBitsTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetBitsTest.OuterSingleton;
	}
	template<> NUTUNREALENGINE_API UClass* StaticClass<UNetBitsTest>()
	{
		return UNetBitsTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetBitsTest);
	UNetBitsTest::~UNetBitsTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_NetBitsTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_NetBitsTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetBitsTest, UNetBitsTest::StaticClass, TEXT("UNetBitsTest"), &Z_Registration_Info_UClass_UNetBitsTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetBitsTest), 3369232311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_NetBitsTest_h_278222722(TEXT("/Script/NUTUnrealEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_NetBitsTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NUTUnrealEngine_Source_NUTUnrealEngine_Classes_UnitTests_NetBitsTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
