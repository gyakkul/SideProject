// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenColorIOSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOSettings();
	OPENCOLORIO_API UClass* Z_Construct_UClass_UOpenColorIOSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenColorIO();
// End Cross Module References
	void UOpenColorIOSettings::StaticRegisterNativesUOpenColorIOSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOSettings);
	UClass* Z_Construct_UClass_UOpenColorIOSettings_NoRegister()
	{
		return UOpenColorIOSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyProcessor_MetaData[];
#endif
		static void NewProp_bUseLegacyProcessor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyProcessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUse32fLUT_MetaData[];
#endif
		static void NewProp_bUse32fLUT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse32fLUT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportInverseViewTransforms_MetaData[];
#endif
		static void NewProp_bSupportInverseViewTransforms_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportInverseViewTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIO,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rendering settings.\n */" },
		{ "IncludePath", "OpenColorIOSettings.h" },
		{ "ModuleRelativePath", "Public/OpenColorIOSettings.h" },
		{ "ToolTip", "Rendering settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor_MetaData[] = {
		{ "Category", "Transform" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Legacy Gpu Processor" },
		{ "ModuleRelativePath", "Public/OpenColorIOSettings.h" },
		{ "ToolTip", "Whether to enable OCIO V1's legacy gpu processor." },
	};
#endif
	void Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor_SetBit(void* Obj)
	{
		((UOpenColorIOSettings*)Obj)->bUseLegacyProcessor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor = { "bUseLegacyProcessor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UOpenColorIOSettings), &Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT_MetaData[] = {
		{ "Category", "Transform" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "32-bit float LUTs" },
		{ "ModuleRelativePath", "Public/OpenColorIOSettings.h" },
		{ "ToolTip", "Whether to create lookup table texture resources in 32-bit float format (higher performance requirements)." },
	};
#endif
	void Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT_SetBit(void* Obj)
	{
		((UOpenColorIOSettings*)Obj)->bUse32fLUT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT = { "bUse32fLUT", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UOpenColorIOSettings), &Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms_MetaData[] = {
		{ "Category", "Transform" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Support inverse view transforms" },
		{ "ModuleRelativePath", "Public/OpenColorIOSettings.h" },
		{ "ToolTip", "Whether inverse view transforms are cached and supported. Disabled by default, to minimize the number of transform combinations." },
	};
#endif
	void Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms_SetBit(void* Obj)
	{
		((UOpenColorIOSettings*)Obj)->bSupportInverseViewTransforms = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms = { "bSupportInverseViewTransforms", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UOpenColorIOSettings), &Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenColorIOSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUseLegacyProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bUse32fLUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOSettings_Statics::NewProp_bSupportInverseViewTransforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOSettings_Statics::ClassParams = {
		&UOpenColorIOSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenColorIOSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenColorIOSettings()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOSettings.OuterSingleton, Z_Construct_UClass_UOpenColorIOSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOSettings.OuterSingleton;
	}
	template<> OPENCOLORIO_API UClass* StaticClass<UOpenColorIOSettings>()
	{
		return UOpenColorIOSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOSettings);
	UOpenColorIOSettings::~UOpenColorIOSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOSettings, UOpenColorIOSettings::StaticClass, TEXT("UOpenColorIOSettings"), &Z_Registration_Info_UClass_UOpenColorIOSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOSettings), 1402676775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_1491810302(TEXT("/Script/OpenColorIO"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIO_Public_OpenColorIOSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
