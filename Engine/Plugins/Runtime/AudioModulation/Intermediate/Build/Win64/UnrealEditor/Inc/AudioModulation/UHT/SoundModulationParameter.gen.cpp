// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundModulationParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationParameter() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameter();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameter_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterBipolar();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterBipolar_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFilterFrequency();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFilterFrequency_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFrequency();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFrequency_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFrequencyBase();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterFrequencyBase_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterHPFFrequency();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterHPFFrequency_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterLPFFrequency();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterLPFFrequency_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterScaled();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterScaled_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterVolume();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameterVolume_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationParameterSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings;
class UScriptStruct* FSoundModulationParameterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationParameterSettings, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundModulationParameterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundModulationParameterSettings>()
{
	return FSoundModulationParameterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueNormalized_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueNormalized;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UnitDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueUnit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueUnit;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationParameterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueNormalized_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** \n\x09  * Normalized, unitless default value of modulator. To ensure bypass functionality of mixing, patching, and modulating \n\x09  * functions as anticipated, value should be selected such that GetMixFunction (see USoundModulationParameter)\n\x09  * reduces to an identity function (i.e. function acts as a \"pass-through\" for all values in the range [0.0, 1.0]).\n\x09  * If GetMixFunction performs the mathematical operation f(x1, x2), then the default ValueNormalized should result in\n\x09  * f(x1, d) = x1 where d is ValueNormalized.\n\x09  */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Normalized, unitless default value of modulator. To ensure bypass functionality of mixing, patching, and modulating\nfunctions as anticipated, value should be selected such that GetMixFunction (see USoundModulationParameter)\nreduces to an identity function (i.e. function acts as a \"pass-through\" for all values in the range [0.0, 1.0]).\nIf GetMixFunction performs the mathematical operation f(x1, x2), then the default ValueNormalized should result in\nf(x1, d) = x1 where d is ValueNormalized." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueNormalized = { "ValueNormalized", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationParameterSettings, ValueNormalized), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueNormalized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueNormalized_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_UnitDisplayName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** (Optional) Text name of parameter's unit */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "(Optional) Text name of parameter's unit" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_UnitDisplayName = { "UnitDisplayName", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationParameterSettings, UnitDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_UnitDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_UnitDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueUnit_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Default value of modulator in units (editor only) */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Default value of modulator in units (editor only)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueUnit = { "ValueUnit", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationParameterSettings, ValueUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueUnit_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueNormalized,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_UnitDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewProp_ValueUnit,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundModulationParameterSettings",
		sizeof(FSoundModulationParameterSettings),
		alignof(FSoundModulationParameterSettings),
		Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationParameterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings.InnerSingleton;
	}
	void USoundModulationParameter::StaticRegisterNativesUSoundModulationParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameter);
	UClass* Z_Construct_UClass_USoundModulationParameter_NoRegister()
	{
		return USoundModulationParameter::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameter_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Parameter" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundModulationParameter_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameter, Settings), Z_Construct_UScriptStruct_FSoundModulationParameterSettings, METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameter_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameter_Statics::NewProp_Settings_MetaData)) }; // 1466010061
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameter_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameter_Statics::ClassParams = {
		&USoundModulationParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameter()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameter.OuterSingleton, Z_Construct_UClass_USoundModulationParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameter.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameter>()
	{
		return USoundModulationParameter::StaticClass();
	}
	USoundModulationParameter::USoundModulationParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameter);
	USoundModulationParameter::~USoundModulationParameter() {}
	void USoundModulationParameterScaled::StaticRegisterNativesUSoundModulationParameterScaled()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterScaled);
	UClass* Z_Construct_UClass_USoundModulationParameterScaled_NoRegister()
	{
		return USoundModulationParameterScaled::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterScaled_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterScaled_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterScaled_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Linearly scaled value between unit minimum and maximum.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Linearly scaled value between unit minimum and maximum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit minimum of modulator. Minimum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Unit minimum of modulator. Minimum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMin = { "UnitMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameterScaled, UnitMin), METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMax_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit maximum of modulator. Maximum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Unit maximum of modulator. Maximum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMax = { "UnitMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameterScaled, UnitMax), METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationParameterScaled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameterScaled_Statics::NewProp_UnitMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterScaled_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterScaled>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterScaled_Statics::ClassParams = {
		&USoundModulationParameterScaled::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationParameterScaled_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterScaled_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterScaled_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterScaled_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterScaled()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterScaled.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterScaled.OuterSingleton, Z_Construct_UClass_USoundModulationParameterScaled_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterScaled.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterScaled>()
	{
		return USoundModulationParameterScaled::StaticClass();
	}
	USoundModulationParameterScaled::USoundModulationParameterScaled(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterScaled);
	USoundModulationParameterScaled::~USoundModulationParameterScaled() {}
	void USoundModulationParameterFrequencyBase::StaticRegisterNativesUSoundModulationParameterFrequencyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterFrequencyBase);
	UClass* Z_Construct_UClass_USoundModulationParameterFrequencyBase_NoRegister()
	{
		return USoundModulationParameterFrequencyBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterFrequencyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::ClassParams = {
		&USoundModulationParameterFrequencyBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterFrequencyBase()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterFrequencyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterFrequencyBase.OuterSingleton, Z_Construct_UClass_USoundModulationParameterFrequencyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterFrequencyBase.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterFrequencyBase>()
	{
		return USoundModulationParameterFrequencyBase::StaticClass();
	}
	USoundModulationParameterFrequencyBase::USoundModulationParameterFrequencyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterFrequencyBase);
	USoundModulationParameterFrequencyBase::~USoundModulationParameterFrequencyBase() {}
	void USoundModulationParameterFrequency::StaticRegisterNativesUSoundModulationParameterFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterFrequency);
	UClass* Z_Construct_UClass_USoundModulationParameterFrequency_NoRegister()
	{
		return USoundModulationParameterFrequency::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameterFrequencyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with provided minimum and maximum.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with provided minimum and maximum." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMin_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit minimum of modulator. Minimum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Unit minimum of modulator. Minimum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMin = { "UnitMin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameterFrequency, UnitMin), METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMax_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Unit maximum of modulator. Maximum is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Unit maximum of modulator. Maximum is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMax = { "UnitMax", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameterFrequency, UnitMax), METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationParameterFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameterFrequency_Statics::NewProp_UnitMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterFrequency_Statics::ClassParams = {
		&USoundModulationParameterFrequency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationParameterFrequency_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterFrequency()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterFrequency.OuterSingleton, Z_Construct_UClass_USoundModulationParameterFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterFrequency.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterFrequency>()
	{
		return USoundModulationParameterFrequency::StaticClass();
	}
	USoundModulationParameterFrequency::USoundModulationParameterFrequency(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterFrequency);
	USoundModulationParameterFrequency::~USoundModulationParameterFrequency() {}
	void USoundModulationParameterFilterFrequency::StaticRegisterNativesUSoundModulationParameterFilterFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterFilterFrequency);
	UClass* Z_Construct_UClass_USoundModulationParameterFilterFrequency_NoRegister()
	{
		return USoundModulationParameterFilterFrequency::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameterFrequencyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterFilterFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::ClassParams = {
		&USoundModulationParameterFilterFrequency::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterFilterFrequency()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterFilterFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterFilterFrequency.OuterSingleton, Z_Construct_UClass_USoundModulationParameterFilterFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterFilterFrequency.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterFilterFrequency>()
	{
		return USoundModulationParameterFilterFrequency::StaticClass();
	}
	USoundModulationParameterFilterFrequency::USoundModulationParameterFilterFrequency(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterFilterFrequency);
	USoundModulationParameterFilterFrequency::~USoundModulationParameterFilterFrequency() {}
	void USoundModulationParameterLPFFrequency::StaticRegisterNativesUSoundModulationParameterLPFFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterLPFFrequency);
	UClass* Z_Construct_UClass_USoundModulationParameterLPFFrequency_NoRegister()
	{
		return USoundModulationParameterLPFFrequency::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameterFilterFrequency,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\n// Mixes by taking the minimum (i.e. aggressive) filter frequency of all active modulators.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\nMixes by taking the minimum (i.e. aggressive) filter frequency of all active modulators." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterLPFFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::ClassParams = {
		&USoundModulationParameterLPFFrequency::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterLPFFrequency()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterLPFFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterLPFFrequency.OuterSingleton, Z_Construct_UClass_USoundModulationParameterLPFFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterLPFFrequency.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterLPFFrequency>()
	{
		return USoundModulationParameterLPFFrequency::StaticClass();
	}
	USoundModulationParameterLPFFrequency::USoundModulationParameterLPFFrequency(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterLPFFrequency);
	USoundModulationParameterLPFFrequency::~USoundModulationParameterLPFFrequency() {}
	void USoundModulationParameterHPFFrequency::StaticRegisterNativesUSoundModulationParameterHPFFrequency()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterHPFFrequency);
	UClass* Z_Construct_UClass_USoundModulationParameterHPFFrequency_NoRegister()
	{
		return USoundModulationParameterHPFFrequency::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameterFilterFrequency,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\n// Mixes by taking the maximum (i.e. aggressive) filter frequency of all active modulators.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to logarithmic frequency unit space with standard filter min and max frequency set.\nMixes by taking the maximum (i.e. aggressive) filter frequency of all active modulators." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterHPFFrequency>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::ClassParams = {
		&USoundModulationParameterHPFFrequency::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterHPFFrequency()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterHPFFrequency.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterHPFFrequency.OuterSingleton, Z_Construct_UClass_USoundModulationParameterHPFFrequency_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterHPFFrequency.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterHPFFrequency>()
	{
		return USoundModulationParameterHPFFrequency::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterHPFFrequency);
	USoundModulationParameterHPFFrequency::~USoundModulationParameterHPFFrequency() {}
	void USoundModulationParameterBipolar::StaticRegisterNativesUSoundModulationParameterBipolar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterBipolar);
	UClass* Z_Construct_UClass_USoundModulationParameterBipolar_NoRegister()
	{
		return USoundModulationParameterBipolar::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterBipolar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterBipolar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterBipolar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Modulation Parameter that scales normalized, unitless value to bipolar range. Mixes multiplicatively.\n" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Modulation Parameter that scales normalized, unitless value to bipolar range. Mixes multiplicatively." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterBipolar_Statics::NewProp_UnitRange_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Unit range of modulator. Range is only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Unit range of modulator. Range is only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundModulationParameterBipolar_Statics::NewProp_UnitRange = { "UnitRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameterBipolar, UnitRange), METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterBipolar_Statics::NewProp_UnitRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterBipolar_Statics::NewProp_UnitRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationParameterBipolar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameterBipolar_Statics::NewProp_UnitRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterBipolar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterBipolar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterBipolar_Statics::ClassParams = {
		&USoundModulationParameterBipolar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationParameterBipolar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterBipolar_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterBipolar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterBipolar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterBipolar()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterBipolar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterBipolar.OuterSingleton, Z_Construct_UClass_USoundModulationParameterBipolar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterBipolar.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterBipolar>()
	{
		return USoundModulationParameterBipolar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterBipolar);
	USoundModulationParameterBipolar::~USoundModulationParameterBipolar() {}
	void USoundModulationParameterVolume::StaticRegisterNativesUSoundModulationParameterVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterVolume);
	UClass* Z_Construct_UClass_USoundModulationParameterVolume_NoRegister()
	{
		return USoundModulationParameterVolume::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundModulationParameter.h" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterVolume_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "0.000000" },
		{ "Comment", "/** Minimum volume of parameter. Only enforced at modulation destination. */" },
		{ "ModuleRelativePath", "Public/SoundModulationParameter.h" },
		{ "ToolTip", "Minimum volume of parameter. Only enforced at modulation destination." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USoundModulationParameterVolume_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationParameterVolume, MinVolume), METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterVolume_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterVolume_Statics::NewProp_MinVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationParameterVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationParameterVolume_Statics::NewProp_MinVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterVolume_Statics::ClassParams = {
		&USoundModulationParameterVolume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationParameterVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterVolume_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterVolume()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterVolume.OuterSingleton, Z_Construct_UClass_USoundModulationParameterVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterVolume.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationParameterVolume>()
	{
		return USoundModulationParameterVolume::StaticClass();
	}
	USoundModulationParameterVolume::USoundModulationParameterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterVolume);
	USoundModulationParameterVolume::~USoundModulationParameterVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics::ScriptStructInfo[] = {
		{ FSoundModulationParameterSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationParameterSettings_Statics::NewStructOps, TEXT("SoundModulationParameterSettings"), &Z_Registration_Info_UScriptStruct_SoundModulationParameterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationParameterSettings), 1466010061U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationParameter, USoundModulationParameter::StaticClass, TEXT("USoundModulationParameter"), &Z_Registration_Info_UClass_USoundModulationParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameter), 69480435U) },
		{ Z_Construct_UClass_USoundModulationParameterScaled, USoundModulationParameterScaled::StaticClass, TEXT("USoundModulationParameterScaled"), &Z_Registration_Info_UClass_USoundModulationParameterScaled, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterScaled), 1713608189U) },
		{ Z_Construct_UClass_USoundModulationParameterFrequencyBase, USoundModulationParameterFrequencyBase::StaticClass, TEXT("USoundModulationParameterFrequencyBase"), &Z_Registration_Info_UClass_USoundModulationParameterFrequencyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterFrequencyBase), 2740615865U) },
		{ Z_Construct_UClass_USoundModulationParameterFrequency, USoundModulationParameterFrequency::StaticClass, TEXT("USoundModulationParameterFrequency"), &Z_Registration_Info_UClass_USoundModulationParameterFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterFrequency), 3789428801U) },
		{ Z_Construct_UClass_USoundModulationParameterFilterFrequency, USoundModulationParameterFilterFrequency::StaticClass, TEXT("USoundModulationParameterFilterFrequency"), &Z_Registration_Info_UClass_USoundModulationParameterFilterFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterFilterFrequency), 1715591693U) },
		{ Z_Construct_UClass_USoundModulationParameterLPFFrequency, USoundModulationParameterLPFFrequency::StaticClass, TEXT("USoundModulationParameterLPFFrequency"), &Z_Registration_Info_UClass_USoundModulationParameterLPFFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterLPFFrequency), 234544667U) },
		{ Z_Construct_UClass_USoundModulationParameterHPFFrequency, USoundModulationParameterHPFFrequency::StaticClass, TEXT("USoundModulationParameterHPFFrequency"), &Z_Registration_Info_UClass_USoundModulationParameterHPFFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterHPFFrequency), 1811870706U) },
		{ Z_Construct_UClass_USoundModulationParameterBipolar, USoundModulationParameterBipolar::StaticClass, TEXT("USoundModulationParameterBipolar"), &Z_Registration_Info_UClass_USoundModulationParameterBipolar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterBipolar), 3465711517U) },
		{ Z_Construct_UClass_USoundModulationParameterVolume, USoundModulationParameterVolume::StaticClass, TEXT("USoundModulationParameterVolume"), &Z_Registration_Info_UClass_USoundModulationParameterVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterVolume), 2588211711U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_1591466439(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundModulationParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
