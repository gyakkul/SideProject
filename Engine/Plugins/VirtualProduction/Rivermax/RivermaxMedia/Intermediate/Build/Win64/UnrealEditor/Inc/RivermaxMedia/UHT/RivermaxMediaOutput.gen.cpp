// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxMediaOutput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaOutput();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaOutput_NoRegister();
	RIVERMAXMEDIA_API UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode();
	RIVERMAXMEDIA_API UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat();
	UPackage* Z_Construct_UPackage__Script_RivermaxMedia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat;
	static UEnum* ERivermaxMediaOutputPixelFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat, (UObject*)Z_Construct_UPackage__Script_RivermaxMedia(), TEXT("ERivermaxMediaOutputPixelFormat"));
		}
		return Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UEnum* StaticEnum<ERivermaxMediaOutputPixelFormat>()
	{
		return ERivermaxMediaOutputPixelFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::Enumerators[] = {
		{ "ERivermaxMediaOutputPixelFormat::PF_8BIT_YUV422", (int64)ERivermaxMediaOutputPixelFormat::PF_8BIT_YUV422 },
		{ "ERivermaxMediaOutputPixelFormat::PF_10BIT_YUV422", (int64)ERivermaxMediaOutputPixelFormat::PF_10BIT_YUV422 },
		{ "ERivermaxMediaOutputPixelFormat::PF_8BIT_RGB", (int64)ERivermaxMediaOutputPixelFormat::PF_8BIT_RGB },
		{ "ERivermaxMediaOutputPixelFormat::PF_10BIT_RGB", (int64)ERivermaxMediaOutputPixelFormat::PF_10BIT_RGB },
		{ "ERivermaxMediaOutputPixelFormat::PF_12BIT_RGB", (int64)ERivermaxMediaOutputPixelFormat::PF_12BIT_RGB },
		{ "ERivermaxMediaOutputPixelFormat::PF_FLOAT16_RGB", (int64)ERivermaxMediaOutputPixelFormat::PF_FLOAT16_RGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "PF_10BIT_RGB.DisplayName", "10bit RGB" },
		{ "PF_10BIT_RGB.Name", "ERivermaxMediaOutputPixelFormat::PF_10BIT_RGB" },
		{ "PF_10BIT_YUV422.DisplayName", "10bit YUV422" },
		{ "PF_10BIT_YUV422.Name", "ERivermaxMediaOutputPixelFormat::PF_10BIT_YUV422" },
		{ "PF_12BIT_RGB.DisplayName", "12bit RGB" },
		{ "PF_12BIT_RGB.Name", "ERivermaxMediaOutputPixelFormat::PF_12BIT_RGB" },
		{ "PF_8BIT_RGB.DisplayName", "8bit RGB" },
		{ "PF_8BIT_RGB.Name", "ERivermaxMediaOutputPixelFormat::PF_8BIT_RGB" },
		{ "PF_8BIT_YUV422.DisplayName", "8bit YUV422" },
		{ "PF_8BIT_YUV422.Name", "ERivermaxMediaOutputPixelFormat::PF_8BIT_YUV422" },
		{ "PF_FLOAT16_RGB.DisplayName", "16bit Float RGB" },
		{ "PF_FLOAT16_RGB.Name", "ERivermaxMediaOutputPixelFormat::PF_FLOAT16_RGB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RivermaxMedia,
		nullptr,
		"ERivermaxMediaOutputPixelFormat",
		"ERivermaxMediaOutputPixelFormat",
		Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat.InnerSingleton, Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode;
	static UEnum* ERivermaxMediaAlignmentMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode, (UObject*)Z_Construct_UPackage__Script_RivermaxMedia(), TEXT("ERivermaxMediaAlignmentMode"));
		}
		return Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UEnum* StaticEnum<ERivermaxMediaAlignmentMode>()
	{
		return ERivermaxMediaAlignmentMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::Enumerators[] = {
		{ "ERivermaxMediaAlignmentMode::AlignmentPoint", (int64)ERivermaxMediaAlignmentMode::AlignmentPoint },
		{ "ERivermaxMediaAlignmentMode::FrameCreation", (int64)ERivermaxMediaAlignmentMode::FrameCreation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::Enum_MetaDataParams[] = {
		{ "AlignmentPoint.Comment", "/** \n\x09 * Uses NVIDIA Rivermax clock to calculate alignment points based on ST2059 \n\x09 */" },
		{ "AlignmentPoint.Name", "ERivermaxMediaAlignmentMode::AlignmentPoint" },
		{ "AlignmentPoint.ToolTip", "Uses NVIDIA Rivermax clock to calculate alignment points based on ST2059" },
		{ "FrameCreation.Comment", "/** \n\x09 * Aligns frame scheduling with frame creation not going faster than frame interval \n\x09 * In its current shape, useful for a faster stream than frame creation rate\n\x09 */" },
		{ "FrameCreation.Name", "ERivermaxMediaAlignmentMode::FrameCreation" },
		{ "FrameCreation.ToolTip", "Aligns frame scheduling with frame creation not going faster than frame interval\nIn its current shape, useful for a faster stream than frame creation rate" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RivermaxMedia,
		nullptr,
		"ERivermaxMediaAlignmentMode",
		"ERivermaxMediaAlignmentMode",
		Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode()
	{
		if (!Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode.InnerSingleton, Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode.InnerSingleton;
	}
	void URivermaxMediaOutput::StaticRegisterNativesURivermaxMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxMediaOutput);
	UClass* Z_Construct_UClass_URivermaxMediaOutput_NoRegister()
	{
		return URivermaxMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlignmentMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlignmentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoContinuousOutput_MetaData[];
#endif
		static void NewProp_bDoContinuousOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoContinuousOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoFrameCounterTimestamping_MetaData[];
#endif
		static void NewProp_bDoFrameCounterTimestamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoFrameCounterTimestamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResolution_MetaData[];
#endif
		static void NewProp_bOverrideResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGPUDirect_MetaData[];
#endif
		static void NewProp_bUseGPUDirect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGPUDirect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output information for a Rivermax media capture.\n */" },
		{ "DisplayName", "NVIDIA Rivermax Output" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RivermaxMediaOutput.h" },
		{ "MediaIOCustomLayout", "Rivermax" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Output information for a Rivermax media capture." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Used by frame scheduler to know how to align the output */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Used by frame scheduler to know how to align the output" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode = { "AlignmentMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, AlignmentMode), Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaAlignmentMode, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode_MetaData)) }; // 747479442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** \n\x09 * Whether to produce a continuous output stream repeating last frame if no new frames provided \n\x09 * Note: Not supported in frame creation mode\n\x09 */" },
		{ "EditCondition", "AlignmentMode != ERivermaxMediaAlignmentMode::FrameCreation" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Whether to produce a continuous output stream repeating last frame if no new frames provided\nNote: Not supported in frame creation mode" },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput_SetBit(void* Obj)
	{
		((URivermaxMediaOutput*)Obj)->bDoContinuousOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput = { "bDoContinuousOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaOutput), &Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** \n\x09 * Experimental flag to use frame counter instead of using NVIDIA Rivermax clock for timestamping output frames\n\x09 * Meant to be used for UE-UE streams where frame locking is done, e.g. nDisplay.\n\x09 */" },
		{ "EditCondition", "AlignmentMode == ERivermaxMediaAlignmentMode::FrameCreation" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Experimental flag to use frame counter instead of using NVIDIA Rivermax clock for timestamping output frames\nMeant to be used for UE-UE streams where frame locking is done, e.g. nDisplay." },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping_SetBit(void* Obj)
	{
		((URivermaxMediaOutput*)Obj)->bDoFrameCounterTimestamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping = { "bDoFrameCounterTimestamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaOutput), &Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** If false, use the default source buffer size. If true, a specific resolution will be used. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "If false, use the default source buffer size. If true, a specific resolution will be used." },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution_SetBit(void* Obj)
	{
		((URivermaxMediaOutput*)Obj)->bOverrideResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution = { "bOverrideResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaOutput), &Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Resolution of this output stream */" },
		{ "EditCondition", "bOverrideResolution" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Resolution of this output stream" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Frame rate of this output stream */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Frame rate of this output stream" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_FrameRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pixel format for this output stream */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Pixel format for this output stream" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, PixelFormat), Z_Construct_UEnum_RivermaxMedia_ERivermaxMediaOutputPixelFormat, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat_MetaData)) }; // 3493425152
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_InterfaceAddress_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Network card interface to use to send data\n\x09 * Wildcards are supported to match against an interface found on the machine\n\x09 * 192.*.0.110\n\x09 * 192.168.0.1?0\n\x09 * 192.168.0.1*\n\x09 */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Network card interface to use to send data\nWildcards are supported to match against an interface found on the machine\n192.*.0.110\n192.168.0.1?0\n192.168.0.1*" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_InterfaceAddress = { "InterfaceAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, InterfaceAddress), METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_InterfaceAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_InterfaceAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_StreamAddress_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Address of the stream. Can be multicast, i.e. 224.1.1.1) */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Address of the stream. Can be multicast, i.e. 224.1.1.1)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_StreamAddress = { "StreamAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, StreamAddress), METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_StreamAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_StreamAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Port to use for this output */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Port to use for this output" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URivermaxMediaOutput, Port), METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect_MetaData[] = {
		{ "Category", "Video" },
		{ "Comment", "/** Whether to use GPUDirect if available (Memcopy from GPU to NIC directly bypassing system) if available */" },
		{ "ModuleRelativePath", "Public/RivermaxMediaOutput.h" },
		{ "ToolTip", "Whether to use GPUDirect if available (Memcopy from GPU to NIC directly bypassing system) if available" },
	};
#endif
	void Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect_SetBit(void* Obj)
	{
		((URivermaxMediaOutput*)Obj)->bUseGPUDirect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect = { "bUseGPUDirect", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URivermaxMediaOutput), &Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect_SetBit, METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URivermaxMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_AlignmentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoContinuousOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bDoFrameCounterTimestamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bOverrideResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_InterfaceAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_StreamAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URivermaxMediaOutput_Statics::NewProp_bUseGPUDirect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxMediaOutput_Statics::ClassParams = {
		&URivermaxMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URivermaxMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxMediaOutput()
	{
		if (!Z_Registration_Info_UClass_URivermaxMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxMediaOutput.OuterSingleton, Z_Construct_UClass_URivermaxMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxMediaOutput.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UClass* StaticClass<URivermaxMediaOutput>()
	{
		return URivermaxMediaOutput::StaticClass();
	}
	URivermaxMediaOutput::URivermaxMediaOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxMediaOutput);
	URivermaxMediaOutput::~URivermaxMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics::EnumInfo[] = {
		{ ERivermaxMediaOutputPixelFormat_StaticEnum, TEXT("ERivermaxMediaOutputPixelFormat"), &Z_Registration_Info_UEnum_ERivermaxMediaOutputPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3493425152U) },
		{ ERivermaxMediaAlignmentMode_StaticEnum, TEXT("ERivermaxMediaAlignmentMode"), &Z_Registration_Info_UEnum_ERivermaxMediaAlignmentMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 747479442U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxMediaOutput, URivermaxMediaOutput::StaticClass, TEXT("URivermaxMediaOutput"), &Z_Registration_Info_UClass_URivermaxMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxMediaOutput), 533358399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_1229462308(TEXT("/Script/RivermaxMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
