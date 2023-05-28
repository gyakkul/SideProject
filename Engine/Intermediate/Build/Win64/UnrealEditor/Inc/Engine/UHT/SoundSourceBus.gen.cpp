// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSourceBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBus() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus();
	ENGINE_API UClass* Z_Construct_UClass_USoundSourceBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceBusChannels;
	static UEnum* ESourceBusChannels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESourceBusChannels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESourceBusChannels"));
		}
		return Z_Registration_Info_UEnum_ESourceBusChannels.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESourceBusChannels>()
	{
		return ESourceBusChannels_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESourceBusChannels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enumerators[] = {
		{ "ESourceBusChannels::Mono", (int64)ESourceBusChannels::Mono },
		{ "ESourceBusChannels::Stereo", (int64)ESourceBusChannels::Stereo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The number of channels to mix audio into the source bus\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "Mono.Name", "ESourceBusChannels::Mono" },
		{ "Stereo.Name", "ESourceBusChannels::Stereo" },
		{ "ToolTip", "The number of channels to mix audio into the source bus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESourceBusChannels",
		"ESourceBusChannels",
		Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESourceBusChannels()
	{
		if (!Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton, Z_Construct_UEnum_Engine_ESourceBusChannels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceBusChannels.InnerSingleton;
	}
	void USoundSourceBus::StaticRegisterNativesUSoundSourceBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSourceBus);
	UClass* Z_Construct_UClass_USoundSourceBus_NoRegister()
	{
		return USoundSourceBus::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceBusChannels_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBusChannels_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceBusChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBusDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceBusDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoDeactivateWhenSilent_MetaData[];
#endif
		static void NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoDeactivateWhenSilent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWave,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Sound" },
		{ "Comment", "// A source bus is a type of USoundBase and can be \"played\" like any sound.\n" },
		{ "HideCategories", "Compression SoundWave Streaming Subtitles Analysis Format Loading Info ImportSettings Object Object" },
		{ "IncludePath", "Sound/SoundSourceBus.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "A source bus is a type of USoundBase and can be \"played\" like any sound." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "How many channels to use for the source bus if the audio bus is not specified, otherwise it will use the audio bus object's channel count." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels = { "SourceBusChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSourceBus, SourceBusChannels), Z_Construct_UEnum_Engine_ESourceBusChannels, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_MetaData)) }; // 470156343
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "The duration (in seconds) to use for the source bus. A duration of 0.0 indicates to play the source bus indefinitely." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration = { "SourceBusDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSourceBus, SourceBusDuration), METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus_MetaData[] = {
		{ "Category", "BusProperties" },
		{ "Comment", "/** Audio bus to use as audio for this source bus. This source bus will sonify the audio from the audio bus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Audio bus to use as audio for this source bus. This source bus will sonify the audio from the audio bus." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSourceBus, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData[] = {
		{ "Comment", "/** Stop the source bus when the volume goes to zero. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSourceBus.h" },
		{ "ToolTip", "Stop the source bus when the volume goes to zero." },
	};
#endif
	void Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit(void* Obj)
	{
		((USoundSourceBus*)Obj)->bAutoDeactivateWhenSilent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent = { "bAutoDeactivateWhenSilent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundSourceBus), &Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSourceBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_SourceBusDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_AudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSourceBus_Statics::NewProp_bAutoDeactivateWhenSilent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceBus_Statics::ClassParams = {
		&USoundSourceBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSourceBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceBus()
	{
		if (!Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton, Z_Construct_UClass_USoundSourceBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSourceBus.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundSourceBus>()
	{
		return USoundSourceBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceBus);
	USoundSourceBus::~USoundSourceBus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::EnumInfo[] = {
		{ ESourceBusChannels_StaticEnum, TEXT("ESourceBusChannels"), &Z_Registration_Info_UEnum_ESourceBusChannels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 470156343U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSourceBus, USoundSourceBus::StaticClass, TEXT("USoundSourceBus"), &Z_Registration_Info_UClass_USoundSourceBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSourceBus), 941239863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_2112377262(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSourceBus_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
