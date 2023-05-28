// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generators/SoundModulationEnvelopeFollower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationEnvelopeFollower() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams;
class UScriptStruct* FEnvelopeFollowerGeneratorParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("EnvelopeFollowerGeneratorParams"));
	}
	return Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FEnvelopeFollowerGeneratorParams>()
{
	return FEnvelopeFollowerGeneratorParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnvelopeFollowerGeneratorParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** If true, bypasses generator from being modulated by parameters, patches, or mixed (remains active and computed). */" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ToolTip", "If true, bypasses generator from being modulated by parameters, patches, or mixed (remains active and computed)." },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FEnvelopeFollowerGeneratorParams*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEnvelopeFollowerGeneratorParams), &Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** If true, inverts output */" },
		{ "DisplayAfter", "ReleaseTime" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ToolTip", "If true, inverts output" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FEnvelopeFollowerGeneratorParams*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEnvelopeFollowerGeneratorParams), &Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AudioBus_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** AudioBus to follow amplitude of and generate modulation control signal from. */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ToolTip", "AudioBus to follow amplitude of and generate modulation control signal from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvelopeFollowerGeneratorParams, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AudioBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Gain to apply to amplitude signal. */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ToolTip", "Gain to apply to amplitude signal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvelopeFollowerGeneratorParams, Gain), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AttackTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Attack time of envelope response (in sec) */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ToolTip", "Attack time of envelope response (in sec)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvelopeFollowerGeneratorParams, AttackTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_ReleaseTime_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Release time of envelope response (in sec) */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ToolTip", "Release time of envelope response (in sec)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_ReleaseTime = { "ReleaseTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnvelopeFollowerGeneratorParams, ReleaseTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_ReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_ReleaseTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_AttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewProp_ReleaseTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"EnvelopeFollowerGeneratorParams",
		sizeof(FEnvelopeFollowerGeneratorParams),
		alignof(FEnvelopeFollowerGeneratorParams),
		Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams()
	{
		if (!Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams.InnerSingleton, Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams.InnerSingleton;
	}
	void USoundModulationGeneratorEnvelopeFollower::StaticRegisterNativesUSoundModulationGeneratorEnvelopeFollower()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationGeneratorEnvelopeFollower);
	UClass* Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_NoRegister()
	{
		return USoundModulationGeneratorEnvelopeFollower::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Envelope Follower Generator" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Generators/SoundModulationEnvelopeFollower.h" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationEnvelopeFollower.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationGeneratorEnvelopeFollower, Params), Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams, METADATA_PARAMS(Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::NewProp_Params_MetaData)) }; // 3041102257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationGeneratorEnvelopeFollower>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::ClassParams = {
		&USoundModulationGeneratorEnvelopeFollower::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower()
	{
		if (!Z_Registration_Info_UClass_USoundModulationGeneratorEnvelopeFollower.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationGeneratorEnvelopeFollower.OuterSingleton, Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationGeneratorEnvelopeFollower.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationGeneratorEnvelopeFollower>()
	{
		return USoundModulationGeneratorEnvelopeFollower::StaticClass();
	}
	USoundModulationGeneratorEnvelopeFollower::USoundModulationGeneratorEnvelopeFollower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationGeneratorEnvelopeFollower);
	USoundModulationGeneratorEnvelopeFollower::~USoundModulationGeneratorEnvelopeFollower() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics::ScriptStructInfo[] = {
		{ FEnvelopeFollowerGeneratorParams::StaticStruct, Z_Construct_UScriptStruct_FEnvelopeFollowerGeneratorParams_Statics::NewStructOps, TEXT("EnvelopeFollowerGeneratorParams"), &Z_Registration_Info_UScriptStruct_EnvelopeFollowerGeneratorParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnvelopeFollowerGeneratorParams), 3041102257U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationGeneratorEnvelopeFollower, USoundModulationGeneratorEnvelopeFollower::StaticClass, TEXT("USoundModulationGeneratorEnvelopeFollower"), &Z_Registration_Info_UClass_USoundModulationGeneratorEnvelopeFollower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationGeneratorEnvelopeFollower), 650544832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_604345951(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationEnvelopeFollower_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
