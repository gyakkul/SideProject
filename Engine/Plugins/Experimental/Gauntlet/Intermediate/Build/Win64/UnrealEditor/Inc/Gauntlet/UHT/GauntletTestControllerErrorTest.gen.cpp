// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GauntletTestControllerErrorTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntletTestControllerErrorTest() {}
// Cross Module References
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestController();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerErrorTest();
	GAUNTLET_API UClass* Z_Construct_UClass_UGauntletTestControllerErrorTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Gauntlet();
// End Cross Module References
	void UGauntletTestControllerErrorTest::StaticRegisterNativesUGauntletTestControllerErrorTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGauntletTestControllerErrorTest);
	UClass* Z_Construct_UClass_UGauntletTestControllerErrorTest_NoRegister()
	{
		return UGauntletTestControllerErrorTest::StaticClass();
	}
	struct Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGauntletTestController,
		(UObject* (*)())Z_Construct_UPackage__Script_Gauntlet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GauntletTestControllerErrorTest.h" },
		{ "ModuleRelativePath", "Public/GauntletTestControllerErrorTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGauntletTestControllerErrorTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::ClassParams = {
		&UGauntletTestControllerErrorTest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGauntletTestControllerErrorTest()
	{
		if (!Z_Registration_Info_UClass_UGauntletTestControllerErrorTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGauntletTestControllerErrorTest.OuterSingleton, Z_Construct_UClass_UGauntletTestControllerErrorTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGauntletTestControllerErrorTest.OuterSingleton;
	}
	template<> GAUNTLET_API UClass* StaticClass<UGauntletTestControllerErrorTest>()
	{
		return UGauntletTestControllerErrorTest::StaticClass();
	}
	UGauntletTestControllerErrorTest::UGauntletTestControllerErrorTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGauntletTestControllerErrorTest);
	UGauntletTestControllerErrorTest::~UGauntletTestControllerErrorTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerErrorTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerErrorTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGauntletTestControllerErrorTest, UGauntletTestControllerErrorTest::StaticClass, TEXT("UGauntletTestControllerErrorTest"), &Z_Registration_Info_UClass_UGauntletTestControllerErrorTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGauntletTestControllerErrorTest), 3836522924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerErrorTest_h_3343412158(TEXT("/Script/Gauntlet"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerErrorTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Gauntlet_Source_Gauntlet_Public_GauntletTestControllerErrorTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
