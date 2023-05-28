// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GooglePADRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGooglePADRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GOOGLEPADEDITOR_API UClass* Z_Construct_UClass_UGooglePADRuntimeSettings();
	GOOGLEPADEDITOR_API UClass* Z_Construct_UClass_UGooglePADRuntimeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GooglePADEditor();
// End Cross Module References
	void UGooglePADRuntimeSettings::StaticRegisterNativesUGooglePADRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGooglePADRuntimeSettings);
	UClass* Z_Construct_UClass_UGooglePADRuntimeSettings_NoRegister()
	{
		return UGooglePADRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGooglePADRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePlugin_MetaData[];
#endif
		static void NewProp_bEnablePlugin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyDistribution_MetaData[];
#endif
		static void NewProp_bOnlyDistribution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyShipping_MetaData[];
#endif
		static void NewProp_bOnlyShipping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyShipping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GooglePADEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the GooglePAD plugin.\n*/" },
		{ "IncludePath", "GooglePADRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/GooglePADRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the GooglePAD plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Enable GooglePAD plugin\n" },
		{ "ModuleRelativePath", "Public/GooglePADRuntimeSettings.h" },
		{ "ToolTip", "Enable GooglePAD plugin" },
	};
#endif
	void Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin_SetBit(void* Obj)
	{
		((UGooglePADRuntimeSettings*)Obj)->bEnablePlugin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin = { "bEnablePlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGooglePADRuntimeSettings), &Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Only for distribution builds\n" },
		{ "ModuleRelativePath", "Public/GooglePADRuntimeSettings.h" },
		{ "ToolTip", "Only for distribution builds" },
	};
#endif
	void Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution_SetBit(void* Obj)
	{
		((UGooglePADRuntimeSettings*)Obj)->bOnlyDistribution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution = { "bOnlyDistribution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGooglePADRuntimeSettings), &Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping_MetaData[] = {
		{ "Category", "Packaging" },
		{ "Comment", "// Only for shipping builds\n" },
		{ "ModuleRelativePath", "Public/GooglePADRuntimeSettings.h" },
		{ "ToolTip", "Only for shipping builds" },
	};
#endif
	void Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping_SetBit(void* Obj)
	{
		((UGooglePADRuntimeSettings*)Obj)->bOnlyShipping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping = { "bOnlyShipping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGooglePADRuntimeSettings), &Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bEnablePlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::NewProp_bOnlyShipping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGooglePADRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::ClassParams = {
		&UGooglePADRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGooglePADRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UGooglePADRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGooglePADRuntimeSettings.OuterSingleton, Z_Construct_UClass_UGooglePADRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGooglePADRuntimeSettings.OuterSingleton;
	}
	template<> GOOGLEPADEDITOR_API UClass* StaticClass<UGooglePADRuntimeSettings>()
	{
		return UGooglePADRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGooglePADRuntimeSettings);
	UGooglePADRuntimeSettings::~UGooglePADRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGooglePADRuntimeSettings, UGooglePADRuntimeSettings::StaticClass, TEXT("UGooglePADRuntimeSettings"), &Z_Registration_Info_UClass_UGooglePADRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGooglePADRuntimeSettings), 4205282333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_2110951851(TEXT("/Script/GooglePADEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GooglePAD_Source_GooglePADEditor_Public_GooglePADRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
