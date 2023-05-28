// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/SimpleAudio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAudio() {}
// Cross Module References
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAudioHelper();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAudioHelper_NoRegister();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAVHelper();
	AVCODECSCORERHI_API UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAudioPacket();
	UPackage* Z_Construct_UPackage__Script_AVCodecsCoreRHI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleAudioCodec;
	static UEnum* ESimpleAudioCodec_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleAudioCodec.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleAudioCodec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("ESimpleAudioCodec"));
		}
		return Z_Registration_Info_UEnum_ESimpleAudioCodec.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UEnum* StaticEnum<ESimpleAudioCodec>()
	{
		return ESimpleAudioCodec_StaticEnum();
	}
	struct Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::Enumerators[] = {
		{ "ESimpleAudioCodec::AAC", (int64)ESimpleAudioCodec::AAC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::Enum_MetaDataParams[] = {
		{ "AAC.Name", "ESimpleAudioCodec::AAC" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Audio/SimpleAudio.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		"ESimpleAudioCodec",
		"ESimpleAudioCodec",
		Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec()
	{
		if (!Z_Registration_Info_UEnum_ESimpleAudioCodec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleAudioCodec.InnerSingleton, Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleAudioCodec_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleAudioCodec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleAudioPacket;
class UScriptStruct* FSimpleAudioPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleAudioPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleAudioPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleAudioPacket, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("SimpleAudioPacket"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleAudioPacket.OuterSingleton;
}
template<> AVCODECSCORERHI_API UScriptStruct* StaticStruct<FSimpleAudioPacket>()
{
	return FSimpleAudioPacket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Audio/SimpleAudio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleAudioPacket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		&NewStructOps,
		"SimpleAudioPacket",
		sizeof(FSimpleAudioPacket),
		alignof(FSimpleAudioPacket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleAudioPacket()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleAudioPacket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleAudioPacket.InnerSingleton, Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleAudioPacket.InnerSingleton;
	}
	void USimpleAudioHelper::StaticRegisterNativesUSimpleAudioHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAudioHelper);
	UClass* Z_Construct_UClass_USimpleAudioHelper_NoRegister()
	{
		return USimpleAudioHelper::StaticClass();
	}
	struct Z_Construct_UClass_USimpleAudioHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleAudioHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAVHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleAudioHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Audio/SimpleAudio.h" },
		{ "ModuleRelativePath", "Public/Audio/SimpleAudio.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleAudioHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleAudioHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAudioHelper_Statics::ClassParams = {
		&USimpleAudioHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleAudioHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAudioHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleAudioHelper()
	{
		if (!Z_Registration_Info_UClass_USimpleAudioHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAudioHelper.OuterSingleton, Z_Construct_UClass_USimpleAudioHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleAudioHelper.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UClass* StaticClass<USimpleAudioHelper>()
	{
		return USimpleAudioHelper::StaticClass();
	}
	USimpleAudioHelper::USimpleAudioHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAudioHelper);
	USimpleAudioHelper::~USimpleAudioHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::EnumInfo[] = {
		{ ESimpleAudioCodec_StaticEnum, TEXT("ESimpleAudioCodec"), &Z_Registration_Info_UEnum_ESimpleAudioCodec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1534690332U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::ScriptStructInfo[] = {
		{ FSimpleAudioPacket::StaticStruct, Z_Construct_UScriptStruct_FSimpleAudioPacket_Statics::NewStructOps, TEXT("SimpleAudioPacket"), &Z_Registration_Info_UScriptStruct_SimpleAudioPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleAudioPacket), 1461193873U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAudioHelper, USimpleAudioHelper::StaticClass, TEXT("USimpleAudioHelper"), &Z_Registration_Info_UClass_USimpleAudioHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAudioHelper), 1452990178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_3705364561(TEXT("/Script/AVCodecsCoreRHI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Audio_SimpleAudio_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
