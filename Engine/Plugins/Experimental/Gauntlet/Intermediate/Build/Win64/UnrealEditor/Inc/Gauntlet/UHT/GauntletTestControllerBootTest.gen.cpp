// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GauntletTestControllerBootTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntletTestControllerBootTest() {}
// Cross Module References
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerBootTest();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerBootTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gauntlet();
// End Cross Module References
	void UGauntletTestControllerBootTest::StaticRegisterNativesUGauntletTestControllerBootTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGauntletTestControllerBootTest);
	UClass* Z_Construct_UClass_UGauntletTestControllerBootTest_NoRegister()
	{
		return UGauntletTestControllerBootTest::StaticClass();
	}
	struct Z_Construct_UClass_UGauntletTestControllerBootTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestController,
		(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GauntletTestControllerBootTest.h" },
		{ "ModuleRelativePath", "Public/GauntletTestControllerBootTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGauntletTestControllerBootTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::ClassParams = {
		&UGauntletTestControllerBootTest::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGauntletTestControllerBootTest()
	{
		if (!Z_Registration_Info_UClass_UGauntletTestControllerBootTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGauntletTestControllerBootTest.OuterSingleton, Z_Construct_UClass_UGauntletTestControllerBootTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGauntletTestControllerBootTest.OuterSingleton;
	}
	template<> GAUNTLET_API UClass* StaticClass<UGauntletTestControllerBootTest>()
	{
		return UGauntletTestControllerBootTest::StaticClass();
	}
	UGauntletTestControllerBootTest::UGauntletTestControllerBootTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGauntletTestControllerBootTest);
	UGauntletTestControllerBootTest::~UGauntletTestControllerBootTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGauntletTestControllerBootTest, UGauntletTestControllerBootTest::StaticClass, TEXT("UGauntletTestControllerBootTest"), &Z_Registration_Info_UClass_UGauntletTestControllerBootTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGauntletTestControllerBootTest), 2924760829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_79173290(TEXT("/Script/Gauntlet"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerBootTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
