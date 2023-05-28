// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenXRInputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRInputSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	OPENXRINPUT_API UClass* Z_Construct_UClass_UOpenXRInputSettings();
	OPENXRINPUT_API UClass* Z_Construct_UClass_UOpenXRInputSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OpenXRInput();
// End Cross Module References
	void UOpenXRInputSettings::StaticRegisterNativesUOpenXRInputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRInputSettings);
	UClass* Z_Construct_UClass_UOpenXRInputSettings_NoRegister()
	{
		return UOpenXRInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappableInputConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappableInputConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRInputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for the OpenXR Input plugin.\n*/" },
		{ "IncludePath", "OpenXRInputSettings.h" },
		{ "ModuleRelativePath", "Public/OpenXRInputSettings.h" },
		{ "ToolTip", "Implements the settings for the OpenXR Input plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRInputSettings_Statics::NewProp_MappableInputConfig_MetaData[] = {
		{ "AllowedClasses", "/Script/EnhancedInput.PlayerMappableInputConfig" },
		{ "Category", "Enhanced Input" },
		{ "Comment", "/** Set a mappable input config to allow OpenXR runtimes to remap the Enhanced Input actions. */" },
		{ "DisplayName", "Mappable Input Config for XR" },
		{ "ModuleRelativePath", "Public/OpenXRInputSettings.h" },
		{ "ToolTip", "Set a mappable input config to allow OpenXR runtimes to remap the Enhanced Input actions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOpenXRInputSettings_Statics::NewProp_MappableInputConfig = { "MappableInputConfig", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenXRInputSettings, MappableInputConfig), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UOpenXRInputSettings_Statics::NewProp_MappableInputConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRInputSettings_Statics::NewProp_MappableInputConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRInputSettings_Statics::NewProp_MappableInputConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRInputSettings_Statics::ClassParams = {
		&UOpenXRInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRInputSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRInputSettings()
	{
		if (!Z_Registration_Info_UClass_UOpenXRInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRInputSettings.OuterSingleton, Z_Construct_UClass_UOpenXRInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRInputSettings.OuterSingleton;
	}
	template<> OPENXRINPUT_API UClass* StaticClass<UOpenXRInputSettings>()
	{
		return UOpenXRInputSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRInputSettings);
	UOpenXRInputSettings::~UOpenXRInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRInputSettings, UOpenXRInputSettings::StaticClass, TEXT("UOpenXRInputSettings"), &Z_Registration_Info_UClass_UOpenXRInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRInputSettings), 1679127754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputSettings_h_4157235314(TEXT("/Script/OpenXRInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXR_Source_OpenXRInput_Public_OpenXRInputSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
