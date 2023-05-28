// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OpenColorIOEditorSettings.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOLevelViewportSettings();
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOLevelViewportSettings_NoRegister();
	OPENCOLORIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair();
	UPackage* Z_Construct_UPackage__Script_OpenColorIOEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair;
class UScriptStruct* FPerViewportDisplaySettingPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair, (UObject*)Z_Construct_UPackage__Script_OpenColorIOEditor(), TEXT("PerViewportDisplaySettingPair"));
	}
	return Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair.OuterSingleton;
}
template<> OPENCOLORIOEDITOR_API UScriptStruct* StaticStruct<FPerViewportDisplaySettingPair>()
{
	return FPerViewportDisplaySettingPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/OpenColorIOEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerViewportDisplaySettingPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_ViewportIdentifier_MetaData[] = {
		{ "Comment", "/*  Name associated with this viewport's layout to identify it. */" },
		{ "ModuleRelativePath", "Private/OpenColorIOEditorSettings.h" },
		{ "ToolTip", "Name associated with this viewport's layout to identify it." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_ViewportIdentifier = { "ViewportIdentifier", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerViewportDisplaySettingPair, ViewportIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_ViewportIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_ViewportIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_DisplayConfiguration_MetaData[] = {
		{ "Comment", "/* Display configuration for a given viewport */" },
		{ "ModuleRelativePath", "Private/OpenColorIOEditorSettings.h" },
		{ "ToolTip", "Display configuration for a given viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_DisplayConfiguration = { "DisplayConfiguration", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerViewportDisplaySettingPair, DisplayConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_DisplayConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_DisplayConfiguration_MetaData)) }; // 2343336179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_ViewportIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewProp_DisplayConfiguration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIOEditor,
		nullptr,
		&NewStructOps,
		"PerViewportDisplaySettingPair",
		sizeof(FPerViewportDisplaySettingPair),
		alignof(FPerViewportDisplaySettingPair),
		Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair()
	{
		if (!Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair.InnerSingleton, Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair.InnerSingleton;
	}
	void UOpenColorIOLevelViewportSettings::StaticRegisterNativesUOpenColorIOLevelViewportSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOLevelViewportSettings);
	UClass* Z_Construct_UClass_UOpenColorIOLevelViewportSettings_NoRegister()
	{
		return UOpenColorIOLevelViewportSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportsSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ViewportsSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIOEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * List of settings associated to level viewport instances linked with an identifier\n */" },
		{ "IncludePath", "OpenColorIOEditorSettings.h" },
		{ "ModuleRelativePath", "Private/OpenColorIOEditorSettings.h" },
		{ "ToolTip", "List of settings associated to level viewport instances linked with an identifier" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings_Inner = { "ViewportsSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair, METADATA_PARAMS(nullptr, 0) }; // 101423320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings_MetaData[] = {
		{ "Comment", "/** Settings associated to each viewport that was configured */" },
		{ "ModuleRelativePath", "Private/OpenColorIOEditorSettings.h" },
		{ "ToolTip", "Settings associated to each viewport that was configured" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings = { "ViewportsSettings", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenColorIOLevelViewportSettings, ViewportsSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings_MetaData)) }; // 101423320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::NewProp_ViewportsSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOLevelViewportSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::ClassParams = {
		&UOpenColorIOLevelViewportSettings::StaticClass,
		"OpenColorIO",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenColorIOLevelViewportSettings()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOLevelViewportSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOLevelViewportSettings.OuterSingleton, Z_Construct_UClass_UOpenColorIOLevelViewportSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOLevelViewportSettings.OuterSingleton;
	}
	template<> OPENCOLORIOEDITOR_API UClass* StaticClass<UOpenColorIOLevelViewportSettings>()
	{
		return UOpenColorIOLevelViewportSettings::StaticClass();
	}
	UOpenColorIOLevelViewportSettings::UOpenColorIOLevelViewportSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOLevelViewportSettings);
	UOpenColorIOLevelViewportSettings::~UOpenColorIOLevelViewportSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FPerViewportDisplaySettingPair::StaticStruct, Z_Construct_UScriptStruct_FPerViewportDisplaySettingPair_Statics::NewStructOps, TEXT("PerViewportDisplaySettingPair"), &Z_Registration_Info_UScriptStruct_PerViewportDisplaySettingPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerViewportDisplaySettingPair), 101423320U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOLevelViewportSettings, UOpenColorIOLevelViewportSettings::StaticClass, TEXT("UOpenColorIOLevelViewportSettings"), &Z_Registration_Info_UClass_UOpenColorIOLevelViewportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOLevelViewportSettings), 259610516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_585444949(TEXT("/Script/OpenColorIOEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_OpenColorIOEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
