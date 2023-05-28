// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundWaveTimecodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveTimecodeInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo;
class UScriptStruct* FSoundWaveTimecodeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundWaveTimecodeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundWaveTimecodeInfo>()
{
	return FSoundWaveTimecodeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesSinceMidnight_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_NumSamplesSinceMidnight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumSamplesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginatorReference_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginatorReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimecodeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimecodeIsDropFrame_MetaData[];
#endif
		static void NewProp_bTimecodeIsDropFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimecodeIsDropFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundWaveTimecodeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight = { "NumSamplesSinceMidnight", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, NumSamplesSinceMidnight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond = { "NumSamplesPerSecond", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, NumSamplesPerSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime = { "OriginatorTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate = { "OriginatorDate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription = { "OriginatorDescription", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference = { "OriginatorReference", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, OriginatorReference), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate = { "TimecodeRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundWaveTimecodeInfo, TimecodeRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_MetaData[] = {
		{ "Category", "Timecode" },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveTimecodeInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_SetBit(void* Obj)
	{
		((FSoundWaveTimecodeInfo*)Obj)->bTimecodeIsDropFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame = { "bTimecodeIsDropFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSoundWaveTimecodeInfo), &Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesSinceMidnight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_NumSamplesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_OriginatorReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_TimecodeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewProp_bTimecodeIsDropFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundWaveTimecodeInfo",
		sizeof(FSoundWaveTimecodeInfo),
		alignof(FSoundWaveTimecodeInfo),
		Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.InnerSingleton, Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics::ScriptStructInfo[] = {
		{ FSoundWaveTimecodeInfo::StaticStruct, Z_Construct_UScriptStruct_FSoundWaveTimecodeInfo_Statics::NewStructOps, TEXT("SoundWaveTimecodeInfo"), &Z_Registration_Info_UScriptStruct_SoundWaveTimecodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundWaveTimecodeInfo), 1619150853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_3069263066(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveTimecodeInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
