// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HardwareTargetingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareTargetingSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HARDWARETARGETING_API UClass* Z_Construct_UClass_UHardwareTargetingSettings();
	HARDWARETARGETING_API UClass* Z_Construct_UClass_UHardwareTargetingSettings_NoRegister();
	HARDWARETARGETING_API UEnum* Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset();
	HARDWARETARGETING_API UEnum* Z_Construct_UEnum_HardwareTargeting_EHardwareClass();
	UPackage* Z_Construct_UPackage__Script_HardwareTargeting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHardwareClass;
	static UEnum* EHardwareClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHardwareClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHardwareClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HardwareTargeting_EHardwareClass, (UObject*)Z_Construct_UPackage__Script_HardwareTargeting(), TEXT("EHardwareClass"));
		}
		return Z_Registration_Info_UEnum_EHardwareClass.OuterSingleton;
	}
	template<> HARDWARETARGETING_API UEnum* StaticEnum<EHardwareClass>()
	{
		return EHardwareClass_StaticEnum();
	}
	struct Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::Enumerators[] = {
		{ "EHardwareClass::Unspecified", (int64)EHardwareClass::Unspecified },
		{ "EHardwareClass::Desktop", (int64)EHardwareClass::Desktop },
		{ "EHardwareClass::Mobile", (int64)EHardwareClass::Mobile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum specifying a class of hardware */" },
		{ "Desktop.Comment", "/** Desktop or console */" },
		{ "Desktop.Name", "EHardwareClass::Desktop" },
		{ "Desktop.ToolTip", "Desktop or console" },
		{ "Mobile.Comment", "/** Mobile or tablet */" },
		{ "Mobile.Name", "EHardwareClass::Mobile" },
		{ "Mobile.ToolTip", "Mobile or tablet" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum specifying a class of hardware" },
		{ "Unspecified.Comment", "/** Unspecified, meaning no choice has been made yet */" },
		{ "Unspecified.Hidden", "" },
		{ "Unspecified.Name", "EHardwareClass::Unspecified" },
		{ "Unspecified.ToolTip", "Unspecified, meaning no choice has been made yet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HardwareTargeting,
		nullptr,
		"EHardwareClass",
		"EHardwareClass",
		Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HardwareTargeting_EHardwareClass()
	{
		if (!Z_Registration_Info_UEnum_EHardwareClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHardwareClass.InnerSingleton, Z_Construct_UEnum_HardwareTargeting_EHardwareClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHardwareClass.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGraphicsPreset;
	static UEnum* EGraphicsPreset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGraphicsPreset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGraphicsPreset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset, (UObject*)Z_Construct_UPackage__Script_HardwareTargeting(), TEXT("EGraphicsPreset"));
		}
		return Z_Registration_Info_UEnum_EGraphicsPreset.OuterSingleton;
	}
	template<> HARDWARETARGETING_API UEnum* StaticEnum<EGraphicsPreset>()
	{
		return EGraphicsPreset_StaticEnum();
	}
	struct Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::Enumerators[] = {
		{ "EGraphicsPreset::Unspecified", (int64)EGraphicsPreset::Unspecified },
		{ "EGraphicsPreset::Maximum", (int64)EGraphicsPreset::Maximum },
		{ "EGraphicsPreset::Scalable", (int64)EGraphicsPreset::Scalable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum specifying a graphics preset preference */" },
		{ "Maximum.Comment", "/** Maximum quality - High-end features default to enabled */" },
		{ "Maximum.Name", "EGraphicsPreset::Maximum" },
		{ "Maximum.ToolTip", "Maximum quality - High-end features default to enabled" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "Scalable.Comment", "/** Scalable quality - Some features are disabled by default but can be enabled based on the actual hardware */" },
		{ "Scalable.Name", "EGraphicsPreset::Scalable" },
		{ "Scalable.ToolTip", "Scalable quality - Some features are disabled by default but can be enabled based on the actual hardware" },
		{ "ToolTip", "Enum specifying a graphics preset preference" },
		{ "Unspecified.Comment", "/** Unspecified, meaning no choice has been made yet */" },
		{ "Unspecified.Hidden", "" },
		{ "Unspecified.Name", "EGraphicsPreset::Unspecified" },
		{ "Unspecified.ToolTip", "Unspecified, meaning no choice has been made yet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HardwareTargeting,
		nullptr,
		"EGraphicsPreset",
		"EGraphicsPreset",
		Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset()
	{
		if (!Z_Registration_Info_UEnum_EGraphicsPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGraphicsPreset.InnerSingleton, Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGraphicsPreset.InnerSingleton;
	}
	void UHardwareTargetingSettings::StaticRegisterNativesUHardwareTargetingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHardwareTargetingSettings);
	UClass* Z_Construct_UClass_UHardwareTargetingSettings_NoRegister()
	{
		return UHardwareTargetingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHardwareTargetingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetedHardwareClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetedHardwareClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetedHardwareClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AppliedTargetedHardwareClass_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedTargetedHardwareClass_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AppliedTargetedHardwareClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGraphicsPerformance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGraphicsPerformance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGraphicsPerformance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AppliedDefaultGraphicsPerformance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedDefaultGraphicsPerformance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AppliedDefaultGraphicsPerformance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHardwareTargetingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HardwareTargeting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Hardware targeting settings, stored in default config, per-project */" },
		{ "IncludePath", "HardwareTargetingSettings.h" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Hardware targeting settings, stored in default config, per-project" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_MetaData[] = {
		{ "Category", "None" },
		{ "Comment", "/** Enum specifying which class of hardware this game is targeting */" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum specifying which class of hardware this game is targeting" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass = { "TargetedHardwareClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardwareTargetingSettings, TargetedHardwareClass), Z_Construct_UEnum_HardwareTargeting_EHardwareClass, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_MetaData)) }; // 929139696
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_MetaData[] = {
		{ "Comment", "/** Enum that is set to TargetedHardwareClass when the settings have been successfully applied */" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum that is set to TargetedHardwareClass when the settings have been successfully applied" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass = { "AppliedTargetedHardwareClass", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardwareTargetingSettings, AppliedTargetedHardwareClass), Z_Construct_UEnum_HardwareTargeting_EHardwareClass, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_MetaData)) }; // 929139696
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_MetaData[] = {
		{ "Category", "None" },
		{ "Comment", "/** Enum specifying a graphics preset to use for this game */" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum specifying a graphics preset to use for this game" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance = { "DefaultGraphicsPerformance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardwareTargetingSettings, DefaultGraphicsPerformance), Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_MetaData)) }; // 2953303505
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_MetaData[] = {
		{ "Comment", "/** Enum that is set to DefaultGraphicsPerformance when the settings have been successfully applied */" },
		{ "ModuleRelativePath", "Public/HardwareTargetingSettings.h" },
		{ "ToolTip", "Enum that is set to DefaultGraphicsPerformance when the settings have been successfully applied" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance = { "AppliedDefaultGraphicsPerformance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHardwareTargetingSettings, AppliedDefaultGraphicsPerformance), Z_Construct_UEnum_HardwareTargeting_EGraphicsPreset, METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_MetaData)) }; // 2953303505
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHardwareTargetingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_TargetedHardwareClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedTargetedHardwareClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_DefaultGraphicsPerformance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHardwareTargetingSettings_Statics::NewProp_AppliedDefaultGraphicsPerformance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHardwareTargetingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHardwareTargetingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHardwareTargetingSettings_Statics::ClassParams = {
		&UHardwareTargetingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHardwareTargetingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UHardwareTargetingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHardwareTargetingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHardwareTargetingSettings()
	{
		if (!Z_Registration_Info_UClass_UHardwareTargetingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHardwareTargetingSettings.OuterSingleton, Z_Construct_UClass_UHardwareTargetingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHardwareTargetingSettings.OuterSingleton;
	}
	template<> HARDWARETARGETING_API UClass* StaticClass<UHardwareTargetingSettings>()
	{
		return UHardwareTargetingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHardwareTargetingSettings);
	UHardwareTargetingSettings::~UHardwareTargetingSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics::EnumInfo[] = {
		{ EHardwareClass_StaticEnum, TEXT("EHardwareClass"), &Z_Registration_Info_UEnum_EHardwareClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 929139696U) },
		{ EGraphicsPreset_StaticEnum, TEXT("EGraphicsPreset"), &Z_Registration_Info_UEnum_EGraphicsPreset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2953303505U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHardwareTargetingSettings, UHardwareTargetingSettings::StaticClass, TEXT("UHardwareTargetingSettings"), &Z_Registration_Info_UClass_UHardwareTargetingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHardwareTargetingSettings), 2476317399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_2561723997(TEXT("/Script/HardwareTargeting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
