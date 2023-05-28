// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/AudioBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioBus() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioBusChannels();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioBusChannels;
	static UEnum* EAudioBusChannels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioBusChannels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioBusChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioBusChannels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioBusChannels"));
		}
		return Z_Registration_Info_UEnum_EAudioBusChannels.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioBusChannels>()
	{
		return EAudioBusChannels_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAudioBusChannels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::Enumerators[] = {
		{ "EAudioBusChannels::Mono", (int64)EAudioBusChannels::Mono },
		{ "EAudioBusChannels::Stereo", (int64)EAudioBusChannels::Stereo },
		{ "EAudioBusChannels::Quad", (int64)EAudioBusChannels::Quad },
		{ "EAudioBusChannels::FivePointOne", (int64)EAudioBusChannels::FivePointOne },
		{ "EAudioBusChannels::SevenPointOne", (int64)EAudioBusChannels::SevenPointOne },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The number of channels to mix audio into the source bus\n" },
		{ "FivePointOne.Name", "EAudioBusChannels::FivePointOne" },
		{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
		{ "Mono.Name", "EAudioBusChannels::Mono" },
		{ "Quad.Name", "EAudioBusChannels::Quad" },
		{ "SevenPointOne.Name", "EAudioBusChannels::SevenPointOne" },
		{ "Stereo.Name", "EAudioBusChannels::Stereo" },
		{ "ToolTip", "The number of channels to mix audio into the source bus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAudioBusChannels",
		"EAudioBusChannels",
		Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAudioBusChannels()
	{
		if (!Z_Registration_Info_UEnum_EAudioBusChannels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioBusChannels.InnerSingleton, Z_Construct_UEnum_Engine_EAudioBusChannels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioBusChannels.InnerSingleton;
	}
	void UAudioBus::StaticRegisterNativesUAudioBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioBus);
	UClass* Z_Construct_UClass_UAudioBus_NoRegister()
	{
		return UAudioBus::StaticClass();
	}
	struct Z_Construct_UClass_UAudioBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioBusChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBusChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioBusChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// An audio bus is an object which represents an audio patch cord. Audio can be sent to it. It can be sonified using USoundSourceBuses.\n// Instances of the audio bus are created in the audio engine. \n" },
		{ "IncludePath", "Sound/AudioBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
		{ "ToolTip", "An audio bus is an object which represents an audio patch cord. Audio can be sent to it. It can be sonified using USoundSourceBuses.\nInstances of the audio bus are created in the audio engine." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** Number of channels to use for the Audio Bus. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioBus.h" },
		{ "ToolTip", "Number of channels to use for the Audio Bus." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels = { "AudioBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioBus, AudioBusChannels), Z_Construct_UEnum_Engine_EAudioBusChannels, METADATA_PARAMS(Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_MetaData)) }; // 746910528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioBus_Statics::NewProp_AudioBusChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioBus_Statics::ClassParams = {
		&UAudioBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioBus()
	{
		if (!Z_Registration_Info_UClass_UAudioBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioBus.OuterSingleton, Z_Construct_UClass_UAudioBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioBus.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioBus>()
	{
		return UAudioBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioBus);
	UAudioBus::~UAudioBus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics::EnumInfo[] = {
		{ EAudioBusChannels_StaticEnum, TEXT("EAudioBusChannels"), &Z_Registration_Info_UEnum_EAudioBusChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 746910528U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioBus, UAudioBus::StaticClass, TEXT("UAudioBus"), &Z_Registration_Info_UClass_UAudioBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioBus), 2001558459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_435283369(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioBus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
