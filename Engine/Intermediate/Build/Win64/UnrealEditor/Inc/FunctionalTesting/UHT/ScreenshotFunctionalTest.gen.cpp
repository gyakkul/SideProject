// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenshotFunctionalTest.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotFunctionalTest() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void AScreenshotFunctionalTest::StaticRegisterNativesAScreenshotFunctionalTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScreenshotFunctionalTest);
	UClass* Z_Construct_UClass_AScreenshotFunctionalTest_NoRegister()
	{
		return AScreenshotFunctionalTest::StaticClass();
	}
	struct Z_Construct_UClass_AScreenshotFunctionalTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCameraCutOnScreenshotPrep_MetaData[];
#endif
		static void NewProp_bCameraCutOnScreenshotPrep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutOnScreenshotPrep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScreenshotFunctionalTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScreenshotFunctionalTestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * No UI\n */" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "ScreenshotFunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "No UI" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Tests not relying on temporal effects can force a camera cut to flush stale data\n" },
		{ "ModuleRelativePath", "Classes/ScreenshotFunctionalTest.h" },
		{ "ToolTip", "Tests not relying on temporal effects can force a camera cut to flush stale data" },
	};
#endif
	void Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_SetBit(void* Obj)
	{
		((AScreenshotFunctionalTest*)Obj)->bCameraCutOnScreenshotPrep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep = { "bCameraCutOnScreenshotPrep", nullptr, (EPropertyFlags)0x0010020000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AScreenshotFunctionalTest), &Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_SetBit, METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScreenshotFunctionalTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScreenshotFunctionalTest_Statics::NewProp_bCameraCutOnScreenshotPrep,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScreenshotFunctionalTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScreenshotFunctionalTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScreenshotFunctionalTest_Statics::ClassParams = {
		&AScreenshotFunctionalTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AScreenshotFunctionalTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScreenshotFunctionalTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScreenshotFunctionalTest()
	{
		if (!Z_Registration_Info_UClass_AScreenshotFunctionalTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScreenshotFunctionalTest.OuterSingleton, Z_Construct_UClass_AScreenshotFunctionalTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScreenshotFunctionalTest.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<AScreenshotFunctionalTest>()
	{
		return AScreenshotFunctionalTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScreenshotFunctionalTest);
	AScreenshotFunctionalTest::~AScreenshotFunctionalTest() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AScreenshotFunctionalTest)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScreenshotFunctionalTest, AScreenshotFunctionalTest::StaticClass, TEXT("AScreenshotFunctionalTest"), &Z_Registration_Info_UClass_AScreenshotFunctionalTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScreenshotFunctionalTest), 1359574421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h_1153267444(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_ScreenshotFunctionalTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
