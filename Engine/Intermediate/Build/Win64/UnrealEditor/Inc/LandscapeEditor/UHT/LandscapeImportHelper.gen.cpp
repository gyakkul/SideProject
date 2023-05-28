// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeImportHelper.h"
#include "LandscapeFileFormatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeImportHelper() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LANDSCAPEEDITOR_API UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeFileResolution();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportDescriptor();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor();
	LANDSCAPEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportResolution();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor;
class UScriptStruct* FLandscapeImportFileDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapeImportFileDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapeImportFileDescriptor>()
{
	return FLandscapeImportFileDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportFileDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_Coord_MetaData[] = {
		{ "Comment", "/* Which tile does that descriptor represent */" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "ToolTip", "Which tile does that descriptor represent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportFileDescriptor, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_Coord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_FilePath_MetaData[] = {
		{ "Comment", "/* File path */" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "ToolTip", "File path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportFileDescriptor, FilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_Coord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewProp_FilePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"LandscapeImportFileDescriptor",
		sizeof(FLandscapeImportFileDescriptor),
		alignof(FLandscapeImportFileDescriptor),
		Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeImportResolution;
class UScriptStruct* FLandscapeImportResolution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeImportResolution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeImportResolution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportResolution, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapeImportResolution"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeImportResolution.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapeImportResolution>()
{
	return FLandscapeImportResolution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportResolution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportResolution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportResolution, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"LandscapeImportResolution",
		sizeof(FLandscapeImportResolution),
		alignof(FLandscapeImportResolution),
		Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportResolution()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeImportResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeImportResolution.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeImportResolution.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeImportTransformType;
	static UEnum* ELandscapeImportTransformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportTransformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeImportTransformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("ELandscapeImportTransformType"));
		}
		return Z_Registration_Info_UEnum_ELandscapeImportTransformType.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UEnum* StaticEnum<ELandscapeImportTransformType>()
	{
		return ELandscapeImportTransformType_StaticEnum();
	}
	struct Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::Enumerators[] = {
		{ "ELandscapeImportTransformType::None", (int64)ELandscapeImportTransformType::None },
		{ "ELandscapeImportTransformType::ExpandOffset", (int64)ELandscapeImportTransformType::ExpandOffset },
		{ "ELandscapeImportTransformType::ExpandCentered", (int64)ELandscapeImportTransformType::ExpandCentered },
		{ "ELandscapeImportTransformType::Resample", (int64)ELandscapeImportTransformType::Resample },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::Enum_MetaDataParams[] = {
		{ "ExpandCentered.Hidden", "" },
		{ "ExpandCentered.Name", "ELandscapeImportTransformType::ExpandCentered" },
		{ "ExpandOffset.DisplayName", "Expand" },
		{ "ExpandOffset.Name", "ELandscapeImportTransformType::ExpandOffset" },
		{ "ExpandOffset.ToolTip", "Will Import the data at the gizmo location and expand the data to fill the landscape" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "None.DisplayName", "Original" },
		{ "None.Name", "ELandscapeImportTransformType::None" },
		{ "None.ToolTip", "Will Import the data at the gizmo location in the original size" },
		{ "Resample.Name", "ELandscapeImportTransformType::Resample" },
		{ "Resample.ToolTip", "Will resample Import data to fit landscape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		"ELandscapeImportTransformType",
		"ELandscapeImportTransformType",
		Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeImportTransformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeImportTransformType.InnerSingleton, Z_Construct_UEnum_LandscapeEditor_ELandscapeImportTransformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeImportTransformType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor;
class UScriptStruct* FLandscapeImportDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeImportDescriptor, (UObject*)Z_Construct_UPackage__Script_LandscapeEditor(), TEXT("LandscapeImportDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor.OuterSingleton;
}
template<> LANDSCAPEEDITOR_API UScriptStruct* StaticStruct<FLandscapeImportDescriptor>()
{
	return FLandscapeImportDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportResolutions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileResolutions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileDescriptors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileDescriptors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FileDescriptors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeImportDescriptor>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions_Inner = { "ImportResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeImportResolution, METADATA_PARAMS(nullptr, 0) }; // 1429584564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions_MetaData[] = {
		{ "Comment", "/* Landscape Import Resolution based on File Coords + Resolutions */" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "ToolTip", "Landscape Import Resolution based on File Coords + Resolutions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions = { "ImportResolutions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportDescriptor, ImportResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions_MetaData)) }; // 1429584564
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions_Inner = { "FileResolutions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeFileResolution, METADATA_PARAMS(nullptr, 0) }; // 1517489915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions_MetaData[] = {
		{ "Comment", "/* Single File Resolutions */" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "ToolTip", "Single File Resolutions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions = { "FileResolutions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportDescriptor, FileResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions_MetaData)) }; // 1517489915
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors_Inner = { "FileDescriptors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor, METADATA_PARAMS(nullptr, 0) }; // 634599186
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors_MetaData[] = {
		{ "Comment", "/* Files contributing to this descriptor */" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "ToolTip", "Files contributing to this descriptor" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors = { "FileDescriptors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportDescriptor, FileDescriptors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors_MetaData)) }; // 634599186
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/* Scale of Import data */" },
		{ "ModuleRelativePath", "Public/LandscapeImportHelper.h" },
		{ "ToolTip", "Scale of Import data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeImportDescriptor, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_ImportResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_FileDescriptors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
		nullptr,
		&NewStructOps,
		"LandscapeImportDescriptor",
		sizeof(FLandscapeImportDescriptor),
		alignof(FLandscapeImportDescriptor),
		Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeImportDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics::EnumInfo[] = {
		{ ELandscapeImportTransformType_StaticEnum, TEXT("ELandscapeImportTransformType"), &Z_Registration_Info_UEnum_ELandscapeImportTransformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2085451856U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeImportFileDescriptor::StaticStruct, Z_Construct_UScriptStruct_FLandscapeImportFileDescriptor_Statics::NewStructOps, TEXT("LandscapeImportFileDescriptor"), &Z_Registration_Info_UScriptStruct_LandscapeImportFileDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeImportFileDescriptor), 634599186U) },
		{ FLandscapeImportResolution::StaticStruct, Z_Construct_UScriptStruct_FLandscapeImportResolution_Statics::NewStructOps, TEXT("LandscapeImportResolution"), &Z_Registration_Info_UScriptStruct_LandscapeImportResolution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeImportResolution), 1429584564U) },
		{ FLandscapeImportDescriptor::StaticStruct, Z_Construct_UScriptStruct_FLandscapeImportDescriptor_Statics::NewStructOps, TEXT("LandscapeImportDescriptor"), &Z_Registration_Info_UScriptStruct_LandscapeImportDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeImportDescriptor), 1175394505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_1731571008(TEXT("/Script/LandscapeEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Public_LandscapeImportHelper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
