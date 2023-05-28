// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesIOSSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesIOSSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOCATIONSERVICESIOSEDITOR_API UClass* Z_Construct_UClass_ULocationServicesIOSSettings();
	LOCATIONSERVICESIOSEDITOR_API UClass* Z_Construct_UClass_ULocationServicesIOSSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LocationServicesIOSEditor();
// End Cross Module References
	void ULocationServicesIOSSettings::StaticRegisterNativesULocationServicesIOSSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationServicesIOSSettings);
	UClass* Z_Construct_UClass_ULocationServicesIOSSettings_NoRegister()
	{
		return ULocationServicesIOSSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULocationServicesIOSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationAlwaysUsageDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationAlwaysUsageDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationWhenInUseDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocationWhenInUseDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationServicesIOSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesIOSEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesIOSSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesIOSSettings.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesIOSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationAlwaysUsageDescription_MetaData[] = {
		{ "Category", "LocationServices" },
		{ "Comment", "/* Text to display when requesting permission for Location Services */" },
		{ "DisplayName", "Location Services Always Use Permission Text" },
		{ "ModuleRelativePath", "Classes/LocationServicesIOSSettings.h" },
		{ "ToolTip", "Text to display when requesting permission for Location Services" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationAlwaysUsageDescription = { "LocationAlwaysUsageDescription", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocationServicesIOSSettings, LocationAlwaysUsageDescription), METADATA_PARAMS(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationAlwaysUsageDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationAlwaysUsageDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationWhenInUseDescription_MetaData[] = {
		{ "Category", "LocationServices" },
		{ "Comment", "/* Text to display when requesting permission for Location Services */" },
		{ "DisplayName", "Location Services In-Use Permission Text" },
		{ "ModuleRelativePath", "Classes/LocationServicesIOSSettings.h" },
		{ "ToolTip", "Text to display when requesting permission for Location Services" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationWhenInUseDescription = { "LocationWhenInUseDescription", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocationServicesIOSSettings, LocationWhenInUseDescription), METADATA_PARAMS(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationWhenInUseDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationWhenInUseDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocationServicesIOSSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationAlwaysUsageDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesIOSSettings_Statics::NewProp_LocationWhenInUseDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationServicesIOSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServicesIOSSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationServicesIOSSettings_Statics::ClassParams = {
		&ULocationServicesIOSSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocationServicesIOSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesIOSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationServicesIOSSettings()
	{
		if (!Z_Registration_Info_UClass_ULocationServicesIOSSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationServicesIOSSettings.OuterSingleton, Z_Construct_UClass_ULocationServicesIOSSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocationServicesIOSSettings.OuterSingleton;
	}
	template<> LOCATIONSERVICESIOSEDITOR_API UClass* StaticClass<ULocationServicesIOSSettings>()
	{
		return ULocationServicesIOSSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServicesIOSSettings);
	ULocationServicesIOSSettings::~ULocationServicesIOSSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesIOSImpl_Source_LocationServicesIOSEditor_Classes_LocationServicesIOSSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesIOSImpl_Source_LocationServicesIOSEditor_Classes_LocationServicesIOSSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocationServicesIOSSettings, ULocationServicesIOSSettings::StaticClass, TEXT("ULocationServicesIOSSettings"), &Z_Registration_Info_UClass_ULocationServicesIOSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationServicesIOSSettings), 4133263400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesIOSImpl_Source_LocationServicesIOSEditor_Classes_LocationServicesIOSSettings_h_2497005008(TEXT("/Script/LocationServicesIOSEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesIOSImpl_Source_LocationServicesIOSEditor_Classes_LocationServicesIOSSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_LocationServicesIOSImpl_Source_LocationServicesIOSEditor_Classes_LocationServicesIOSSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
