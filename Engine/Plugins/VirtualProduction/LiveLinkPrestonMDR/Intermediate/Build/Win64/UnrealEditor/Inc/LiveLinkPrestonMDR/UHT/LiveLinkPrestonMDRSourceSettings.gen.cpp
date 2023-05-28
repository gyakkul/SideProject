// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkPrestonMDRSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPrestonMDRSourceSettings() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings();
	LIVELINKPRESTONMDR_API UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_NoRegister();
	LIVELINKPRESTONMDR_API UEnum* Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode();
	LIVELINKPRESTONMDR_API UScriptStruct* Z_Construct_UScriptStruct_FEncoderRange();
	UPackage* Z_Construct_UPackage__Script_LiveLinkPrestonMDR();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncoderRange;
class UScriptStruct* FEncoderRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncoderRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncoderRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncoderRange, (UObject*)Z_Construct_UPackage__Script_LiveLinkPrestonMDR(), TEXT("EncoderRange"));
	}
	return Z_Registration_Info_UScriptStruct_EncoderRange.OuterSingleton;
}
template<> LIVELINKPRESTONMDR_API UScriptStruct* StaticStruct<FEncoderRange>()
{
	return FEncoderRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncoderRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncoderRange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncoderRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncoderRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "Comment", "/** Minimum raw encoder value */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
		{ "ToolTip", "Minimum raw encoder value" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEncoderRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "Comment", "/** Maximum raw encoder value */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
		{ "ToolTip", "Maximum raw encoder value" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEncoderRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncoderRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncoderRange_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncoderRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
		nullptr,
		&NewStructOps,
		"EncoderRange",
		sizeof(FEncoderRange),
		alignof(FEncoderRange),
		Z_Construct_UScriptStruct_FEncoderRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncoderRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncoderRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncoderRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncoderRange()
	{
		if (!Z_Registration_Info_UScriptStruct_EncoderRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncoderRange.InnerSingleton, Z_Construct_UScriptStruct_FEncoderRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncoderRange.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFIZDataMode;
	static UEnum* EFIZDataMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFIZDataMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFIZDataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode, (UObject*)Z_Construct_UPackage__Script_LiveLinkPrestonMDR(), TEXT("EFIZDataMode"));
		}
		return Z_Registration_Info_UEnum_EFIZDataMode.OuterSingleton;
	}
	template<> LIVELINKPRESTONMDR_API UEnum* StaticEnum<EFIZDataMode>()
	{
		return EFIZDataMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::Enumerators[] = {
		{ "EFIZDataMode::EncoderData", (int64)EFIZDataMode::EncoderData },
		{ "EFIZDataMode::CalibratedData", (int64)EFIZDataMode::CalibratedData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::Enum_MetaDataParams[] = {
		{ "CalibratedData.Name", "EFIZDataMode::CalibratedData" },
		{ "EncoderData.Name", "EFIZDataMode::EncoderData" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
		nullptr,
		"EFIZDataMode",
		"EFIZDataMode",
		Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode()
	{
		if (!Z_Registration_Info_UEnum_EFIZDataMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFIZDataMode.InnerSingleton, Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFIZDataMode.InnerSingleton;
	}
	void ULiveLinkPrestonMDRSourceSettings::StaticRegisterNativesULiveLinkPrestonMDRSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkPrestonMDRSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_NoRegister()
	{
		return ULiveLinkPrestonMDRSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IncomingDataMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDataMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IncomingDataMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusEncoderRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusEncoderRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrisEncoderRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IrisEncoderRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomEncoderRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomEncoderRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkPrestonMDR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkPrestonMDRSourceSettings.h" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The mode in which the Preston MDR is configured to send FIZ data (pre-calibrated or raw encoder positions) */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
		{ "ToolTip", "The mode in which the Preston MDR is configured to send FIZ data (pre-calibrated or raw encoder positions)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode = { "IncomingDataMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPrestonMDRSourceSettings, IncomingDataMode), Z_Construct_UEnum_LiveLinkPrestonMDR_EFIZDataMode, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode_MetaData)) }; // 1219600388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_FocusEncoderRange_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Raw focus encoder range */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
		{ "ToolTip", "Raw focus encoder range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_FocusEncoderRange = { "FocusEncoderRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPrestonMDRSourceSettings, FocusEncoderRange), Z_Construct_UScriptStruct_FEncoderRange, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_FocusEncoderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_FocusEncoderRange_MetaData)) }; // 3449907050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IrisEncoderRange_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Raw iris encoder range */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
		{ "ToolTip", "Raw iris encoder range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IrisEncoderRange = { "IrisEncoderRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPrestonMDRSourceSettings, IrisEncoderRange), Z_Construct_UScriptStruct_FEncoderRange, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IrisEncoderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IrisEncoderRange_MetaData)) }; // 3449907050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_ZoomEncoderRange_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Raw zoom encoder range */" },
		{ "ModuleRelativePath", "Private/LiveLinkPrestonMDRSourceSettings.h" },
		{ "ToolTip", "Raw zoom encoder range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_ZoomEncoderRange = { "ZoomEncoderRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPrestonMDRSourceSettings, ZoomEncoderRange), Z_Construct_UScriptStruct_FEncoderRange, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_ZoomEncoderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_ZoomEncoderRange_MetaData)) }; // 3449907050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IncomingDataMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_FocusEncoderRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_IrisEncoderRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::NewProp_ZoomEncoderRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPrestonMDRSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::ClassParams = {
		&ULiveLinkPrestonMDRSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceSettings.OuterSingleton;
	}
	template<> LIVELINKPRESTONMDR_API UClass* StaticClass<ULiveLinkPrestonMDRSourceSettings>()
	{
		return ULiveLinkPrestonMDRSourceSettings::StaticClass();
	}
	ULiveLinkPrestonMDRSourceSettings::ULiveLinkPrestonMDRSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPrestonMDRSourceSettings);
	ULiveLinkPrestonMDRSourceSettings::~ULiveLinkPrestonMDRSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::EnumInfo[] = {
		{ EFIZDataMode_StaticEnum, TEXT("EFIZDataMode"), &Z_Registration_Info_UEnum_EFIZDataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1219600388U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::ScriptStructInfo[] = {
		{ FEncoderRange::StaticStruct, Z_Construct_UScriptStruct_FEncoderRange_Statics::NewStructOps, TEXT("EncoderRange"), &Z_Registration_Info_UScriptStruct_EncoderRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncoderRange), 3449907050U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkPrestonMDRSourceSettings, ULiveLinkPrestonMDRSourceSettings::StaticClass, TEXT("ULiveLinkPrestonMDRSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkPrestonMDRSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkPrestonMDRSourceSettings), 4085045671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_2456729618(TEXT("/Script/LiveLinkPrestonMDR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkPrestonMDR_Source_LiveLinkPrestonMDR_Private_LiveLinkPrestonMDRSourceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
