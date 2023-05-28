// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCaptureTimecodeProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCaptureTimecodeProvider() {}
// Cross Module References
	AUDIOCAPTURETIMECODEPROVIDER_API UClass* Z_Construct_UClass_UAudioCaptureTimecodeProvider();
	AUDIOCAPTURETIMECODEPROVIDER_API UClass* Z_Construct_UClass_UAudioCaptureTimecodeProvider_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	TIMEMANAGEMENT_API UClass* Z_Construct_UClass_UGenlockedTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_AudioCaptureTimecodeProvider();
// End Cross Module References
	void UAudioCaptureTimecodeProvider::StaticRegisterNativesUAudioCaptureTimecodeProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCaptureTimecodeProvider);
	UClass* Z_Construct_UClass_UAudioCaptureTimecodeProvider_NoRegister()
	{
		return UAudioCaptureTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectFrameRate_MetaData[];
#endif
		static void NewProp_bDetectFrameRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssumeDropFrameFormat_MetaData[];
#endif
		static void NewProp_bAssumeDropFrameFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssumeDropFrameFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGenlockedTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioCaptureTimecodeProvider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Read the LTC from the audio capture device.\n */" },
		{ "IncludePath", "AudioCaptureTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioCaptureTimecodeProvider.h" },
		{ "ToolTip", "Read the LTC from the audio capture device." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate_MetaData[] = {
		{ "Category", "TimecodeProvider" },
		{ "Comment", "/**\n\x09 * Detect the frame rate from the audio source.\n\x09 * It may takes some extra time before the frame rate is properly detected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCaptureTimecodeProvider.h" },
		{ "ToolTip", "Detect the frame rate from the audio source.\nIt may takes some extra time before the frame rate is properly detected." },
	};
#endif
	void Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate_SetBit(void* Obj)
	{
		((UAudioCaptureTimecodeProvider*)Obj)->bDetectFrameRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate = { "bDetectFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioCaptureTimecodeProvider), &Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat_MetaData[] = {
		{ "Category", "TimecodeProvider" },
		{ "Comment", "/** When detecting the frame rate. Assume the frame rate is a drop frame format. */" },
		{ "EditCondition", "bDetectFrameRate" },
		{ "ModuleRelativePath", "Public/AudioCaptureTimecodeProvider.h" },
		{ "ToolTip", "When detecting the frame rate. Assume the frame rate is a drop frame format." },
	};
#endif
	void Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat_SetBit(void* Obj)
	{
		((UAudioCaptureTimecodeProvider*)Obj)->bAssumeDropFrameFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat = { "bAssumeDropFrameFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioCaptureTimecodeProvider), &Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "TimecodeProvider" },
		{ "Comment", "/**\n\x09 * Frame expected from the audio source.\n\x09 */" },
		{ "EditCondition", "!bDetectFrameRate" },
		{ "ModuleRelativePath", "Public/AudioCaptureTimecodeProvider.h" },
		{ "ToolTip", "Frame expected from the audio source." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioCaptureTimecodeProvider, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_AudioChannel_MetaData[] = {
		{ "Category", "TimecodeProvider" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Index of the Channel to used for the capture.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AudioCaptureTimecodeProvider.h" },
		{ "ToolTip", "Index of the Channel to used for the capture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_AudioChannel = { "AudioChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioCaptureTimecodeProvider, AudioChannel), METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_AudioChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_AudioChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bDetectFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_bAssumeDropFrameFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::NewProp_AudioChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCaptureTimecodeProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::ClassParams = {
		&UAudioCaptureTimecodeProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCaptureTimecodeProvider()
	{
		if (!Z_Registration_Info_UClass_UAudioCaptureTimecodeProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCaptureTimecodeProvider.OuterSingleton, Z_Construct_UClass_UAudioCaptureTimecodeProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioCaptureTimecodeProvider.OuterSingleton;
	}
	template<> AUDIOCAPTURETIMECODEPROVIDER_API UClass* StaticClass<UAudioCaptureTimecodeProvider>()
	{
		return UAudioCaptureTimecodeProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCaptureTimecodeProvider);
	UAudioCaptureTimecodeProvider::~UAudioCaptureTimecodeProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCaptureTimecodeProvider, UAudioCaptureTimecodeProvider::StaticClass, TEXT("UAudioCaptureTimecodeProvider"), &Z_Registration_Info_UClass_UAudioCaptureTimecodeProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCaptureTimecodeProvider), 2366345313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_1216736578(TEXT("/Script/AudioCaptureTimecodeProvider"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AudioCaptureTimecodeProvider_Source_AudioCaptureTimecodeProvider_Public_AudioCaptureTimecodeProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
