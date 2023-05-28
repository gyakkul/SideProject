// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuation() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister();
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPriorityAttenuationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubmixSendMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttenuationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundDistanceCalc;
	static UEnum* ESoundDistanceCalc_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundDistanceCalc, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundDistanceCalc"));
		}
		return Z_Registration_Info_UEnum_ESoundDistanceCalc.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundDistanceCalc>()
	{
		return ESoundDistanceCalc_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enumerators[] = {
		{ "SOUNDDISTANCE_Normal", (int64)SOUNDDISTANCE_Normal },
		{ "SOUNDDISTANCE_InfiniteXYPlane", (int64)SOUNDDISTANCE_InfiniteXYPlane },
		{ "SOUNDDISTANCE_InfiniteXZPlane", (int64)SOUNDDISTANCE_InfiniteXZPlane },
		{ "SOUNDDISTANCE_InfiniteYZPlane", (int64)SOUNDDISTANCE_InfiniteYZPlane },
		{ "SOUNDDISTANCE_MAX", (int64)SOUNDDISTANCE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// This enumeration is deprecated\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "SOUNDDISTANCE_InfiniteXYPlane.Name", "SOUNDDISTANCE_InfiniteXYPlane" },
		{ "SOUNDDISTANCE_InfiniteXZPlane.Name", "SOUNDDISTANCE_InfiniteXZPlane" },
		{ "SOUNDDISTANCE_InfiniteYZPlane.Name", "SOUNDDISTANCE_InfiniteYZPlane" },
		{ "SOUNDDISTANCE_MAX.Name", "SOUNDDISTANCE_MAX" },
		{ "SOUNDDISTANCE_Normal.Name", "SOUNDDISTANCE_Normal" },
		{ "ToolTip", "This enumeration is deprecated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESoundDistanceCalc",
		"ESoundDistanceCalc",
		Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESoundDistanceCalc()
	{
		if (!Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton, Z_Construct_UEnum_Engine_ESoundDistanceCalc_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundDistanceCalc.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm;
	static UEnum* ESoundSpatializationAlgorithm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESoundSpatializationAlgorithm"));
		}
		return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESoundSpatializationAlgorithm>()
	{
		return ESoundSpatializationAlgorithm_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enumerators[] = {
		{ "SPATIALIZATION_Default", (int64)SPATIALIZATION_Default },
		{ "SPATIALIZATION_HRTF", (int64)SPATIALIZATION_HRTF },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "SPATIALIZATION_Default.Comment", "// Standard panning method for spatialization (linear or equal power method defined in project settings)\n" },
		{ "SPATIALIZATION_Default.DisplayName", "Panning" },
		{ "SPATIALIZATION_Default.Name", "SPATIALIZATION_Default" },
		{ "SPATIALIZATION_Default.ToolTip", "Standard panning method for spatialization (linear or equal power method defined in project settings)" },
		{ "SPATIALIZATION_HRTF.Comment", "// Binaural spatialization method if available (requires headphones, enabled by plugins)\n" },
		{ "SPATIALIZATION_HRTF.DisplayName", "Binaural" },
		{ "SPATIALIZATION_HRTF.Name", "SPATIALIZATION_HRTF" },
		{ "SPATIALIZATION_HRTF.ToolTip", "Binaural spatialization method if available (requires headphones, enabled by plugins)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESoundSpatializationAlgorithm",
		"ESoundSpatializationAlgorithm",
		Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm()
	{
		if (!Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton, Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAirAbsorptionMethod;
	static UEnum* EAirAbsorptionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAirAbsorptionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAirAbsorptionMethod"));
		}
		return Z_Registration_Info_UEnum_EAirAbsorptionMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAirAbsorptionMethod>()
	{
		return EAirAbsorptionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enumerators[] = {
		{ "EAirAbsorptionMethod::Linear", (int64)EAirAbsorptionMethod::Linear },
		{ "EAirAbsorptionMethod::CustomCurve", (int64)EAirAbsorptionMethod::CustomCurve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// The air absorption conforms to a custom distance curve.\n" },
		{ "CustomCurve.Name", "EAirAbsorptionMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "The air absorption conforms to a custom distance curve." },
		{ "Linear.Comment", "// The air absorption conform to a linear distance function\n" },
		{ "Linear.Name", "EAirAbsorptionMethod::Linear" },
		{ "Linear.ToolTip", "The air absorption conform to a linear distance function" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAirAbsorptionMethod",
		"EAirAbsorptionMethod",
		Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAirAbsorptionMethod()
	{
		if (!Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton, Z_Construct_UEnum_Engine_EAirAbsorptionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAirAbsorptionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReverbSendMethod;
	static UEnum* EReverbSendMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EReverbSendMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EReverbSendMethod"));
		}
		return Z_Registration_Info_UEnum_EReverbSendMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EReverbSendMethod>()
	{
		return EReverbSendMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EReverbSendMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enumerators[] = {
		{ "EReverbSendMethod::Linear", (int64)EReverbSendMethod::Linear },
		{ "EReverbSendMethod::CustomCurve", (int64)EReverbSendMethod::CustomCurve },
		{ "EReverbSendMethod::Manual", (int64)EReverbSendMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A reverb send based on a supplied curve\n" },
		{ "CustomCurve.Name", "EReverbSendMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A reverb send based on a supplied curve" },
		{ "Linear.Comment", "// A reverb send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "EReverbSendMethod::Linear" },
		{ "Linear.ToolTip", "A reverb send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual reverb send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EReverbSendMethod::Manual" },
		{ "Manual.ToolTip", "A manual reverb send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EReverbSendMethod",
		"EReverbSendMethod",
		Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EReverbSendMethod()
	{
		if (!Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton, Z_Construct_UEnum_Engine_EReverbSendMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReverbSendMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixSendMethod;
	static UEnum* ESubmixSendMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixSendMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixSendMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixSendMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESubmixSendMethod"));
		}
		return Z_Registration_Info_UEnum_ESubmixSendMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESubmixSendMethod>()
	{
		return ESubmixSendMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::Enumerators[] = {
		{ "ESubmixSendMethod::Linear", (int64)ESubmixSendMethod::Linear },
		{ "ESubmixSendMethod::CustomCurve", (int64)ESubmixSendMethod::CustomCurve },
		{ "ESubmixSendMethod::Manual", (int64)ESubmixSendMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A submix send based on a supplied curve\n" },
		{ "CustomCurve.Name", "ESubmixSendMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A submix send based on a supplied curve" },
		{ "Linear.Comment", "// A submix send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "ESubmixSendMethod::Linear" },
		{ "Linear.ToolTip", "A submix send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual submix send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "ESubmixSendMethod::Manual" },
		{ "Manual.ToolTip", "A manual submix send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESubmixSendMethod",
		"ESubmixSendMethod",
		Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESubmixSendMethod()
	{
		if (!Z_Registration_Info_UEnum_ESubmixSendMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixSendMethod.InnerSingleton, Z_Construct_UEnum_Engine_ESubmixSendMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixSendMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPriorityAttenuationMethod;
	static UEnum* EPriorityAttenuationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPriorityAttenuationMethod"));
		}
		return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPriorityAttenuationMethod>()
	{
		return EPriorityAttenuationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enumerators[] = {
		{ "EPriorityAttenuationMethod::Linear", (int64)EPriorityAttenuationMethod::Linear },
		{ "EPriorityAttenuationMethod::CustomCurve", (int64)EPriorityAttenuationMethod::CustomCurve },
		{ "EPriorityAttenuationMethod::Manual", (int64)EPriorityAttenuationMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A priority attenuation based on a supplied curve\n" },
		{ "CustomCurve.Name", "EPriorityAttenuationMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A priority attenuation based on a supplied curve" },
		{ "Linear.Comment", "// A priority attenuation based on linear interpolation between a distance range and priority attenuation range\n" },
		{ "Linear.Name", "EPriorityAttenuationMethod::Linear" },
		{ "Linear.ToolTip", "A priority attenuation based on linear interpolation between a distance range and priority attenuation range" },
		{ "Manual.Comment", "// A manual priority attenuation (Uses the specified constant value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "EPriorityAttenuationMethod::Manual" },
		{ "Manual.ToolTip", "A manual priority attenuation (Uses the specified constant value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPriorityAttenuationMethod",
		"EPriorityAttenuationMethod",
		Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPriorityAttenuationMethod()
	{
		if (!Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EPriorityAttenuationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPriorityAttenuationMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings;
class UScriptStruct* FSoundAttenuationPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundAttenuationPluginSettings>()
{
	return FSoundAttenuationPluginSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpatializationPluginSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpatializationPluginSettingsArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OcclusionPluginSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OcclusionPluginSettingsArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReverbPluginSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReverbPluginSettingsArray;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceDataOverridePluginSettingsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataOverridePluginSettingsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceDataOverridePluginSettingsArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationPluginSettings>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_Inner = { "SpatializationPluginSettingsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/** Settings to use with spatialization audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Spatialization Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with spatialization audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray = { "SpatializationPluginSettingsArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationPluginSettings, SpatializationPluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_Inner = { "OcclusionPluginSettingsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Occlusion Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with occlusion audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray = { "OcclusionPluginSettingsArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationPluginSettings, OcclusionPluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_Inner = { "ReverbPluginSettingsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** Settings to use with reverb audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Reverb Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with reverb audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray = { "ReverbPluginSettingsArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationPluginSettings, ReverbPluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_Inner = { "SourceDataOverridePluginSettingsArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USourceDataOverridePluginSourceSettingsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Settings to use with source data override audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings. */" },
		{ "DisplayName", "Source Data Override Plugin Settings" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Settings to use with source data override audio plugin. These are defined by the plugin creator. Not all audio plugins utilize this feature. This is an array so multiple plugins can have settings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray = { "SourceDataOverridePluginSettingsArray", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationPluginSettings, SourceDataOverridePluginSettingsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SpatializationPluginSettingsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_OcclusionPluginSettingsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_ReverbPluginSettingsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewProp_SourceDataOverridePluginSettingsArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundAttenuationPluginSettings",
		sizeof(FSoundAttenuationPluginSettings),
		alignof(FSoundAttenuationPluginSettings),
		Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings;
class UScriptStruct* FAttenuationSubmixSendSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AttenuationSubmixSendSettings"));
	}
	return Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAttenuationSubmixSendSettings>()
{
	return FAttenuationSubmixSendSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubmixSendMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SubmixSendMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendLevelMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubmixSendLevelMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendLevelMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubmixSendLevelMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendDistanceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubmixSendDistanceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendDistanceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubmixSendDistanceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualSubmixSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualSubmixSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSubmixSendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSubmixSendCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttenuationSubmixSendSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** Submix to send audio to based on distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Submix to send audio to based on distance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, Submix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_Submix_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** What method to use to use for submix sends. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to use for submix sends." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod = { "SubmixSendMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, SubmixSendMethod), Z_Construct_UEnum_Engine_ESubmixSendMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod_MetaData)) }; // 1570535340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMin_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** The amount to send to the Submix when the sound is located at a distance equal to value specified in the submix send distance min. */" },
		{ "DisplayName", "Submix Min Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to the Submix when the sound is located at a distance equal to value specified in the submix send distance min." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMin = { "SubmixSendLevelMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, SubmixSendLevelMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMax_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** The amount to send to the Submix when the sound is located at a distance equal to value specified in the reverb max send distance. */" },
		{ "DisplayName", "Submix Max Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to the Submix when the sound is located at a distance equal to value specified in the reverb max send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMax = { "SubmixSendLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, SubmixSendLevelMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMin_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** The min distance to send to the Submix. */" },
		{ "DisplayName", "Submix Min Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The min distance to send to the Submix." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMin = { "SubmixSendDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, SubmixSendDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMax_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** The max distance to send to the Submix. */" },
		{ "DisplayName", "Submix Max Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance to send to the Submix." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMax = { "SubmixSendDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, SubmixSendDistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_ManualSubmixSendLevel_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/* The manual Submix send level to use. Doesn't change as a function of distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The manual Submix send level to use. Doesn't change as a function of distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_ManualSubmixSendLevel = { "ManualSubmixSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, ManualSubmixSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_ManualSubmixSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_ManualSubmixSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_CustomSubmixSendCurve_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/* The custom Submix send curve to use for distance-based send level. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The custom Submix send curve to use for distance-based send level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_CustomSubmixSendCurve = { "CustomSubmixSendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttenuationSubmixSendSettings, CustomSubmixSendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_CustomSubmixSendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_CustomSubmixSendCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_Submix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendLevelMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_SubmixSendDistanceMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_ManualSubmixSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewProp_CustomSubmixSendCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AttenuationSubmixSendSettings",
		sizeof(FAttenuationSubmixSendSettings),
		alignof(FAttenuationSubmixSendSettings),
		Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.InnerSingleton, Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoundAttenuationSettings>() == std::is_polymorphic<FBaseAttenuationSettings>(), "USTRUCT FSoundAttenuationSettings cannot be polymorphic unless super FBaseAttenuationSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundAttenuationSettings;
class UScriptStruct* FSoundAttenuationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundAttenuationSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundAttenuationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundAttenuationSettings>()
{
	return FSoundAttenuationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuate_MetaData[];
#endif
		static void NewProp_bAttenuate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpatialize_MetaData[];
#endif
		static void NewProp_bSpatialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpatialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttenuateWithLPF_MetaData[];
#endif
		static void NewProp_bAttenuateWithLPF_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttenuateWithLPF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableListenerFocus_MetaData[];
#endif
		static void NewProp_bEnableListenerFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableListenerFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFocusInterpolation_MetaData[];
#endif
		static void NewProp_bEnableFocusInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFocusInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusion_MetaData[];
#endif
		static void NewProp_bEnableOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexCollisionForOcclusion_MetaData[];
#endif
		static void NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollisionForOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReverbSend_MetaData[];
#endif
		static void NewProp_bEnableReverbSend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReverbSend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePriorityAttenuation_MetaData[];
#endif
		static void NewProp_bEnablePriorityAttenuation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePriorityAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNormalizationToStereoSounds_MetaData[];
#endif
		static void NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNormalizationToStereoSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLogFrequencyScaling_MetaData[];
#endif
		static void NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLogFrequencyScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmixSends_MetaData[];
#endif
		static void NewProp_bEnableSubmixSends_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmixSends;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSourceDataOverride_MetaData[];
#endif
		static void NewProp_bEnableSourceDataOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSourceDataOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSendToAudioLink_MetaData[];
#endif
		static void NewProp_bEnableSendToAudioLink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSendToAudioLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationAlgorithm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioLinkSettingsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioLinkSettingsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BinauralRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BinauralRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLowpassAirAbsorptionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLowpassAirAbsorptionCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomHighpassAirAbsorptionCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomHighpassAirAbsorptionCurve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbsorptionMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbsorptionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OcclusionTraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReverbSendMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSendMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReverbSendMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PriorityAttenuationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PriorityAttenuationMethod;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceType;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OmniRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OmniRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoSpread;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationPluginSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpatializationPluginSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusMax;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFRadiusMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFRadiusMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LPFFrequencyAtMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LPFFrequencyAtMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPFFrequencyAtMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HPFFrequencyAtMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusAzimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusAzimuth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusAzimuth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusAzimuth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusPriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusPriorityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusPriorityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusVolumeAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusVolumeAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonFocusVolumeAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NonFocusVolumeAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusAttackInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusAttackInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusReleaseInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusReleaseInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionLowPassFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionLowPassFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionVolumeAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionVolumeAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionInterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionInterpolationTime;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionPluginSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OcclusionPluginSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbPluginSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReverbPluginSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbWetLevelMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbWetLevelMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbDistanceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverbDistanceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualReverbSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualReverbSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationDistanceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationDistanceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriorityAttenuationDistanceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PriorityAttenuationDistanceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualPriorityAttenuation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualPriorityAttenuation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomReverbSendCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomReverbSendCurve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubmixSendSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixSendSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixSendSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPriorityAttenuationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPriorityAttenuationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PluginSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PluginSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\nThe settings for attenuating.\n*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The settings for attenuating." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundAttenuationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_MetaData[] = {
		{ "Category", "AttenuationDistance" },
		{ "Comment", "/* Allows distance-based volume attenuation. */" },
		{ "DisplayName", "Enable Volume Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows distance-based volume attenuation." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bAttenuate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate = { "bAttenuate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/* Allows the source to be 3D spatialized. */" },
		{ "DisplayName", "Enable Spatialization" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows the source to be 3D spatialized." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bSpatialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize = { "bSpatialize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance. */" },
		{ "DisplayName", "Enable Air Absorption" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Allows simulation of air absorption by applying a filter with a cutoff frequency as a function of distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bAttenuateWithLPF = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF = { "bAttenuateWithLPF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Enable listener focus-based adjustments. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enable listener focus-based adjustments." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableListenerFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus = { "bEnableListenerFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Enables focus interpolation to smooth transition in and and of focus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables focus interpolation to smooth transition in and and of focus." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableFocusInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation = { "bEnableFocusInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Enables realtime occlusion tracing. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables realtime occlusion tracing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion = { "bEnableOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/** Enables tracing against complex collision when doing occlusion traces. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables tracing against complex collision when doing occlusion traces." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bUseComplexCollisionForOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion = { "bUseComplexCollisionForOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** Enables adjusting reverb sends based on distance. */" },
		{ "DisplayName", "Enable Reverb Send" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables adjusting reverb sends based on distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableReverbSend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend = { "bEnableReverbSend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/** Enables attenuation of sound priority based off distance. */" },
		{ "DisplayName", "Enable Priority Attenuation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables attenuation of sound priority based off distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnablePriorityAttenuation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation = { "bEnablePriorityAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "Comment", "/** Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing. */" },
		{ "DisplayName", "Normalize 3D Stereo Sounds" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables applying a -6 dB attenuation to stereo assets which are 3d spatialized. Avoids clipping when assets have spread of 0.0 due to channel summing." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bApplyNormalizationToStereoSounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds = { "bApplyNormalizationToStereoSounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear). */" },
		{ "DisplayName", "Enable Log Frequency Scaling" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables applying a log scale to frequency values (so frequency sweeping is perceptually linear)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableLogFrequencyScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling = { "bEnableLogFrequencyScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** Enables submix sends based on distance. */" },
		{ "DisplayName", "Enable Submix Send" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables submix sends based on distance." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableSubmixSends = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends = { "bEnableSubmixSends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_MetaData[] = {
		{ "Category", "AttenuationSourceDataOverride" },
		{ "Comment", "/** Enables overriding WaveInstance data using source data override plugin */" },
		{ "DisplayName", "Enable Source Data Override" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables overriding WaveInstance data using source data override plugin" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableSourceDataOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride = { "bEnableSourceDataOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_MetaData[] = {
		{ "Category", "AttenuationAudioLink" },
		{ "Comment", "/** Enables/Disables AudioLink on all sources using this attenuation */" },
		{ "DisplayName", "Enable Send to AudioLink" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Enables/Disables AudioLink on all sources using this attenuation" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit(void* Obj)
	{
		((FSoundAttenuationSettings*)Obj)->bEnableSendToAudioLink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink = { "bEnableSendToAudioLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSoundAttenuationSettings), &Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What method we use to spatialize the sound. */" },
		{ "DisplayName", "Spatialization Method" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method we use to spatialize the sound." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm = { "SpatializationAlgorithm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationAlgorithm), Z_Construct_UEnum_Engine_ESoundSpatializationAlgorithm, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm_MetaData)) }; // 1569552774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride_MetaData[] = {
		{ "Category", "AttenuationAudioLink" },
		{ "Comment", "/** AudioLink Setting Overrides */" },
		{ "DisplayName", "AudioLink Settings Override" },
		{ "EditCondition", "bEnableSendToAudioLink" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "AudioLink Setting Overrides" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride = { "AudioLinkSettingsOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, AudioLinkSettingsOverride), Z_Construct_UClass_UAudioLinkSettingsAbstract_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What min radius to use to swap to non-binaural audio when a sound starts playing. */" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What min radius to use to swap to non-binaural audio when a sound starts playing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius = { "BinauralRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, BinauralRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption lowpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve = { "CustomLowpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomLowpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis) */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The normalized custom curve to use for the air absorption highpass frequency values. Does a mapping from defined distance values (x-axis) and defined frequency values (y-axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve = { "CustomHighpassAirAbsorptionCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomHighpassAirAbsorptionCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/** What method to use to map distance values to frequency absorption values. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to map distance values to frequency absorption values." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod = { "AbsorptionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, AbsorptionMethod), Z_Construct_UEnum_Engine_EAirAbsorptionMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_MetaData)) }; // 2073908246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "Comment", "/* Which trace channel to use for audio occlusion checks. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Which trace channel to use for audio occlusion checks." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel = { "OcclusionTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** What method to use to control master reverb sends */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to control master reverb sends" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod = { "ReverbSendMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbSendMethod), Z_Construct_UEnum_Engine_EReverbSendMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_MetaData)) }; // 3127794035
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/** What method to use to control priority attenuation */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "What method to use to control priority attenuation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod = { "PriorityAttenuationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationMethod), Z_Construct_UEnum_Engine_EPriorityAttenuationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_MetaData)) }; // 995401789
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType = { "DistanceType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, DistanceType_DEPRECATED), Z_Construct_UEnum_Engine_ESoundDistanceCalc, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType_MetaData)) }; // 509531767
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The distance below which a sound is non-spatialized (2D). This prevents near-field audio from flipping as audio crosses the listener's position. This does not apply when using a 3rd party binaural plugin (audio will remain spatialized). */" },
		{ "DisplayName", "Non-Spatialized Radius" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance below which a sound is non-spatialized (2D). This prevents near-field audio from flipping as audio crosses the listener's position. This does not apply when using a 3rd party binaural plugin (audio will remain spatialized)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius = { "OmniRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OmniRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread_MetaData[] = {
		{ "Category", "AttenuationSpatialization" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The world-space distance between left and right stereo channels when stereo assets are 3D spatialized. */" },
		{ "DisplayName", "3D Stereo Spread" },
		{ "EditCondition", "bSpatialize" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The world-space distance between left and right stereo channels when stereo assets are 3D spatialized." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread = { "StereoSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, StereoSpread), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings = { "SpatializationPluginSettings", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, SpatializationPluginSettings_DEPRECATED), Z_Construct_UClass_USpatializationPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin = { "RadiusMin", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMin_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax = { "RadiusMax", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, RadiusMax_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The distance min range at which to apply an absorption LPF filter. */" },
		{ "DisplayName", "Min Distance Range" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The distance min range at which to apply an absorption LPF filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin = { "LPFRadiusMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values. */" },
		{ "DisplayName", "Max Distance Range" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance range at which to apply an absorption LPF filter. Absorption freq cutoff interpolates between filter frequency ranges between these distance values." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax = { "LPFRadiusMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFRadiusMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the lowpass absorption filter. */" },
		{ "DisplayName", "Low Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the lowpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin = { "LPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the lowpass absorption filter. */" },
		{ "DisplayName", "Low Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the lowpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax = { "LPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, LPFFrequencyAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the highpass absorption filter. */" },
		{ "DisplayName", "High Pass Cutoff Frequency Min" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the highpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin = { "HPFFrequencyAtMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData[] = {
		{ "Category", "AttenuationAirAbsorption" },
		{ "Comment", "/* The range of the cutoff frequency (in Hz) of the highpass absorption filter. */" },
		{ "DisplayName", "High Pass Cutoff Frequency Max" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The range of the cutoff frequency (in Hz) of the highpass absorption filter." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax = { "HPFFrequencyAtMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, HPFFrequencyAtMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the focus region of sounds. Sounds playing at an angle less than this will be in focus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth = { "FocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAzimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "Comment", "/** Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Azimuth angle (in degrees) relative to the listener forward vector which defines the non-focus region of sounds. Sounds playing at an angle greater than this will be out of focus." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth = { "NonFocusAzimuth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusAzimuth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale = { "FocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are.  */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the distance calculation of sounds that are not in-focus. Can be used to make in-focus sounds appear to be closer or further away than they actually are." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale = { "NonFocusDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are in focus. Can be used to boost the priority of sounds that are in focus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale = { "FocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to scale the priority of sounds that are not in-focus. Can be used to reduce the priority of sounds that are not in focus." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale = { "NonFocusPriorityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusPriorityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to attenuate sounds that are in focus. Can be overridden at the sound-level. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation = { "FocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level. */" },
		{ "EditCondition", "bEnableListenerFocus" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Amount to attenuate sounds that are not in focus. Can be overridden at the sound-level." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation = { "NonFocusVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, NonFocusVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar used to increase interpolation speed upwards to the target Focus value */" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed upwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed = { "FocusAttackInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusAttackInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData[] = {
		{ "Category", "AttenuationListenerFocus" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar used to increase interpolation speed downwards to the target Focus value */" },
		{ "EditCondition", "bEnableFocusInterpolation" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Scalar used to increase interpolation speed downwards to the target Focus value" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed = { "FocusReleaseInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, FocusReleaseInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The low pass filter frequency (in Hz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The low pass filter frequency (in Hz) to apply if the sound playing in this audio component is occluded. This will override the frequency set in LowPassFilterFrequency. A frequency of 0.0 is the device sample rate and will bypass the filter." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency = { "OcclusionLowPassFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionLowPassFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The amount of volume attenuation to apply to sounds which are occluded. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount of volume attenuation to apply to sounds which are occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation = { "OcclusionVolumeAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionVolumeAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData[] = {
		{ "Category", "AttenuationOcclusion" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded. */" },
		{ "EditCondition", "bEnableOcclusion" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount of time in seconds to interpolate to the target OcclusionLowPassFilterFrequency when a sound is occluded." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime = { "OcclusionInterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionInterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings = { "OcclusionPluginSettings", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, OcclusionPluginSettings_DEPRECATED), Z_Construct_UClass_UOcclusionPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings = { "ReverbPluginSettings", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbPluginSettings_DEPRECATED), Z_Construct_UClass_UReverbPluginSourceSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb min send distance. */" },
		{ "DisplayName", "Reverb Min Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb min send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin = { "ReverbWetLevelMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb max send distance. */" },
		{ "DisplayName", "Reverb Max Send Level" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The amount to send to master reverb when sound is located at a distance equal to value specified in the reverb max send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax = { "ReverbWetLevelMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbWetLevelMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The min distance to send to the master reverb. */" },
		{ "DisplayName", "Reverb Min Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The min distance to send to the master reverb." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin = { "ReverbDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/** The max distance to send to the master reverb. */" },
		{ "DisplayName", "Reverb Max Send Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance to send to the master reverb." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax = { "ReverbDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ReverbDistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/* The manual master reverb send level to use. Doesn't change as a function of distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The manual master reverb send level to use. Doesn't change as a function of distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel = { "ManualReverbSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ManualReverbSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolated value to scale priority against when the sound is at the minimum priority attenuation distance from the closest listener. */" },
		{ "DisplayName", "Priority Attenuation At Min Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Interpolated value to scale priority against when the sound is at the minimum priority attenuation distance from the closest listener." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin = { "PriorityAttenuationMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Interpolated value to scale priority against when the sound is at the maximum priority attenuation distance from the closest listener. */" },
		{ "DisplayName", "Priority Attenuation At Max Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Interpolated value to scale priority against when the sound is at the maximum priority attenuation distance from the closest listener." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax = { "PriorityAttenuationMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The min distance to attenuate priority. */" },
		{ "DisplayName", "Priority Attenuation Min Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The min distance to attenuate priority." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin = { "PriorityAttenuationDistanceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationDistanceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The max distance to attenuate priority. */" },
		{ "DisplayName", "Priority Attenuation Max Distance" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The max distance to attenuate priority." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax = { "PriorityAttenuationDistanceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, PriorityAttenuationDistanceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Static priority scalar to use (doesn't change as a function of distance). */" },
		{ "DisplayName", "Attenuation Priority" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Static priority scalar to use (doesn't change as a function of distance)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation = { "ManualPriorityAttenuation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, ManualPriorityAttenuation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve_MetaData[] = {
		{ "Category", "AttenuationReverbSend" },
		{ "Comment", "/* The custom reverb send curve to use for distance-based send level. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve = { "CustomReverbSendCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomReverbSendCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_Inner = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings, METADATA_PARAMS(nullptr, 0) }; // 3140697555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_MetaData[] = {
		{ "Category", "AttenuationSubmixSend" },
		{ "Comment", "/** Set of submix send settings to use to send audio to submixes as a function of distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Set of submix send settings to use to send audio to submixes as a function of distance." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings = { "SubmixSendSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, SubmixSendSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_MetaData)) }; // 3140697555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve_MetaData[] = {
		{ "Category", "AttenuationPriority" },
		{ "Comment", "/* The custom curve to use for distance-based priority attenuation. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "The custom curve to use for distance-based priority attenuation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve = { "CustomPriorityAttenuationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, CustomPriorityAttenuationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings_MetaData[] = {
		{ "Category", "AttenuationPluginSettings" },
		{ "Comment", "/** Sound attenuation plugin settings to use with sounds that play with this attenuation setting. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Sound attenuation plugin settings to use with sounds that play with this attenuation setting." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings = { "PluginSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundAttenuationSettings, PluginSettings), Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings_MetaData)) }; // 3732449843
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bSpatialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bAttenuateWithLPF,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableListenerFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableFocusInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bUseComplexCollisionForOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableReverbSend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnablePriorityAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bApplyNormalizationToStereoSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableLogFrequencyScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSubmixSends,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSourceDataOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_bEnableSendToAudioLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationAlgorithm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AudioLinkSettingsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_BinauralRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomLowpassAirAbsorptionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomHighpassAirAbsorptionCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_AbsorptionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbSendMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMethod,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_DistanceType,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OmniRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_StereoSpread,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SpatializationPluginSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_RadiusMax,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFRadiusMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_LPFFrequencyAtMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_HPFFrequencyAtMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAzimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusAzimuth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusPriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusPriorityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusVolumeAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_NonFocusVolumeAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusAttackInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_FocusReleaseInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionLowPassFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionVolumeAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionInterpolationTime,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_OcclusionPluginSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbPluginSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbWetLevelMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ReverbDistanceMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualReverbSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PriorityAttenuationDistanceMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_ManualPriorityAttenuation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomReverbSendCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_SubmixSendSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_CustomPriorityAttenuationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewProp_PluginSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBaseAttenuationSettings,
		&NewStructOps,
		"SoundAttenuationSettings",
		sizeof(FSoundAttenuationSettings),
		alignof(FSoundAttenuationSettings),
		Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundAttenuationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundAttenuationSettings.InnerSingleton;
	}
	void USoundAttenuation::StaticRegisterNativesUSoundAttenuation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAttenuation);
	UClass* Z_Construct_UClass_USoundAttenuation_NoRegister()
	{
		return USoundAttenuation::StaticClass();
	}
	struct Z_Construct_UClass_USoundAttenuation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attenuation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attenuation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAttenuation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines how a sound changes volume with distance to the listener\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sound/SoundAttenuation.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
		{ "ToolTip", "Defines how a sound changes volume with distance to the listener" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation_MetaData[] = {
		{ "Category", "Settings" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation = { "Attenuation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundAttenuation, Attenuation), Z_Construct_UScriptStruct_FSoundAttenuationSettings, METADATA_PARAMS(Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation_MetaData)) }; // 895530132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAttenuation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAttenuation_Statics::NewProp_Attenuation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAttenuation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAttenuation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAttenuation_Statics::ClassParams = {
		&USoundAttenuation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundAttenuation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAttenuation()
	{
		if (!Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton, Z_Construct_UClass_USoundAttenuation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundAttenuation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundAttenuation>()
	{
		return USoundAttenuation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuation);
	USoundAttenuation::~USoundAttenuation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::EnumInfo[] = {
		{ ESoundDistanceCalc_StaticEnum, TEXT("ESoundDistanceCalc"), &Z_Registration_Info_UEnum_ESoundDistanceCalc, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 509531767U) },
		{ ESoundSpatializationAlgorithm_StaticEnum, TEXT("ESoundSpatializationAlgorithm"), &Z_Registration_Info_UEnum_ESoundSpatializationAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1569552774U) },
		{ EAirAbsorptionMethod_StaticEnum, TEXT("EAirAbsorptionMethod"), &Z_Registration_Info_UEnum_EAirAbsorptionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2073908246U) },
		{ EReverbSendMethod_StaticEnum, TEXT("EReverbSendMethod"), &Z_Registration_Info_UEnum_EReverbSendMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127794035U) },
		{ ESubmixSendMethod_StaticEnum, TEXT("ESubmixSendMethod"), &Z_Registration_Info_UEnum_ESubmixSendMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1570535340U) },
		{ EPriorityAttenuationMethod_StaticEnum, TEXT("EPriorityAttenuationMethod"), &Z_Registration_Info_UEnum_EPriorityAttenuationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 995401789U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ScriptStructInfo[] = {
		{ FSoundAttenuationPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics::NewStructOps, TEXT("SoundAttenuationPluginSettings"), &Z_Registration_Info_UScriptStruct_SoundAttenuationPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundAttenuationPluginSettings), 3732449843U) },
		{ FAttenuationSubmixSendSettings::StaticStruct, Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics::NewStructOps, TEXT("AttenuationSubmixSendSettings"), &Z_Registration_Info_UScriptStruct_AttenuationSubmixSendSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttenuationSubmixSendSettings), 3140697555U) },
		{ FSoundAttenuationSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics::NewStructOps, TEXT("SoundAttenuationSettings"), &Z_Registration_Info_UScriptStruct_SoundAttenuationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundAttenuationSettings), 895530132U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundAttenuation, USoundAttenuation::StaticClass, TEXT("USoundAttenuation"), &Z_Registration_Info_UClass_USoundAttenuation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAttenuation), 188927452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_2443021971(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
