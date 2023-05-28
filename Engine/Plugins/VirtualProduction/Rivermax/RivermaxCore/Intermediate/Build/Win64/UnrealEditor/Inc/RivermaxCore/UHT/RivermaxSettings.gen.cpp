// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	RIVERMAXCORE_API UClass* Z_Construct_UClass_URivermaxSettings();
	RIVERMAXCORE_API UClass* Z_Construct_UClass_URivermaxSettings_NoRegister();
	RIVERMAXCORE_API UEnum* Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource();
	UPackage* Z_Construct_UPackage__Script_RivermaxCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERivermaxTimeSource;
	static UEnum* ERivermaxTimeSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxTimeSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERivermaxTimeSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource, (UObject*)Z_Construct_UPackage__Script_RivermaxCore(), TEXT("ERivermaxTimeSource"));
		}
		return Z_Registration_Info_UEnum_ERivermaxTimeSource.OuterSingleton;
	}
	template<> RIVERMAXCORE_API UEnum* StaticEnum<ERivermaxTimeSource>()
	{
		return ERivermaxTimeSource_StaticEnum();
	}
	struct Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::Enumerators[] = {
		{ "ERivermaxTimeSource::PTP", (int64)ERivermaxTimeSource::PTP },
		{ "ERivermaxTimeSource::Engine", (int64)ERivermaxTimeSource::Engine },
		{ "ERivermaxTimeSource::System", (int64)ERivermaxTimeSource::System },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::Enum_MetaDataParams[] = {
		{ "Engine.Name", "ERivermaxTimeSource::Engine" },
		{ "ModuleRelativePath", "Public/RivermaxSettings.h" },
		{ "PTP.Name", "ERivermaxTimeSource::PTP" },
		{ "System.Name", "ERivermaxTimeSource::System" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RivermaxCore,
		nullptr,
		"ERivermaxTimeSource",
		"ERivermaxTimeSource",
		Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxTimeSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERivermaxTimeSource.InnerSingleton, Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERivermaxTimeSource.InnerSingleton;
	}
	void URivermaxSettings::StaticRegisterNativesURivermaxSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxSettings);
	UClass* Z_Construct_UClass_URivermaxSettings_NoRegister()
	{
		return URivermaxSettings::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PTPInterfaceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PTPInterfaceAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for Rivermax core plugin. \n */" },
		{ "IncludePath", "RivermaxSettings.h" },
		{ "ModuleRelativePath", "Public/RivermaxSettings.h" },
		{ "ToolTip", "Settings for Rivermax core plugin." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Timing souce to be used by Rivermax scheduler */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/RivermaxSettings.h" },
		{ "ToolTip", "Timing souce to be used by Rivermax scheduler" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource = { "TimeSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxSettings, TimeSource), Z_Construct_UEnum_RivermaxCore_ERivermaxTimeSource, METADATA_PARAMS(Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource_MetaData)) }; // 2159822873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxSettings_Statics::NewProp_PTPInterfaceAddress_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Interface to use when Rivermax timing is configured to use PTP */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "TimeSource == ERivermaxTimeSource::PTP" },
		{ "ModuleRelativePath", "Public/RivermaxSettings.h" },
		{ "ToolTip", "Interface to use when Rivermax timing is configured to use PTP" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivermaxSettings_Statics::NewProp_PTPInterfaceAddress = { "PTPInterfaceAddress", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxSettings, PTPInterfaceAddress), METADATA_PARAMS(Z_Construct_UClass_URivermaxSettings_Statics::NewProp_PTPInterfaceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxSettings_Statics::NewProp_PTPInterfaceAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URivermaxSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxSettings_Statics::NewProp_TimeSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxSettings_Statics::NewProp_PTPInterfaceAddress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxSettings_Statics::ClassParams = {
		&URivermaxSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URivermaxSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URivermaxSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxSettings()
	{
		if (!Z_Registration_Info_UClass_URivermaxSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxSettings.OuterSingleton, Z_Construct_UClass_URivermaxSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxSettings.OuterSingleton;
	}
	template<> RIVERMAXCORE_API UClass* StaticClass<URivermaxSettings>()
	{
		return URivermaxSettings::StaticClass();
	}
	URivermaxSettings::URivermaxSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxSettings);
	URivermaxSettings::~URivermaxSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics::EnumInfo[] = {
		{ ERivermaxTimeSource_StaticEnum, TEXT("ERivermaxTimeSource"), &Z_Registration_Info_UEnum_ERivermaxTimeSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2159822873U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxSettings, URivermaxSettings::StaticClass, TEXT("URivermaxSettings"), &Z_Registration_Info_UClass_URivermaxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxSettings), 2679424945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_1354776108(TEXT("/Script/RivermaxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxCore_Source_RivermaxCore_Public_RivermaxSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
