// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkFreeDSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkFreeDSourceSettings() {}
// Cross Module References
	LIVELINKFREED_API UClass* Z_Construct_UClass_ULiveLinkFreeDSourceSettings();
	LIVELINKFREED_API UClass* Z_Construct_UClass_ULiveLinkFreeDSourceSettings_NoRegister();
	LIVELINKFREED_API UEnum* Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs();
	LIVELINKFREED_API UScriptStruct* Z_Construct_UScriptStruct_FFreeDEncoderData();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_LiveLinkFreeD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FreeDEncoderData;
class UScriptStruct* FFreeDEncoderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FreeDEncoderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FreeDEncoderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreeDEncoderData, (UObject*)Z_Construct_UPackage__Script_LiveLinkFreeD(), TEXT("FreeDEncoderData"));
	}
	return Z_Registration_Info_UScriptStruct_FreeDEncoderData.OuterSingleton;
}
template<> LIVELINKFREED_API UScriptStruct* StaticStruct<FFreeDEncoderData>()
{
	return FFreeDEncoderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFreeDEncoderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertEncoder_MetaData[];
#endif
		static void NewProp_bInvertEncoder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertEncoder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseManualRange_MetaData[];
#endif
		static void NewProp_bUseManualRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManualRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskBits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskBits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreeDEncoderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "Comment", "/** Is this encoder data valid? */" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Is this encoder data valid?" },
	};
#endif
	void Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FFreeDEncoderData*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFreeDEncoderData), &Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "Comment", "/** Invert the encoder input direction */" },
		{ "EditCondition", "bIsValid" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Invert the encoder input direction" },
	};
