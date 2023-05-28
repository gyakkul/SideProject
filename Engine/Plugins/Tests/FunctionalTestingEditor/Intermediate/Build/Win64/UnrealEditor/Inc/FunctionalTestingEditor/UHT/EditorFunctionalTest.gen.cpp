// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorFunctionalTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorFunctionalTest() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTest();
	FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_AEditorFunctionalTest();
	FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_AEditorFunctionalTest_NoRegister();
	FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_AEditorScreenshotFunctionalTest();
	FUNCTIONALTESTINGEDITOR_API UClass* Z_Construct_UClass_AEditorScreenshotFunctionalTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTestingEditor();
// End Cross Module References
	void AEditorFunctionalTest::StaticRegisterNativesAEditorFunctionalTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEditorFunctionalTest);
	UClass* Z_Construct_UClass_AEditorFunctionalTest_NoRegister()
	{
		return AEditorFunctionalTest::StaticClass();
	}
	struct Z_Construct_UClass_AEditorFunctionalTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEditorFunctionalTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTestingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEditorFunctionalTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editor-only version of functional test actor, tests that call editor-only blueprints must inherit from this class */" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "EditorFunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorFunctionalTest.h" },
		{ "ToolTip", "Editor-only version of functional test actor, tests that call editor-only blueprints must inherit from this class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEditorFunctionalTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEditorFunctionalTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEditorFunctionalTest_Statics::ClassParams = {
		&AEditorFunctionalTest::StaticClass,
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
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEditorFunctionalTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEditorFunctionalTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEditorFunctionalTest()
	{
		if (!Z_Registration_Info_UClass_AEditorFunctionalTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEditorFunctionalTest.OuterSingleton, Z_Construct_UClass_AEditorFunctionalTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEditorFunctionalTest.OuterSingleton;
	}
	template<> FUNCTIONALTESTINGEDITOR_API UClass* StaticClass<AEditorFunctionalTest>()
	{
		return AEditorFunctionalTest::StaticClass();
	}
	AEditorFunctionalTest::AEditorFunctionalTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEditorFunctionalTest);
	AEditorFunctionalTest::~AEditorFunctionalTest() {}
	void AEditorScreenshotFunctionalTest::StaticRegisterNativesAEditorScreenshotFunctionalTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEditorScreenshotFunctionalTest);
	UClass* Z_Construct_UClass_AEditorScreenshotFunctionalTest_NoRegister()
	{
		return AEditorScreenshotFunctionalTest::StaticClass();
	}
	struct Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScreenshotFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTestingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editor-only version of screenshot functional test */" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "EditorFunctionalTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorFunctionalTest.h" },
		{ "ToolTip", "Editor-only version of screenshot functional test" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEditorScreenshotFunctionalTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::ClassParams = {
		&AEditorScreenshotFunctionalTest::StaticClass,
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
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEditorScreenshotFunctionalTest()
	{
		if (!Z_Registration_Info_UClass_AEditorScreenshotFunctionalTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEditorScreenshotFunctionalTest.OuterSingleton, Z_Construct_UClass_AEditorScreenshotFunctionalTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEditorScreenshotFunctionalTest.OuterSingleton;
	}
	template<> FUNCTIONALTESTINGEDITOR_API UClass* StaticClass<AEditorScreenshotFunctionalTest>()
	{
		return AEditorScreenshotFunctionalTest::StaticClass();
	}
	AEditorScreenshotFunctionalTest::AEditorScreenshotFunctionalTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEditorScreenshotFunctionalTest);
	AEditorScreenshotFunctionalTest::~AEditorScreenshotFunctionalTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Public_EditorFunctionalTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Public_EditorFunctionalTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEditorFunctionalTest, AEditorFunctionalTest::StaticClass, TEXT("AEditorFunctionalTest"), &Z_Registration_Info_UClass_AEditorFunctionalTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEditorFunctionalTest), 2935685255U) },
		{ Z_Construct_UClass_AEditorScreenshotFunctionalTest, AEditorScreenshotFunctionalTest::StaticClass, TEXT("AEditorScreenshotFunctionalTest"), &Z_Registration_Info_UClass_AEditorScreenshotFunctionalTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEditorScreenshotFunctionalTest), 289356760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Public_EditorFunctionalTest_h_1013233677(TEXT("/Script/FunctionalTestingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Public_EditorFunctionalTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_FunctionalTestingEditor_Source_Public_EditorFunctionalTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
