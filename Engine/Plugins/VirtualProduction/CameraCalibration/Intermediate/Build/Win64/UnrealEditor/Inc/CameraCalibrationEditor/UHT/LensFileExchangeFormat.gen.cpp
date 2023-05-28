// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensFileExchangeFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensFileExchangeFormat() {}
// Cross Module References
	CAMERACALIBRATIONEDITOR_API UEnum* Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit();
	CAMERACALIBRATIONEDITOR_API UEnum* Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileExchange();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileImageDimensions();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileMetadata();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileParameterTable();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileParameterTableImporter();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileParameterTableRow();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileSensorDimensions();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileUserMetadataEntry();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensInfoExchange();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELensFileUnit;
	static UEnum* ELensFileUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELensFileUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELensFileUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("ELensFileUnit"));
		}
		return Z_Registration_Info_UEnum_ELensFileUnit.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UEnum* StaticEnum<ELensFileUnit>()
	{
		return ELensFileUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::Enumerators[] = {
		{ "ELensFileUnit::Millimeters", (int64)ELensFileUnit::Millimeters },
		{ "ELensFileUnit::Normalized", (int64)ELensFileUnit::Normalized },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::Enum_MetaDataParams[] = {
		{ "Millimeters.Name", "ELensFileUnit::Millimeters" },
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
		{ "Normalized.Name", "ELensFileUnit::Normalized" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		"ELensFileUnit",
		"ELensFileUnit",
		Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit()
	{
		if (!Z_Registration_Info_UEnum_ELensFileUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELensFileUnit.InnerSingleton, Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELensFileUnit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem;
	static UEnum* ENodalOffsetCoordinateSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("ENodalOffsetCoordinateSystem"));
		}
		return Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UEnum* StaticEnum<ENodalOffsetCoordinateSystem>()
	{
		return ENodalOffsetCoordinateSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::Enumerators[] = {
		{ "ENodalOffsetCoordinateSystem::OpenCV", (int64)ENodalOffsetCoordinateSystem::OpenCV },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
		{ "OpenCV.Name", "ENodalOffsetCoordinateSystem::OpenCV" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		"ENodalOffsetCoordinateSystem",
		"ENodalOffsetCoordinateSystem",
		Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem()
	{
		if (!Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem.InnerSingleton, Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensInfoExchange;
class UScriptStruct* FLensInfoExchange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensInfoExchange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensInfoExchange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensInfoExchange, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensInfoExchange"));
	}
	return Z_Registration_Info_UScriptStruct_LensInfoExchange.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensInfoExchange>()
{
	return FLensInfoExchange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensInfoExchange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SerialNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionModel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DistortionModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfoExchange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensInfoExchange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_SerialNumber_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfoExchange, SerialNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_SerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_SerialNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_ModelName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfoExchange, ModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_ModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_ModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_DistortionModel_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_DistortionModel = { "DistortionModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensInfoExchange, DistortionModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_DistortionModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_DistortionModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensInfoExchange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_SerialNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_ModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewProp_DistortionModel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensInfoExchange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensInfoExchange",
		sizeof(FLensInfoExchange),
		alignof(FLensInfoExchange),
		Z_Construct_UScriptStruct_FLensInfoExchange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensInfoExchange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensInfoExchange()
	{
		if (!Z_Registration_Info_UScriptStruct_LensInfoExchange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensInfoExchange.InnerSingleton, Z_Construct_UScriptStruct_FLensInfoExchange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensInfoExchange.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry;
class UScriptStruct* FLensFileUserMetadataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileUserMetadataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileUserMetadataEntry>()
{
	return FLensFileUserMetadataEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileUserMetadataEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileUserMetadataEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileUserMetadataEntry, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileUserMetadataEntry",
		sizeof(FLensFileUserMetadataEntry),
		alignof(FLensFileUserMetadataEntry),
		Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileUserMetadataEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry.InnerSingleton, Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileMetadata;
class UScriptStruct* FLensFileMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileMetadata, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileMetadata.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileMetadata>()
{
	return FLensFileMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodalOffsetCoordinateSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodalOffsetCoordinateSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NodalOffsetCoordinateSystem;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FxFyUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FxFyUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FxFyUnits;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CxCyUnits_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CxCyUnits_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CxCyUnits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserMetadata_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_LensInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_LensInfo = { "LensInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, LensInfo), Z_Construct_UScriptStruct_FLensInfoExchange, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_LensInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_LensInfo_MetaData)) }; // 2578739320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem = { "NodalOffsetCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, NodalOffsetCoordinateSystem), Z_Construct_UEnum_CameraCalibrationEditor_ENodalOffsetCoordinateSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem_MetaData)) }; // 3164610042
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits = { "FxFyUnits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, FxFyUnits), Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits_MetaData)) }; // 425719145
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits = { "CxCyUnits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, CxCyUnits), Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits_MetaData)) }; // 425719145
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata_Inner = { "UserMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLensFileUserMetadataEntry, METADATA_PARAMS(nullptr, 0) }; // 3178701021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata = { "UserMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileMetadata, UserMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata_MetaData)) }; // 3178701021
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_LensInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_NodalOffsetCoordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_FxFyUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_CxCyUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewProp_UserMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileMetadata",
		sizeof(FLensFileMetadata),
		alignof(FLensFileMetadata),
		Z_Construct_UScriptStruct_FLensFileMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileMetadata.InnerSingleton, Z_Construct_UScriptStruct_FLensFileMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileSensorDimensions;
class UScriptStruct* FLensFileSensorDimensions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileSensorDimensions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileSensorDimensions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileSensorDimensions, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileSensorDimensions"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileSensorDimensions.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileSensorDimensions>()
{
	return FLensFileSensorDimensions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Units_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Units;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileSensorDimensions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileSensorDimensions, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileSensorDimensions, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileSensorDimensions, Units), Z_Construct_UEnum_CameraCalibrationEditor_ELensFileUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units_MetaData)) }; // 425719145
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewProp_Units,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileSensorDimensions",
		sizeof(FLensFileSensorDimensions),
		alignof(FLensFileSensorDimensions),
		Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileSensorDimensions()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileSensorDimensions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileSensorDimensions.InnerSingleton, Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileSensorDimensions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileImageDimensions;
class UScriptStruct* FLensFileImageDimensions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileImageDimensions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileImageDimensions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileImageDimensions, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileImageDimensions"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileImageDimensions.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileImageDimensions>()
{
	return FLensFileImageDimensions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileImageDimensions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileImageDimensions, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileImageDimensions, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileImageDimensions",
		sizeof(FLensFileImageDimensions),
		alignof(FLensFileImageDimensions),
		Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileImageDimensions()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileImageDimensions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileImageDimensions.InnerSingleton, Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileImageDimensions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileParameterTableRow;
class UScriptStruct* FLensFileParameterTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileParameterTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileParameterTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileParameterTableRow, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileParameterTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileParameterTableRow.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileParameterTableRow>()
{
	return FLensFileParameterTableRow::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileParameterTableRow>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTableRow, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewProp_Values,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileParameterTableRow",
		sizeof(FLensFileParameterTableRow),
		alignof(FLensFileParameterTableRow),
		Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileParameterTableRow()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileParameterTableRow.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileParameterTableRow.InnerSingleton, Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileParameterTableRow.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileParameterTable;
class UScriptStruct* FLensFileParameterTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileParameterTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileParameterTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileParameterTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileParameterTable"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileParameterTable.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileParameterTable>()
{
	return FLensFileParameterTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileParameterTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Header_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Header;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileParameterTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTable, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header_Inner = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTable, Header), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLensFileParameterTableRow, METADATA_PARAMS(nullptr, 0) }; // 3556535704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTable, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data_MetaData)) }; // 3556535704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileParameterTable",
		sizeof(FLensFileParameterTable),
		alignof(FLensFileParameterTable),
		Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileParameterTable()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileParameterTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileParameterTable.InnerSingleton, Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileParameterTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter;
class UScriptStruct* FLensFileParameterTableImporter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileParameterTableImporter, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileParameterTableImporter"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileParameterTableImporter>()
{
	return FLensFileParameterTableImporter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileParameterTableImporter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTableImporter, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTableImporter, Header), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Header_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileParameterTableImporter, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileParameterTableImporter",
		sizeof(FLensFileParameterTableImporter),
		alignof(FLensFileParameterTableImporter),
		Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileParameterTableImporter()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter.InnerSingleton, Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileExchange;
class UScriptStruct* FLensFileExchange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileExchange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileExchange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileExchange, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensFileExchange"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileExchange.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensFileExchange>()
{
	return FLensFileExchange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileExchange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SensorDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageDimensions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraParameterTables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraParameterTables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraParameterTables;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EncoderTables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncoderTables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EncoderTables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileExchange_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileExchange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileExchange, Metadata), Z_Construct_UScriptStruct_FLensFileMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_Metadata_MetaData)) }; // 4004603352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_SensorDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_SensorDimensions = { "SensorDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileExchange, SensorDimensions), Z_Construct_UScriptStruct_FLensFileSensorDimensions, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_SensorDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_SensorDimensions_MetaData)) }; // 720294494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_ImageDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_ImageDimensions = { "ImageDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileExchange, ImageDimensions), Z_Construct_UScriptStruct_FLensFileImageDimensions, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_ImageDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_ImageDimensions_MetaData)) }; // 3575381634
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables_Inner = { "CameraParameterTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLensFileParameterTable, METADATA_PARAMS(nullptr, 0) }; // 2291399875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables = { "CameraParameterTables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileExchange, CameraParameterTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables_MetaData)) }; // 2291399875
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables_Inner = { "EncoderTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLensFileParameterTable, METADATA_PARAMS(nullptr, 0) }; // 2291399875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables_MetaData[] = {
		{ "ModuleRelativePath", "Private/LensFileExchangeFormat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables = { "EncoderTables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileExchange, EncoderTables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables_MetaData)) }; // 2291399875
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileExchange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_SensorDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_ImageDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_CameraParameterTables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewProp_EncoderTables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileExchange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensFileExchange",
		sizeof(FLensFileExchange),
		alignof(FLensFileExchange),
		Z_Construct_UScriptStruct_FLensFileExchange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileExchange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileExchange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileExchange()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileExchange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileExchange.InnerSingleton, Z_Construct_UScriptStruct_FLensFileExchange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileExchange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics::EnumInfo[] = {
		{ ELensFileUnit_StaticEnum, TEXT("ELensFileUnit"), &Z_Registration_Info_UEnum_ELensFileUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 425719145U) },
		{ ENodalOffsetCoordinateSystem_StaticEnum, TEXT("ENodalOffsetCoordinateSystem"), &Z_Registration_Info_UEnum_ENodalOffsetCoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3164610042U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics::ScriptStructInfo[] = {
		{ FLensInfoExchange::StaticStruct, Z_Construct_UScriptStruct_FLensInfoExchange_Statics::NewStructOps, TEXT("LensInfoExchange"), &Z_Registration_Info_UScriptStruct_LensInfoExchange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensInfoExchange), 2578739320U) },
		{ FLensFileUserMetadataEntry::StaticStruct, Z_Construct_UScriptStruct_FLensFileUserMetadataEntry_Statics::NewStructOps, TEXT("LensFileUserMetadataEntry"), &Z_Registration_Info_UScriptStruct_LensFileUserMetadataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileUserMetadataEntry), 3178701021U) },
		{ FLensFileMetadata::StaticStruct, Z_Construct_UScriptStruct_FLensFileMetadata_Statics::NewStructOps, TEXT("LensFileMetadata"), &Z_Registration_Info_UScriptStruct_LensFileMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileMetadata), 4004603352U) },
		{ FLensFileSensorDimensions::StaticStruct, Z_Construct_UScriptStruct_FLensFileSensorDimensions_Statics::NewStructOps, TEXT("LensFileSensorDimensions"), &Z_Registration_Info_UScriptStruct_LensFileSensorDimensions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileSensorDimensions), 720294494U) },
		{ FLensFileImageDimensions::StaticStruct, Z_Construct_UScriptStruct_FLensFileImageDimensions_Statics::NewStructOps, TEXT("LensFileImageDimensions"), &Z_Registration_Info_UScriptStruct_LensFileImageDimensions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileImageDimensions), 3575381634U) },
		{ FLensFileParameterTableRow::StaticStruct, Z_Construct_UScriptStruct_FLensFileParameterTableRow_Statics::NewStructOps, TEXT("LensFileParameterTableRow"), &Z_Registration_Info_UScriptStruct_LensFileParameterTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileParameterTableRow), 3556535704U) },
		{ FLensFileParameterTable::StaticStruct, Z_Construct_UScriptStruct_FLensFileParameterTable_Statics::NewStructOps, TEXT("LensFileParameterTable"), &Z_Registration_Info_UScriptStruct_LensFileParameterTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileParameterTable), 2291399875U) },
		{ FLensFileParameterTableImporter::StaticStruct, Z_Construct_UScriptStruct_FLensFileParameterTableImporter_Statics::NewStructOps, TEXT("LensFileParameterTableImporter"), &Z_Registration_Info_UScriptStruct_LensFileParameterTableImporter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileParameterTableImporter), 3860140893U) },
		{ FLensFileExchange::StaticStruct, Z_Construct_UScriptStruct_FLensFileExchange_Statics::NewStructOps, TEXT("LensFileExchange"), &Z_Registration_Info_UScriptStruct_LensFileExchange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileExchange), 2473415742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_214934867(TEXT("/Script/CameraCalibrationEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_LensFileExchangeFormat_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
