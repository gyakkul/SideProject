// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AutomationViewSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationViewSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationViewSettings();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationViewSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	void UAutomationViewSettings::StaticRegisterNativesUAutomationViewSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationViewSettings);
	UClass* Z_Construct_UClass_UAutomationViewSettings_NoRegister()
	{
		return UAutomationViewSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationViewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_MetaData[];
#endif
		static void NewProp_AntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlur_MetaData[];
#endif
		static void NewProp_MotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporalAA_MetaData[];
#endif
		static void NewProp_TemporalAA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TemporalAA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceReflections_MetaData[];
#endif
		static void NewProp_ScreenSpaceReflections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScreenSpaceReflections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpaceAO_MetaData[];
#endif
		static void NewProp_ScreenSpaceAO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScreenSpaceAO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldAO_MetaData[];
#endif
		static void NewProp_DistanceFieldAO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DistanceFieldAO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadows_MetaData[];
#endif
		static void NewProp_ContactShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ContactShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeAdaptation_MetaData[];
#endif
		static void NewProp_EyeAdaptation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EyeAdaptation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[];
#endif
		static void NewProp_Bloom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bloom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationViewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AutomationViewSettings.h" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->AntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->MotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->TemporalAA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA = { "TemporalAA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->ScreenSpaceReflections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections = { "ScreenSpaceReflections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->ScreenSpaceAO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO = { "ScreenSpaceAO", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->DistanceFieldAO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO = { "DistanceFieldAO", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->ContactShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows = { "ContactShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->EyeAdaptation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation = { "EyeAdaptation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/AutomationViewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_SetBit(void* Obj)
	{
		((UAutomationViewSettings*)Obj)->Bloom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAutomationViewSettings), &Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_AntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_MotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_TemporalAA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceReflections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ScreenSpaceAO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_DistanceFieldAO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_ContactShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_EyeAdaptation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutomationViewSettings_Statics::NewProp_Bloom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationViewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationViewSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationViewSettings_Statics::ClassParams = {
		&UAutomationViewSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationViewSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationViewSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationViewSettings()
	{
		if (!Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton, Z_Construct_UClass_UAutomationViewSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationViewSettings.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationViewSettings>()
	{
		return UAutomationViewSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationViewSettings);
	UAutomationViewSettings::~UAutomationViewSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationViewSettings, UAutomationViewSettings::StaticClass, TEXT("UAutomationViewSettings"), &Z_Registration_Info_UClass_UAutomationViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationViewSettings), 945037557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_3570463396(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationViewSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
