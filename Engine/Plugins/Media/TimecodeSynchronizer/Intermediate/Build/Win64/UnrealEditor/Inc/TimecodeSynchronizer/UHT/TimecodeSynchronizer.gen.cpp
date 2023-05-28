// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimecodeSynchronizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimecodeSynchronizer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider_NoRegister();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizer();
	TIMECODESYNCHRONIZER_API UClass* Z_Construct_UClass_UTimecodeSynchronizer_NoRegister();
	TIMECODESYNCHRONIZER_API UEnum* Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources();
	TIMECODESYNCHRONIZER_API UEnum* Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode();
	TIMECODESYNCHRONIZER_API UEnum* Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType();
	TIMECODESYNCHRONIZER_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UFixedFrameRateCustomTimeStep_NoRegister();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UTimeSynchronizationSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TimecodeSynchronizer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode;
	static UEnum* ETimecodeSynchronizationSyncMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode, (UObject*)Z_Construct_UPackage__Script_TimecodeSynchronizer(), TEXT("ETimecodeSynchronizationSyncMode"));
		}
		return Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZER_API UEnum* StaticEnum<ETimecodeSynchronizationSyncMode>()
	{
		return ETimecodeSynchronizationSyncMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::Enumerators[] = {
		{ "ETimecodeSynchronizationSyncMode::UserDefinedOffset", (int64)ETimecodeSynchronizationSyncMode::UserDefinedOffset },
		{ "ETimecodeSynchronizationSyncMode::Auto", (int64)ETimecodeSynchronizationSyncMode::Auto },
		{ "ETimecodeSynchronizationSyncMode::AutoOldest", (int64)ETimecodeSynchronizationSyncMode::AutoOldest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/**\n\x09 * Engine will try and automatically determine an appropriate offset based on what frames are available\n\x09 * on the given sources.\n\x09 *\n\x09 * This is suitable for running a single Unreal Engine instance that just wants to synchronize its inputs.\n\x09 */" },
		{ "Auto.Name", "ETimecodeSynchronizationSyncMode::Auto" },
		{ "Auto.ToolTip", "Engine will try and automatically determine an appropriate offset based on what frames are available\non the given sources.\n\nThis is suitable for running a single Unreal Engine instance that just wants to synchronize its inputs." },
		{ "AutoOldest.Comment", "/**\n\x09 * The same as Auto except that instead of trying to find a suitable timecode nearest to the\n\x09 * newest common frame, we try to find a suitable timecode nearest to the oldest common frame.\n\x09 */" },
		{ "AutoOldest.Name", "ETimecodeSynchronizationSyncMode::AutoOldest" },
		{ "AutoOldest.ToolTip", "The same as Auto except that instead of trying to find a suitable timecode nearest to the\nnewest common frame, we try to find a suitable timecode nearest to the oldest common frame." },
		{ "Comment", "/**\n * Defines the various modes that the synchronizer can use to try and achieve synchronization.\n */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Defines the various modes that the synchronizer can use to try and achieve synchronization." },
		{ "UserDefinedOffset.Comment", "/**\n\x09 * User will specify an offset (number of frames) from the Timecode Source (see ETimecodeSycnrhonizationTimecodeType).\n\x09 * This offset may be positive or negative depending on the latency of the source.\n\x09 * Synchronization will be achieved once the synchronizer detects all input sources have frames that correspond\n\x09 * with the offset timecode.\n\x09 *\n\x09 * This is suitable for applications trying to keep multiple Unreal Engine instances in sync while using nDisplay / genlock.\n\x09 */" },
		{ "UserDefinedOffset.Name", "ETimecodeSynchronizationSyncMode::UserDefinedOffset" },
		{ "UserDefinedOffset.ToolTip", "User will specify an offset (number of frames) from the Timecode Source (see ETimecodeSycnrhonizationTimecodeType).\nThis offset may be positive or negative depending on the latency of the source.\nSynchronization will be achieved once the synchronizer detects all input sources have frames that correspond\nwith the offset timecode.\n\nThis is suitable for applications trying to keep multiple Unreal Engine instances in sync while using nDisplay / genlock." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
		nullptr,
		"ETimecodeSynchronizationSyncMode",
		"ETimecodeSynchronizationSyncMode",
		Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode.InnerSingleton, Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType;
	static UEnum* ETimecodeSynchronizationTimecodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType, (UObject*)Z_Construct_UPackage__Script_TimecodeSynchronizer(), TEXT("ETimecodeSynchronizationTimecodeType"));
		}
		return Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZER_API UEnum* StaticEnum<ETimecodeSynchronizationTimecodeType>()
	{
		return ETimecodeSynchronizationTimecodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::Enumerators[] = {
		{ "ETimecodeSynchronizationTimecodeType::DefaultProvider", (int64)ETimecodeSynchronizationTimecodeType::DefaultProvider },
		{ "ETimecodeSynchronizationTimecodeType::TimecodeProvider", (int64)ETimecodeSynchronizationTimecodeType::TimecodeProvider },
		{ "ETimecodeSynchronizationTimecodeType::InputSource", (int64)ETimecodeSynchronizationTimecodeType::InputSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates Timecode source type.\n */" },
		{ "DefaultProvider.Comment", "/** Use the configured Engine Default Timecode provider. */" },
		{ "DefaultProvider.Name", "ETimecodeSynchronizationTimecodeType::DefaultProvider" },
		{ "DefaultProvider.ToolTip", "Use the configured Engine Default Timecode provider." },
		{ "InputSource.Comment", "/** Use one of the InputSource as the Timecode Provider. */" },
		{ "InputSource.Name", "ETimecodeSynchronizationTimecodeType::InputSource" },
		{ "InputSource.ToolTip", "Use one of the InputSource as the Timecode Provider." },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "TimecodeProvider.Comment", "/** Use an external Timecode Provider to provide the timecode to follow. */" },
		{ "TimecodeProvider.Name", "ETimecodeSynchronizationTimecodeType::TimecodeProvider" },
		{ "TimecodeProvider.ToolTip", "Use an external Timecode Provider to provide the timecode to follow." },
		{ "ToolTip", "Enumerates Timecode source type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
		nullptr,
		"ETimecodeSynchronizationTimecodeType",
		"ETimecodeSynchronizationTimecodeType",
		Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType.InnerSingleton, Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources;
	static UEnum* ETimecodeSynchronizationFrameRateSources_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources, (UObject*)Z_Construct_UPackage__Script_TimecodeSynchronizer(), TEXT("ETimecodeSynchronizationFrameRateSources"));
		}
		return Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZER_API UEnum* StaticEnum<ETimecodeSynchronizationFrameRateSources>()
	{
		return ETimecodeSynchronizationFrameRateSources_StaticEnum();
	}
	struct Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::Enumerators[] = {
		{ "ETimecodeSynchronizationFrameRateSources::EngineCustomTimeStepFrameRate", (int64)ETimecodeSynchronizationFrameRateSources::EngineCustomTimeStepFrameRate },
		{ "ETimecodeSynchronizationFrameRateSources::CustomFrameRate", (int64)ETimecodeSynchronizationFrameRateSources::CustomFrameRate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates possible framerate source\n */" },
		{ "CustomFrameRate.Name", "ETimecodeSynchronizationFrameRateSources::CustomFrameRate" },
		{ "CustomFrameRate.ToolTip", "Custom Frame Rate selected by the user." },
		{ "EngineCustomTimeStepFrameRate.Name", "ETimecodeSynchronizationFrameRateSources::EngineCustomTimeStepFrameRate" },
		{ "EngineCustomTimeStepFrameRate.ToolTip", "Frame Rate of engine custom time step if it is of type UFixedFrameRateCustomTimeStep." },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Enumerates possible framerate source" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
		nullptr,
		"ETimecodeSynchronizationFrameRateSources",
		"ETimecodeSynchronizationFrameRateSources",
		Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources()
	{
		if (!Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources.InnerSingleton, Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource;
class UScriptStruct* FTimecodeSynchronizerActiveTimecodedInputSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource, (UObject*)Z_Construct_UPackage__Script_TimecodeSynchronizer(), TEXT("TimecodeSynchronizerActiveTimecodedInputSource"));
	}
	return Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource.OuterSingleton;
}
template<> TIMECODESYNCHRONIZER_API UScriptStruct* StaticStruct<FTimecodeSynchronizerActiveTimecodedInputSource>()
{
	return FTimecodeSynchronizerActiveTimecodedInputSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReady_MetaData[];
#endif
		static void NewProp_bIsReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeSynchronized_MetaData[];
#endif
		static void NewProp_bCanBeSynchronized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeSynchronized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalNumberOfSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNumberOfSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimecodeSynchronizerActiveTimecodedInputSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Flag stating if the source is ready */" },
		{ "DisplayName", "Is Ready" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Flag stating if the source is ready" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady_SetBit(void* Obj)
	{
		((FTimecodeSynchronizerActiveTimecodedInputSource*)Obj)->bIsReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady = { "bIsReady", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimecodeSynchronizerActiveTimecodedInputSource), &Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Flag stating if this source can be synchronized */" },
		{ "DisplayName", "Can Be Synchronized" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Flag stating if this source can be synchronized" },
	};
#endif
	void Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized_SetBit(void* Obj)
	{
		((FTimecodeSynchronizerActiveTimecodedInputSource*)Obj)->bCanBeSynchronized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized = { "bCanBeSynchronized", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTimecodeSynchronizerActiveTimecodedInputSource), &Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_TotalNumberOfSamples_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_TotalNumberOfSamples = { "TotalNumberOfSamples", nullptr, (EPropertyFlags)0x0040000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeSynchronizerActiveTimecodedInputSource, TotalNumberOfSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_TotalNumberOfSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_TotalNumberOfSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Associated source pointers */" },
		{ "DisplayName", "Input Source" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Associated source pointers" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0044000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeSynchronizerActiveTimecodedInputSource, InputSource), Z_Construct_UClass_UTimeSynchronizationSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_InputSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bIsReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_bCanBeSynchronized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_TotalNumberOfSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewProp_InputSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
		nullptr,
		&NewStructOps,
		"TimecodeSynchronizerActiveTimecodedInputSource",
		sizeof(FTimecodeSynchronizerActiveTimecodedInputSource),
		alignof(FTimecodeSynchronizerActiveTimecodedInputSource),
		Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource()
	{
		if (!Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource.InnerSingleton, Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource.InnerSingleton;
	}
	void UTimecodeSynchronizer::StaticRegisterNativesUTimecodeSynchronizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimecodeSynchronizer);
	UClass* Z_Construct_UClass_UTimecodeSynchronizer_NoRegister()
	{
		return UTimecodeSynchronizer::StaticClass();
	}
	struct Z_Construct_UClass_UTimecodeSynchronizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameRateSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrameRateSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedFrameRate;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeProviderType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeProviderType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeProviderType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainSynchronizationSourceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MainSynchronizationSourceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreRollingTimecodeMarginOfErrors_MetaData[];
#endif
		static void NewProp_bUsePreRollingTimecodeMarginOfErrors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreRollingTimecodeMarginOfErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreRollingTimecodeMarginOfErrors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreRollingTimecodeMarginOfErrors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreRollingTimeout_MetaData[];
#endif
		static void NewProp_bUsePreRollingTimeout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreRollingTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreRollingTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreRollingTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSynchronizationInputSources_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TimeSynchronizationInputSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSynchronizationInputSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeSynchronizationInputSources;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSources;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SyncMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SyncMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AutoFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWithRollover_MetaData[];
#endif
		static void NewProp_bWithRollover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithRollover;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynchronizedSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynchronizedSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SynchronizedSources;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NonSynchronizedSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonSynchronizedSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NonSynchronizedSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredCustomTimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RegisteredCustomTimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPreviousTimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPreviousTimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedProxiedTimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedProxiedTimecodeProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActualFrameOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimecodeSynchronizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_TimecodeSynchronizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimecodeSynchronizer.h" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource_MetaData[] = {
		{ "Category", "Frame Rate Settings" },
		{ "Comment", "/** Frame Rate Source. */" },
		{ "DisplayName", "Frame Rate Source" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Frame Rate Source." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource = { "FrameRateSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, FrameRateSource), Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationFrameRateSources, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource_MetaData)) }; // 1821391140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FixedFrameRate_MetaData[] = {
		{ "Category", "Frame Rate Settings" },
		{ "ClampMin", "15.0" },
		{ "Comment", "/** The fixed framerate to use. */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "The fixed framerate to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FixedFrameRate = { "FixedFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, FixedFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FixedFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FixedFrameRate_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType_MetaData[] = {
		{ "Category", "Timecode Provider" },
		{ "Comment", "/** Use a Timecode Provider. */" },
		{ "DisplayName", "Select" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Use a Timecode Provider." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType = { "TimecodeProviderType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, TimecodeProviderType), Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationTimecodeType, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType_MetaData)) }; // 812791850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProvider_MetaData[] = {
		{ "Category", "Timecode Provider" },
		{ "Comment", "/** Custom strategy to tick in a interval. */" },
		{ "DisplayName", "Timecode Source" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Custom strategy to tick in a interval." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProvider = { "TimecodeProvider", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, TimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_MainSynchronizationSourceIndex_MetaData[] = {
		{ "Category", "Timecode Provider" },
		{ "Comment", "/**\n\x09 * Index of the source that drives the synchronized Timecode.\n\x09 * The source need to be timecoded and flag as bUseForSynchronization\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Index of the source that drives the synchronized Timecode.\nThe source need to be timecoded and flag as bUseForSynchronization" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_MainSynchronizationSourceIndex = { "MainSynchronizationSourceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, MainSynchronizationSourceIndex), METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_MainSynchronizationSourceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_MainSynchronizationSourceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors_MetaData[] = {
		{ "Comment", "/** Enable verification of margin between synchronized time and source time */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Enable verification of margin between synchronized time and source time" },
	};
#endif
	void Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors_SetBit(void* Obj)
	{
		((UTimecodeSynchronizer*)Obj)->bUsePreRollingTimecodeMarginOfErrors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors = { "bUsePreRollingTimecodeMarginOfErrors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimecodeSynchronizer), &Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimecodeMarginOfErrors_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum gap size between synchronized time and source time */" },
		{ "EditCondition", "bUsePreRollingTimecodeMarginOfErrors" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Maximum gap size between synchronized time and source time" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimecodeMarginOfErrors = { "PreRollingTimecodeMarginOfErrors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, PreRollingTimecodeMarginOfErrors), METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimecodeMarginOfErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimecodeMarginOfErrors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout_MetaData[] = {
		{ "Comment", "/** Enable PreRoll timeout */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Enable PreRoll timeout" },
	};
#endif
	void Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout_SetBit(void* Obj)
	{
		((UTimecodeSynchronizer*)Obj)->bUsePreRollingTimeout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout = { "bUsePreRollingTimeout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimecodeSynchronizer), &Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimeout_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How long to wait for all source to be ready */" },
		{ "EditCondition", "bUsePreRollingTimeout" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "How long to wait for all source to be ready" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimeout = { "PreRollingTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, PreRollingTimeout), METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_Inner_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//! ONLY MODIFY THESE IN EDITOR\n//! TODO: Deprecate this and make it private.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "! ONLY MODIFY THESE IN EDITOR\n! TODO: Deprecate this and make it private." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_Inner = { "TimeSynchronizationInputSources", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTimeSynchronizationSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//! ONLY MODIFY THESE IN EDITOR\n//! TODO: Deprecate this and make it private.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "! ONLY MODIFY THESE IN EDITOR\n! TODO: Deprecate this and make it private." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources = { "TimeSynchronizationInputSources", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, TimeSynchronizationInputSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources_Inner = { "DynamicSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTimeSynchronizationSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources = { "DynamicSources", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, DynamicSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** What mode will be used for synchronization. */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "What mode will be used for synchronization." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode = { "SyncMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, SyncMode), Z_Construct_UEnum_TimecodeSynchronizer_ETimecodeSynchronizationSyncMode, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode_MetaData)) }; // 1952084660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameOffset_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ClampMax", "640" },
		{ "ClampMin", "-640" },
		{ "Comment", "/**\n\x09 * When UserDefined mode is used, the number of frames delayed from the Provider's timecode.\n\x09 * Negative values indicate the used timecode will be ahead of the Provider's.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "When UserDefined mode is used, the number of frames delayed from the Provider's timecode.\nNegative values indicate the used timecode will be ahead of the Provider's." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameOffset = { "FrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, FrameOffset), METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_AutoFrameOffset_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ClampMax", "640" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Similar to FrameOffset.\n\x09 * For Auto mode, this represents the number of frames behind the newest synced frame.\n\x09 * For AutoModeOldest, the is the of frames ahead of the last synced frame.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Similar to FrameOffset.\nFor Auto mode, this represents the number of frames behind the newest synced frame.\nFor AutoModeOldest, the is the of frames ahead of the last synced frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_AutoFrameOffset = { "AutoFrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, AutoFrameOffset), METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_AutoFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_AutoFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/** Whether or not the specified Provider's timecode rolls over. (Rollover is expected to occur at Timecode 24:00:00:00). */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Whether or not the specified Provider's timecode rolls over. (Rollover is expected to occur at Timecode 24:00:00:00)." },
	};
#endif
	void Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover_SetBit(void* Obj)
	{
		((UTimecodeSynchronizer*)Obj)->bWithRollover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover = { "bWithRollover", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTimecodeSynchronizer), &Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources_Inner = { "SynchronizedSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource, METADATA_PARAMS(nullptr, 0) }; // 3697361572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Sources used for synchronization */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Sources used for synchronization" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources = { "SynchronizedSources", nullptr, (EPropertyFlags)0x0040000000222001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, SynchronizedSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources_MetaData)) }; // 3697361572
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources_Inner = { "NonSynchronizedSources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource, METADATA_PARAMS(nullptr, 0) }; // 3697361572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Sources that wants to be synchronized */" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
		{ "ToolTip", "Sources that wants to be synchronized" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources = { "NonSynchronizedSources", nullptr, (EPropertyFlags)0x0040000000222001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, NonSynchronizedSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources_MetaData)) }; // 3697361572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_RegisteredCustomTimeStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_RegisteredCustomTimeStep = { "RegisteredCustomTimeStep", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, RegisteredCustomTimeStep), Z_Construct_UClass_UFixedFrameRateCustomTimeStep_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_RegisteredCustomTimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_RegisteredCustomTimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedPreviousTimecodeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedPreviousTimecodeProvider = { "CachedPreviousTimecodeProvider", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, CachedPreviousTimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedPreviousTimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedPreviousTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedProxiedTimecodeProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedProxiedTimecodeProvider = { "CachedProxiedTimecodeProvider", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, CachedProxiedTimecodeProvider), Z_Construct_UClass_UTimecodeProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedProxiedTimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedProxiedTimecodeProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_ActualFrameOffset_MetaData[] = {
		{ "Category", "Synchronization" },
		{ "ModuleRelativePath", "Public/TimecodeSynchronizer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_ActualFrameOffset = { "ActualFrameOffset", nullptr, (EPropertyFlags)0x0040000000222001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimecodeSynchronizer, ActualFrameOffset), METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_ActualFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_ActualFrameOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimecodeSynchronizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameRateSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FixedFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProviderType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_MainSynchronizationSourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimecodeMarginOfErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimecodeMarginOfErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bUsePreRollingTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_PreRollingTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_TimeSynchronizationInputSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_DynamicSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_FrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_AutoFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_bWithRollover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_SynchronizedSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_NonSynchronizedSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_RegisteredCustomTimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedPreviousTimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_CachedProxiedTimecodeProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimecodeSynchronizer_Statics::NewProp_ActualFrameOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimecodeSynchronizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimecodeSynchronizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimecodeSynchronizer_Statics::ClassParams = {
		&UTimecodeSynchronizer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimecodeSynchronizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimecodeSynchronizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimecodeSynchronizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimecodeSynchronizer()
	{
		if (!Z_Registration_Info_UClass_UTimecodeSynchronizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimecodeSynchronizer.OuterSingleton, Z_Construct_UClass_UTimecodeSynchronizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimecodeSynchronizer.OuterSingleton;
	}
	template<> TIMECODESYNCHRONIZER_API UClass* StaticClass<UTimecodeSynchronizer>()
	{
		return UTimecodeSynchronizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimecodeSynchronizer);
	UTimecodeSynchronizer::~UTimecodeSynchronizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::EnumInfo[] = {
		{ ETimecodeSynchronizationSyncMode_StaticEnum, TEXT("ETimecodeSynchronizationSyncMode"), &Z_Registration_Info_UEnum_ETimecodeSynchronizationSyncMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1952084660U) },
		{ ETimecodeSynchronizationTimecodeType_StaticEnum, TEXT("ETimecodeSynchronizationTimecodeType"), &Z_Registration_Info_UEnum_ETimecodeSynchronizationTimecodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 812791850U) },
		{ ETimecodeSynchronizationFrameRateSources_StaticEnum, TEXT("ETimecodeSynchronizationFrameRateSources"), &Z_Registration_Info_UEnum_ETimecodeSynchronizationFrameRateSources, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1821391140U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::ScriptStructInfo[] = {
		{ FTimecodeSynchronizerActiveTimecodedInputSource::StaticStruct, Z_Construct_UScriptStruct_FTimecodeSynchronizerActiveTimecodedInputSource_Statics::NewStructOps, TEXT("TimecodeSynchronizerActiveTimecodedInputSource"), &Z_Registration_Info_UScriptStruct_TimecodeSynchronizerActiveTimecodedInputSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimecodeSynchronizerActiveTimecodedInputSource), 3697361572U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimecodeSynchronizer, UTimecodeSynchronizer::StaticClass, TEXT("UTimecodeSynchronizer"), &Z_Registration_Info_UClass_UTimecodeSynchronizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimecodeSynchronizer), 2757153375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_3692319816(TEXT("/Script/TimecodeSynchronizer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_TimecodeSynchronizer_Source_TimecodeSynchronizer_Public_TimecodeSynchronizer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
