// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SynthesisEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthesisEditorSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SYNTHESISEDITOR_API UClass* Z_Construct_UClass_USynthesisEditorSettings();
	SYNTHESISEDITOR_API UClass* Z_Construct_UClass_USynthesisEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SynthesisEditor();
// End Cross Module References
	void USynthesisEditorSettings::StaticRegisterNativesUSynthesisEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USynthesisEditorSettings);
	UClass* Z_Construct_UClass_USynthesisEditorSettings_NoRegister()
	{
		return USynthesisEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USynthesisEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USynthesisEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SynthesisEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USynthesisEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Synthesis and DSP Plugin" },
		{ "IncludePath", "SynthesisEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/SynthesisEditorSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USynthesisEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USynthesisEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USynthesisEditorSettings_Statics::ClassParams = {
		&USynthesisEditorSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A2u,
		METADATA_PARAMS(Z_Construct_UClass_USynthesisEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USynthesisEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USynthesisEditorSettings()
	{
		if (!Z_Registration_Info_UClass_USynthesisEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USynthesisEditorSettings.OuterSingleton, Z_Construct_UClass_USynthesisEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USynthesisEditorSettings.OuterSingleton;
	}
	template<> SYNTHESISEDITOR_API UClass* StaticClass<USynthesisEditorSettings>()
	{
		return USynthesisEditorSettings::StaticClass();
	}
	USynthesisEditorSettings::USynthesisEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USynthesisEditorSettings);
	USynthesisEditorSettings::~USynthesisEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USynthesisEditorSettings, USynthesisEditorSettings::StaticClass, TEXT("USynthesisEditorSettings"), &Z_Registration_Info_UClass_USynthesisEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USynthesisEditorSettings), 3621945984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_3417700581(TEXT("/Script/SynthesisEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_SynthesisEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
