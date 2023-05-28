// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VisualLogger/VisualLoggerAutomationTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerAutomationTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVisualLoggerAutomationTests::StaticRegisterNativesUVisualLoggerAutomationTests()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerAutomationTests);
	UClass* Z_Construct_UClass_UVisualLoggerAutomationTests_NoRegister()
	{
		return UVisualLoggerAutomationTests::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerAutomationTests_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "UObject" },
		{ "IncludePath", "VisualLogger/VisualLoggerAutomationTests.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerAutomationTests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerAutomationTests>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::ClassParams = {
		&UVisualLoggerAutomationTests::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerAutomationTests()
	{
		if (!Z_Registration_Info_UClass_UVisualLoggerAutomationTests.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerAutomationTests.OuterSingleton, Z_Construct_UClass_UVisualLoggerAutomationTests_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisualLoggerAutomationTests.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVisualLoggerAutomationTests>()
	{
		return UVisualLoggerAutomationTests::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerAutomationTests);
	UVisualLoggerAutomationTests::~UVisualLoggerAutomationTests() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerAutomationTests, UVisualLoggerAutomationTests::StaticClass, TEXT("UVisualLoggerAutomationTests"), &Z_Registration_Info_UClass_UVisualLoggerAutomationTests, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerAutomationTests), 1907786607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_3562812169(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerAutomationTests_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
