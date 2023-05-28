// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundWaveLoadingBehavior() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior;
	static UEnum* ESoundWaveLoadingBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundWaveLoadingBehavior"));
		}
		return Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundWaveLoadingBehavior>()
	{
		return ESoundWaveLoadingBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::Enumerators[] = {
		{ "ESoundWaveLoadingBehavior::Inherited", (int64)ESoundWaveLoadingBehavior::Inherited },
		{ "ESoundWaveLoadingBehavior::RetainOnLoad", (int64)ESoundWaveLoadingBehavior::RetainOnLoad },
		{ "ESoundWaveLoadingBehavior::PrimeOnLoad", (int64)ESoundWaveLoadingBehavior::PrimeOnLoad },
		{ "ESoundWaveLoadingBehavior::LoadOnDemand", (int64)ESoundWaveLoadingBehavior::LoadOnDemand },
		{ "ESoundWaveLoadingBehavior::ForceInline", (int64)ESoundWaveLoadingBehavior::ForceInline },
		{ "ESoundWaveLoadingBehavior::Uninitialized", (int64)ESoundWaveLoadingBehavior::Uninitialized },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Only used when stream caching is enabled. Determines how we are going to load or retain a given audio asset.\n * A USoundWave's loading behavior can be overridden in the USoundWave itself, the sound wave's USoundClass, or by cvars.\n * The order of priority is defined as:\n * 1) The loading behavior set on the USoundWave\n * 2) The loading behavior set on the USoundWave's USoundClass.\n * 3) The loading behavior set on the nearest parent of a USoundWave's USoundClass.\n * 4) The loading behavior set via the au.streamcache cvars.\n */" },
		{ "ForceInline.Comment", "// Force all audio data for this audio asset to live outside of the cache and use the non-streaming decode pathways. Only usable if set on the USoundWave.\n" },
		{ "ForceInline.DisplayName", "Force Inline" },
		{ "ForceInline.Name", "ESoundWaveLoadingBehavior::ForceInline" },
		{ "ForceInline.ToolTip", "Force all audio data for this audio asset to live outside of the cache and use the non-streaming decode pathways. Only usable if set on the USoundWave." },
		{ "Inherited.Comment", "// If set on a USoundWave, use the setting defined by the USoundClass. If set on the next parent USoundClass, or the default behavior defined via the au.streamcache cvars.\n" },
		{ "Inherited.Name", "ESoundWaveLoadingBehavior::Inherited" },
		{ "Inherited.ToolTip", "If set on a USoundWave, use the setting defined by the USoundClass. If set on the next parent USoundClass, or the default behavior defined via the au.streamcache cvars." },
		{ "LoadOnDemand.Comment", "// the first chunk of audio for this asset will not be loaded until this asset is played or primed.\n" },
		{ "LoadOnDemand.Name", "ESoundWaveLoadingBehavior::LoadOnDemand" },
		{ "LoadOnDemand.ToolTip", "the first chunk of audio for this asset will not be loaded until this asset is played or primed." },
		{ "ModuleRelativePath", "Classes/Sound/SoundWaveLoadingBehavior.h" },
		{ "PrimeOnLoad.Comment", "// the first chunk of audio for this asset will be loaded into the cache from disk when this asset is loaded, but may be evicted to make room for other audio if it isn't played for a while.\n" },
		{ "PrimeOnLoad.Name", "ESoundWaveLoadingBehavior::PrimeOnLoad" },
		{ "PrimeOnLoad.ToolTip", "the first chunk of audio for this asset will be loaded into the cache from disk when this asset is loaded, but may be evicted to make room for other audio if it isn't played for a while." },
		{ "RetainOnLoad.Comment", "// the first chunk of audio for this asset will be retained in the audio cache until a given USoundWave is either destroyed or USoundWave::ReleaseCompressedAudioData is called.\n" },
		{ "RetainOnLoad.Name", "ESoundWaveLoadingBehavior::RetainOnLoad" },
		{ "RetainOnLoad.ToolTip", "the first chunk of audio for this asset will be retained in the audio cache until a given USoundWave is either destroyed or USoundWave::ReleaseCompressedAudioData is called." },
		{ "ToolTip", "Only used when stream caching is enabled. Determines how we are going to load or retain a given audio asset.\nA USoundWave's loading behavior can be overridden in the USoundWave itself, the sound wave's USoundClass, or by cvars.\nThe order of priority is defined as:\n1) The loading behavior set on the USoundWave\n2) The loading behavior set on the USoundWave's USoundClass.\n3) The loading behavior set on the nearest parent of a USoundWave's USoundClass.\n4) The loading behavior set via the au.streamcache cvars." },
		{ "Uninitialized.Comment", "// This value is used to delineate when the value of ESoundWaveLoadingBehavior hasn't been cached on a USoundWave yet.\n" },
		{ "Uninitialized.Hidden", "" },
		{ "Uninitialized.Name", "ESoundWaveLoadingBehavior::Uninitialized" },
		{ "Uninitialized.ToolTip", "This value is used to delineate when the value of ESoundWaveLoadingBehavior hasn't been cached on a USoundWave yet." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESoundWaveLoadingBehavior",
		"ESoundWaveLoadingBehavior",
		Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior()
	{
		if (!Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.InnerSingleton, Z_Construct_UEnum_Engine_ESoundWaveLoadingBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h_Statics::EnumInfo[] = {
		{ ESoundWaveLoadingBehavior_StaticEnum, TEXT("ESoundWaveLoadingBehavior"), &Z_Registration_Info_UEnum_ESoundWaveLoadingBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2436623139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h_3746843521(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWaveLoadingBehavior_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