#endif
	void Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder_SetBit(void* Obj)
	{
		((FFreeDEncoderData*)Obj)->bInvertEncoder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder = { "bInvertEncoder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFreeDEncoderData), &Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "Comment", "/** Use manual Min/Max values for the encoder normalization (normally uses dynamic auto ranging based on inputs) */" },
		{ "EditCondition", "bIsValid" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Use manual Min/Max values for the encoder normalization (normally uses dynamic auto ranging based on inputs)" },
	};
#endif
	void Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange_SetBit(void* Obj)
	{
		((FFreeDEncoderData*)Obj)->bUseManualRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange = { "bUseManualRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFreeDEncoderData), &Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "ClampMax", "16777215" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimum raw encoder value */" },
		{ "EditCondition", "bIsValid && bUseManualRange" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Minimum raw encoder value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFreeDEncoderData, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "ClampMax", "16777215" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum raw encoder value */" },
		{ "EditCondition", "bIsValid && bUseManualRange" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Maximum raw encoder value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFreeDEncoderData, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_MaskBits_MetaData[] = {
		{ "Category", "Encoder Data" },
		{ "ClampMax", "16777215" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Mask bits for raw encoder value */" },
		{ "EditCondition", "bIsValid" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Mask bits for raw encoder value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_MaskBits = { "MaskBits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFreeDEncoderData, MaskBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_MaskBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_MaskBits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bInvertEncoder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_bUseManualRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewProp_MaskBits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkFreeD,
		nullptr,
		&NewStructOps,
		"FreeDEncoderData",
		sizeof(FFreeDEncoderData),
		alignof(FFreeDEncoderData),
		Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFreeDEncoderData()
	{
		if (!Z_Registration_Info_UScriptStruct_FreeDEncoderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FreeDEncoderData.InnerSingleton, Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FreeDEncoderData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFreeDDefaultConfigs;
	static UEnum* EFreeDDefaultConfigs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFreeDDefaultConfigs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFreeDDefaultConfigs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs, (UObject*)Z_Construct_UPackage__Script_LiveLinkFreeD(), TEXT("EFreeDDefaultConfigs"));
		}
		return Z_Registration_Info_UEnum_EFreeDDefaultConfigs.OuterSingleton;
	}
	template<> LIVELINKFREED_API UEnum* StaticEnum<EFreeDDefaultConfigs>()
	{
		return EFreeDDefaultConfigs_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::Enumerators[] = {
		{ "EFreeDDefaultConfigs::Generic", (int64)EFreeDDefaultConfigs::Generic },
		{ "EFreeDDefaultConfigs::Panasonic", (int64)EFreeDDefaultConfigs::Panasonic },
		{ "EFreeDDefaultConfigs::Sony", (int64)EFreeDDefaultConfigs::Sony },
		{ "EFreeDDefaultConfigs::Stype", (int64)EFreeDDefaultConfigs::Stype },
		{ "EFreeDDefaultConfigs::Mosys", (int64)EFreeDDefaultConfigs::Mosys },
		{ "EFreeDDefaultConfigs::Ncam", (int64)EFreeDDefaultConfigs::Ncam },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Generic.Name", "EFreeDDefaultConfigs::Generic" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "Mosys.Name", "EFreeDDefaultConfigs::Mosys" },
		{ "Ncam.Name", "EFreeDDefaultConfigs::Ncam" },
		{ "Panasonic.Name", "EFreeDDefaultConfigs::Panasonic" },
		{ "Sony.Name", "EFreeDDefaultConfigs::Sony" },
		{ "Stype.DisplayName", "stYpe" },
		{ "Stype.Name", "EFreeDDefaultConfigs::Stype" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLinkFreeD,
		nullptr,
		"EFreeDDefaultConfigs",
		"EFreeDDefaultConfigs",
		Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs()
	{
		if (!Z_Registration_Info_UEnum_EFreeDDefaultConfigs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFreeDDefaultConfigs.InnerSingleton, Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFreeDDefaultConfigs.InnerSingleton;
	}
	void ULiveLinkFreeDSourceSettings::StaticRegisterNativesULiveLinkFreeDSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkFreeDSourceSettings);
	UClass* Z_Construct_UClass_ULiveLinkFreeDSourceSettings_NoRegister()
	{
		return ULiveLinkFreeDSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendExtraMetaData_MetaData[];
#endif
		static void NewProp_bSendExtraMetaData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendExtraMetaData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultConfig_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfig_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceEncoderData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusDistanceEncoderData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthEncoderData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLengthEncoderData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedEncoderData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedEncoderData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkFreeD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkFreeDSourceSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Send extra string meta data (Camera ID and FrameCounter) */" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Send extra string meta data (Camera ID and FrameCounter)" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData_SetBit(void* Obj)
	{
		((ULiveLinkFreeDSourceSettings*)Obj)->bSendExtraMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData = { "bSendExtraMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkFreeDSourceSettings), &Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Default configurations for specific manufacturers */" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Default configurations for specific manufacturers" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig = { "DefaultConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkFreeDSourceSettings, DefaultConfig), Z_Construct_UEnum_LiveLinkFreeD_EFreeDDefaultConfigs, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig_MetaData)) }; // 1389649277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocusDistanceEncoderData_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Raw focus distance (in cm) encoder parameters for this camera - 24 bits max */" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Raw focus distance (in cm) encoder parameters for this camera - 24 bits max" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocusDistanceEncoderData = { "FocusDistanceEncoderData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkFreeDSourceSettings, FocusDistanceEncoderData), Z_Construct_UScriptStruct_FFreeDEncoderData, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocusDistanceEncoderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocusDistanceEncoderData_MetaData)) }; // 3684276185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocalLengthEncoderData_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Raw focal length/zoom (in mm) encoder parameters for this camera - 24 bits max */" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Raw focal length/zoom (in mm) encoder parameters for this camera - 24 bits max" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocalLengthEncoderData = { "FocalLengthEncoderData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkFreeDSourceSettings, FocalLengthEncoderData), Z_Construct_UScriptStruct_FFreeDEncoderData, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocalLengthEncoderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocalLengthEncoderData_MetaData)) }; // 3684276185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_UserDefinedEncoderData_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Raw user defined/spare data encoder (normally used for Aperture) parameters for this camera - 16 bits max */" },
		{ "ModuleRelativePath", "Public/LiveLinkFreeDSourceSettings.h" },
		{ "ToolTip", "Raw user defined/spare data encoder (normally used for Aperture) parameters for this camera - 16 bits max" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_UserDefinedEncoderData = { "UserDefinedEncoderData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkFreeDSourceSettings, UserDefinedEncoderData), Z_Construct_UScriptStruct_FFreeDEncoderData, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_UserDefinedEncoderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_UserDefinedEncoderData_MetaData)) }; // 3684276185
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_bSendExtraMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_DefaultConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocusDistanceEncoderData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_FocalLengthEncoderData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::NewProp_UserDefinedEncoderData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkFreeDSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::ClassParams = {
		&ULiveLinkFreeDSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkFreeDSourceSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkFreeDSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkFreeDSourceSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkFreeDSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkFreeDSourceSettings.OuterSingleton;
	}
	template<> LIVELINKFREED_API UClass* StaticClass<ULiveLinkFreeDSourceSettings>()
	{
		return ULiveLinkFreeDSourceSettings::StaticClass();
	}
	ULiveLinkFreeDSourceSettings::ULiveLinkFreeDSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkFreeDSourceSettings);
	ULiveLinkFreeDSourceSettings::~ULiveLinkFreeDSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::EnumInfo[] = {
		{ EFreeDDefaultConfigs_StaticEnum, TEXT("EFreeDDefaultConfigs"), &Z_Registration_Info_UEnum_EFreeDDefaultConfigs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1389649277U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::ScriptStructInfo[] = {
		{ FFreeDEncoderData::StaticStruct, Z_Construct_UScriptStruct_FFreeDEncoderData_Statics::NewStructOps, TEXT("FreeDEncoderData"), &Z_Registration_Info_UScriptStruct_FreeDEncoderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFreeDEncoderData), 3684276185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkFreeDSourceSettings, ULiveLinkFreeDSourceSettings::StaticClass, TEXT("ULiveLinkFreeDSourceSettings"), &Z_Registration_Info_UClass_ULiveLinkFreeDSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkFreeDSourceSettings), 2651671042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_1109139097(TEXT("/Script/LiveLinkFreeD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkFreeD_Source_LiveLinkFreeD_Public_LiveLinkFreeDSourceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
