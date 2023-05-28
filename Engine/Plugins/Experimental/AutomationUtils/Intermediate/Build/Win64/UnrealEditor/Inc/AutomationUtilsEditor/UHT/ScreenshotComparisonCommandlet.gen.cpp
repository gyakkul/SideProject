// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenshotComparisonCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenshotComparisonCommandlet() {}
// Cross Module References
	AUTOMATIONUTILSEDITOR_API UClass* Z_Construct_UClass_UScreenshotComparisonCommandlet();
	AUTOMATIONUTILSEDITOR_API UClass* Z_Construct_UClass_UScreenshotComparisonCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AutomationUtilsEditor();
// End Cross Module References
	void UScreenshotComparisonCommandlet::StaticRegisterNativesUScreenshotComparisonCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenshotComparisonCommandlet);
	UClass* Z_Construct_UClass_UScreenshotComparisonCommandlet_NoRegister()
	{
		return UScreenshotComparisonCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationUtilsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenshotComparisonCommandlet.h" },
		{ "ModuleRelativePath", "Public/ScreenshotComparisonCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenshotComparisonCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::ClassParams = {
		&UScreenshotComparisonCommandlet::StaticClass,
		"Editor",
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
		METADATA_PARAMS(Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenshotComparisonCommandlet()
	{
		if (!Z_Registration_Info_UClass_UScreenshotComparisonCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenshotComparisonCommandlet.OuterSingleton, Z_Construct_UClass_UScreenshotComparisonCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScreenshotComparisonCommandlet.OuterSingleton;
	}
	template<> AUTOMATIONUTILSEDITOR_API UClass* StaticClass<UScreenshotComparisonCommandlet>()
	{
		return UScreenshotComparisonCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenshotComparisonCommandlet);
	UScreenshotComparisonCommandlet::~UScreenshotComparisonCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScreenshotComparisonCommandlet, UScreenshotComparisonCommandlet::StaticClass, TEXT("UScreenshotComparisonCommandlet"), &Z_Registration_Info_UClass_UScreenshotComparisonCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenshotComparisonCommandlet), 2866157601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_3798198483(TEXT("/Script/AutomationUtilsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AutomationUtils_Source_AutomationUtilsEditor_Public_ScreenshotComparisonCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
