// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EffectConvolutionReverb.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectConvolutionReverb() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse();
	SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize;
	static UEnum* ESubmixEffectConvolutionReverbBlockSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESubmixEffectConvolutionReverbBlockSize"));
		}
		return Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixEffectConvolutionReverbBlockSize>()
	{
		return ESubmixEffectConvolutionReverbBlockSize_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::Enumerators[] = {
		{ "ESubmixEffectConvolutionReverbBlockSize::BlockSize256", (int64)ESubmixEffectConvolutionReverbBlockSize::BlockSize256 },
		{ "ESubmixEffectConvolutionReverbBlockSize::BlockSize512", (int64)ESubmixEffectConvolutionReverbBlockSize::BlockSize512 },
		{ "ESubmixEffectConvolutionReverbBlockSize::BlockSize1024", (int64)ESubmixEffectConvolutionReverbBlockSize::BlockSize1024 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::Enum_MetaDataParams[] = {
		{ "BlockSize1024.Comment", "/** 1024 audio frames per a block. */" },
		{ "BlockSize1024.Name", "ESubmixEffectConvolutionReverbBlockSize::BlockSize1024" },
		{ "BlockSize1024.ToolTip", "1024 audio frames per a block." },
		{ "BlockSize256.Comment", "/** 256 audio frames per a block. */" },
		{ "BlockSize256.Name", "ESubmixEffectConvolutionReverbBlockSize::BlockSize256" },
		{ "BlockSize256.ToolTip", "256 audio frames per a block." },
		{ "BlockSize512.Comment", "/** 512 audio frames per a block. */" },
		{ "BlockSize512.Name", "ESubmixEffectConvolutionReverbBlockSize::BlockSize512" },
		{ "BlockSize512.ToolTip", "512 audio frames per a block." },
		{ "Comment", "/** Block size of convolution reverb algorithm. */" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "Block size of convolution reverb algorithm." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESubmixEffectConvolutionReverbBlockSize",
		"ESubmixEffectConvolutionReverbBlockSize",
		Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.InnerSingleton, Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize.InnerSingleton;
	}
	void UAudioImpulseResponse::StaticRegisterNativesUAudioImpulseResponse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioImpulseResponse);
	UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister()
	{
		return UAudioImpulseResponse::StaticClass();
	}
	struct Z_Construct_UClass_UAudioImpulseResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseResponse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImpulseResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrueStereo_MetaData[];
#endif
		static void NewProp_bTrueStereo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrueStereo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IRData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IRData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IRData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEvenChannelCount_MetaData[];
#endif
		static void NewProp_bIsEvenChannelCount_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEvenChannelCount;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioImpulseResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// UAudioImpulseResponse\n// UAsset used to represent Imported Impulse Responses\n// ========================================================================\n" },
		{ "IncludePath", "EffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "UAudioImpulseResponse\nUAsset used to represent Imported Impulse Responses" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_Inner = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "Comment", "/** The interleaved audio samples used in convolution. */" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "The interleaved audio samples used in convolution." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioImpulseResponse, ImpulseResponse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels_MetaData[] = {
		{ "Comment", "/** The number of channels in impulse response. */" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "The number of channels in impulse response." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioImpulseResponse, NumChannels), METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Comment", "/** The original sample rate of the impulse response. */" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "The original sample rate of the impulse response." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioImpulseResponse, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "15.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. */" },
		{ "DisplayName", "Normalization Volume (dB)" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioImpulseResponse, NormalizationVolumeDb), METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, impulse response channels are interpreted as true stereo which allows channel crosstalk. If false, impulse response channels are interpreted as independent channel impulses. */" },
		{ "EditCondition", "(NumChannels > 0) && bIsEvenChannelCount" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "If true, impulse response channels are interpreted as true stereo which allows channel crosstalk. If false, impulse response channels are interpreted as independent channel impulses." },
	};
#endif
	void Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo_SetBit(void* Obj)
	{
		((UAudioImpulseResponse*)Obj)->bTrueStereo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo = { "bTrueStereo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioImpulseResponse), &Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_Inner = { "IRData", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData = { "IRData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioImpulseResponse, IRData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount_MetaData[] = {
		{ "Comment", "// Used to evaluate whether TrueStereo should be editable\n" },
		{ "ModuleRelativePath", "Public/EffectConvolutionReverb.h" },
		{ "ToolTip", "Used to evaluate whether TrueStereo should be editable" },
	};
#endif
	void Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount_SetBit(void* Obj)
	{
		((UAudioImpulseResponse*)Obj)->bIsEvenChannelCount = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount = { "bIsEvenChannelCount", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioImpulseResponse), &Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioImpulseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_ImpulseResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NumChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_NormalizationVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bTrueStereo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_IRData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioImpulseResponse_Statics::NewProp_bIsEvenChannelCount,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioImpulseResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioImpulseResponse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioImpulseResponse_Statics::ClassParams = {
		&UAudioImpulseResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioImpulseResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioImpulseResponse()
	{
		if (!Z_Registration_Info_UClass_UAudioImpulseResponse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioImpulseResponse.OuterSingleton, Z_Construct_UClass_UAudioImpulseResponse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioImpulseResponse.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<UAudioImpulseResponse>()
	{
		return UAudioImpulseResponse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioImpulseResponse);
	UAudioImpulseResponse::~UAudioImpulseResponse() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioImpulseResponse)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics::EnumInfo[] = {
		{ ESubmixEffectConvolutionReverbBlockSize_StaticEnum, TEXT("ESubmixEffectConvolutionReverbBlockSize"), &Z_Registration_Info_UEnum_ESubmixEffectConvolutionReverbBlockSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3963133211U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioImpulseResponse, UAudioImpulseResponse::StaticClass, TEXT("UAudioImpulseResponse"), &Z_Registration_Info_UClass_UAudioImpulseResponse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioImpulseResponse), 3558140710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_195581000(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EffectConvolutionReverb_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
